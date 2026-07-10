#!/usr/bin/env python3
"""Parse+disassemble a 3DS PICA200 shader binary (.shbin: DVLB/DVLP/DVLE container).

Format reference: nihstro (bundled with Azahar at
Azahar/externals/nihstro/include/nihstro/{shader_binary.h,shader_bytecode.h}) plus
3dbrew's SHBIN page. This is a from-scratch, dependency-free reimplementation (no C++
build required) so it can run directly against ROM-extracted .shbin files.

Usage:
    python3 shbin_disasm.py <file.shbin>              # full dump: DVLE headers, uniform
                                                        # table, output-register table,
                                                        # constant table, disassembly
    python3 shbin_disasm.py <file.shbin> --range A B   # disassemble only words [A,B)

No emulator, no ROM access needed beyond the extracted .shbin bytes themselves.
"""
import struct, sys, argparse

def u32(b, o): return struct.unpack_from('<I', b, o)[0]
def u16(b, o): return struct.unpack_from('<H', b, o)[0]
def u8(b, o): return b[o]

OPNAMES = {
    0x00: 'add', 0x01: 'dp3', 0x02: 'dp4', 0x03: 'dph', 0x04: 'dst',
    0x05: 'exp', 0x06: 'log', 0x07: 'lit', 0x08: 'mul', 0x09: 'sge',
    0x0A: 'slt', 0x0B: 'flr', 0x0C: 'max', 0x0D: 'min', 0x0E: 'rcp',
    0x0F: 'rsq', 0x12: 'mova', 0x13: 'mov',
    0x18: 'dphi', 0x19: 'dsti', 0x1A: 'sgei', 0x1B: 'slti',
    0x20: 'break', 0x21: 'nop', 0x22: 'end', 0x23: 'breakc', 0x24: 'call',
    0x25: 'callc', 0x26: 'callu', 0x27: 'ifu', 0x28: 'ifc', 0x29: 'loop',
    0x2A: 'emit', 0x2B: 'setemit', 0x2C: 'jmpc', 0x2D: 'jmpu', 0x2E: 'cmp', 0x2F: 'cmp',
}
for _op in range(0x30, 0x38):
    OPNAMES[_op] = 'madi'
for _op in range(0x38, 0x40):
    OPNAMES[_op] = 'mad'

TWO_ARG = {'add','dp3','dp4','dph','dst','mul','sge','slt','max','min','dphi','dsti','sgei','slti','cmp'}
ONE_ARG = {'exp','log','lit','flr','rcp','rsq','mov','mova'}
MAD_OPS = {'mad','madi'}

SEL = 'xyzw'

def regname(idx, kind):
    # kind: 'src' (0..0x1f input,0x10..0x1f? ) -- source register numbering per nihstro:
    # <0x10: input v#, 0x10..0x1f: temporary r#, >=0x20: float uniform c#
    if kind == 'src':
        if idx < 0x10: return f'v{idx}'
        elif idx < 0x20: return f'r{idx-0x10}'
        else: return f'c{idx-0x20}'
    else:  # dest: <0x10 output o#, else temporary r#
        if idx < 0x10: return f'o{idx}'
        else: return f'r{idx-0x10}'

def swizzle_str(sel8, negate):
    # sel8: 8-bit packed 4x2-bit selectors, component0 = bits[7:6] etc. per nihstro
    # nihstro packs: BitField<5+2*(3-i),2> gives comp i for i=0..3 (0=x-comp of vec)
    comps = []
    for i in range(4):
        shift = 6 - 2*i
        c = (sel8 >> shift) & 3
        comps.append(SEL[c])
    s = ''.join(comps)
    return ('-' if negate else '') + s

def decode_common(word, opdesc_table):
    dest = (word >> 0x15) & 0x1f
    src1 = (word >> 0x0c) & 0x7f
    src2 = (word >> 0x07) & 0x1f
    src1i = (word >> 0x0e) & 0x1f
    src2i = (word >> 0x07) & 0x7f
    addr = (word >> 0x13) & 0x3
    opdesc_id = word & 0x7f
    return dict(dest=dest, src1=src1, src2=src2, src1i=src1i, src2i=src2i,
                addr=addr, opdesc_id=opdesc_id)

def decode_mad(word):
    dest = (word >> 0x18) & 0x1f
    src1 = (word >> 0x11) & 0x1f
    src2 = (word >> 0x0a) & 0x7f
    src3 = (word >> 0x05) & 0x1f
    src2i = (word >> 0x0c) & 0x1f
    src3i = (word >> 0x05) & 0x7f
    addr = (word >> 0x16) & 0x3
    opdesc_id = word & 0x1f
    return dict(dest=dest, src1=src1, src2=src2, src3=src3, src2i=src2i, src3i=src3i,
                addr=addr, opdesc_id=opdesc_id)

def decode_flow(word):
    num_instr = word & 0xff
    dest_off = (word >> 0x0a) & 0xfff
    return dict(num_instr=num_instr, dest_off=dest_off, bool_id=(word>>0x16)&0xf,
                int_id=(word>>0x16)&0x3, refx=bool((word>>0x19)&1), refy=bool((word>>0x18)&1))

def disasm_one(word, opdescs):
    op = (word >> 0x1a) & 0x3f
    name = OPNAMES.get(op, f'unk_{op:#x}')
    addrname = {0:'',1:',a0.x',2:',a0.y',3:',aL'}
    if name in TWO_ARG or name in ONE_ARG or name == 'mov' or name == 'mova':
        d = decode_common(word, opdescs)
        inv = name.endswith('i')
        s1 = d['src1i'] if inv else d['src1']
        s2 = d['src2i'] if inv else d['src2']
        desc = opdescs.get(d['opdesc_id'])
        dest_mask = desc['dest_mask_str'] if desc else '????'
        src1_sw = desc['src1_str'] if desc else 'src1?'
        src2_sw = desc['src2_str'] if desc else 'src2?'
        destr = regname(d['dest'], 'dst')
        if name in ('mov','mova','exp','log','lit','flr','rcp','rsq'):
            return f"{name:6} {destr}.{dest_mask}, {regname(s1,'src')}.{src1_sw}{addrname[d['addr']] if s1>=0x20 else ''}"
        else:
            return (f"{name:6} {destr}.{dest_mask}, {regname(s1,'src')}.{src1_sw}, "
                    f"{regname(s2,'src')}.{src2_sw}{addrname[d['addr']] if s2>=0x20 else ''}")
    elif name in MAD_OPS:
        d = decode_mad(word)
        inv = name == 'madi'
        s2 = d['src2i'] if inv else d['src2']
        s3 = d['src3i'] if inv else d['src3']
        desc = opdescs.get(d['opdesc_id'])
        dest_mask = desc['dest_mask_str'] if desc else '????'
        src1_sw = desc['src1_str'] if desc else 's1?'
        src2_sw = desc['src2_str'] if desc else 's2?'
        src3_sw = desc['src3_str'] if desc else 's3?'
        destr = regname(d['dest'], 'dst')
        return (f"{name:6} {destr}.{dest_mask}, {regname(d['src1'],'src')}.{src1_sw}, "
                f"{regname(s2,'src')}.{src2_sw}, {regname(s3,'src')}.{src3_sw}"
                f"{addrname[d['addr']] if (s2>=0x20 or s3>=0x20) else ''}")
    elif name in ('nop','end','emit','break'):
        return name
    elif name in ('breakc','call','callc','callu','ifu','ifc','loop','jmpc','jmpu'):
        f = decode_flow(word)
        return f"{name:6} num={f['num_instr']} dest_off={f['dest_off']} bool={f['bool_id']} int={f['int_id']} refx={f['refx']} refy={f['refy']}"
    elif name == 'setemit':
        return f"setemit winding={(word>>0x16)&1} prim_emit={(word>>0x17)&1} vtx_id={(word>>0x18)&3}"
    else:
        return f"{name} word={word:#010x}"

def parse_opdesc(word):
    # SwizzlePattern per nihstro shader_bytecode.h
    dest_mask = word & 0xf
    negate1 = (word >> 4) & 1
    sel1 = (word >> 5) & 0xff
    negate2 = (word >> 13) & 1
    sel2 = (word >> 14) & 0xff
    negate3 = (word >> 22) & 1
    sel3 = (word >> 23) & 0xff
    dm = ''.join('xyzw'[i] if (dest_mask & (0x8 >> i)) else '_' for i in range(4))
    return dict(dest_mask_str=dm,
                src1_str=swizzle_str(sel1, negate1),
                src2_str=swizzle_str(sel2, negate2),
                src3_str=swizzle_str(sel3, negate3))

def parse_shbin(data):
    assert data[0:4] == b'DVLB'
    num_dvle = u32(data, 4)
    dvle_offs = [u32(data, 8+4*i) for i in range(num_dvle)]
    # DVLP immediately follows the DVLB header+offset table
    dvlp_off = 8 + 4*num_dvle
    assert data[dvlp_off:dvlp_off+4] == b'DVLP', f"expected DVLP at {dvlp_off:#x}, got {data[dvlp_off:dvlp_off+4]!r}"
    version = u32(data, dvlp_off+4)
    bin_off = u32(data, dvlp_off+8)
    bin_size_words = u32(data, dvlp_off+0xc)
    swizzle_off = u32(data, dvlp_off+0x10)
    swizzle_count = u32(data, dvlp_off+0x14)
    filename_sym_off = u32(data, dvlp_off+0x18)

    code_base = dvlp_off + bin_off
    words = [u32(data, code_base+4*i) for i in range(bin_size_words)]

    opdescs = {}
    for i in range(swizzle_count):
        eo = dvlp_off + swizzle_off + 8*i  # SwizzleInfo = {pattern:u32, unknown:u32}
        pat = u32(data, eo)
        opdescs[i] = parse_opdesc(pat)

    dvles = []
    for dvle_off in dvle_offs:
        base = dvle_off  # per nihstro's own dvle offset table: relative to DVLB start (file start of DVLB chunk == 0 here since we pass whole-file-relative? handled by caller)
        assert data[base:base+4] == b'DVLE', f"expected DVLE at {base:#x}"
        shader_type = u8(data, base+6)
        main_off = u32(data, base+8)
        endmain_off = u32(data, base+0xc)
        const_tab_off = u32(data, base+0x18)
        const_tab_cnt = u32(data, base+0x1c)
        label_tab_off = u32(data, base+0x20)
        label_tab_cnt = u32(data, base+0x24)
        out_tab_off = u32(data, base+0x28)
        out_tab_cnt = u32(data, base+0x2c)
        uni_tab_off = u32(data, base+0x30)
        uni_tab_cnt = u32(data, base+0x34)
        sym_tab_off = u32(data, base+0x38)
        sym_tab_size = u32(data, base+0x3c)

        def cstr(off):
            end = data.index(b'\x00', off)
            return data[off:end].decode('ascii', 'replace')

        outputs = []
        for i in range(out_tab_cnt):
            eo = base + out_tab_off + 8*i  # OutputRegisterInfo is 8 bytes (64-bit hex)
            hexval = struct.unpack_from('<Q', data, eo)[0]
            typ = hexval & 0xffff
            regid = (hexval >> 16) & 0xffff
            compmask = (hexval >> 32) & 0xf
            TYPE_NAMES = {0:'POSITION',1:'QUATERNION',2:'COLOR',3:'TEXCOORD0',5:'TEXCOORD1',6:'TEXCOORD2',8:'VIEW'}
            outputs.append(dict(reg=f'o{regid}', type=TYPE_NAMES.get(typ, f'unk{typ}'),
                                 mask=''.join('xyzw'[i] for i in range(4) if compmask&(1<<i))))

        uniforms = []
        for i in range(uni_tab_cnt):
            eo = base + uni_tab_off + 8*i  # UniformInfo::basic = {symbol_offset:u32, reg_start/reg_end packed u32}
            sym_off = u32(data, eo)
            packed = u32(data, eo+4)
            reg_start = packed & 0xffff
            reg_end = (packed >> 16) & 0xffff
            name = cstr(base + sym_tab_off + sym_off) if sym_off or sym_tab_off else '?'
            uniforms.append(dict(name=name, reg_start=reg_start, reg_end=reg_end))

        consts = []
        for i in range(const_tab_cnt):
            eo = base + const_tab_off + 20*i  # ConstantInfo = 2x u32 header words? actually first union(4)+second union(16)=20
            w0 = u32(data, eo)
            ctype = w0 & 0x3
            regid = (w0 >> 16) & 0xff
            if ctype == 2:  # float24 x4 (stored as raw u32 words needing float24->float32 decode)
                raw = [u32(data, eo+4+4*k) for k in range(4)]
                consts.append(dict(type='float', reg=f'c{regid}', raw=raw))
            elif ctype == 1:
                b = data[eo+4:eo+8]
                consts.append(dict(type='int', reg=f'i{regid}', xyzw=tuple(b)))
            else:
                consts.append(dict(type='bool', reg=f'b{regid}', val=u32(data,eo+4)&1))

        dvles.append(dict(base=base, shader_type=shader_type, main_off=main_off,
                           endmain_off=endmain_off, outputs=outputs, uniforms=uniforms,
                           consts=consts, label_off=label_tab_off, label_cnt=label_tab_cnt,
                           sym_tab_off=sym_tab_off))
    return dict(words=words, opdescs=opdescs, dvles=dvles, code_base=code_base)

def float24_to_float32(raw):
    # PICA float24 uniform storage: 3 packed 32-bit words hold 4x float24 values (7-bit exp,16-bit mantissa,1 sign)
    # ConstantInfo.f.{x,y,z,w} are stored as already-unpacked 32-bit float24-in-32 fields per nihstro (each a full u32
    # holding sign(1)+exp(7,bias63)+mantissa(16), NOT ieee754). Convert here.
    vals = []
    for w in raw:
        sign = (w >> 23) & 1
        exp = (w >> 16) & 0x7f
        mant = w & 0xffff
        if exp == 0 and mant == 0:
            v = 0.0
        else:
            e = exp - 63
            m = 1.0 + mant / 65536.0
            v = m * (2.0 ** e)
            if sign:
                v = -v
        vals.append(v)
    return vals

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('shbin')
    ap.add_argument('--range', nargs=2, type=lambda x:int(x,0))
    args = ap.parse_args()
    data = open(args.shbin, 'rb').read()
    p = parse_shbin(data)
    print(f"# {args.shbin}: {len(p['words'])} code words, {len(p['dvles'])} DVLE program(s)")
    for d in p['dvles']:
        print(f"\n== DVLE @ {d['base']:#x} type={'VERTEX' if d['shader_type']==0 else 'GEOMETRY'} "
              f"main={d['main_off']} endmain={d['endmain_off']} ==")
        print(" outputs:")
        for o in d['outputs']:
            print(f"   {o['reg']:4} {o['type']:10} .{o['mask']}")
        print(" uniforms:")
        for u in d['uniforms']:
            lo, hi = u['reg_start'], u['reg_end']
            if lo < 0x10:
                kind='v'; lo2,hi2=lo,hi
            elif lo < 0x70:
                kind='c'; lo2,hi2=lo-0x10,hi-0x10
            elif lo < 0x74:
                kind='i'; lo2,hi2=lo-0x70,hi-0x70
            else:
                kind='b'; lo2,hi2=lo-0x78,hi-0x78
            rng = f"{kind}{lo2}" if lo2==hi2 else f"{kind}{lo2}..{kind}{hi2}"
            print(f"   {u['name']:20} {rng}")
        print(" constants:")
        for c in d['consts']:
            if c['type']=='float':
                vals = float24_to_float32(c['raw'])
                print(f"   {c['reg']:4} float = ({vals[0]:.6f}, {vals[1]:.6f}, {vals[2]:.6f}, {vals[3]:.6f})  raw={[hex(r) for r in c['raw']]}")
            else:
                print(f"   {c}")
        lo, hi = (d['main_off'], d['endmain_off']+1) if not args.range else args.range
        print(f" disassembly [{lo},{hi}):")
        for i in range(lo, hi):
            if i >= len(p['words']): break
            w = p['words'][i]
            print(f"   {i:4d} ({p['code_base']+4*i:#08x}): {w:08x}  {disasm_one(w, p['opdescs'])}")

if __name__ == '__main__':
    main()

# -*- coding: utf-8 -*-
#@runtime Jython
# DataFlowStores — symbolic register provenance through an ARM fn body.
#
# Walks a function's instructions in linear order, tracks each register
# as a symbolic expression rooted at the fn's arg regs (R0=param_1,
# R1=param_2, ...) plus any pool constants loaded via LDR-PC-rel.
# For every LDR/STR/LDRB/STRB, prints:
#   PC  op  Rt, [<base_expr> + imm]
# where base_expr is e.g. `param_2 + 0x5b` or `[param_1 + 0x3230]` (a
# dereference).
#
# Purpose: title-cs RE session (2026-07-04). Every previous back-trace
# through FUN_0045dd30 (Env_Update, 4828B) got register reuse wrong on
# spot-checks. This tool gives per-store ground truth.
#
# Limitations: linear pass (no branch-merge), so values along conditional
# paths may go undefined. Env_Update is straight-lined enough for this
# to work for the majority of stores. Where a register is UNKNOWN we
# print `?`.
#
# Env: OOT3D_DFS_FN = fn entry VA (hex). OOT3D_DFS_OUT = path to write
# report; default stdout.

import os

fn_va = int(os.environ.get("OOT3D_DFS_FN", "0"), 16)
out_path = os.environ.get("OOT3D_DFS_OUT", "")

prog = currentProgram
mem = prog.getMemory()
af = prog.getAddressFactory().getDefaultAddressSpace()
fm = prog.getFunctionManager()
lst = prog.getListing()

fn = fm.getFunctionAt(af.getAddress(fn_va))
if fn is None:
    print("no function at 0x%08x" % fn_va)
    raise SystemExit()

body = fn.getBody()
print("fn=%s @0x%08x  size=%d" % (fn.getName(), fn_va, body.getNumAddresses()))

# ---------- symbolic-value tracker ----------

# Represent a register's tracked value as either:
#   ("param", n)                — param_(n+1) (r0=param_1, r1=param_2)
#   ("param+", n, imm)          — param + imm
#   ("deref", inner, imm)       — *(inner + imm)
#   ("const", u32)              — literal
#   ("expr", str)               — arbitrary expression (opaque)
#   ("unknown",)                — untracked

def sym_add(a, imm):
    if a is None: return ("unknown",)
    if a[0] == "unknown": return ("unknown",)
    if a[0] == "param":
        return ("param+", a[1], imm)
    if a[0] == "param+":
        return ("param+", a[1], a[2] + imm)
    if a[0] == "const":
        return ("const", (a[1] + imm) & 0xFFFFFFFF)
    if a[0] == "expr":
        return ("expr", "(%s + 0x%x)" % (a[1], imm))
    if a[0] == "deref":
        return ("expr", "(*(%s + 0x%x) + 0x%x)" % (fmt(a[1]), a[2], imm))
    return ("unknown",)

def fmt(v):
    if v is None: return "?"
    t = v[0]
    if t == "unknown": return "?"
    if t == "param": return "param_%d" % (v[1] + 1)
    if t == "param+":
        return "param_%d + 0x%x" % (v[1] + 1, v[2])
    if t == "const":
        return "0x%08x" % v[1]
    if t == "expr":
        return v[1]
    if t == "deref":
        return "*(%s + 0x%x)" % (fmt(v[1]), v[2])
    return "?"

# ---------- ARM instruction decoding ----------

# We match on the mnemonic string Ghidra provides — cheaper than raw
# bit-level decode and correct on properly-analyzed insns.

def parse_reg(tok):
    tok = tok.rstrip(",").rstrip("!")
    if tok.startswith("r") and tok[1:].isdigit():
        return int(tok[1:])
    if tok == "sp": return 13
    if tok == "lr": return 14
    if tok == "pc": return 15
    return None

def parse_imm(tok):
    tok = tok.rstrip(",").rstrip("!").rstrip("]")
    if tok.startswith("#"):
        v = tok[1:]
        try:
            return int(v, 0) & 0xFFFFFFFF
        except ValueError:
            return None
    return None

# ---------- walk ----------

# Initial register state: arg regs.
reg = {i: ("unknown",) for i in range(16)}
for i in range(4):
    reg[i] = ("param", i)  # R0=param_1, R1=param_2, R2=param_3, R3=param_4
# SP is opaque; we track SP loads later.
reg[13] = ("expr", "sp")

lines = []

def emit(pc, s):
    lines.append("  %08x  %s" % (pc, s))

it = lst.getInstructions(body, True)
insn_count = 0
while it.hasNext():
    ins = it.next()
    pc = ins.getAddress().getOffset()
    mnem = ins.getMnemonicString().lower()
    ops = [ins.getDefaultOperandRepresentation(i) for i in range(ins.getNumOperands())]
    insn_count += 1

    # --- moves ---
    if mnem in ("cpy", "mov"):
        if len(ops) >= 2:
            dst = parse_reg(ops[0])
            src_reg = parse_reg(ops[1])
            src_imm = parse_imm(ops[1])
            if dst is not None:
                if src_reg is not None:
                    reg[dst] = reg[src_reg]
                elif src_imm is not None:
                    reg[dst] = ("const", src_imm)
                else:
                    reg[dst] = ("unknown",)
        continue

    # --- add rD, rN, #imm ---
    if mnem in ("add", "sub"):
        if len(ops) == 3:
            d = parse_reg(ops[0]); n = parse_reg(ops[1]); imm = parse_imm(ops[2])
            if d is not None and n is not None and imm is not None:
                base = reg[n]
                delta = imm if mnem == "add" else (-imm) & 0xFFFFFFFF
                reg[d] = sym_add(base, delta)
            elif d is not None:
                reg[d] = ("unknown",)
        continue

    # --- LDR-PC-rel pool loads: `ldr rD, [pc, #imm]` ---
    if mnem == "ldr" and len(ops) >= 2 and "pc" in ops[1]:
        d = parse_reg(ops[0])
        # Extract imm from `[pc, #0x394]` (or [pc,#0x394])
        imm = None
        s = ops[1].replace(" ", "").replace("[pc,", "").replace("[pc", "").rstrip("]")
        if s.startswith("#-"):
            try: imm = -int(s[2:], 0) & 0xFFFFFFFF
            except: pass
        elif s.startswith("#"):
            try: imm = int(s[1:], 0)
            except: pass
        if d is not None and imm is not None:
            # PC at exec = pc + 8 (ARM)
            pool_va = (pc + 8 + imm) & 0xFFFFFFFF
            try:
                w = mem.getInt(af.getAddress(pool_va)) & 0xFFFFFFFF
                reg[d] = ("const", w)
                emit(pc, "LDR r%d, [pc, #0x%x] → 0x%08x" % (d, imm, w))
            except:
                reg[d] = ("unknown",)
        continue

    # --- LDR/LDRB/STR/STRB reg-offset ---
    if mnem in ("ldr", "ldrb", "str", "strb", "ldrh", "strh"):
        if len(ops) >= 2:
            rt = parse_reg(ops[0])
            # Operand shape is "[rN,#imm]" or "[rN]" or "[rN,rM]"
            base_str = ops[1]
            # Try to extract rN and imm.
            b = base_str.strip("[]")
            parts = [p.strip() for p in b.split(",")]
            if len(parts) >= 1:
                rn = parse_reg(parts[0])
                imm = 0
                if len(parts) >= 2:
                    parsed_imm = parse_imm(parts[1])
                    if parsed_imm is not None:
                        imm = parsed_imm
                    else:
                        rn = None  # skip reg-reg-offset
                if rn is not None:
                    base_sym = reg[rn]
                    op = "LDR" if mnem.startswith("ldr") else "STR"
                    sz = "B" if mnem.endswith("b") else ("H" if mnem.endswith("h") else "")
                    emit(pc, "%s%s r%d, [%s + 0x%x]" % (op, sz, rt if rt is not None else -1, fmt(base_sym), imm))
                    # For LDR, if base is a param-plus and we can name the target,
                    # track the loaded value as a deref for later STR chains.
                    if op == "LDR" and rt is not None:
                        if base_sym is not None and base_sym[0] in ("param+", "param", "const", "expr"):
                            reg[rt] = ("deref", base_sym, imm)
                        else:
                            reg[rt] = ("unknown",)
        continue

    # --- BL: r0-r3 are argument regs, LR clobbered.
    # After a call, r0 is a return value (unknown).
    if mnem == "bl":
        # Preserve r4-r11 (callee-saved). Clobber r0-r3.
        for i in range(4):
            reg[i] = ("unknown",)
        reg[14] = ("unknown",)
        continue

    # Unhandled ops that write a dest reg → mark reg as unknown.
    if mnem in ("mul", "muls", "mla", "mls", "and", "orr", "eor", "bic", "asr", "lsl", "lsr", "ror"):
        if len(ops) >= 1:
            d = parse_reg(ops[0])
            if d is not None:
                reg[d] = ("unknown",)
        continue

    if mnem in ("rsb",):
        # rsb rd, rn, #0 = rd = -rn
        if len(ops) >= 1:
            d = parse_reg(ops[0])
            if d is not None:
                reg[d] = ("unknown",)
        continue

    # VFP / other: leave regs untouched.

print("insns walked: %d, tracked stores/loads: %d" % (insn_count, len(lines)))

# Write output
if out_path:
    with open(out_path, "w") as f:
        for ln in lines:
            f.write(ln + "\n")
    print("wrote %s" % out_path)
else:
    for ln in lines[:200]:
        print(ln)
    if len(lines) > 200:
        print("  ... (%d more; set OOT3D_DFS_OUT to save all)" % (len(lines) - 200))

// OoT3D decomp @ 00350cf4  name=FUN_00350cf4  size=40

uint FUN_00350cf4(uint param_1)

{
  return (uint)*(ushort *)(UNK_00350d1c + ((int)param_1 >> 4) * 2 + 0xeec) & 1 << (param_1 & 0xf);
}


// OoT3D decomp @ 003667b0  name=FUN_003667b0  size=60

void FUN_003667b0(int param_1,int param_2)

{
  param_1 = param_1 + ((int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1c)) >> 4) * 2;
  *(ushort *)(param_1 + 0x5f98) =
       ((ushort)(1 << (param_2 % 0x10 & 0xffU)) ^ 0xffff) & *(ushort *)(param_1 + 0x5f98);
  return;
}


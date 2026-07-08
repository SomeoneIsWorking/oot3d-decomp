// OoT3D decomp @ 00366704  name=FUN_00366704  size=52

void FUN_00366704(int param_1,int param_2)

{
  param_1 = param_1 + ((int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1c)) >> 4) * 2;
  *(ushort *)(param_1 + 0x5f98) =
       (ushort)(1 << (param_2 % 0x10 & 0xffU)) | *(ushort *)(param_1 + 0x5f98);
  return;
}


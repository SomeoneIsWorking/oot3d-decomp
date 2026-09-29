// OoT3D decomp @ 0034f6bc  name=FUN_0034f6bc  size=44

void FUN_0034f6bc(undefined4 param_1,byte *param_2,uint param_3)

{
  if (param_3 < 0x32) {
    *(ushort *)(param_2 + param_3 * 2 + 0x151c) = *(ushort *)(param_2 + param_3 * 2 + 0x151c) | 8;
    *param_2 = *param_2 | 1;
  }
  return;
}

// OoT3D decomp @ 0036b940  name=FUN_0036b940  size=44

void FUN_0036b940(undefined4 param_1,byte *param_2,uint param_3)

{
  if (param_3 < 0x32) {
    *(ushort *)(param_2 + param_3 * 2 + 0x151c) = *(ushort *)(param_2 + param_3 * 2 + 0x151c) | 4;
    *param_2 = *param_2 | 1;
  }
  return;
}

// OoT3D decomp @ 0036d15c  name=FUN_0036d15c  size=44

void FUN_0036d15c(undefined4 param_1,byte *param_2,uint param_3)

{
  if (param_3 < 0x32) {
    *(ushort *)(param_2 + param_3 * 2 + 0x151c) =
         *(ushort *)(param_2 + param_3 * 2 + 0x151c) & 0xfffb;
    *param_2 = *param_2 | 1;
  }
  return;
}

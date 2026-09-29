// OoT3D decomp @ 0035e580  name=FUN_0035e580  size=52

void FUN_0035e580(undefined4 param_1,int param_2,uint param_3,undefined1 param_4)

{
  FUN_004c1044(param_1,param_3 & 0xff,*(undefined1 *)(param_2 + 0x1a8));
  if (param_3 != 0x14) {
    *(char *)(param_2 + 0x1aa) = (char)param_3;
    *(undefined1 *)(param_2 + 0x1a9) = param_4;
  }
  *(undefined1 *)(param_2 + 0x1ac) = param_4;
  return;
}

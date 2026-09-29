// OoT3D decomp @ 00372d4c  name=FUN_00372d4c  size=24

void FUN_00372d4c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(param_3 + 8) = param_1;
  *(undefined4 *)(param_3 + 0xc) = param_4;
  *(undefined4 *)(param_3 + 0x10) = param_2;
  *(undefined1 *)(param_3 + 0x14) = 0xff;
  return;
}

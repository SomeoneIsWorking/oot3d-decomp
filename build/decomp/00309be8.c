// OoT3D decomp @ 00309be8  name=FUN_00309be8  size=136

void FUN_00309be8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x120) = param_3;
  FUN_004081c4(param_1 + 0xac);
  FUN_00404404(*DAT_00309c70,param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_00309280(*(undefined4 *)(param_1 + 0x134),param_2,param_4);
  FUN_00407c3c(param_1,param_2);
  FUN_00407b08(*(undefined4 *)(param_1 + 0x134),*(undefined1 *)(param_1 + 0x124));
  FUN_00407b28(*(undefined4 *)(param_1 + 0x134),*(undefined1 *)(param_1 + 0x125));
  FUN_00407b48(*(undefined4 *)(param_1 + 0x134),*(undefined1 *)(param_1 + 0x129));
  FUN_00309260(*(undefined4 *)(param_1 + 0x134));
  *(undefined1 *)(param_1 + 0xc6) = 1;
  return;
}

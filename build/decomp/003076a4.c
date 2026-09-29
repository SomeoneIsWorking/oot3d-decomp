// OoT3D decomp @ 003076a4  name=FUN_003076a4  size=72

int FUN_003076a4(undefined4 *param_1)

{
  int iVar1;

  *param_1 = DAT_003076ec;
  FUN_002e68ac(param_1);
  iVar1 = FUN_00307674(param_1 + 0x37a);
  iVar1 = FUN_0044cac0(iVar1 + -0x1c4);
  *(undefined4 *)(iVar1 + -0xc) = DAT_003076f0;
  FUN_002fbb10();
  return iVar1 + -0xc24;
}

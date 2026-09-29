// OoT3D decomp @ 004050d4  name=FUN_004050d4  size=88

void FUN_004050d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0xc;
  *(int *)(iVar2 + 0x10) = param_1 + 0xf4;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  *(undefined4 *)(iVar2 + 0x18) = param_3;
  *(undefined4 *)(iVar2 + 0x1c) = param_4;
  FUN_0030c1e8(iVar1,iVar2);
  return;
}

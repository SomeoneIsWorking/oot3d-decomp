// OoT3D decomp @ 0030ae84  name=FUN_0030ae84  size=88

void FUN_0030ae84(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0x2e;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(iVar2 + 0x14) = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc);
  FUN_0030c1e8(iVar1,iVar2);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  return;
}

// OoT3D decomp @ 004086e8  name=FUN_004086e8  size=64

void FUN_004086e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0x2e;
  *(undefined4 *)(iVar2 + 0x10) = param_1;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  FUN_0030c1e8(iVar1,iVar2);
  return;
}

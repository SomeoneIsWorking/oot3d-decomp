// OoT3D decomp @ 00404e58  name=FUN_00404e58  size=72

void FUN_00404e58(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0x12;
  *(int *)(iVar2 + 0x10) = param_1 + 0xf4;
  *(undefined1 *)(iVar2 + 0x14) = param_2;
  FUN_0030c1e8(iVar1,iVar2);
  return;
}

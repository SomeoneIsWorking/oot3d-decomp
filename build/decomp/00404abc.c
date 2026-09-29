// OoT3D decomp @ 00404abc  name=FUN_00404abc  size=100

void FUN_00404abc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,9);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0xe;
  *(int *)(iVar2 + 0x10) = param_1 + 0xf4;
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_2 + 0x1c);
  FUN_0030c1e8(iVar1,iVar2);
  return;
}

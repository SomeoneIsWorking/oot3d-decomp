// OoT3D decomp @ 00313b00  name=FUN_00313b00  size=96

void FUN_00313b00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,5);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0x30;
  *(int *)(iVar2 + 0x10) = param_1;
  FUN_0030c1e8(iVar1,iVar2);
  uVar3 = FUN_0030c0dc(iVar1,1);
  FUN_0030c074(iVar1,uVar3);
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  return;
}

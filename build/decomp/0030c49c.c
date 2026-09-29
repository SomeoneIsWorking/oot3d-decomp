// OoT3D decomp @ 0030c49c  name=FUN_0030c49c  size=88

void FUN_0030c49c(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 10;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  *(undefined1 *)(iVar2 + 0x15) = param_2;
  FUN_0030c1e8(iVar1,iVar2);
  return;
}

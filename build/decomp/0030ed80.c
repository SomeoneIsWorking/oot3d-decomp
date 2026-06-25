// OoT3D decomp @ 0030ed80  name=FUN_0030ed80  size=88

void FUN_0030ed80(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,7);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined *)(iVar2 + 4) = 0x19;
  *(int *)(iVar2 + 0x10) = param_2 + 0xf4;
  *(undefined4 *)(iVar2 + 0x14) = param_3;
  *(undefined4 *)(iVar2 + 0x18) = param_1;
  FUN_0030c1e8(iVar1,iVar2);
  return;
}


// OoT3D decomp @ 002d3ce0  name=FUN_002d3ce0  size=88

void FUN_002d3ce0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,7);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined *)(iVar2 + 4) = 0x17;
  *(int *)(iVar2 + 0x10) = param_1 + 0xf4;
  if (param_3 != 0) {
    param_3 = 3;
  }
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  *(int *)(iVar2 + 0x18) = param_3;
  FUN_0030c1e8(iVar1,iVar2);
  return;
}


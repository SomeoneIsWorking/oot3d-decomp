// OoT3D decomp @ 0041a144  name=FUN_0041a144  size=148

int FUN_0041a144(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0041a1d8;
  *param_1 = DAT_0041a1d8;
  param_1[1] = iVar2 + 0x78;
  iVar2 = FUN_0041ef38(param_1 + 7);
  uVar1 = DAT_0041a1dc;
  *(undefined4 *)(iVar2 + 0x10) = DAT_0041a1dc;
  FUN_003051bc();
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  FUN_003051bc(iVar2 + 0x1c);
  iVar2 = FUN_0041f024(iVar2 + 0x28);
  iVar2 = FUN_002ffa98(iVar2 + 0x998);
  iVar2 = FUN_002ffa48(iVar2 + 0xe8);
  iVar2 = FUN_0041ef58(iVar2 + 1000);
  iVar2 = FUN_002ffa20(iVar2 + 0x38);
  *(undefined *)(iVar2 + 0xe4) = 0;
  *(undefined4 *)(iVar2 + 0xe8) = 0;
  *(undefined4 *)(iVar2 + -0xed4) = 0;
  *(undefined4 *)(iVar2 + -0xed0) = 0;
  *(undefined4 *)(iVar2 + -0xecc) = 0;
  FUN_0030748c(iVar2 + -0xee4);
  return iVar2 + -0xee4;
}


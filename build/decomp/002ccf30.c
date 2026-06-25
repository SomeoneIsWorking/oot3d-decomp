// OoT3D decomp @ 002ccf30  name=FUN_002ccf30  size=68

int FUN_002ccf30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined auStack_34 [36];
  
  iVar1 = FUN_004c43b0(param_1,auStack_34);
  if (iVar1 != 0) {
    FUN_0032b1c4(param_2,auStack_34,*(undefined4 *)(param_1 + 0x3dc),param_3);
    iVar1 = 1;
  }
  return iVar1;
}


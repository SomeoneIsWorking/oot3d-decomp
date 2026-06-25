// OoT3D decomp @ 004bdc1c  name=FUN_004bdc1c  size=80

void FUN_004bdc1c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0036b4ec(param_1 + 0x254);
  iVar2 = FUN_002c3d18(param_2,param_1,DAT_004bdc6c,1);
  if ((iVar2 == 0) && (iVar1 != 0)) {
    FUN_002bca14(param_1,param_2);
    return;
  }
  return;
}


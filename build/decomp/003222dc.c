// OoT3D decomp @ 003222dc  name=FUN_003222dc  size=96

void FUN_003222dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  FUN_00436218(param_1 + 0x18,param_4);
  FUN_00436228(param_1 + 0x18,param_5);
  FUN_00436304(param_1 + 0x18,param_6);
  iVar1 = FUN_004360c4(param_1 + 0x18,param_2,param_3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return;
}


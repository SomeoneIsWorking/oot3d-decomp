// OoT3D decomp @ 00317b28  name=FUN_00317b28  size=56

void FUN_00317b28(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == -1) {
    param_2 = (int)*(short *)(DAT_00317b60 + param_1);
  }
  uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 0xa54);
  FUN_002e547c(uVar1,param_3);
  FUN_0033885c(uVar1,param_4);
  return;
}


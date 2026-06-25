// OoT3D decomp @ 002bddb8  name=FUN_002bddb8  size=64

undefined4 FUN_002bddb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_r3;
  
  if ((DAT_002bddf8 <= (int)ABS(*(float *)(in_r3 + 8))) &&
     (iVar1 = FUN_00319718(param_1,param_2,DAT_002bddfc,param_3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


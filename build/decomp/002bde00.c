// OoT3D decomp @ 002bde00  name=FUN_002bde00  size=64

undefined4 FUN_002bde00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_r3;
  
  if ((DAT_002bde40 <= (int)ABS(*(float *)(in_r3 + 4))) &&
     (iVar1 = FUN_00322618(param_1,param_2,DAT_002bde44,param_3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


// OoT3D decomp @ 002bf520  name=FUN_002bf520  size=136

undefined4
FUN_002bf520(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            undefined4 param_7)

{
  int iVar1;
  float *in_r3;
  
  if ((DAT_002bf5a8 <= (int)ABS(param_2)) &&
     (iVar1 = FUN_00322618(param_5,param_6,DAT_002bf5ac,param_7,param_2), iVar1 != 0)) {
    *in_r3 = ((-param_1 * param_6 - param_3 * param_5) - param_4) / param_2;
    return 1;
  }
  return 0;
}


// OoT3D decomp @ 002bfd84  name=FUN_002bfd84  size=44

undefined8 FUN_002bfd84(float *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0035579c(param_2);
  return CONCAT44(param_1[1] + (float)((ulonglong)uVar1 >> 0x20),*param_1 + (float)uVar1);
}


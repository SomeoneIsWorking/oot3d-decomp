// OoT3D decomp @ 0036ac0c  name=FUN_0036ac0c  size=52

void FUN_0036ac0c(undefined4 *param_1,short *param_2)

{
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorSignedToFloat((int)*param_2,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = uVar1;
  uVar1 = VectorSignedToFloat((int)param_2[1],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = uVar1;
  uVar1 = VectorSignedToFloat((int)param_2[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = uVar1;
  return;
}


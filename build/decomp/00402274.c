// OoT3D decomp @ 00402274  name=FUN_00402274  size=76

uint FUN_00402274(uint *param_1,int param_2)

{
  uint uVar1;

  if (param_2 != 0) {
    uVar1 = *param_1;
    if (param_1[1] + param_2 <= uVar1) {
      uVar1 = param_1[1] + param_2;
    }
    param_1[1] = uVar1;
  }
  return param_1[1];
}

// OoT3D decomp @ 00467068  name=FUN_00467068  size=124

void FUN_00467068(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)FUN_002dbc48(*param_1,param_3 + 8);
  if ((puVar1[1] & 0xffff) == 0x2c1) {
    *puVar1 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[1];
    puVar1[4] = *param_2;
    puVar1[5] = param_2[7];
    puVar1[6] = param_2[6];
    puVar1[7] = param_2[5];
    puVar1[8] = param_2[4];
  }
  return;
}

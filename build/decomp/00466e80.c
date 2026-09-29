// OoT3D decomp @ 00466e80  name=FUN_00466e80  size=92

void FUN_00466e80(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_24 [3];

  local_24[0] = *DAT_00466edc;
  local_24[1] = DAT_00466edc[1];
  local_24[2] = DAT_00466edc[2];
  FUN_00307c94(*param_1,local_24[param_2],1,param_3);
  FUN_00307c94(*param_1,local_24[param_2] + 1,1,param_4);
  return;
}

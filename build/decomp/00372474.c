// OoT3D decomp @ 00372474  name=FUN_00372474  size=104

void FUN_00372474(undefined4 *param_1,float *param_2,float *param_3)

{
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_14 = *param_3 - *param_2;
  local_10 = param_3[1] - param_2[1];
  local_c = param_3[2] - param_2[2];
  FUN_002c4250(&local_1c,&local_14);
  local_18 = CONCAT22(local_18._2_2_,0x3fff - (short)local_18);
  *param_1 = local_1c;
  param_1[1] = local_18;
  return;
}


// OoT3D decomp @ 003713fc  name=FUN_003713fc  size=124

void FUN_003713fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_5 == 1) {
    local_10 = param_1;
    local_c = param_2;
    local_8 = param_3;
    FUN_00372070(param_4,param_4,&local_10);
    return;
  }
  param_4[1] = 0;
  *param_4 = 0x3f800000;
  param_4[2] = 0;
  param_4[4] = 0;
  param_4[5] = 0x3f800000;
  param_4[3] = param_1;
  param_4[6] = 0;
  param_4[8] = 0;
  param_4[7] = param_2;
  param_4[9] = 0;
  param_4[10] = 0x3f800000;
  param_4[0xb] = param_3;
  return;
}


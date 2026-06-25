// OoT3D decomp @ 00358188  name=FUN_00358188  size=420

void FUN_00358188(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;
  undefined auStack_128 [48];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined auStack_c8 [48];
  undefined auStack_98 [48];
  undefined auStack_68 [48];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  param_7[1] = 0;
  *param_7 = 0x3f800000;
  param_7[2] = 0;
  param_7[4] = 0;
  param_7[5] = 0x3f800000;
  param_7[3] = param_4;
  param_7[6] = 0;
  uVar1 = DAT_0035832c;
  param_7[8] = 0;
  uVar2 = DAT_00358330;
  param_7[7] = param_5;
  param_7[9] = 0;
  param_7[10] = 0x3f800000;
  param_7[0xb] = param_6;
  fVar3 = DAT_00358334;
  local_38 = uVar1;
  local_34 = uVar2;
  fVar4 = (float)VectorSignedToFloat(param_8,(byte)(in_fpscr >> 0x15) & 3);
  local_30 = uVar2;
  FUN_003625f8(fVar4 * DAT_00358334,auStack_68,&local_38);
  local_38 = uVar2;
  local_34 = uVar1;
  local_30 = uVar2;
  fVar4 = (float)VectorSignedToFloat(param_9,(byte)(in_fpscr >> 0x15) & 3);
  FUN_003625f8(fVar4 * fVar3,auStack_98,&local_38);
  local_38 = uVar2;
  local_34 = uVar2;
  local_30 = uVar1;
  fVar4 = (float)VectorSignedToFloat(param_10,(byte)(in_fpscr >> 0x15) & 3);
  FUN_003625f8(fVar4 * fVar3,auStack_c8,&local_38);
  FUN_0036c174(auStack_128,auStack_98,auStack_68);
  FUN_0036c174(auStack_128,auStack_128,auStack_c8);
  FUN_0036c174(auStack_128,param_7,auStack_128);
  local_e8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_cc = 0;
  local_f8 = param_1;
  local_e4 = param_2;
  local_d0 = param_3;
  local_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  FUN_0036c174(param_7,auStack_128,&local_f8);
  return;
}


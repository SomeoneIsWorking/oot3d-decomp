// OoT3D decomp @ 00434d74  name=FUN_00434d74  size=336

void FUN_00434d74(int param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint in_fpscr;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94 [6];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c [4];
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;

  local_4c[0] = *DAT_00434ec4;
  local_4c[1] = DAT_00434ec4[1];
  local_4c[2] = DAT_00434ec4[2];
  local_4c[3] = DAT_00434ec4[3];
  uStack_3c = DAT_00434ec4[4];
  local_38 = DAT_00434ec4[5];
  uStack_34 = DAT_00434ec4[6];
  uStack_30 = DAT_00434ec4[7];
  uStack_2c = DAT_00434ec4[8];
  uStack_28 = DAT_00434ec4[9];
  local_24 = DAT_00434ec4[10];
  uStack_20 = DAT_00434ec4[0xb];
  if (*(char *)(param_1 + 9) == '\0') {
    unaff_r5 = 0x10;
    unaff_r6 = unaff_r5;
  }
  else if (*(char *)(param_1 + 9) == '\x01') {
    unaff_r5 = 0x20;
    param_3 = param_3 + 3;
    unaff_r6 = unaff_r5;
  }
  local_94[0] = (float)VectorSignedToFloat(unaff_r5,(byte)(in_fpscr >> 0x15) & 3);
  local_94[0] = local_94[0] * DAT_00434ec8;
  local_94[5] = (float)VectorSignedToFloat(unaff_r6,(byte)(in_fpscr >> 0x15) & 3);
  local_94[5] = local_94[5] * DAT_00434ec8;
  local_50 = DAT_00434ecc;
  local_b8 = (float)VectorSignedToFloat(local_4c[param_3 * 2],(byte)(in_fpscr >> 0x15) & 3);
  local_a8 = (float)VectorSignedToFloat(local_4c[param_3 * 2 + 1],(byte)(in_fpscr >> 0x15) & 3);
  local_b8 = local_b8 * DAT_00434ec8;
  local_a8 = local_a8 * DAT_00434ec8;
  local_5c = DAT_00434ed0;
  local_94[1] = 0.0;
  local_94[2] = 0.0;
  local_78 = 0;
  local_94[3] = 0.0;
  local_7c = 0;
  local_6c = DAT_00434ecc;
  local_74 = 0;
  local_68 = 0;
  local_94[4] = 0.0;
  local_70 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_c4 = 0x3f800000;
  local_bc = 0;
  local_ac = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_b0 = 0x3f800000;
  local_9c = 0x3f800000;
  local_98 = DAT_00434ed0;
  local_64 = local_b8;
  local_60 = local_a8;
  local_58 = local_94[0];
  local_54 = local_94[5];
  FUN_0036c174(param_2,&local_c4,local_94);
  return;
}

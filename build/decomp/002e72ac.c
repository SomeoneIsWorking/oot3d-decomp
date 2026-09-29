// OoT3D decomp @ 002e72ac  name=FUN_002e72ac  size=504

void FUN_002e72ac(undefined4 param_1,float *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint in_fpscr;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 auStack_ac [48];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float local_4c [6];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  local_70 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x2c),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_bc = param_2[1] + param_2[9];
  local_60 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x2e),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_bc = local_bc + (param_2[1] - local_bc) * param_2[10];
  local_b8 = param_2[1] + param_2[9];
  local_b8 = local_b8 + ((param_2[1] + param_2[3]) - local_b8) * param_2[10];
  local_b4 = *param_2 + param_2[8];
  local_b4 = local_b4 + (*param_2 - local_b4) * param_2[10];
  local_b0 = *param_2 + param_2[8];
  local_b0 = local_b0 + ((*param_2 + param_2[2]) - local_b0) * param_2[10];
  local_4c[0] = param_2[6] / local_70;
  local_4c[5] = param_2[7] / local_60;
  local_70 = param_2[4] / local_70;
  local_60 = param_2[5] / local_60;
  local_4c[1] = 0.0;
  local_34 = 0;
  local_4c[3] = 0.0;
  local_4c[4] = 0.0;
  local_20 = 0;
  local_24 = DAT_002e74a4;
  local_4c[2] = 0.0;
  local_2c = 0;
  local_28 = 0;
  local_30 = 0;
  local_78 = 0;
  local_7c = 0x3f800000;
  local_74 = 0;
  local_6c = 0;
  uStack_68 = 0x3f800000;
  local_64 = 0;
  local_5c = 0;
  local_58 = 0;
  uStack_54 = 0x3f800000;
  local_50 = DAT_002e74a8;
  FUN_0036c174(auStack_ac,&local_7c,local_4c);
  if (((*DAT_002e74ac & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002e74ac), iVar1 != 0)) {
    FUN_0036788c(DAT_002e74b0);
  }
  FUN_003065d0(DAT_002e74bc,param_5,param_2 + 0xb,&local_bc,param_3,param_4,auStack_ac,1);
  return;
}

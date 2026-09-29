// OoT3D decomp @ 003063b0  name=FUN_003063b0  size=516

void FUN_003063b0(int param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint in_fpscr;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 auStack_b0 [48];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  float local_50 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  local_74 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x2c),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_c0 = param_2[1] + param_2[9];
  local_64 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x2e),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_c0 = local_c0 + (param_2[1] - local_c0) * param_2[10];
  local_bc = param_2[1] + param_2[9];
  local_bc = local_bc + ((param_2[1] + param_2[3]) - local_bc) * param_2[10];
  local_b8 = *param_2 + param_2[8];
  local_b8 = local_b8 + (*param_2 - local_b8) * param_2[10];
  local_b4 = *param_2 + param_2[8];
  local_b4 = local_b4 + ((*param_2 + param_2[2]) - local_b4) * param_2[10];
  local_50[0] = param_2[6] / local_74;
  local_50[5] = param_2[7] / local_64;
  local_74 = param_2[4] / local_74;
  local_64 = param_2[5] / local_64;
  local_50[1] = 0.0;
  local_38 = 0;
  local_50[3] = 0.0;
  local_50[2] = 0.0;
  local_24 = 0;
  local_28 = DAT_003065b4;
  local_30 = 0;
  local_34 = 0;
  local_80 = 0x3f800000;
  local_70 = 0;
  uStack_6c = 0x3f800000;
  local_50[4] = 0.0;
  local_2c = 0;
  local_7c = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  uStack_58 = 0x3f800000;
  local_54 = DAT_003065b8;
  FUN_0036c174(auStack_b0,&local_80,local_50);
  if (((*DAT_003065bc & 1) == 0) && (iVar1 = FUN_003679b4(DAT_003065bc), iVar1 != 0)) {
    FUN_0036788c(DAT_003065c0);
  }
  FUN_003065d0(DAT_003065cc,param_5,param_2 + 0xb,&local_c0,*(undefined4 *)(param_1 + 0xc),param_4,
               auStack_b0,1);
  return;
}

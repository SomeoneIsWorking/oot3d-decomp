// OoT3D decomp @ 002dae70  name=FUN_002dae70  size=404

void FUN_002dae70(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 float param_6,undefined4 param_7,float param_8,undefined4 param_9,
                 undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13)

{
  float *local_18c;
  undefined4 *local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined4 local_168;
  undefined2 local_164;
  undefined2 local_162;
  undefined2 local_160;
  undefined2 local_15e;
  short local_15c;
  short local_15a;
  short local_158;
  short local_156;
  short local_154;
  undefined2 local_152;
  ushort local_150;
  undefined2 local_14e;
  short local_14c;
  short local_14a;
  short local_148;
  ushort local_146;
  ushort local_144;
  ushort local_142;
  undefined2 local_140;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 uStack_44;
  float local_40;
  float local_3c;
  undefined4 uStack_38;
  float local_34;
  float local_30;
  undefined4 uStack_2c;
  float local_28;
  float local_24;
  undefined4 uStack_20;

  local_68 = DAT_002db004 - param_6;
  uStack_44 = 0;
  uStack_38 = 0;
  local_3c = param_4 - param_2;
  uStack_2c = 0;
  uStack_20 = 0;
  local_18c = &local_4c;
  local_60 = DAT_002db004 - param_8;
  local_74 = *DAT_002db008;
  local_70 = DAT_002db008[1];
  local_188 = &local_6c;
  local_17c = &local_74;
  local_4c = 0.0 - param_1;
  local_48 = 0.0 - param_2;
  local_40 = 0.0 - param_1;
  local_34 = param_3 - param_1;
  local_30 = 0.0 - param_2;
  local_180 = 4;
  local_178 = 4;
  local_170 = 4;
  local_174 = 2;
  local_16c = 1;
  local_160 = 1;
  local_168 = 1;
  local_15e = 1;
  local_16a = 2;
  local_164 = 0x2100;
  local_162 = 0x2100;
  local_15c = (short)DAT_002db00c;
  local_158 = local_15c + -2;
  local_156 = local_15c + -0xb9;
  local_154 = local_15c + -3;
  local_146 = (ushort)(DAT_002db00c >> 0xe) | 0x300;
  local_150 = local_146;
  if (param_11 == 0) {
    local_150 = 0x300;
  }
  local_152 = 0x300;
  local_140 = 0;
  local_14e = 0x300;
  local_184 = param_12;
  local_15a = local_15c;
  local_14c = local_158;
  local_14a = local_156;
  local_148 = local_154;
  local_144 = local_146;
  local_142 = local_146;
  local_6c = param_5;
  local_64 = param_5;
  local_5c = param_7;
  local_58 = local_68;
  local_54 = param_7;
  local_50 = local_60;
  local_28 = local_34;
  local_24 = local_3c;
  FUN_002d2754(param_9,param_10,&local_18c,param_13);
  return;
}

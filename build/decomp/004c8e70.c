// OoT3D decomp @ 004c8e70  name=FUN_004c8e70  size=220

void FUN_004c8e70(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110;
  undefined2 local_10e;
  undefined4 local_10c;
  undefined2 local_108;
  undefined2 local_106;
  undefined2 local_104;
  undefined2 local_102;
  short local_100;
  short local_fe;
  short local_fc;
  short local_fa;
  short local_f8;
  undefined2 local_f6;
  ushort local_f4;
  undefined2 local_f2;
  short local_f0;
  short local_ee;
  short local_ec;
  ushort local_ea;
  ushort local_e8;
  ushort local_e6;
  undefined2 local_e4;

  uStack_12c = param_5;
  uStack_128 = param_6;
  uStack_124 = param_7;
  local_120 = param_8;
  local_118 = 2;
  local_110 = 1;
  local_104 = 1;
  local_10c = 1;
  local_102 = 1;
  local_11c = param_9;
  local_10e = 2;
  local_100 = (short)DAT_004c8f4c;
  local_fc = local_100 + -2;
  local_f8 = local_100 + -3;
  local_114 = 4;
  local_108 = 0x2100;
  local_fa = local_100 + -0xb9;
  local_106 = 0x2100;
  local_ea = (ushort)(DAT_004c8f4c >> 0xe) | 0x300;
  local_f4 = local_ea;
  if (param_3 == 0) {
    local_f4 = 0x300;
  }
  local_f6 = 0x300;
  local_e4 = 0;
  local_f2 = 0x300;
  local_130 = param_4;
  local_fe = local_100;
  local_f0 = local_fc;
  local_ee = local_fa;
  local_ec = local_f8;
  local_e8 = local_ea;
  local_e6 = local_ea;
  FUN_002d2754(param_1,param_2,&local_130,param_10);
  return;
}

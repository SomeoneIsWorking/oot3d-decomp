// OoT3D decomp @ 001b2dfc  name=FUN_001b2dfc  size=432

void FUN_001b2dfc(int param_1)

{
  int iVar1;
  float fVar2;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [12];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;

  FUN_0035e3a4(param_1 + 0x9e0,0,*(undefined1 *)(param_1 + 0xc10));
  FUN_0035e3a4(param_1 + 0x9e0,1,0);
  FUN_0035e330(param_1 + 0x9e0);
  local_4c = 0;
  local_50 = param_1;
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0);
  FUN_00372224(auStack_44,param_1 + 0x148);
  iVar1 = DAT_001b2fac;
  local_50 = DAT_001b2fac;
  local_4c = DAT_001b2fac;
  local_48 = DAT_001b2fb0;
  FUN_00372070(auStack_44,auStack_44,&local_50);
  local_50 = 1;
  FUN_0036e88c(auStack_44,(int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
               (int)*(short *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0xc00) = local_38;
  *(undefined4 *)(param_1 + 0xc04) = local_28;
  *(undefined4 *)(param_1 + 0xc08) = local_18;
  FUN_00372224(auStack_44,param_1 + 0x148);
  local_50 = iVar1;
  local_4c = iVar1;
  local_48 = DAT_001b2fb4;
  FUN_00372070(auStack_44,auStack_44,&local_50);
  local_50 = 1;
  FUN_0036e88c(auStack_44,(int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
               (int)*(short *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0xc14) = local_38;
  *(undefined4 *)(param_1 + 0xc18) = local_28;
  *(undefined4 *)(param_1 + 0xc1c) = local_18;
  FUN_00372224(auStack_44,param_1 + 0x148);
  local_50 = iVar1;
  local_4c = iVar1;
  local_48 = DAT_001b2fb8;
  FUN_00372070(auStack_44,auStack_44,&local_50);
  local_50 = 1;
  FUN_0036e88c(auStack_44,(int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
               (int)*(short *)(param_1 + 0x38));
  fVar2 = DAT_001b2fbc;
  *(undefined4 *)(param_1 + 0x3c) = local_38;
  *(undefined4 *)(param_1 + 0x40) = local_28;
  *(undefined4 *)(param_1 + 0x44) = local_18;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar2;
  return;
}

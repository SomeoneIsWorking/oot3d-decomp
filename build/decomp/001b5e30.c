// OoT3D decomp @ 001b5e30  name=FUN_001b5e30  size=212

void FUN_001b5e30(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 local_24 [4];
  
  uVar2 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0x2c4),3);
  *(char *)(param_1 + 0xd0) = (char)uVar2;
  local_24[0] = *DAT_001b5f04;
  local_24[1] = DAT_001b5f04[1];
  local_24[2] = DAT_001b5f04[2];
  local_24[3] = DAT_001b5f04[3];
  FUN_0035e3a4(param_1 + 0xacc,0,local_24[*(short *)(DAT_001b5f08 + param_1)]);
  FUN_0035e330(param_1 + 0xacc);
  sVar1 = (short)(int)*(float *)(param_1 + 0x2c4);
  if (sVar1 == 0xff) {
    FUN_003428a0(param_2,param_1 + 0x1a4,DAT_001b5f10,DAT_001b5f0c,param_1,0xff);
  }
  else if (((int)*(float *)(param_1 + 0x2c4) & 0xffffU) != 0) {
    FUN_00341d5c(param_2,param_1 + 0x1a4,DAT_001b5f10,DAT_001b5f0c,param_1,(int)sVar1);
    return;
  }
  return;
}


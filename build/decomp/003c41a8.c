// OoT3D decomp @ 003c41a8  name=FUN_003c41a8  size=236

void FUN_003c41a8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;

  uVar1 = DAT_003c4294;
  uVar2 = *(int *)(param_1 + 0xa20) - 4;
  if (0xff < uVar2) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0xa20) = uVar2;
  *(char *)(param_1 + 0xd0) = (char)uVar2;
  local_20 = (float)FUN_003738a8(uVar1);
  local_20 = local_20 + *(float *)(param_1 + 0x28);
  local_1c = (float)FUN_003738a8(uVar1);
  local_1c = local_1c + *(float *)(param_1 + 0x2c);
  local_18 = (float)FUN_003738a8(uVar1);
  local_18 = local_18 + *(float *)(param_1 + 0x30);
  local_30 = DAT_003c4298;
  local_34 = DAT_003c4298;
  local_38 = DAT_003c4298;
  local_24 = DAT_003c4298;
  local_28 = DAT_003c4298;
  local_2c = DAT_003c4298;
  FUN_003642f4(param_2,&local_20,&local_2c,&local_38,100,10,0xff,0xff,0xff,0xff,0,0,0xff,1,0xb,1);
  return;
}

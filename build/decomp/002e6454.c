// OoT3D decomp @ 002e6454  name=FUN_002e6454  size=96

void FUN_002e6454(int param_1,int param_2)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [4];
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  local_48[0] = *DAT_002e64b4;
  local_48[1] = DAT_002e64b4[1];
  local_48[2] = DAT_002e64b4[2];
  local_48[3] = DAT_002e64b4[3];
  uStack_38 = DAT_002e64b4[4];
  local_34 = DAT_002e64b4[5];
  uStack_30 = DAT_002e64b4[6];
  uStack_2c = DAT_002e64b4[7];
  uStack_28 = DAT_002e64b4[8];
  uStack_24 = DAT_002e64b4[9];
  local_20 = DAT_002e64b4[10];
  uStack_1c = DAT_002e64b4[0xb];
  uStack_18 = DAT_002e64b4[0xc];
  uStack_14 = DAT_002e64b4[0xd];
  local_50 = DAT_002e64b8;
  local_4c = DAT_002e64b8;
  FUN_002fc40c(*(undefined4 *)(param_1 + 8),local_48 + param_2 * 2,&local_50,1,0);
  return;
}

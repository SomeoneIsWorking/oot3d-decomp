// OoT3D decomp @ 001b09ac  name=FUN_001b09ac  size=524

void FUN_001b09ac(int param_1)

{
  short sVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;

  sVar1 = *(short *)(param_1 + 0x1c);
  FUN_0035e3a4(param_1 + 0xc80,0,*(undefined1 *)(param_1 + 0xc34));
  uVar4 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x10),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar3 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0xc),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  FUN_003591e4(uVar2,uVar3,uVar4,param_1 + 0xc0c,0xff,0xff,0xff,0xffffffff,0);
  FUN_00357a50(param_1 + 0x1a4,0,4,DAT_001b0bb8 + (short)(sVar1 + -1) * 0x10,0);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001b0bc0,DAT_001b0bbc,param_1,0);
  if (*(char *)(param_1 + 0xc64) != '\0') {
    local_30 = *(undefined4 *)(param_1 + 0xc68);
    local_20 = *(undefined4 *)(param_1 + 0xc6c);
    local_10 = *(undefined4 *)(param_1 + 0xc70);
    local_3c = DAT_001b0bc4 * 1.0;
    local_2c = DAT_001b0bc4 * 0.0;
    local_1c = DAT_001b0bc4 * 0.0;
    local_38 = DAT_001b0bc4 * 0.0;
    local_28 = DAT_001b0bc4 * 1.0;
    local_18 = DAT_001b0bc4 * 0.0;
    local_34 = DAT_001b0bc4 * 0.0;
    local_24 = DAT_001b0bc4 * 0.0;
    local_14 = DAT_001b0bc4 * 1.0;
    FUN_0036e88c(&local_3c,(int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),
                 (int)*(short *)(param_1 + 0xc0),1);
    FUN_0035e240(param_1 + 0xa48,&local_3c,0,0,param_1,0);
  }
  FUN_0035e330(param_1 + 0xc80);
  return;
}

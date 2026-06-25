// OoT3D decomp @ 002bc768  name=FUN_002bc768  size=332

void FUN_002bc768(int param_1,byte param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  undefined auStack_5c [48];
  undefined auStack_2c [2];
  short local_2a;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  *(byte *)(param_1 + 0x2a6) = param_2;
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 700);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x2c0);
  FUN_002d4094(param_1 + 0x254,&local_18,(int)*(short *)(param_1 + 0xbe));
  if ((param_2 & 1) != 0) {
    if (*(int *)(DAT_002bc8b4 + 4) != 0) {
      local_18 = local_18 * DAT_002bc8b8;
      local_10 = local_10 * DAT_002bc8b8;
    }
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + local_18 * *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + local_10 * *(float *)(param_1 + 0x5c);
  }
  if ((param_2 & 2) != 0) {
    if ((param_2 & 4) == 0) {
      local_14 = local_14 * *(float *)(*(int *)(DAT_002bc8bc + param_1) + 8);
    }
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + local_14 * *(float *)(param_1 + 0x58);
  }
  iVar1 = *(int *)(param_1 + 0x2cc) + 0x34;
  FUN_003624c8(iVar1,auStack_2c,0);
  local_20 = DAT_002bc8c4;
  local_24 = DAT_002bc8c0;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + local_2a;
  local_1c = local_24;
  fVar2 = (float)VectorSignedToFloat((int)local_2a,(byte)(in_fpscr >> 0x15) & 3);
  FUN_003625f8(fVar2 * DAT_002bc8c8,auStack_5c,&local_24);
  FUN_0036c174(iVar1,iVar1,auStack_5c);
  return;
}


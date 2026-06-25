// OoT3D decomp @ 001b72b4  name=FUN_001b72b4  size=168

void FUN_001b72b4(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float local_10;
  
  FUN_0035e3a4(param_1 + 0x228,0,(int)*(short *)(param_1 + 0x47e));
  FUN_0035e330(param_1 + 0x228);
  if (*(short *)(param_1 + 0x480) != 0) {
    local_1c = *DAT_001b735c;
    uStack_18 = DAT_001b735c[1];
    uStack_14 = DAT_001b735c[2];
    local_10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x480),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_10 = local_10 * DAT_001b7360;
    uVar1 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
    FUN_003589cc(uVar1,4);
    FUN_00358964(uVar1,4,&local_1c);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001b7368,DAT_001b7364,param_1,1);
  }
  return;
}


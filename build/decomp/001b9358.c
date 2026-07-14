// OoT3D decomp @ 001b9358  name=FUN_001b9358  size=228

void FUN_001b9358(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float local_14;
  
  FUN_0035e3a4(param_1 + 0x228,0,(int)*(short *)(param_1 + 0x480));
  FUN_0035e3a4(param_1 + 0x228,1,*(undefined1 *)(DAT_001b943c + *(short *)(param_1 + 0x482)));
  FUN_0035e330(param_1 + 0x228);
  if (*(short *)(param_1 + 0x484) != 0) {
    local_20 = *DAT_001b9440;
    uStack_1c = DAT_001b9440[1];
    uStack_18 = DAT_001b9440[2];
    local_14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x484),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_14 = local_14 * DAT_001b9444;
    uVar1 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
    FUN_003589cc(uVar1,4);
    FUN_00358964(uVar1,4,&local_20);
    if (*(short *)(param_1 + 0x484) < 0xff) {
      FUN_0036932c();
    }
    else {
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
    }
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001b944c,DAT_001b9448,param_1,0);
  }
  return;
}


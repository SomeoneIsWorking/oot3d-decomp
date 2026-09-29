// OoT3D decomp @ 001b504c  name=FUN_001b504c  size=168

void FUN_001b504c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;

  if (*(int *)(param_1 + 0x3fc) != DAT_001b50f4) {
    bVar1 = *(short *)(param_1 + 0x1c) < 1;
    if (bVar1) {
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),0);
      uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    }
    else {
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
      uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    }
    FUN_0036932c(uVar2,bVar1);
    FUN_0035e3a4(param_1 + 0x228,0,(int)*(short *)(DAT_001b50f8 + param_1));
    FUN_0035e3a4(param_1 + 0x228,2,0);
    FUN_0035e330(param_1 + 0x228);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001b5100,DAT_001b50fc,param_1,0);
  }
  return;
}

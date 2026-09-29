// OoT3D decomp @ 003e0be8  name=FUN_003e0be8  size=92

void FUN_003e0be8(int param_1)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;

  FUN_003731e0(param_1 + 0x208);
  iVar1 = FUN_003736fc(uRam003e0c48,uRam003e0c44,param_1 + 0x208);
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 0x1aa) == 0) goto FUN_001c82dc;
    *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x1aa) + -1;
  }
  if (*(short *)(param_1 + 0x1aa) != 0) {
    return;
  }
FUN_001c82dc:
  FUN_0036e734(param_1 + 0x208,*(undefined4 *)(DAT_001c8320 + 0x24),extraout_r2,extraout_r3,unaff_r4
               ,unaff_lr);
  *(undefined2 *)(DAT_001c8324 + param_1) = 3;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) | 1;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_001c8328;
  return;
}

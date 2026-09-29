// OoT3D decomp @ 001966b8  name=FUN_001966b8  size=324

void FUN_001966b8(int param_1)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;

  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x234) < 2) {
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x400;
    FUN_003705a0(*(undefined4 *)(param_1 + 0x84),DAT_00196770,param_1 + 0x2c);
  }
  else {
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x200;
    FUN_003705a0(*(float *)(param_1 + 0x84) + DAT_00196768,DAT_0019676c,param_1 + 0x2c);
  }
  if (*(short *)(param_1 + 0x234) != 0) {
    return;
  }
  if (DAT_00196774 <= *(float *)(param_1 + 0x84)) {
    FUN_00375bcc(param_1,DAT_00196778);
  }
  FUN_00374a58(DAT_002aa128,param_1 + 0x1a4,
               *(undefined4 *)(DAT_002aa124 + *(short *)(param_1 + 0x1c) * 4));
  if (*(int *)(param_1 + 0x22c) != DAT_002aa12c) {
    *(undefined1 *)(param_1 + 0x231) = 0;
  }
  *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
  *(byte *)(param_1 + 0xefd) = *(byte *)(param_1 + 0xefd) & 0xfd | 1;
  *(undefined1 *)(param_1 + 0xf00) = 0xc;
  *(byte *)(param_1 + 0xefd) = *(byte *)(param_1 + 0xefd) | 4;
  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0x12);
  FUN_00375ed8(param_1,0,0xff,0,uVar1,unaff_r4,unaff_r5,unaff_lr);
  *(undefined4 *)(param_1 + 0x22c) = DAT_002aa130;
  return;
}

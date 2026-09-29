// OoT3D decomp @ 003ee108  name=FUN_003ee108  size=448

void FUN_003ee108(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;

  fVar4 = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 100) = fVar4;
  if (fVar4 < *(float *)(param_1 + 0x74)) {
    *(float *)(param_1 + 100) = *(float *)(param_1 + 0x74);
  }
  fVar4 = DAT_003ee2c8;
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) * DAT_003ee2c8;
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) * fVar4;
  FUN_0036b96c(param_1);
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0x34) + *(short *)(param_1 + 0xbc);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0xbe);
  *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0x38) + *(short *)(param_1 + 0xc0);
  uVar1 = DAT_003ee2cc;
  if ((*(ushort *)(param_1 + 0x1ca) & 1) == 0) {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x1c0);
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0x1c0);
    FUN_00376340(DAT_003ee2d0,DAT_003ee2d0,uVar1,param_2,param_1,5);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x1c0);
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x1c0);
    uVar1 = DAT_003ee2d4;
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      *(ushort *)(param_1 + 0x1ca) = *(ushort *)(param_1 + 0x1ca) | 1;
      fVar4 = (float)FUN_00371e50(uVar1);
      uVar1 = DAT_003ee2dc;
      *(float *)(param_1 + 100) = fVar4 + DAT_003ee2d8;
      uVar2 = FUN_003738a8(uVar1);
      *(undefined4 *)(param_1 + 0x60) = uVar2;
      uVar2 = FUN_003738a8(uVar1);
      uVar1 = DAT_003ee2e4;
      *(undefined4 *)(param_1 + 0x68) = uVar2;
      fVar4 = DAT_003ee2e0;
      fVar3 = (float)FUN_003738a8(uVar1);
      *(short *)(param_1 + 0x34) = (short)(int)(fVar3 * fVar4);
      fVar3 = (float)FUN_003738a8(uVar1);
      *(short *)(param_1 + 0x36) = (short)(int)(fVar3 * fVar4);
      fVar3 = (float)FUN_003738a8(uVar1);
      uVar1 = DAT_003ee2e8;
      *(short *)(param_1 + 0x38) = (short)(int)(fVar3 * fVar4);
      FUN_00375bcc(param_1,uVar1);
    }
  }
  if (*(short *)(param_1 + 0x1c8) < 1) {
    FUN_00374428(param_1);
    return;
  }
  *(short *)(param_1 + 0x1c8) = *(short *)(param_1 + 0x1c8) + -1;
  return;
}

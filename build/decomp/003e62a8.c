// OoT3D decomp @ 003e62a8  name=FUN_003e62a8  size=344

void FUN_003e62a8(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;

  fVar4 = DAT_003e6400;
  if (*(short *)(param_1 + 0x25e) != 0) {
    *(short *)(param_1 + 0x25e) = *(short *)(param_1 + 0x25e) + -1;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x3a0);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar3 * fVar4;
  if (((*(short *)(param_1 + 0x25e) == 0) && (*(float *)(param_1 + 0x98) < fVar3 * DAT_003e6404)) &&
     (uVar2 = in_fpscr & 0xfffffff |
              (uint)(fVar3 * DAT_003e6408 <= ABS(*(float *)(param_1 + 0x9c))) << 0x1d,
     !SUB41(uVar2 >> 0x1d,0))) {
    uVar1 = FUN_0036ae14(param_1 + 0x1d4,0);
    uVar5 = VectorSignedToFloat(uVar1,(byte)(uVar2 >> 0x15) & 3);
    uVar1 = FUN_0036ae14(param_1 + 0x1d4,0);
    fVar4 = (float)VectorSignedToFloat(uVar1,(byte)(uVar2 >> 0x15) & 3);
    FUN_00375c08(fVar4 * DAT_003e640c,DAT_003e6410,uVar5,DAT_003e6410,param_1 + 0x1d4,0,2);
    *(undefined2 *)(param_1 + 0x25e) = 0x17;
    *(byte *)(*(int *)(param_1 + 0x3c4) + 0xb7) = *(byte *)(*(int *)(param_1 + 0x3c4) + 0xb7) | 1;
    *(byte *)(*(int *)(param_1 + 0x3c4) + 0x107) = *(byte *)(*(int *)(param_1 + 0x3c4) + 0x107) | 1;
    *(byte *)(*(int *)(param_1 + 0x3c4) + 0x157) = *(byte *)(*(int *)(param_1 + 0x3c4) + 0x157) | 1;
    *(byte *)(*(int *)(param_1 + 0x3c4) + 0x1a7) = *(byte *)(*(int *)(param_1 + 0x3c4) + 0x1a7) | 1;
    *(byte *)(*(int *)(param_1 + 0x3c4) + 0x1f7) = *(byte *)(*(int *)(param_1 + 0x3c4) + 0x1f7) | 1;
    *(undefined1 *)(param_1 + 0x3bc) = 6;
    uVar1 = DAT_003e6414;
    *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) & 0xfb;
    FUN_00375bcc(param_1,uVar1);
    *(undefined4 *)(param_1 + 600) = DAT_003e6418;
  }
  return;
}

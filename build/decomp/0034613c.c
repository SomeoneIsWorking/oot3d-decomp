// OoT3D decomp @ 0034613c  name=FUN_0034613c  size=156

void FUN_0034613c(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;

  uVar4 = FUN_0036ae14(param_1 + 0x1a4,6);
  fVar1 = DAT_003461d8;
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003461dc,DAT_003461d8,uVar4,DAT_003461d8,param_1 + 0x1a4,6,3);
  uVar4 = DAT_003461e8;
  fVar2 = DAT_003461e4;
  fVar5 = *(float *)(param_1 + 0x1f0);
  if (fVar5 <= fVar1) {
    fVar5 = fVar5 * DAT_003461e0 - DAT_003461e4;
  }
  else {
    fVar5 = DAT_003461e4 + fVar5 * DAT_003461e0;
  }
  *(short *)(param_1 + 0x22c) = (short)(int)fVar5;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  uVar3 = DAT_003461ec;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(float *)(param_1 + 0x70) = fVar1;
  *(float *)(param_1 + 100) = fVar2;
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  return;
}

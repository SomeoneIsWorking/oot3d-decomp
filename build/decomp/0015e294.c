// OoT3D decomp @ 0015e294  name=FUN_0015e294  size=596

void FUN_0015e294(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  float fVar8;

  uVar3 = DAT_0015e560;
  uVar7 = DAT_0015e55c;
  fVar2 = DAT_0015e548;
  piVar1 = DAT_0015e540;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015e540 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0015e544 / fVar8 + DAT_0015e548) < (int)*(short *)(param_1 + 0x1aa)) {
    FUN_003705a0(DAT_0015e550,DAT_0015e54c,param_1 + 0x54);
    FUN_003705a0(DAT_0015e558,DAT_0015e554,param_1 + 0x58);
  }
  else {
    FUN_003705a0(DAT_0015e560,DAT_0015e55c,param_1 + 0x54);
    FUN_003705a0(uVar3,uVar7,param_1 + 0x58);
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  FUN_00376864(param_1);
  fVar8 = DAT_0015e56c;
  FUN_00376340(DAT_0015e56c,*(float *)(param_1 + 0x54) * DAT_0015e564,DAT_0015e568,param_2,param_1,4
              );
  iVar4 = *piVar1;
  iVar5 = (int)*(short *)(iVar4 + 0x110);
  fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)*(short *)(param_1 + 0x1aa) < (int)(DAT_0015e570 / fVar6 + fVar2)) {
    fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    iVar5 = (int)(short)(*(short *)(param_1 + 0x1a8) -
                        (short)(int)(fVar2 + fVar6 * fVar8 * DAT_0015e574));
    uVar7 = UnsignedSaturate(iVar5,8);
    UnsignedDoesSaturate(iVar5,8);
    *(short *)(param_1 + 0x1a8) = (short)uVar7;
  }
  if (100 < *(short *)(param_1 + 0x1a8)) {
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(short *)(param_1 + 0x1aa) < (int)(DAT_0015e578 / fVar8 + fVar2)) {
      FUN_0037632c(param_1,param_1 + 0x1b4);
      fVar8 = DAT_0015e580;
      uVar7 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x54) * DAT_0015e57c),
                                  (byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 500) = uVar7;
      uVar7 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x58) * fVar8),
                                  (byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x1f8) = uVar7;
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1b4);
    }
  }
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0015e584 / fVar8 + fVar2) == (int)*(short *)(param_1 + 0x1aa)) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(short *)(param_1 + 0x1aa) < 1) {
    FUN_00374428(param_1);
    return;
  }
  return;
}

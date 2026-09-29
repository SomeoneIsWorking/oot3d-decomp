// OoT3D decomp @ 0015f418  name=FUN_0015f418  size=400

void FUN_0015f418(int param_1)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;

  uVar4 = DAT_0015f5ac;
  fVar5 = DAT_0015f5a8;
  fVar6 = *(float *)(param_1 + 0x974);
  fVar7 = (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100) * DAT_0015f5a8) -
          *(float *)(param_1 + 0x84);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 == fVar6) << 0x1e | (uint)(fVar6 <= fVar7) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015f5c8 + 0x110),
                                       (byte)(uVar1 >> 0x15) & 3);
    *(short *)(param_1 + 0x930) = (short)(int)(DAT_0015f5cc / fVar5 + DAT_0015f5d0);
    *(undefined4 *)(param_1 + 0x6a0) = DAT_0015f5d4;
    FUN_00144ffc(param_1);
    return;
  }
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x84) + fVar6;
  FUN_003717ac(param_1 + 0x1a4,uVar4,4);
  uVar4 = DAT_0015f5b0;
  sVar3 = (short)(int)*(float *)(param_1 + 0x1f0);
  *(short *)(param_1 + 0x92a) = sVar3;
  *(undefined2 *)(param_1 + 0x93a) = 0;
  *(undefined4 *)(param_1 + 0x6a0) = uVar4;
  if ((sVar3 != 0) && (*(short *)(param_1 + 0x92a) = sVar3 + -1, (short)(sVar3 + -1) == 0)) {
    FUN_003717ac(param_1 + 0x1a4,DAT_0015f5ac,3);
    uVar4 = extraout_r1;
  }
  if ((*(short *)(param_1 + 0x934) != 0) &&
     (sVar3 = *(short *)(param_1 + 0x934) + -1, *(short *)(param_1 + 0x934) = sVar3, sVar3 == 0)) {
    FUN_003717ac(param_1 + 0x1a4,DAT_0015f5ac,3);
    uVar4 = extraout_r1_00;
  }
  sVar3 = *(short *)(param_1 + 0x93a) + 1;
  if (sVar3 == 0xe) {
    uVar4 = DAT_0015f5b4;
  }
  *(short *)(param_1 + 0x93a) = sVar3;
  if (sVar3 == 0xe) {
    FUN_00375bcc(param_1,uVar4);
  }
  uVar4 = DAT_0015f5b8;
  if (*(float *)(param_1 + 0x2c) <= *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x974)) {
    FUN_0036e168(fVar5,DAT_0015f5c4,DAT_0015f5c0,DAT_0015f5bc,param_1 + 100);
    return;
  }
  *(undefined2 *)(param_1 + 0x93a) = 0;
  *(undefined4 *)(param_1 + 0x6a0) = uVar4;
  return;
}

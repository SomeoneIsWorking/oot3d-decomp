// OoT3D decomp @ 00458a74  name=FUN_00458a74  size=740

void FUN_00458a74(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;

  iVar4 = DAT_00478d74;
  fVar3 = DAT_00478d70;
  uVar6 = (uint)*(ushort *)(DAT_00458a9c + param_1);
  bVar8 = 0x11 < uVar6 - 2;
  if (bVar8) {
    uVar6 = uVar6 - 0x15;
  }
  if (bVar8 && 2 < uVar6) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x20ac);
  uVar2 = *(undefined1 *)(DAT_00478d74 + 9);
  fVar9 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar7 + 0x30),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar7 + 0x2c),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar7 + 0x28),
                                      (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(fVar11 - DAT_00478d70,fVar10 + DAT_00478d70,fVar9 - DAT_00478d70,DAT_00478d78,uVar2,
               uVar2,uVar2,0xff,0);
  uVar2 = *(undefined1 *)(iVar4 + 9);
  fVar9 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar7 + 0x30),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar7 + 0x2c),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar7 + 0x28),
                                      (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(fVar11 + fVar3,fVar10 + fVar3,fVar9 + fVar3,DAT_00478d7c,uVar2,uVar2,uVar2,0xff,0);
  if (*(byte *)(iVar4 + 9) < 0xfe) {
    *(byte *)(iVar4 + 9) = *(byte *)(iVar4 + 9) + 2;
  }
  iVar7 = FUN_00334370(param_1);
  if (iVar7 == 0) {
    *(undefined1 *)(param_1 + 0x3261) = 1;
    *(undefined1 *)(param_1 + 0x3262) = 0;
    *(undefined1 *)(param_1 + 0x3263) = 0;
    *(undefined1 *)(param_1 + 0x3264) = 0;
    *(undefined1 *)(param_1 + 0x3265) = *(undefined1 *)(iVar4 + 9);
    return;
  }
  if (-0xff < *(short *)(param_1 + 0x31fc)) {
    *(short *)(param_1 + 0x31fc) = *(short *)(param_1 + 0x31fc) + -0xc;
    *(short *)(param_1 + 0x3202) = *(short *)(param_1 + 0x3202) + -0xc;
  }
  sVar1 = *(short *)(param_1 + 0x3208) + -0x14;
  *(short *)(param_1 + 0x3208) = sVar1;
  if (sVar1 < -0xff) {
    *(undefined2 *)(param_1 + 0x3208) = 0xff01;
  }
  if (-0xff < *(short *)(param_1 + 0x31fe)) {
    *(short *)(param_1 + 0x31fe) = *(short *)(param_1 + 0x31fe) + -0xc;
    *(short *)(param_1 + 0x3204) = *(short *)(param_1 + 0x3204) + -0xc;
  }
  sVar1 = *(short *)(param_1 + 0x320a) + -0x14;
  *(short *)(param_1 + 0x320a) = sVar1;
  if (sVar1 < -0xff) {
    *(undefined2 *)(param_1 + 0x320a) = 0xff01;
  }
  sVar1 = *(short *)(param_1 + 0x3200);
  if (-0xff < sVar1) {
    *(short *)(param_1 + 0x3200) = sVar1 + -0xc;
    *(short *)(param_1 + 0x3206) = *(short *)(param_1 + 0x3206) + -0xc;
  }
  fVar9 = DAT_00478d8c;
  sVar1 = *(short *)(param_1 + 0x320c) + -0x14;
  *(short *)(param_1 + 0x320c) = sVar1;
  if (sVar1 < -0xff) {
    *(undefined2 *)(param_1 + 0x320c) = 0xff01;
  }
  fVar10 = DAT_00478d88;
  piVar5 = DAT_00478d84;
  if (DAT_00478d80 < (int)(*(float *)(param_1 + 0x323c) + *(float *)(param_1 + 0x3214))) {
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00478d84 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat((int)(fVar9 + fVar11 * DAT_00478d90 * DAT_00478d88),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3214) = *(float *)(param_1 + 0x3214) - fVar11;
  }
  if (0x2d0 < (int)((uint)*(ushort *)(param_1 + 0x3240) + (int)*(short *)(param_1 + 0x320e))) {
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x320e) =
         *(short *)(param_1 + 0x320e) - (short)(int)(fVar9 + fVar11 * fVar3 * fVar10);
  }
  return;
}

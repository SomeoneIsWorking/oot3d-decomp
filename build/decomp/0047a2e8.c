// OoT3D decomp @ 0047a2e8  name=FUN_0047a2e8  size=704

void FUN_0047a2e8(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  float fVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  fVar5 = DAT_0047a5ac;
  iVar9 = DAT_0047a5a8;
  iVar8 = *(int *)(param_1 + 0x20ac);
  bVar2 = *(byte *)(DAT_0047a5a8 + 9);
  if (bVar2 < 3) {
    *(undefined1 *)(DAT_0047a5a8 + 9) = 0;
  }
  else {
    bVar6 = bVar2 - 3;
    *(byte *)(DAT_0047a5a8 + 9) = bVar2 - 3;
    if (bVar6 == 1) {
      FUN_0034fbe8(param_1,param_1 + 0xa70,*(undefined4 *)(iVar9 + 0x40));
      FUN_0034fbe8(param_1,param_1 + 0xa70,*(undefined4 *)(iVar9 + 0x44));
    }
    else if (1 < bVar6) {
      fVar10 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar8 + 0x30),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar8 + 0x2c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar8 + 0x28),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003591e4(fVar12 - fVar5,fVar11 + fVar5,fVar10 - fVar5,DAT_0047a5b0,bVar6,bVar6,bVar6,0xff,
                   0);
      uVar3 = *(undefined1 *)(iVar9 + 9);
      fVar10 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar8 + 0x30),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar8 + 0x2c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(iVar8 + 0x28),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003591e4(fVar12 + fVar5,fVar11 + fVar5,fVar10 + fVar5,DAT_0047a5b4,uVar3,uVar3,uVar3,0xff,
                   0);
    }
  }
  iVar8 = FUN_00334370(param_1);
  if (iVar8 == 0) {
    *(undefined1 *)(param_1 + 0x3261) = 1;
    *(undefined1 *)(param_1 + 0x3262) = 0;
    *(undefined1 *)(param_1 + 0x3263) = 0;
    *(undefined1 *)(param_1 + 0x3264) = 0;
    cVar4 = *(char *)(iVar9 + 9);
    *(char *)(param_1 + 0x3265) = cVar4;
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x3261) = 0;
    }
    return;
  }
  iVar9 = 0;
  do {
    iVar8 = param_1 + iVar9 * 2;
    FUN_00375a18(iVar8 + 0x31fc,0,5,0xc,1);
    FUN_00375a18(iVar8 + 0x3202,0,5,0xc,1);
    sVar7 = *(short *)(iVar8 + 0x3208) + 0x14;
    *(short *)(iVar8 + 0x3208) = sVar7;
    if (0 < sVar7) {
      *(undefined2 *)(iVar8 + 0x3208) = 0;
    }
    fVar12 = DAT_0047a5c8;
    fVar11 = DAT_0047a5c4;
    fVar10 = DAT_0047a5c0;
    iVar9 = (int)(short)((short)iVar9 + 1);
  } while (iVar9 < 3);
  iVar9 = *DAT_0047a5b8;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)VectorSignedToFloat((int)(DAT_0047a5c4 + fVar13 * DAT_0047a5bc * DAT_0047a5c0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar13 = *(float *)(param_1 + 0x3214) + fVar13;
  *(float *)(param_1 + 0x3214) = fVar13;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar12) << 0x1f | (uint)(fVar13 == fVar12) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar13) || NAN(fVar12))) {
    fVar13 = fVar12;
  }
  *(float *)(param_1 + 0x3214) = fVar13;
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),(byte)(uVar1 >> 0x15) & 3);
  sVar7 = (short)(int)(fVar11 + fVar12 * fVar5 * fVar10) + *(short *)(param_1 + 0x320e);
  *(short *)(param_1 + 0x320e) = sVar7;
  if (0 < sVar7) {
    *(undefined2 *)(param_1 + 0x320e) = 0;
  }
  return;
}

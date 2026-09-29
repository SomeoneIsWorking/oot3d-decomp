// OoT3D decomp @ 003a90f0  name=FUN_003a90f0  size=668

void FUN_003a90f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  FUN_0031a3dc();
  fVar11 = *(float *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003a938c;
  FUN_00376340(DAT_003a9398,DAT_003a9394,DAT_003a9390,param_2,param_1,7);
  *(float *)(param_1 + 100) = fVar11;
  fVar3 = DAT_003a93ac;
  fVar8 = DAT_003a93a0;
  fVar10 = DAT_003a939c;
  if (*(int *)(param_1 + 0xcc0) == 0) {
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x74) == DAT_003a939c) << 0x1e;
    bVar7 = false;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x6c) == DAT_003a939c) << 0x1e;
      bVar7 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (bVar7) {
      *(undefined4 *)(param_1 + 0xcc0) = 1;
      *(float *)(param_1 + 0x60) = fVar10;
      *(float *)(param_1 + 100) = fVar10;
      *(float *)(param_1 + 0x68) = fVar10;
      *(float *)(param_1 + 0x6c) = fVar10;
      *(float *)(param_1 + 0x70) = fVar10;
      *(float *)(param_1 + 0x74) = fVar10;
      fVar8 = (*(float *)(param_1 + 0x88) - DAT_003a93a4) * fVar8;
      *(float *)(param_1 + 0xcc8) = fVar8;
      *(float *)(param_1 + 0xcc4) = *(float *)(param_1 + 0x2c) + fVar8;
      *(undefined2 *)(param_1 + 0xccc) = 0;
    }
    else {
      fVar9 = *(float *)(param_1 + 0x74) * DAT_003a93a8;
      fVar11 = fVar11 * DAT_003a93a8;
      *(float *)(param_1 + 0x74) = fVar9;
      *(float *)(param_1 + 100) = fVar11;
      *(float *)(param_1 + 0x70) = fVar10;
      if ((uint)fVar9 <= (uint)fVar3) {
        *(float *)(param_1 + 0x74) = fVar10;
        *(float *)(param_1 + 100) = fVar10;
      }
      iVar4 = DAT_003a93b0;
      fVar8 = *(float *)(param_1 + 0x6c) * fVar8;
      *(float *)(param_1 + 0x6c) = fVar8;
      if ((int)fVar8 <= iVar4) {
        *(float *)(param_1 + 0x6c) = fVar10;
      }
      fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      *(float *)(param_1 + 0x60) = fVar8 * *(float *)(param_1 + 0x6c);
      fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      *(float *)(param_1 + 0x68) = fVar8 * *(float *)(param_1 + 0x6c);
      FUN_0036b96c(param_1);
    }
  }
  else if (*(int *)(param_1 + 0xcc0) == 1) {
    fVar8 = *(float *)(param_1 + 0xcc8);
    if ((int)fVar8 < 0x3f800001) {
      *(float *)(param_1 + 0x60) = DAT_003a939c;
      *(float *)(param_1 + 100) = fVar10;
      *(float *)(param_1 + 0x68) = fVar10;
      *(float *)(param_1 + 0x6c) = fVar10;
      *(float *)(param_1 + 0x70) = fVar10;
      *(float *)(param_1 + 0x74) = fVar10;
      *(undefined4 *)(param_1 + 0xcc0) = 2;
      *(float *)(param_1 + 0xcd0) = fVar10;
    }
    else {
      fVar9 = *(float *)(param_1 + 0xcc4);
      fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xccc));
      fVar3 = DAT_003a93b4;
      *(float *)(param_1 + 0x2c) = fVar9 - fVar8 * fVar11;
      *(short *)(param_1 + 0xccc) = *(short *)(param_1 + 0xccc) + 1000;
      *(float *)(param_1 + 0xcc8) = *(float *)(param_1 + 0xcc8) * fVar3;
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0xcd0) + DAT_003a93b8;
    *(float *)(param_1 + 0xcd0) = fVar8;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar10) << 0x1f | (uint)(fVar8 == fVar10) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar8) || NAN(fVar10)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(undefined4 *)(param_1 + 0xcc0) = 3;
    }
  }
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
    if (*(int *)(param_1 + 0xcc0) == 3) {
      *(undefined4 *)(param_1 + 0xbbc) = 0x1e;
      *(float *)(param_1 + 0x60) = fVar10;
      *(float *)(param_1 + 100) = fVar10;
      piVar6 = DAT_003a93c0;
      *(float *)(param_1 + 0x68) = fVar10;
      *(float *)(param_1 + 0x6c) = fVar10;
      uVar5 = DAT_003a93bc;
      *(float *)(param_1 + 0x74) = fVar10;
      *(undefined4 *)(param_1 + 0x70) = uVar5;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x1478),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x74) = DAT_003a93c8 - fVar10 * DAT_003a93c4;
    }
  }
  else {
    *(float *)(param_1 + 0x60) = fVar10;
    *(float *)(param_1 + 100) = fVar10;
    *(float *)(param_1 + 0x68) = fVar10;
    *(float *)(param_1 + 0x6c) = fVar10;
    *(float *)(param_1 + 0x70) = fVar10;
    *(float *)(param_1 + 0x74) = fVar10;
    FUN_0034df30(param_1,param_2);
    *(undefined4 *)(param_1 + 0xbbc) = 0x1b;
    *(undefined4 *)(param_1 + 0xcbc) = 0;
  }
  FUN_00319f20(param_1,param_2);
  return;
}

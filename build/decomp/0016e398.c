// OoT3D decomp @ 0016e398  name=FUN_0016e398  size=192

float FUN_0016e398(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  iVar3 = FUN_00371e40();
  fVar5 = DAT_0016e460;
  uVar2 = DAT_0016e45c;
  fVar7 = DAT_0016e458;
  if (iVar3 == 0) {
    *(float *)(param_1 + 0x280) = DAT_0016e460;
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      pfVar4 = (float *)(param_1 + 0x6c);
      fVar9 = *pfVar4;
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar7) << 0x1e;
      if (!SUB41(uVar1 >> 0x1e,0)) {
        iVar3 = (int)*(short *)(*DAT_0036e27c + 0x110);
        fVar11 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
        fVar10 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
        fVar12 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
        fVar8 = fVar11 * fVar7 * DAT_0036e280;
        fVar11 = fVar12 * DAT_0016e464 * DAT_0036e280;
        fVar12 = fVar7 - fVar9;
        fVar5 = fVar12 * fVar10 * fVar5 * DAT_0036e280;
        if ((int)ABS(fVar12) < DAT_0036e284) {
          fVar5 = fVar12;
        }
        if ((fVar8 <= fVar5) || (fVar10 = -fVar8, fVar5 <= fVar10)) {
          if (fVar11 < fVar5) {
            fVar5 = fVar11;
          }
          if (fVar5 < -fVar11) {
            fVar5 = -fVar11;
          }
          *pfVar4 = fVar9 + fVar5;
        }
        else {
          if (fVar5 < fVar8) {
            fVar9 = fVar9 + fVar8;
            *pfVar4 = fVar9;
            if (fVar7 < fVar9) {
              fVar9 = fVar7;
            }
            *pfVar4 = fVar9;
            fVar5 = fVar8;
          }
          if (fVar10 < fVar5) {
            fVar10 = *pfVar4 + fVar10;
            *pfVar4 = fVar10;
            if (fVar10 <= fVar7) {
              fVar10 = fVar7;
            }
            *pfVar4 = fVar10;
          }
        }
      }
      return ABS(fVar7 - *pfVar4);
    }
    fVar7 = (float)FUN_0036e168(fVar7,fVar5,DAT_0016e468,param_1 + 0x6c);
    fVar5 = (float)(*(ushort *)(param_1 + 0x90) & 2);
    bVar6 = (*(ushort *)(param_1 + 0x90) & 2) != 0;
    if (bVar6) {
      fVar5 = *(float *)(param_1 + 100);
      fVar7 = fVar5;
    }
    if (bVar6 && 0xc0c00000 < (uint)fVar5) {
      FUN_00357680(param_2,param_1);
      fVar7 = *(float *)(param_1 + 100) * DAT_0016e46c;
      *(float *)(param_1 + 100) = fVar7;
      return fVar7;
    }
    if (3 < *(short *)(param_1 + 0x26c)) {
      fVar7 = (float)FUN_0034df30(param_1,param_2);
      return fVar7;
    }
  }
  else {
    *(float *)(param_1 + 0x280) = DAT_0016e458;
    *(undefined4 *)(param_1 + 0x270) = uVar2;
    *(undefined1 *)(param_1 + 3) = 0xff;
  }
  return fVar7;
}

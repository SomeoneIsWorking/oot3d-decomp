// OoT3D decomp @ 00498b0c  name=FUN_00498b0c  size=420

void FUN_00498b0c(float param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined4 in_fpscr;
  byte bVar12;
  float fVar13;
  float fVar14;
  float extraout_s3;

  bVar12 = (byte)((uint)in_fpscr >> 0x18);
  iVar9 = *(int *)(param_2 + 4);
  bVar11 = iVar9 == 0;
  bVar10 = true;
  fVar13 = param_1;
  if (!bVar11) {
    bVar1 = (byte)(((uint)(*(float *)(param_2 + 0x14) == DAT_00498cb0) << 0x1e) >> 0x18);
    bVar2 = (byte)(((uint)(DAT_00498cb0 <= *(float *)(param_2 + 0x14)) << 0x1d) >> 0x18);
    bVar12 = bVar1 | bVar2;
    bVar11 = (bool)(bVar1 >> 6);
    bVar10 = (bool)(bVar2 >> 5);
    fVar13 = DAT_00498cb0;
  }
  if (bVar10 && !bVar11) {
    bVar11 = *(char *)(param_2 + 0xc) == '\0';
    bVar10 = true;
    if (!bVar11) {
      bVar12 = (byte)(((uint)(param_1 == fVar13) << 0x1e) >> 0x18) |
               (byte)(((uint)(fVar13 <= param_1) << 0x1d) >> 0x18);
    }
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x44) = 0;
    if (!bVar11) {
      bVar11 = (bool)(bVar12 >> 6 & 1);
      bVar10 = (bool)(bVar12 >> 5 & 1);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(undefined4 *)(param_2 + 0x54) = 0;
    if (!bVar10 || bVar11) {
      param_1 = fVar13;
    }
    if (*(char *)(param_2 + 0x18) == '\0') {
      if (*(float *)(param_2 + 0x14) <= *(float *)(param_2 + 0x10)) {
        *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x14);
        *(undefined1 *)(param_2 + 0xc) = 0;
      }
    }
    else {
      fVar14 = *(float *)(param_2 + 0x14);
      if (fVar14 <= fVar13) {
        *(float *)(param_2 + 0x10) = fVar13;
      }
      else {
        fVar13 = *(float *)(param_2 + 0x10);
        while (fVar14 <= fVar13) {
          fVar13 = *(float *)(param_2 + 0x10) - fVar14;
          *(float *)(param_2 + 0x10) = fVar13;
        }
      }
    }
    iVar8 = 0;
    do {
      piVar7 = (int *)(*(int *)(param_2 + 4) + iVar8 * 8 + 0xc);
      if (*piVar7 != 0) {
        iVar5 = *piVar7 + iVar9;
        uVar6 = 0;
        if (piVar7[1] != 0) {
          do {
            uVar4 = 0;
            if (*(int *)(iVar5 + 4) != 1) {
              do {
                pfVar3 = (float *)(iVar5 + 8 + uVar4 * 0x10);
                if ((*pfVar3 <= *(float *)(param_2 + 0x10)) &&
                   (*(float *)(param_2 + 0x10) <= pfVar3[4])) {
                  FUN_004a0ac8(param_2,iVar8,iVar5);
                  param_1 = extraout_s3;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < *(int *)(iVar5 + 4) - 1U);
            }
            uVar6 = uVar6 + 1;
            iVar5 = iVar5 + 8 + *(int *)(iVar5 + 4) * 0x10;
          } while (uVar6 < (uint)piVar7[1]);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x14);
    *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + param_1;
  }
  return;
}

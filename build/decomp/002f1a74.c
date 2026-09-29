// OoT3D decomp @ 002f1a74  name=FUN_002f1a74  size=660

void FUN_002f1a74(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;

  iVar1 = DAT_002f1d2c;
  if (*(int *)(DAT_002f1d28 + *(int *)(DAT_002f1d2c + 0x38) * 4) != 0) {
    iVar22 = *(int *)(DAT_002f1d2c + 0x30);
    switch(iVar22) {
    case 0x11:
      iVar22 = 0;
      break;
    case 0x12:
      iVar22 = 1;
      break;
    case 0x13:
      iVar22 = 2;
      break;
    case 0x14:
      iVar22 = 3;
      break;
    case 0x15:
      iVar22 = 4;
      break;
    case 0x16:
      iVar22 = 5;
      break;
    case 0x17:
      iVar22 = 6;
      break;
    case 0x18:
      iVar22 = 7;
    }
    iVar21 = *(int *)(*(int *)(DAT_002f1d30 + iVar22 * 4) + *(int *)(DAT_002f1d2c + 0x38) * 4);
    iVar17 = FUN_0033de14(iVar21 << 6);
    fVar16 = DAT_002f1d70;
    fVar15 = DAT_002f1d6c;
    fVar14 = DAT_002f1d68;
    fVar13 = DAT_002f1d64;
    iVar12 = DAT_002f1d60;
    iVar11 = DAT_002f1d5c;
    fVar10 = DAT_002f1d58;
    fVar9 = DAT_002f1d54;
    fVar8 = DAT_002f1d50;
    fVar7 = DAT_002f1d4c;
    fVar6 = DAT_002f1d48;
    fVar5 = DAT_002f1d44;
    fVar4 = DAT_002f1d40;
    fVar3 = DAT_002f1d3c;
    piVar2 = DAT_002f1d38;
    iVar18 = 0;
    if (0 < iVar21) {
      iVar22 = DAT_002f1d34 + iVar22 * 0xe0;
      do {
        iVar20 = (int)*(short *)(iVar22 + *(int *)(iVar1 + 0x38) * 0x1c + iVar18 * 2);
        fVar23 = fVar16;
        fVar25 = fVar10;
        fVar24 = fVar10;
        fVar26 = fVar16;
        if (param_1 == 0) {
          if ((iVar20 == *(int *)(iVar1 + 0x3c)) &&
             ((int)*(short *)(*piVar2 + 0xf50) == *(int *)(iVar1 + 0x38))) {
            iVar20 = *(int *)(iVar1 + 0x54);
            if (iVar20 < 0x12) {
              fVar23 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
              fVar23 = fVar4 + fVar23 * fVar3;
              fVar24 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
              fVar24 = fVar6 + fVar24 * fVar5;
            }
            else {
              fVar23 = (float)VectorSignedToFloat(iVar20 + -0x12,(byte)(in_fpscr >> 0x15) & 3);
              fVar23 = fVar10 + fVar23 * fVar7;
              fVar24 = (float)VectorSignedToFloat(iVar20 + -0x12,(byte)(in_fpscr >> 0x15) & 3);
              fVar24 = fVar9 + fVar24 * fVar8;
            }
          }
          else if (((*(uint *)(iVar12 + iVar20 * 4) &
                    *(uint *)(iVar11 + (uint)*(ushort *)(iVar11 + 0x1592) * 0x1c + 0x100)) == 0) &&
                  (fVar25 = fVar16, fVar24 = fVar16,
                  ((uint)*(byte *)((uint)*(ushort *)(iVar11 + 0x1592) + iVar11 + 0xc0) &
                  *(uint *)(iVar12 + 8)) != 0)) {
            fVar23 = fVar14;
            fVar25 = fVar15;
            fVar26 = fVar13;
          }
        }
        pfVar19 = (float *)(iVar17 + iVar18 * 0x40);
        iVar18 = iVar18 + 1;
        *pfVar19 = fVar26;
        pfVar19[1] = fVar23;
        pfVar19[2] = fVar24;
        pfVar19[3] = fVar25;
        pfVar19[4] = fVar26;
        pfVar19[5] = fVar23;
        pfVar19[6] = fVar24;
        pfVar19[7] = fVar25;
        pfVar19[8] = fVar26;
        pfVar19[9] = fVar23;
        pfVar19[10] = fVar24;
        pfVar19[0xb] = fVar25;
        pfVar19[0xc] = fVar26;
        pfVar19[0xd] = fVar23;
        pfVar19[0xe] = fVar24;
        pfVar19[0xf] = fVar25;
      } while (iVar18 < iVar21);
    }
    FUN_002e7054(*(undefined4 *)(DAT_002f1d74 + *(int *)(iVar1 + 0x38) * 4),iVar17,iVar21,0);
    iVar22 = FUN_002e70d4();
    if ((iVar22 == 0) &&
       (iVar22 = *(int *)(iVar1 + 0x54) + 1, *(int *)(iVar1 + 0x54) = iVar22, 0x24 < iVar22)) {
      *(undefined4 *)(iVar1 + 0x54) = 0;
    }
    FUN_0033ddd4(iVar17);
    return;
  }
  return;
}

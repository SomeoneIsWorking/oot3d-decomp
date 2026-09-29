// OoT3D decomp @ 003cddd8  name=FUN_003cddd8  size=880

void FUN_003cddd8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  byte *pbVar11;
  float fVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float local_38 [2];

  fVar21 = DAT_003ce158;
  iVar9 = DAT_003ce154;
  uVar5 = DAT_003ce150;
  uVar4 = DAT_003ce14c;
  fVar12 = (float)(DAT_003ce154 + -0x1000000);
  if (*(short *)(param_1 + 0xb74) == 2) {
    uVar7 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar5,fVar21,uVar7,uVar4,param_1 + 0x1a4,3,0);
    iVar8 = DAT_003ce160;
    psVar10 = *(short **)(DAT_003ce15c + param_2);
    do {
      if (psVar10 == (short *)0x0) {
LAB_003cdec0:
        uVar4 = DAT_003ce164;
        *(undefined2 *)(param_1 + 0xb74) = 0;
        *(undefined4 *)(param_1 + 0xb18) = uVar4;
        return;
      }
      if ((*psVar10 == iVar8) && (*(short **)(param_1 + 0xba4) != psVar10)) {
        fVar21 = *(float *)(psVar10 + 0x16) - *(float *)(param_1 + 0x84);
        iVar16 = FUN_00357eac(param_1,psVar10);
        bVar14 = SBORROW4(iVar16,iVar9);
        iVar19 = iVar16 - iVar9;
        bVar13 = iVar16 == iVar9;
        if (iVar16 <= iVar9) {
          bVar14 = SBORROW4((int)fVar21,(int)fVar12);
          iVar19 = (int)fVar21 - (int)fVar12;
          bVar13 = fVar21 == fVar12;
        }
        if (bVar13 || iVar19 < 0 != bVar14) {
          *(short **)(param_1 + 0xba4) = psVar10;
          if (-1 < psVar10[0xe]) {
            *(undefined1 *)(param_1 + 0xb9c) = 1;
          }
          goto LAB_003cdec0;
        }
      }
      psVar10 = *(short **)(psVar10 + 0x98);
    } while( true );
  }
  local_38[0] = *DAT_003ce168;
  local_38[1] = DAT_003ce168[1];
  fVar17 = *(float *)(param_1 + 0x1e0);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar17 < DAT_003ce158) << 0x1f;
  uVar15 = uVar1 | (uint)(NAN(fVar17) || NAN(DAT_003ce158)) << 0x1c;
  if ((((byte)(uVar1 >> 0x1f) == ((byte)(uVar15 >> 0x1c) & 1)) && ((int)fVar17 < DAT_003ce16c)) ||
     ((uint)((int)fVar17 + DAT_003ce170) < DAT_003ce174)) {
    FUN_00375bcc(param_1,DAT_003ce178);
  }
  fVar17 = fVar21;
  if (*(int *)(param_1 + 0x1d4) == 0) {
    fVar18 = *(float *)(param_1 + 0x1e0);
    fVar20 = local_38[0] + DAT_003ce17c;
    uVar1 = uVar15 & 0xfffffff;
    uVar2 = uVar1 | (uint)(fVar20 < fVar18) << 0x1f | (uint)(fVar20 == fVar18) << 0x1e;
    uVar15 = uVar2 | (uint)(NAN(fVar20) || NAN(fVar18)) << 0x1c;
    bVar3 = (byte)(uVar2 >> 0x18);
    if (((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar15 >> 0x1c) & 1)) ||
       (uVar15 = uVar1 | (uint)(local_38[0] == fVar18) << 0x1e |
                 (uint)(fVar18 <= local_38[0]) << 0x1d, bVar3 = (byte)(uVar15 >> 0x18),
       (bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6))) {
      fVar20 = local_38[1] + DAT_003ce17c;
      uVar1 = uVar15 & 0xfffffff;
      uVar2 = uVar1 | (uint)(fVar20 < fVar18) << 0x1f | (uint)(fVar20 == fVar18) << 0x1e;
      uVar15 = uVar2 | (uint)(NAN(fVar20) || NAN(fVar18)) << 0x1c;
      bVar3 = (byte)(uVar2 >> 0x18);
      if (((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar15 >> 0x1c) & 1)) ||
         (uVar15 = uVar1 | (uint)(local_38[1] == fVar18) << 0x1e |
                   (uint)(fVar18 <= local_38[1]) << 0x1d, bVar3 = (byte)(uVar15 >> 0x18),
         (bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6))) goto LAB_003cdfa8;
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
    fVar17 = (float)FUN_002cfca0((int)(short)(int)((fVar18 - local_38[iVar8]) * DAT_003ce180));
    fVar17 = fVar17 * DAT_003ce184;
  }
LAB_003cdfa8:
  *(float *)(param_1 + 0x6c) = fVar17;
  if (-1 < *(short *)(param_1 + 0x1c)) {
    pbVar11 = *(byte **)(DAT_003ce188 + param_2);
    psVar10 = (short *)(*(int *)(pbVar11 + 4) + *(short *)(param_1 + 0xbbc) * 6);
    fVar17 = (float)VectorSignedToFloat((int)*psVar10,(byte)(uVar15 >> 0x15) & 3);
    fVar17 = fVar17 - *(float *)(param_1 + 0x28);
    fVar20 = (float)VectorSignedToFloat((int)psVar10[2],(byte)(uVar15 >> 0x15) & 3);
    fVar20 = fVar20 - *(float *)(param_1 + 0x30);
    fVar18 = (float)FUN_003696ec();
    local_38[0] = 1.4013e-45;
    FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar18 * DAT_003ce18c),10,1000);
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0xc0);
    if (((int)(fVar17 * fVar17 + fVar20 * fVar20) < (int)fVar12) &&
       (sVar6 = *(short *)(param_1 + 0xbbc) + 1, *(short *)(param_1 + 0xbbc) = sVar6,
       (short)(ushort)*pbVar11 <= sVar6)) {
      *(undefined2 *)(param_1 + 0xbbc) = 0;
    }
  }
  local_38[0] = 1.4013e-45;
  FUN_00375a18(param_1 + 0xbba,0,6,1000);
  if (*(int *)(param_1 + 0xba4) != 0) {
    fVar17 = *(float *)(*(int *)(param_1 + 0xba4) + 0x2c) - *(float *)(param_1 + 0x84);
    iVar19 = FUN_00357eac(param_1);
    bVar14 = SBORROW4(iVar19,iVar9);
    iVar8 = iVar19 - iVar9;
    bVar13 = iVar19 == iVar9;
    if (iVar19 <= iVar9) {
      bVar14 = SBORROW4((int)fVar17,(int)fVar12);
      iVar8 = (int)fVar17 - (int)fVar12;
      bVar13 = fVar17 == fVar12;
    }
    if (!bVar13 && iVar8 < 0 == bVar14) {
      *(undefined4 *)(param_1 + 0xba4) = 0;
    }
  }
  if (*(short *)(param_1 + 0xbb0) != 0) {
    *(short *)(param_1 + 0xbb0) = *(short *)(param_1 + 0xbb0) + -1;
  }
  iVar9 = FUN_003158ac(param_1);
  if ((iVar9 == 0) && (*(short *)(param_1 + 0xbb0) != 0)) {
    return;
  }
  uVar7 = FUN_0036ae14(param_1 + 0x1a4,1);
  uVar7 = VectorSignedToFloat(uVar7,(byte)(uVar15 >> 0x15) & 3);
  FUN_00375c08(uVar5,fVar21,uVar7,uVar4,param_1 + 0x1a4,1,0);
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}

// OoT3D decomp @ 0039af68  name=FUN_0039af68  size=620

void FUN_0039af68(int param_1,int param_2)

{
  undefined1 uVar1;
  float fVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  uint extraout_r1;
  uint uVar9;
  int extraout_r1_00;
  int iVar10;
  float *pfVar11;
  short *psVar12;
  short *psVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 unaff_d8;
  undefined4 uVar19;
  undefined4 uStack_24;

  uVar8 = (undefined4)unaff_d8;
  uStack_24 = (undefined4)((ulonglong)unaff_d8 >> 0x20);
  FUN_0031a3dc();
  uVar18 = DAT_0039b21c;
  psVar13 = (short *)(param_1 + 0xcee);
  psVar12 = (short *)(param_1 + 0xbf6);
  FUN_00375a18(param_1 + 0xcec,0,0x28,DAT_0039b21c,100);
  FUN_00375a18(param_1 + 0xcf4,0,0x28,uVar18,100);
  sVar3 = *(short *)(param_1 + 0xc04);
  if ((sVar3 == 0) ||
     (sVar3 = sVar3 + -1, *(short *)(param_1 + 0xc04) = sVar3, uVar19 = DAT_0039b228,
     uVar18 = DAT_0039b224, sVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(10,0x19);
  }
  if (*(int *)(param_1 + 0xc08) == 0) {
    FUN_00375a18(psVar12,(int)-*psVar13,1,400,400);
    uVar19 = 100;
    sVar3 = *psVar12;
    if (sVar3 < 0) {
      sVar3 = -sVar3;
    }
    FUN_00375a18(psVar13,0,3,(int)sVar3,100);
  }
  else {
    if (*(int *)(param_1 + 0xc08) == 1) {
      FUN_00375a18(psVar12,(int)(short)((short)DAT_0039b224 - *psVar13),1,400,400);
      sVar3 = *psVar12;
    }
    else {
      FUN_00375a18(psVar12,(int)(short)((short)DAT_0039b228 - *psVar13),1,400,400);
      sVar3 = *psVar12;
      uVar18 = uVar19;
    }
    if (sVar3 < 0) {
      sVar3 = -sVar3;
    }
    uVar19 = 100;
    FUN_00375a18(psVar13,uVar18,3,(int)sVar3,100);
  }
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  uVar18 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039b22c;
  FUN_00376340(DAT_0039b238,DAT_0039b234,DAT_0039b230,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar18;
  iVar5 = DAT_0039b23c;
  bVar14 = (*(ushort *)(param_1 + 0x90) & 1) != 0;
  uVar9 = extraout_r1;
  if (bVar14) {
    uVar9 = (uint)*(byte *)(param_1 + 0x81);
  }
  if ((((bVar14 && uVar9 != 0x32) &&
       (psVar12 = (short *)FUN_00359690(param_2 + 0xa98), psVar12 != (short *)0x0)) &&
      (*psVar12 == 0xe6)) && (((uint)(ushort)psVar12[0xe] << 0x12) >> 0x1a == 0x38)) {
    uVar4 = *(ushort *)(iVar5 + 0x38) | 1;
  }
  else {
    uVar4 = *(ushort *)(iVar5 + 0x38) & 0xfffe;
  }
  *(ushort *)(iVar5 + 0x38) = uVar4;
  FUN_003264c8(param_1);
  bVar14 = (*(ushort *)(iVar5 + 0x38) & 0x80) == 0;
  iVar10 = extraout_r1_00;
  if (bVar14) {
    iVar10 = (int)*(char *)(DAT_0039b240 + param_2);
  }
  if (bVar14 && iVar10 == 2) {
    *(ushort *)(iVar5 + 0x38) = *(ushort *)(iVar5 + 0x38) | 0x80;
  }
  iVar5 = FUN_0036c940();
  fVar2 = DAT_00319e98;
  fVar17 = DAT_00319e94;
  uVar18 = DAT_00319e90;
  if (iVar5 == 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x4c30);
    if ((*(ushort *)(DAT_00319ebc + 0x38) & 0x10) == 0) {
      for (puVar7 = *(ushort **)(param_2 + 0x20e4); puVar7 != (ushort *)0x0;
          puVar7 = *(ushort **)(puVar7 + 0x98)) {
        uVar4 = *puVar7;
        bVar14 = uVar4 == 0x8b;
        if (bVar14) {
          uVar4 = puVar7[0xe] & 0xff;
        }
        if (bVar14 && uVar4 == 0x15) {
          if (puVar7 != (ushort *)0x0) {
            iVar5 = FUN_0036a7a0(param_2);
            if (iVar5 == 0) {
              uVar6 = FUN_0036ae14(param_1 + 0x1a4,4);
              uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
              FUN_00353020(fVar17,fVar2,uVar6,uVar18,param_1 + 0x1a4,DAT_00319ec0,0);
              FUN_0037547c(DAT_00319ec4,param_1 + 0x28,4,DAT_00319eb4,DAT_00319eb4,DAT_00319eb0,
                           uVar19,uVar8,uStack_24);
              *(undefined4 *)(param_1 + 0xbbc) = 0x22;
              *(float *)(param_1 + 0xbc4) = fVar2;
              uVar8 = FUN_00375750(*(undefined4 *)(param_1 + 0x9e0),1);
              FUN_0037573c(param_2,uVar8);
              *(undefined1 *)(DAT_00319ec8 + 0x5a2) = 1;
            }
            *(undefined1 *)(param_1 + 0xbde) = uVar1;
            goto LAB_00319f10;
          }
          break;
        }
      }
    }
    *(undefined1 *)(param_1 + 0xbde) = uVar1;
    if ((*(uint *)(*(int *)(param_2 + 0x20ac) + 0x1714) & 0x10000000) != 0) {
      pfVar11 = (float *)(param_1 + 0xce0);
      fVar15 = *pfVar11 + fVar17;
      *pfVar11 = fVar15;
      if (*(int *)(param_1 + 0xbbc) == 0x20) {
        if (DAT_00319ed8 < (int)fVar15) {
          uVar8 = FUN_0036ae14(param_1 + 0x1a4,3);
          uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00353020(fVar17,fVar2,uVar8,uVar18,param_1 + 0x1a4,DAT_00319e9c,0);
          *(undefined4 *)(param_1 + 0xbbc) = 0x1f;
          *pfVar11 = fVar2;
          return;
        }
      }
      else if (DAT_00319ecc < (int)fVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_003702c8(0,3);
      }
      return;
    }
    uVar8 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(fVar17,fVar2,uVar8,uVar18,param_1 + 0x1a4,DAT_00319e9c,0);
  }
  else {
    uVar6 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(fVar17,fVar2,uVar6,uVar18,param_1 + 0x1a4,DAT_00319e9c,0);
    fVar15 = DAT_00319ea4;
    uVar1 = *(undefined1 *)(param_2 + 0x4c30);
    *(float *)(param_1 + 0xbe0) = fVar2;
    *(undefined1 *)(param_1 + 0xbdd) = uVar1;
    iVar5 = *DAT_00319ea0;
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1486),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar16 = *(float *)(param_1 + 0x6c) * (fVar17 + fVar16 * fVar15);
    *(float *)(param_1 + 0x6c) = fVar16;
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar2) << 0x1e;
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1488),(byte)(uVar9 >> 0x15) & 3);
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * (fVar17 + fVar16 * fVar15);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1484),(byte)(uVar9 >> 0x15) & 3);
    *(float *)(param_1 + 0x74) = DAT_00319ea8 - fVar17 * fVar15;
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1482),(byte)(uVar9 >> 0x15) & 3);
    *(float *)(param_1 + 0x70) = DAT_00319eac - fVar17 * fVar15;
    if (!SUB41(uVar9 >> 0x1e,0)) {
      FUN_0037547c(DAT_00319eb8,param_1 + 0x28,4,DAT_00319eb4,DAT_00319eb4,DAT_00319eb0,uVar19,uVar8
                   ,uStack_24);
    }
    *(undefined4 *)(param_1 + 0xbbc) = 0x1c;
  }
LAB_00319f10:
  *(float *)(param_1 + 0xce0) = fVar2;
  return;
}

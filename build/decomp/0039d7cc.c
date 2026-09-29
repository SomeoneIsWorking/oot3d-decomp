// OoT3D decomp @ 0039d7cc  name=FUN_0039d7cc  size=1020

void FUN_0039d7cc(int param_1,int param_2)

{
  undefined1 uVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  short *psVar7;
  uint extraout_r1;
  uint uVar8;
  int extraout_r1_00;
  int iVar9;
  float *pfVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;

  FUN_0031a3dc();
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  uVar15 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039d8b4;
  FUN_00376340(DAT_0039d8c0,DAT_0039d8bc,DAT_0039d8b8,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar15;
  iVar4 = DAT_0039d8c4;
  bVar11 = (*(ushort *)(param_1 + 0x90) & 1) != 0;
  uVar8 = extraout_r1;
  if (bVar11) {
    uVar8 = (uint)*(byte *)(param_1 + 0x81);
  }
  if ((((bVar11 && uVar8 != 0x32) &&
       (psVar7 = (short *)FUN_00359690(param_2 + 0xa98), psVar7 != (short *)0x0)) &&
      (*psVar7 == 0xe6)) && (((uint)(ushort)psVar7[0xe] << 0x12) >> 0x1a == 0x38)) {
    uVar3 = *(ushort *)(iVar4 + 0x38) | 1;
  }
  else {
    uVar3 = *(ushort *)(iVar4 + 0x38) & 0xfffe;
  }
  *(ushort *)(iVar4 + 0x38) = uVar3;
  FUN_003264c8(param_1);
  bVar11 = (*(ushort *)(iVar4 + 0x38) & 0x80) == 0;
  iVar9 = extraout_r1_00;
  if (bVar11) {
    iVar9 = (int)*(char *)(DAT_0039d8c8 + param_2);
  }
  if (bVar11 && iVar9 == 2) {
    *(ushort *)(iVar4 + 0x38) = *(ushort *)(iVar4 + 0x38) | 0x80;
  }
  iVar4 = FUN_0036c940();
  fVar2 = DAT_00319e98;
  fVar14 = DAT_00319e94;
  uVar15 = DAT_00319e90;
  if (iVar4 == 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x4c30);
    if ((*(ushort *)(DAT_00319ebc + 0x38) & 0x10) == 0) {
      for (puVar6 = *(ushort **)(param_2 + 0x20e4); puVar6 != (ushort *)0x0;
          puVar6 = *(ushort **)(puVar6 + 0x98)) {
        uVar3 = *puVar6;
        bVar11 = uVar3 == 0x8b;
        if (bVar11) {
          uVar3 = puVar6[0xe] & 0xff;
        }
        if (bVar11 && uVar3 == 0x15) {
          if (puVar6 != (ushort *)0x0) {
            iVar4 = FUN_0036a7a0(param_2);
            if (iVar4 == 0) {
              uVar5 = FUN_0036ae14(param_1 + 0x1a4,4);
              uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
              FUN_00353020(fVar14,fVar2,uVar5,uVar15,param_1 + 0x1a4,DAT_00319ec0,0);
              FUN_0037547c(DAT_00319ec4,param_1 + 0x28,4,DAT_00319eb4,DAT_00319eb4,DAT_00319eb0);
              *(undefined4 *)(param_1 + 0xbbc) = 0x22;
              *(float *)(param_1 + 0xbc4) = fVar2;
              uVar15 = FUN_00375750(*(undefined4 *)(param_1 + 0x9e0),1);
              FUN_0037573c(param_2,uVar15);
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
      pfVar10 = (float *)(param_1 + 0xce0);
      fVar12 = *pfVar10 + fVar14;
      *pfVar10 = fVar12;
      if (*(int *)(param_1 + 0xbbc) == 0x20) {
        if (DAT_00319ed8 < (int)fVar12) {
          uVar5 = FUN_0036ae14(param_1 + 0x1a4,3);
          uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00353020(fVar14,fVar2,uVar5,uVar15,param_1 + 0x1a4,DAT_00319e9c,0);
          *(undefined4 *)(param_1 + 0xbbc) = 0x1f;
          *pfVar10 = fVar2;
          return;
        }
      }
      else if (DAT_00319ecc < (int)fVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_003702c8(0,3);
      }
      return;
    }
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(fVar14,fVar2,uVar5,uVar15,param_1 + 0x1a4,DAT_00319e9c,0);
  }
  else {
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(fVar14,fVar2,uVar5,uVar15,param_1 + 0x1a4,DAT_00319e9c,0);
    fVar12 = DAT_00319ea4;
    uVar1 = *(undefined1 *)(param_2 + 0x4c30);
    *(float *)(param_1 + 0xbe0) = fVar2;
    *(undefined1 *)(param_1 + 0xbdd) = uVar1;
    iVar4 = *DAT_00319ea0;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1486),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar13 = *(float *)(param_1 + 0x6c) * (fVar14 + fVar13 * fVar12);
    *(float *)(param_1 + 0x6c) = fVar13;
    uVar8 = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar2) << 0x1e;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1488),(byte)(uVar8 >> 0x15) & 3);
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * (fVar14 + fVar13 * fVar12);
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1484),(byte)(uVar8 >> 0x15) & 3);
    *(float *)(param_1 + 0x74) = DAT_00319ea8 - fVar14 * fVar12;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1482),(byte)(uVar8 >> 0x15) & 3);
    *(float *)(param_1 + 0x70) = DAT_00319eac - fVar14 * fVar12;
    if (!SUB41(uVar8 >> 0x1e,0)) {
      FUN_0037547c(DAT_00319eb8,param_1 + 0x28,4,DAT_00319eb4,DAT_00319eb4,DAT_00319eb0);
    }
    *(undefined4 *)(param_1 + 0xbbc) = 0x1c;
  }
LAB_00319f10:
  *(float *)(param_1 + 0xce0) = fVar2;
  return;
}

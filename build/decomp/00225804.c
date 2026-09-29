// OoT3D decomp @ 00225804  name=FUN_00225804  size=1608

void FUN_00225804(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_168 [4];
  float local_158 [72];
  int local_38;

  iVar4 = DAT_00225bd0;
  iVar6 = 0;
  local_38 = param_2;
  do {
    iVar3 = FUN_00363c10(param_2 + 0x3a58,(int)*(short *)(iVar4 + iVar6 * 4));
    *(char *)(param_1 + 0x966) = (char)iVar6;
    fVar11 = DAT_00225bd4;
    iVar6 = iVar6 + 1;
  } while (iVar3 < 0);
  *(undefined2 *)(param_1 + 0x964) =
       *(undefined2 *)(iVar4 + (uint)*(byte *)(param_1 + 0x966) * 4 + 2);
  FUN_00372d4c(fVar11,fVar11,param_1 + 0xbc,0);
  FUN_0037572c(DAT_00225bd8,param_1);
  *(undefined2 *)(param_1 + 0x962) = 0;
  *(undefined2 *)(param_1 + 0x960) = 0;
  *(undefined1 *)(param_1 + 0x904) = 0;
  *(undefined1 *)(param_1 + 0x905) = 0;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = local_38 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00225bdc + iVar4) != 0
     )) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  iVar4 = iVar4 + 0x10;
  switch(*(ushort *)(param_1 + 0x1c) & 0xff) {
  case 0:
    uVar10 = ObjectBankArchive_00358ef8(iVar4,4);
    local_168[1] = param_1 + 0x3c8;
    local_168[0] = param_1 + 0x228;
    local_168[2] = 8;
    FUN_00353e78(iVar4,param_2,param_1 + 0x1a4,uVar10,*(undefined4 *)(param_1 + 0x178),0);
    FUN_0035c358(param_1 + 0x568,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
    FUN_00350820(local_158,DAT_00225be0,0x24,8);
    FUN_0048ba78(*(undefined4 *)(param_1 + 0x1cc),local_158);
    iVar6 = DAT_00225bf0;
    fVar12 = DAT_00225bec;
    iVar4 = DAT_00225be8;
    fVar9 = DAT_00225be4;
    uVar5 = 0;
    do {
      iVar3 = param_1 + uVar5 * 0x34;
      fVar14 = ABS(local_158[uVar5 * 9 + 4] * fVar9);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 <= local_158[uVar5 * 9 + 5] * fVar9) << 0x1d;
      fVar15 = ABS(local_158[uVar5 * 9 + 5] * fVar9);
      for (fVar13 = ABS(local_158[uVar5 * 9 + 3] * fVar9); iVar4 <= (int)fVar13;
          fVar13 = fVar13 - fVar12) {
      }
      for (; iVar4 <= (int)fVar14; fVar14 = fVar14 - fVar12) {
      }
      for (; iVar4 <= (int)fVar15; fVar15 = fVar15 - fVar12) {
      }
      uVar16 = VectorFloatToUnsigned(fVar13,3);
      uVar17 = VectorFloatToUnsigned(fVar14,3);
      uVar18 = VectorFloatToUnsigned(fVar15,3);
      fVar22 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar20 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      pfVar7 = (float *)(iVar6 + (uVar16 & 0xff) * 0x10);
      fVar19 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar21 = pfVar7[1] + (fVar13 - fVar22) * pfVar7[3];
      pfVar8 = (float *)(iVar6 + (uVar17 & 0xff) * 0x10);
      fVar22 = *pfVar7 + (fVar13 - fVar22) * pfVar7[2];
      pfVar7 = (float *)(iVar6 + (uVar18 & 0xff) * 0x10);
      fVar23 = *pfVar8 + (fVar14 - fVar20) * pfVar8[2];
      fVar14 = pfVar8[1] + (fVar14 - fVar20) * pfVar8[3];
      fVar13 = *pfVar7 + (fVar15 - fVar19) * pfVar7[2];
      if (local_158[uVar5 * 9 + 3] * fVar9 < fVar11) {
        fVar22 = -fVar22;
      }
      fVar15 = pfVar7[1] + (fVar15 - fVar19) * pfVar7[3];
      if (local_158[uVar5 * 9 + 4] * fVar9 < fVar11) {
        fVar23 = -fVar23;
      }
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar13 = -fVar13;
      }
      *(float *)(iVar3 + 0x228) = fVar15 * fVar14;
      *(float *)(iVar3 + 0x238) = fVar13 * fVar14;
      *(float *)(iVar3 + 0x24c) = fVar22 * fVar14;
      *(float *)(iVar3 + 0x250) = fVar21 * fVar14;
      *(float *)(iVar3 + 0x22c) = fVar22 * fVar15 * fVar23 - fVar21 * fVar13;
      *(float *)(iVar3 + 0x240) = fVar21 * fVar13 * fVar23 - fVar22 * fVar15;
      *(float *)(iVar3 + 0x230) = fVar22 * fVar13 + fVar21 * fVar15 * fVar23;
      *(float *)(iVar3 + 0x23c) = fVar21 * fVar15 + fVar22 * fVar13 * fVar23;
      *(float *)(iVar3 + 0x248) = -fVar23;
      *(undefined4 *)(iVar3 + 0x234) = 0;
      *(undefined4 *)(iVar3 + 0x244) = 0;
      *(undefined4 *)(iVar3 + 0x254) = 0;
      uVar16 = uVar5 + 1;
      *(float *)(iVar3 + 0x234) = local_158[uVar5 * 9];
      *(float *)(iVar3 + 0x244) = local_158[uVar5 * 9 + 1];
      *(float *)(iVar3 + 0x254) = local_158[uVar5 * 9 + 2];
      uVar5 = uVar16;
    } while (uVar16 < 8);
    *(undefined4 *)(param_1 + 0x9dc) = DAT_00225bf4;
    uVar1 = DAT_00225ebc;
    uVar10 = DAT_00225eb4;
    switch(*(ushort *)(param_1 + 0x1c) & 0xff) {
    case 0:
      *(undefined4 *)(param_1 + 0x9dc) = DAT_00225eb0;
      *(undefined4 *)(param_1 + 0x140) = uVar10;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
      *(undefined4 *)(param_1 + 0x9dc) = DAT_00225eb8;
      *(undefined4 *)(param_1 + 0x140) = uVar1;
    }
    FUN_003332b4(DAT_00225ec0,fVar11,DAT_00225ec0,param_1 + 0x228);
    FUN_00353dd0(param_2);
    FUN_00353d24(param_2,param_1 + 0x908,param_1,DAT_00225ec4);
    FUN_00350eb8(param_2);
    FUN_00350d48(param_2,param_1 + 0x96c,param_1,DAT_00225ec8,param_1 + 0x98c);
    fVar11 = DAT_00225ed0;
    *(undefined4 *)(*(int *)(param_1 + 0x988) + 0x44) = DAT_00225ecc;
    *(undefined4 *)(*(int *)(param_1 + 0x988) + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(*(int *)(param_1 + 0x988) + 0x3c) = *(float *)(param_1 + 0x2c) + fVar11;
    *(undefined4 *)(*(int *)(param_1 + 0x988) + 0x40) = *(undefined4 *)(param_1 + 0x30);
    if (((~((int)*(short *)(param_1 + 0x1c) >> 8) & 0x3fU) != 0) &&
       (iVar4 = FUN_0036e864(local_38,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a),
       iVar4 != 0)) {
      FUN_00374428(param_1);
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined4 *)(param_1 + 0x9dc) = DAT_00225bf4;
    uVar1 = DAT_00225eb8;
    uVar10 = DAT_00225eb4;
    switch(*(ushort *)(param_1 + 0x1c) & 0xff) {
    case 0:
      *(undefined4 *)(param_1 + 0x9dc) = DAT_00225eb0;
      *(undefined4 *)(param_1 + 0x140) = uVar10;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
      *(undefined4 *)(param_1 + 0x140) = DAT_00225ebc;
      *(undefined4 *)(param_1 + 0x9dc) = uVar1;
    }
    uVar10 = DAT_00225edc;
    *(undefined4 *)(param_1 + 0x70) = DAT_00225ed4;
    *(undefined4 *)(param_1 + 0x74) = DAT_00225ed8;
    fVar9 = (float)FUN_003738a8(uVar10);
    uVar10 = FUN_00371e50(uVar10);
    *(undefined4 *)(param_1 + 0x68) = uVar10;
    fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    fVar12 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x60) = fVar11 * fVar9 + fVar12 * *(float *)(param_1 + 0x68);
    fVar12 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    fVar14 = *(float *)(param_1 + 0x68);
    fVar13 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    fVar11 = DAT_00225ee0;
    *(float *)(param_1 + 0x68) = fVar12 * fVar14 - fVar13 * fVar9;
    fVar9 = (float)FUN_00371e50(fVar11);
    uVar10 = DAT_00225ee4;
    *(float *)(param_1 + 100) = fVar9 + fVar11;
    fVar11 = (float)FUN_003738a8(uVar10);
    *(short *)(param_1 + 0x34) = (short)(int)fVar11;
    fVar11 = (float)FUN_003738a8(uVar10);
    *(short *)(param_1 + 0x36) = (short)(int)fVar11;
    fVar9 = (float)FUN_003738a8(uVar10);
    piVar2 = DAT_00225ef4;
    fVar11 = DAT_00225eec;
    *(short *)(param_1 + 0x38) = (short)(int)fVar9;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00225ee8 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x962) = (short)(int)(fVar11 / fVar9 + DAT_00225ef0);
    local_168[0] = *piVar2;
    local_168[1] = piVar2[1];
    local_168[2] = piVar2[2];
    local_168[3] = piVar2[3];
    FUN_00372f38(param_1,param_2,param_1 + 0x734,local_168[(*(ushort *)(param_1 + 0x1c) & 0xff) - 1]
                 ,0);
    FUN_0034e994(param_1 + 0x738,*(undefined4 *)(param_1 + 0x734),iVar4,0,0xffffffff,0xffffffff);
  }
  return;
}

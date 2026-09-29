// OoT3D decomp @ 0041a874  name=FUN_0041a874  size=892

void FUN_0041a874(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  short local_50;
  undefined2 local_4e;

  puVar12 = param_1 + param_3 * 0xc + 1;
  param_1[param_3 * 0xc + 5] = *puVar12;
  param_1[param_3 * 0xc + 6] = param_1[param_3 * 0xc + 2];
  param_1[param_3 * 0xc + 7] = param_1[param_3 * 0xc + 3];
  param_1[param_3 * 0xc + 8] = param_1[param_3 * 0xc + 4];
  iVar4 = FUN_004232c8(*param_1,puVar12);
  if (iVar4 == 0) {
    *puVar12 = 0;
    param_1[param_3 * 0xc + 2] = 0;
    param_1[param_3 * 0xc + 3] = 0;
    param_1[param_3 * 0xc + 4] = 0;
  }
  fVar21 = (float)FUN_002ff290(*param_1,(int)*(short *)(param_1 + param_3 * 0xc + 4));
  fVar22 = (float)FUN_002ff290(*param_1,(int)*(short *)((int)param_1 + param_3 * 0x30 + 0x12));
  fVar2 = DAT_0041abf4;
  fVar24 = DAT_0041abf0;
  iVar4 = FUN_002ff26c();
  if (iVar4 == 0) {
    uVar5 = *puVar12;
  }
  else {
    uVar5 = FUN_004258fc();
  }
  uVar10 = 0;
  local_4e = 0;
  local_50 = 0;
  iVar6 = FUN_0043c1ec();
  iVar4 = DAT_0041abfc;
  fVar3 = DAT_0041abf8;
  if ((iVar6 == 2) && (iVar6 = FUN_004258ec(), iVar6 != 0)) {
    if ((uVar5 & 1) != 0) {
      uVar10 = 0x100;
    }
    if ((uVar5 & 0x400) != 0) {
      uVar10 = uVar10 | 0x400;
    }
    if ((uVar5 & 0x800) != 0) {
      uVar10 = uVar10 | 0x800;
    }
    if ((uVar5 & 0x200) != 0) {
      uVar10 = uVar10 | 0x80;
    }
    if ((uVar5 & 0x100) != 0) {
      uVar10 = uVar10 | 0x200;
    }
    if (*DAT_0041ac00 != '\0') {
      uVar10 = uVar10 & 0xfffffeff;
    }
    iVar6 = FUN_002ff26c();
    if (iVar6 != 0) {
      if ((*puVar12 & 0x50) == 0) {
        if ((*puVar12 & 0xa0) == 0) {
          local_50 = (short)(int)(fVar21 * fVar24);
        }
        else {
          local_50 = -0x40;
        }
      }
      else {
        local_50 = 0x40;
      }
      if ((*puVar12 & 0x40) != 0) {
        uVar10 = uVar10 | 2;
      }
      if ((*puVar12 & 0x80) != 0) {
        uVar10 = uVar10 | 1;
      }
      local_4e = (undefined2)(int)(fVar22 * fVar24);
    }
    if ((*(char *)(iVar4 + 0xf) == '\0') && ((int)local_50 + 7U < 0xf)) {
      if (((*DAT_0041ac04 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0041ac04), iVar6 != 0)) {
        FUN_0036788c(DAT_0041ac08);
      }
      if ((int)*(float *)(DAT_0041ac14 + 0x9c) < DAT_0041ac18) {
        fVar23 = (float)param_1[0x34];
        fVar26 = fVar3;
      }
      else {
        fVar26 = *(float *)(DAT_0041ac14 + 0x9c) * fVar24 * DAT_0041ac1c;
        fVar23 = (float)param_1[0x34];
        if (DAT_0041ac20 < (int)fVar26) {
          fVar26 = fVar24;
        }
        uVar5 = in_fpscr & 0xfffffff | (uint)(fVar23 < fVar26) << 0x1f |
                (uint)(fVar23 == fVar26) << 0x1e;
        in_fpscr = uVar5 | (uint)(NAN(fVar23) || NAN(fVar26)) << 0x1c;
        bVar1 = (byte)(uVar5 >> 0x18);
        if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar23 = fVar26;
        }
        param_1[0x34] = fVar23;
      }
      fVar23 = fVar23 + (fVar26 - fVar23) * DAT_0041ac24;
      param_1[0x34] = fVar23;
      local_50 = (short)(int)fVar23;
    }
  }
  FUN_00422274(uVar10,&local_50);
  fVar23 = DAT_0041ac2c;
  fVar24 = DAT_0041ac28;
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar3 <= fVar22) << 0x1d;
  fVar26 = DAT_0041ac28;
  if (fVar21 < fVar3) {
    fVar26 = DAT_0041ac2c;
  }
  fVar21 = (float)VectorSignedToFloat((int)(short)(int)(fVar26 + fVar21 * fVar2),
                                      (byte)(uVar5 >> 0x15) & 3);
  param_1[param_3 * 0xc + 9] = fVar21;
  if (!SUB41(uVar5 >> 0x1d,0)) {
    fVar24 = fVar23;
  }
  uVar25 = VectorSignedToFloat((int)(short)(int)(fVar24 + fVar22 * fVar2),(byte)(uVar5 >> 0x15) & 3)
  ;
  param_1[param_3 * 0xc + 10] = uVar25;
  if (*(char *)(iVar4 + 0xe) != '\0') {
    param_1[param_3 * 0xc + 9] = -fVar21;
  }
  uVar5 = FUN_002ff258(param_1 + param_3 * 0xc + 1);
  uVar5 = uVar5 ^ 1;
  fVar24 = (float)param_1[0x33];
  if (*(char *)(iVar4 + 0xf) != '\0') {
    bVar20 = *(char *)(param_1 + 0x35) == '\x01' && uVar5 == 0;
    if (*(char *)(param_1 + 0x35) == '\x01' && uVar5 == 0) {
      bVar20 = *(char *)((int)param_1 + 0xd5) == '\x01';
    }
    if (bVar20) {
      fVar24 = DAT_0041ac30;
    }
  }
  param_1[param_3 * 0xc + 0xb] =
       (float)param_1[param_3 * 0xc + 0xb] +
       ((float)param_1[param_3 * 0xc + 9] - (float)param_1[param_3 * 0xc + 0xb]) * fVar24;
  param_1[param_3 * 0xc + 0xc] =
       (float)param_1[param_3 * 0xc + 0xc] +
       ((float)param_1[param_3 * 0xc + 10] - (float)param_1[param_3 * 0xc + 0xc]) * fVar24;
  *(char *)((int)param_1 + 0xd5) = (char)uVar5;
  param_1[param_3 * 0xc + 1] = param_1[param_3 * 0xc + 1] | param_1[0x31];
  param_1[param_3 * 0xc + 2] = param_1[0x31] & ~param_1[0x32] | param_1[param_3 * 0xc + 2];
  param_1[param_3 * 0xc + 3] = param_1[0x32] & ~param_1[0x31] | param_1[param_3 * 0xc + 3];
  uVar25 = param_1[0x31];
  param_1[0x31] = 0;
  param_1[0x32] = uVar25;
  puVar7 = (undefined4 *)(param_2 + param_3 * 0x30);
  uVar25 = param_1[param_3 * 0xc + 2];
  uVar8 = param_1[param_3 * 0xc + 3];
  uVar9 = param_1[param_3 * 0xc + 4];
  uVar11 = param_1[param_3 * 0xc + 5];
  uVar13 = param_1[param_3 * 0xc + 6];
  uVar14 = param_1[param_3 * 0xc + 7];
  uVar15 = param_1[param_3 * 0xc + 8];
  uVar16 = param_1[param_3 * 0xc + 9];
  uVar17 = param_1[param_3 * 0xc + 10];
  uVar18 = param_1[param_3 * 0xc + 0xb];
  uVar19 = param_1[param_3 * 0xc + 0xc];
  *puVar7 = param_1[param_3 * 0xc + 1];
  puVar7[1] = uVar25;
  puVar7[2] = uVar8;
  puVar7[3] = uVar9;
  puVar7[4] = uVar11;
  puVar7[5] = uVar13;
  puVar7[6] = uVar14;
  puVar7[7] = uVar15;
  puVar7[8] = uVar16;
  puVar7[9] = uVar17;
  puVar7[10] = uVar18;
  puVar7[0xb] = uVar19;
  return;
}

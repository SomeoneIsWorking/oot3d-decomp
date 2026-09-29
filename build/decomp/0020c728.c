// OoT3D decomp @ 0020c728  name=FUN_0020c728  size=1324

void FUN_0020c728(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint in_fpscr;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  int local_70;

  fVar4 = DAT_0020ca34;
  iVar14 = FUN_003695f8();
  fVar11 = DAT_0020ca4c;
  fVar10 = DAT_0020ca48;
  fVar9 = DAT_0020ca44;
  fVar8 = DAT_0020ca40;
  fVar7 = DAT_0020ca3c;
  fVar6 = DAT_0020ca38;
  if (iVar14 != 0) {
    fVar4 = DAT_0020ca38;
  }
  local_70 = param_2 + 0x100;
  iVar14 = 0;
  do {
    fVar24 = *(float *)(param_2 + 0x1c4) - *(float *)(param_2 + 0x1b8);
    fVar19 = *(float *)(param_2 + 0x1c8) - *(float *)(param_2 + 0x1bc);
    fVar22 = *(float *)(param_2 + 0x1cc) - *(float *)(param_2 + 0x1c0);
    fVar21 = SQRT(fVar24 * fVar24 + fVar19 * fVar19 + fVar22 * fVar22);
    if (*(short *)(param_2 + 0x104) != 0x43) {
      iVar15 = param_1 + iVar14 * 0x28;
      *(float *)(iVar15 + 0x1b4) = *(float *)(param_2 + 0x1b8) + (fVar24 / fVar21) * fVar7;
      *(float *)(iVar15 + 0x1b8) = *(float *)(param_2 + 0x1bc) + (fVar19 / fVar21) * fVar8;
      *(float *)(iVar15 + 0x1bc) = *(float *)(param_2 + 0x1c0) + (fVar22 / fVar21) * fVar7;
    }
    piVar12 = DAT_0020ca6c;
    iVar15 = param_1 + iVar14 * 0x28;
    cVar2 = *(char *)(iVar15 + 0x1ca);
    if (cVar2 == '\0') {
      sVar3 = *(short *)(local_70 + 4);
      if (sVar3 == 0x43) {
        param_1 = param_1 + iVar14 * 0x28;
        *(float *)(param_1 + 0x1b4) = fVar6;
        *(float *)(param_1 + 0x1b8) = fVar6;
        *(float *)(param_1 + 0x1bc) = fVar6;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (sVar3 != 0x47) {
        if (sVar3 == 0x51) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (cVar2 == '\x01') {
      fVar19 = *(float *)(param_2 + 0x1bc) + (fVar19 / fVar21) * fVar9;
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0020ca74 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (*DAT_0020ca6c == 0xa0) {
        fVar21 = *(float *)(iVar15 + 0x1ac) - *(float *)(iVar15 + 0x1c0) * fVar21 * fVar10;
      }
      else {
        fVar21 = *(float *)(iVar15 + 0x1ac) + *(float *)(iVar15 + 0x1c0) * fVar21 * fVar10;
      }
      *(float *)(iVar15 + 0x1ac) = fVar21;
      if (*piVar12 == 0xa0) {
        in_fpscr = in_fpscr & 0xfffffff |
                   (uint)(fVar19 - fVar11 <= *(float *)(iVar15 + 0x1b8) + *(float *)(iVar15 + 0x1ac)
                         ) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) goto LAB_0020ca94;
      }
      else if (*piVar12 == 0xcd) {
        fVar19 = fVar19 + fVar11;
        fVar21 = *(float *)(iVar15 + 0x1b8) + *(float *)(iVar15 + 0x1ac);
        uVar17 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar19) << 0x1f |
                 (uint)(fVar21 == fVar19) << 0x1e;
        in_fpscr = uVar17 | (uint)(NAN(fVar21) || NAN(fVar19)) << 0x1c;
        bVar5 = (byte)(uVar17 >> 0x18);
        if (!(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
LAB_0020ca94:
          *(undefined1 *)(iVar15 + 0x1ca) = 2;
        }
      }
      else if (DAT_0020ce10 < (int)(*(float *)(iVar15 + 0x1b8) + *(float *)(iVar15 + 0x1ac)))
      goto LAB_0020ca94;
    }
    else if (cVar2 == '\x02') {
      sVar3 = *(short *)(local_70 + 4);
      if (sVar3 == 0x43) {
        param_1 = param_1 + iVar14 * 0x28;
        *(float *)(param_1 + 0x1b4) = fVar6;
        *(float *)(param_1 + 0x1b8) = fVar6;
        *(float *)(param_1 + 0x1bc) = fVar6;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (sVar3 != 0x47) {
        if (sVar3 == 0x51) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    uVar13 = DAT_0020ce14;
    local_94 = *(float *)(iVar15 + 0x1b4) + *(float *)(iVar15 + 0x1a8);
    local_84 = *(float *)(iVar15 + 0x1b8) + *(float *)(iVar15 + 0x1ac);
    local_74 = *(float *)(iVar15 + 0x1bc) + *(float *)(iVar15 + 0x1b0);
    local_a0 = 1.0;
    local_90 = 0.0;
    local_8c = 1.0;
    local_9c = 0.0;
    local_98 = 0.0;
    local_88 = 0.0;
    local_80 = 0.0;
    local_7c = 0.0;
    local_78 = 1.0;
    if (*DAT_0020ca6c != 0xa0) {
      fVar24 = (float)FUN_003727f0(DAT_0020ce14);
      fVar20 = (float)FUN_00372674(uVar13);
      fVar19 = local_98 * fVar24;
      local_98 = local_98 * fVar20 - local_9c * fVar24;
      fVar21 = local_88 * fVar24;
      local_88 = local_88 * fVar20 - local_8c * fVar24;
      fVar22 = local_78 * fVar24;
      local_78 = local_78 * fVar20 - local_7c * fVar24;
      local_9c = local_9c * fVar20 + fVar19;
      local_8c = local_8c * fVar20 + fVar21;
      local_7c = local_7c * fVar20 + fVar22;
    }
    fVar22 = DAT_0020ce20;
    fVar21 = DAT_0020ce1c;
    fVar19 = DAT_0020ca70;
    uVar17 = 0;
    iVar16 = (int)*(short *)(DAT_0020ca68 + 2);
    fVar24 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x15) & 3);
    fVar23 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x15) & 3);
    fVar24 = fVar24 * DAT_0020ce18;
    fVar20 = fVar20 * DAT_0020ce18;
    fVar23 = fVar23 * DAT_0020ce18;
    local_a0 = local_a0 * fVar24;
    local_90 = local_90 * fVar24;
    local_80 = local_80 * fVar24;
    local_9c = local_9c * fVar20;
    local_8c = local_8c * fVar20;
    local_7c = local_7c * fVar20;
    local_98 = local_98 * fVar23;
    local_88 = local_88 * fVar23;
    local_78 = local_78 * fVar23;
    do {
      if (*(short *)(param_2 + 0x104) == 0x43) {
        local_a8 = (float)VectorSignedToFloat(uVar17,(byte)(in_fpscr >> 0x15) & 3);
        local_a8 = local_a8 * fVar19;
        local_ac = fVar6;
        local_a4 = fVar6;
      }
      else {
        uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar15 + 0x1a8) < fVar6) << 0x1f;
        uVar18 = uVar1 | (uint)(NAN(*(float *)(iVar15 + 0x1a8)) || NAN(fVar6)) << 0x1c;
        if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar18 >> 0x1c) & 1)) {
          local_ac = (float)VectorSignedToFloat(-uVar17,(byte)(uVar18 >> 0x15) & 3);
        }
        else {
          local_ac = (float)VectorSignedToFloat(uVar17,(byte)(uVar18 >> 0x15) & 3);
        }
        local_ac = local_ac * fVar21;
        uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar15 + 0x1b0) < fVar6) << 0x1f;
        in_fpscr = uVar1 | (uint)(NAN(*(float *)(iVar15 + 0x1b0)) || NAN(fVar6)) << 0x1c;
        if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
          local_a4 = (float)VectorSignedToFloat(-uVar17,(byte)(in_fpscr >> 0x15) & 3);
        }
        else {
          local_a4 = (float)VectorSignedToFloat(uVar17,(byte)(in_fpscr >> 0x15) & 3);
        }
        local_a4 = local_a4 * fVar21;
        if ((uVar17 & 1) == 0) {
          local_a8 = (float)VectorSignedToFloat(-uVar17,(byte)(in_fpscr >> 0x15) & 3);
          local_a8 = local_a8 * fVar22;
        }
        else {
          local_a8 = (float)VectorSignedToFloat(uVar17,(byte)(in_fpscr >> 0x15) & 3);
          local_a8 = local_a8 * fVar22;
        }
      }
      FUN_00372070(&local_a0,&local_a0,&local_ac);
      iVar16 = param_1 + (iVar14 * 5 + uVar17) * 4;
      *(undefined1 *)(*(int *)(iVar16 + 0x1920) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar16 + 0x1920),&local_a0);
      *(float *)(*(int *)(*(int *)(iVar16 + 0x1920) + 0xc) + 0xc) = fVar4;
      FUN_00372170(*(undefined4 *)(iVar16 + 0x1920),0);
      uVar17 = (uint)(short)((short)uVar17 + 1);
    } while ((int)uVar17 < 5);
    iVar14 = (int)(short)((short)iVar14 + 1);
    if (0x1d < iVar14) {
      return;
    }
  } while( true );
}

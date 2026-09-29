// OoT3D decomp @ 001ac538  name=FUN_001ac538  size=1084

void FUN_001ac538(int param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  float extraout_s0;
  float fVar21;
  float fVar22;
  float extraout_s1;
  float extraout_s2;
  float fVar23;
  float *local_118;
  int local_114;
  float local_110;
  undefined1 auStack_10c [6];
  short local_106;
  undefined1 auStack_104 [20];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  short local_86;
  float local_80;
  float local_7c;
  float local_78;
  float *local_74;
  undefined4 local_70;
  float local_6c;
  uint local_68;

  fVar3 = DAT_001ac924;
  local_e0 = DAT_001ac924;
  local_dc = DAT_001ac924;
  local_d8 = DAT_001ac924;
  local_d4 = DAT_001ac924;
  local_f0 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(DAT_001ac928 + 9),(byte)(in_fpscr >> 0x15) & 3);
  local_ec = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(DAT_001ac928 + 10),(byte)(in_fpscr >> 0x15) & 3);
  local_e8 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(DAT_001ac928 + 0xb),(byte)(in_fpscr >> 0x15) & 3);
  local_f0 = local_f0 * DAT_001ac92c;
  local_ec = local_ec * DAT_001ac92c;
  local_e8 = local_e8 * DAT_001ac92c;
  local_e4 = DAT_001ac924;
  local_68 = param_2;
  FUN_00342988(*(undefined4 *)(param_1 + 0x191c),&local_f0,0xffffffff);
  uVar13 = local_68;
  fVar4 = DAT_001ac934;
  uVar14 = (uint)*(ushort *)(param_1 + 0x1c);
  uVar15 = uVar14;
  if (uVar14 == 0x12) {
    uVar15 = DAT_001ac930;
  }
  fVar23 = fVar3;
  if (uVar14 == 0x12) {
    fVar23 = *(float *)(uVar15 + 0x1c);
  }
  uVar15 = in_fpscr & 0xfffffff | (uint)(*(float *)(local_68 + 0x7f44) == DAT_001ac934) << 0x1e |
           (uint)(DAT_001ac934 <= *(float *)(local_68 + 0x7f44)) << 0x1d;
  bVar2 = (byte)(uVar15 >> 0x18);
  bVar19 = (bool)(bVar2 >> 5 & 1);
  uVar14 = local_68;
  if (!(bool)(bVar2 >> 6)) {
    uVar14 = (uint)*(byte *)(param_1 + 0x1a5);
    bVar19 = 0x13 < uVar14;
  }
  if (!bVar19) {
    *(char *)(param_1 + 0x1a5) = (char)uVar14 + '\x01';
  }
  fVar12 = DAT_001ac958;
  fVar11 = DAT_001ac954;
  fVar10 = DAT_001ac950;
  uVar9 = DAT_001ac948;
  uVar8 = DAT_001ac944;
  uVar7 = DAT_001ac940;
  uVar6 = DAT_001ac93c;
  pfVar5 = DAT_001ac938;
  uVar14 = *(byte *)(param_1 + 0x1a5) - 1;
  do {
    if ((int)uVar14 < 0) {
      FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 0x191c) + 8),0);
      return;
    }
    fVar20 = (float)VectorSignedToFloat(uVar14,(byte)(uVar15 >> 0x15) & 3);
    fVar22 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x1a5),(byte)(uVar15 >> 0x15) & 3);
    uVar15 = uVar15 & 0xfffffff | (uint)(*(float *)(uVar13 + 0x7f44) == fVar4) << 0x1e;
    if (!SUB41(uVar15 >> 0x1e,0)) {
      iVar18 = param_1 + uVar14 * 0x28;
      uVar16 = (uint)*(byte *)(iVar18 + 0x1ca);
      if (uVar16 == 0) {
        *(float *)(iVar18 + 0x1c4) = fVar4;
        *(undefined2 *)(iVar18 + 0x1c8) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (uVar16 == 1) {
        local_114 = iVar18 + 0x1c4;
        local_118 = (float *)(iVar18 + 0x1c8);
        iVar17 = FUN_00342ed8(&local_74,DAT_001ac95c + -0x218,DAT_001ac95c + -0x214);
        if (iVar17 != 0) {
          *(char *)(iVar18 + 0x1ca) = *(char *)(iVar18 + 0x1ca) + '\x01';
        }
        local_74 = (float *)((float)local_74 * fVar23);
        local_6c = local_6c * fVar23;
        FUN_00342ec0(auStack_104,param_1);
        FUN_00371738(&local_94,auStack_104,0x12);
        local_118 = local_74;
        local_114 = local_70;
        local_110 = local_6c;
        FUN_00342e8c(auStack_10c,&local_118);
        local_106 = local_106 + local_86;
        FUN_0035579c(auStack_10c);
        *pfVar5 = local_94 + extraout_s0;
        pfVar5[1] = local_90 + extraout_s1;
        pfVar5[2] = local_8c + extraout_s2;
      }
      else {
        bVar19 = uVar16 == 2;
        if (bVar19) {
          uVar16 = *(byte *)(param_1 + 0x1a5) - 1;
        }
        if ((bVar19 && uVar16 == uVar14) && (iVar17 = FUN_0037571c(local_68), iVar17 == 0)) {
          FUN_00374428(param_1);
        }
      }
      *(float *)(iVar18 + 0x1b4) = *pfVar5;
      *(float *)(iVar18 + 0x1b8) = pfVar5[1];
      *(float *)(iVar18 + 0x1bc) = pfVar5[2];
      cVar1 = *(char *)(iVar18 + 0x1cb);
      if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (cVar1 == '\x01') {
        FUN_0036e168(fVar3,uVar9,uVar6,uVar7,iVar18 + 0x1c0);
        if (0x3f7fffff < *(int *)(iVar18 + 0x1c0)) {
          *(undefined1 *)(iVar18 + 0x1cb) = 2;
        }
      }
      else if (cVar1 == '\x02') {
        FUN_0036e168(fVar4,uVar9,uVar8,uVar7,iVar18 + 0x1c0);
        uVar15 = uVar15 & 0xfffffff | (uint)(*(float *)(iVar18 + 0x1c0) == fVar4) << 0x1e |
                 (uint)(fVar4 <= *(float *)(iVar18 + 0x1c0)) << 0x1d;
        bVar2 = (byte)(uVar15 >> 0x18);
        if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
      }
    }
    iVar18 = param_1 + uVar14 * 0x28;
    local_80 = *(float *)(iVar18 + 0x1b4) + *(float *)(iVar18 + 0x1a8);
    local_7c = *(float *)(iVar18 + 0x1b8) + *(float *)(iVar18 + 0x1ac);
    local_78 = *(float *)(iVar18 + 0x1bc) + *(float *)(iVar18 + 0x1b0);
    if (*(byte *)(iVar18 + 0x1ca) < 2) {
      local_c8 = *(float *)(iVar18 + 0x1c0) * (fVar3 - fVar20 / fVar22) * fVar10;
      local_d0 = local_c8 * fVar11;
      local_cc = local_c8 * fVar11;
      local_c8 = local_c8 * fVar11;
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar18 + 0x1cc),(byte)(uVar15 >> 0x15) & 3
                                         );
      fVar21 = fVar21 * fVar12;
      uVar15 = uVar15 & 0xfffffff | (uint)(fVar21 == fVar4) << 0x1e;
      fVar20 = fVar3;
      fVar22 = fVar4;
      if (!SUB41(uVar15 >> 0x1e,0)) {
        fVar22 = (float)FUN_003727f0(fVar21);
        fVar20 = (float)FUN_00372674(fVar21);
      }
      local_c0 = -fVar22;
      local_118 = &local_e0;
      local_bc = fVar4;
      local_b8 = fVar4;
      local_ac = fVar4;
      local_a8 = fVar4;
      local_a4 = fVar4;
      local_a0 = fVar4;
      local_9c = fVar3;
      local_98 = fVar4;
      local_114 = 0;
      local_c4 = fVar20;
      local_b4 = fVar22;
      local_b0 = fVar20;
      FUN_003693b4(*(undefined4 *)(param_1 + 0x191c),&local_80,&local_c4,&local_d0);
      uVar15 = uVar15 & 0xfffffff | (uint)(*(float *)(uVar13 + 0x7f44) == fVar4) << 0x1e;
      if (!SUB41(uVar15 >> 0x1e,0)) {
        *(short *)(iVar18 + 0x1cc) = *(short *)(iVar18 + 0x1cc) + 400;
      }
    }
    uVar14 = (uint)(short)((short)uVar14 + -1);
  } while( true );
}

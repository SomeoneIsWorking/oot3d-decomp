// OoT3D decomp @ 0035c9b8  name=FUN_0035c9b8  size=1340

void FUN_0035c9b8(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float local_bc [2];
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  int local_50;

  iVar2 = DAT_0035cd78;
  puVar5 = DAT_0035cd74;
  puVar6 = DAT_0035cd6c;
  fVar1 = DAT_0035cd68;
  local_50 = param_1 + 0x2000;
  local_98 = DAT_0035cd68;
  local_94 = DAT_0035cd68;
  iVar13 = *(int *)(param_1 + 0x20ac);
  local_90 = DAT_0035cd70;
  uVar7 = DAT_0035cd74[1];
  uVar9 = DAT_0035cd74[2];
  *DAT_0035cd6c = *DAT_0035cd74;
  puVar6[1] = uVar7;
  puVar6[2] = uVar9;
  fVar20 = DAT_0035cd7c;
  if (*(char *)(iVar2 + 0xb) == '\0') {
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) + 0x28) +
                                                       2),(byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar20 <= (float)puVar5[1]) << 0x1d;
    fVar20 = DAT_0035cd80;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar20 = DAT_0035cd84;
    }
  }
  if (*(short *)(iVar2 + 0x1e) == 5) {
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0xbe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_003735e8(fVar16 * DAT_0035cd88,&local_ec,0);
    local_b0 = DAT_0035cd8c;
    local_ac = fVar1;
    local_a8 = DAT_0035cd90;
    FUN_003735ac(local_bc,&local_ec,&local_b0);
  }
  uVar7 = DAT_0035cda0;
  fVar4 = DAT_0035cd9c;
  pfVar3 = DAT_0035cd98;
  fVar16 = DAT_0035cd94;
  iVar10 = 1;
  do {
    fVar23 = fVar1;
    fVar21 = fVar1;
    if (*(short *)(iVar2 + 0x1e) == 5) {
      fVar21 = (float)VectorSignedToFloat(10 - iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar23 = (float)VectorSignedToFloat(10 - iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar23 = local_b4 * fVar23 * fVar16;
      fVar21 = local_bc[0] * fVar21 * fVar16;
    }
    do {
      pfVar12 = (float *)(puVar6 + iVar10 * 3);
      fVar21 = (*pfVar12 - pfVar12[-3]) + fVar21;
      fVar22 = pfVar12[1];
      fVar24 = pfVar12[-2];
      fVar23 = (pfVar12[2] - pfVar12[-1]) + fVar23;
      fVar17 = (float)FUN_003675f8(fVar23,fVar21);
      fVar22 = (float)FUN_003675f8(SQRT(fVar21 * fVar21 + fVar23 * fVar23),
                                   (fVar22 - fVar24) + fVar20);
      fVar22 = -fVar22;
      uVar15 = in_fpscr & 0xfffffff | (uint)(fVar17 == fVar1) << 0x1e;
      fVar23 = fVar4;
      fVar21 = fVar1;
      if (!SUB41(uVar15 >> 0x1e,0)) {
        fVar21 = (float)FUN_003727f0(fVar17);
        fVar23 = (float)FUN_00372674(fVar17);
      }
      local_e8 = fVar1;
      local_cc = -fVar21;
      local_e0 = fVar1;
      local_d8 = fVar4;
      in_fpscr = uVar15 & 0xfffffff | (uint)(fVar22 == fVar1) << 0x1e;
      local_dc = fVar1;
      local_d4 = fVar1;
      local_d0 = fVar1;
      local_c8 = fVar1;
      local_c0 = fVar1;
      local_ec = fVar23;
      local_e4 = fVar21;
      local_c4 = fVar23;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar18 = (float)FUN_003727f0(fVar22);
        fVar19 = (float)FUN_00372674(fVar22);
        fVar23 = local_e4 * fVar18;
        local_e4 = local_e4 * fVar19 - local_e8 * fVar18;
        fVar21 = local_d4 * fVar18;
        local_d4 = local_d4 * fVar19 - local_d8 * fVar18;
        fVar24 = local_c4 * fVar18;
        local_c4 = local_c4 * fVar19 - local_c8 * fVar18;
        local_e8 = local_e8 * fVar19 + fVar23;
        local_d8 = local_d8 * fVar19 + fVar21;
        local_c8 = local_c8 * fVar19 + fVar24;
      }
      FUN_003735ac(&local_a4,&local_ec,&local_98);
      *pfVar12 = pfVar12[-3] + local_a4;
      pfVar12[1] = pfVar12[-2] + local_a0;
      pfVar12[2] = pfVar12[-1] + local_9c;
      if (*(short *)(iVar2 + 0x42) + iVar10 == 0x13) {
        uVar15 = in_fpscr & 0xfffffff;
        in_fpscr = uVar15 | (uint)(*(float *)(iVar13 + 0x6c) == fVar1) << 0x1e;
        bVar14 = false;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          in_fpscr = uVar15 | (uint)(*(float *)(iVar2 + 0xe8) == fVar1) << 0x1e;
          bVar14 = SUB41(in_fpscr >> 0x1e,0);
        }
        if (bVar14) {
          FUN_00373500(fVar17,fVar16,uVar7,DAT_0035cd98);
        }
        else {
          *pfVar3 = fVar17;
        }
        pfVar3[1] = fVar22;
      }
      iVar10 = (int)(short)((short)iVar10 + 1);
      if (0x13 < iVar10) {
        if (0x12 < *(short *)(iVar2 + 0x42)) {
          *pfVar3 = fVar1;
          pfVar3[1] = fVar1;
        }
        if (((*(uint *)(*(int *)(local_50 + 0xac) + 0x1710) & 0x100000) == 0) &&
           (iVar10 = FUN_00374be8(param_1,0x18), fVar1 = DAT_0035cda8, iVar13 = DAT_0035cda4,
           puVar6 = DAT_0035cd6c, iVar10 == 0)) {
          iVar10 = 0;
          iVar11 = 0x13;
          do {
            iVar8 = iVar11 + *(short *)(iVar2 + 0x42);
            if (iVar8 < 0x14) {
              puVar5 = puVar6 + iVar11 * 3;
              local_8c = *puVar5;
              local_88 = puVar5[1];
              local_84 = puVar5[2];
              local_58 = *(float *)(iVar13 + iVar8 * 4) * fVar1;
              local_80 = local_58 * 1.0;
              local_70 = local_58 * 0.0;
              local_60 = local_58 * 0.0;
              local_7c = local_58 * 0.0;
              local_6c = local_58 * 1.0;
              local_5c = local_58 * 0.0;
              local_78 = local_58 * 0.0;
              local_68 = local_58 * 0.0;
              local_58 = local_58 * 1.0;
              local_74 = local_8c;
              local_64 = local_88;
              local_54 = local_84;
              FUN_00371fac(&local_80,param_1 + 0x2fc);
              iVar10 = param_2 + iVar11 * 4;
              *(undefined1 *)(*(int *)(iVar10 + 0x788) + 0xac) = 1;
              FUN_003721e0(*(undefined4 *)(iVar10 + 0x788),&local_80);
              FUN_00372170(*(undefined4 *)(iVar10 + 0x788),0);
              iVar10 = iVar11;
            }
            iVar11 = (int)(short)((short)iVar11 + -1);
          } while (-1 < iVar11);
          if (*(char *)(iVar2 + 5) != '\0') {
            puVar6 = puVar6 + iVar10 * 3;
            FUN_003713fc(*puVar6,puVar6[1],puVar6[2],&local_80,0);
            FUN_003735e8(*pfVar3,&local_80,1);
            FUN_00369014(pfVar3[1],&local_80,1);
            FUN_00371348(DAT_0035cf3c,DAT_0035cf3c,DAT_0035cf38,&local_80,1);
            FUN_003735e8(DAT_0035cf40,&local_80,1);
            FUN_00371234(DAT_0035cf44,&local_80,1);
            FUN_00315744(param_1,param_2,&local_80);
          }
        }
        return;
      }
      fVar23 = fVar1;
      fVar21 = fVar1;
    } while (9 < iVar10);
  } while( true );
}

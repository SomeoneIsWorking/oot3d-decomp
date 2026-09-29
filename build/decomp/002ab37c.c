// OoT3D decomp @ 002ab37c  name=FUN_002ab37c  size=1288

void FUN_002ab37c(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  byte bVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  int local_48;

  local_48 = param_2;
  FUN_0036c5bc(param_2,0);
  fVar20 = DAT_002ab778;
  FUN_00372224(&local_78,param_1 + 0x148);
  fVar19 = DAT_002ab77c;
  iVar8 = FUN_003695f8();
  iVar7 = local_48;
  fVar18 = DAT_002ab790;
  fVar17 = DAT_002ab78c;
  iVar11 = DAT_002ab788;
  fVar6 = DAT_002ab780;
  if (iVar8 != 0) {
    fVar19 = DAT_002ab780;
  }
  psVar9 = *(short **)(local_48 + 0x20e4);
  do {
    if (psVar9 == (short *)0x0) {
LAB_002ab404:
      iVar8 = DAT_002ab794;
      fVar14 = DAT_002ab798;
      for (psVar9 = *(short **)(&DAT_000020cc + local_48); DAT_002ab794 = iVar8,
          DAT_002ab798 = fVar14, psVar9 != (short *)0x0; psVar9 = *(short **)(psVar9 + 0x98)) {
        if (*psVar9 == iVar11) {
          fVar14 = *(float *)(psVar9 + 0x7a);
          uVar13 = in_fpscr & 0xfffffff;
          uVar1 = uVar13 | (uint)(fVar14 < fVar20) << 0x1f | (uint)(fVar14 == fVar20) << 0x1e;
          in_fpscr = uVar1 | (uint)(NAN(fVar14) || NAN(fVar20)) << 0x1c;
          bVar5 = (byte)(uVar1 >> 0x18);
          if (!(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            local_b4 = *(undefined4 *)(psVar9 + 0x14);
            iVar8 = *(int *)(psVar9 + 0xf2);
            local_b0 = *(undefined4 *)(psVar9 + 0x16);
            local_ac = *(undefined4 *)(psVar9 + 0x18);
            local_78 = 1.0;
            local_74 = 0.0;
            local_60 = 0.0;
            local_70 = 0.0;
            local_64 = 1.0;
            local_50 = 1.0;
            local_68 = 0.0;
            local_58 = 0.0;
            local_54 = 0.0;
            local_6c = local_b4;
            local_5c = (float)local_b0;
            local_4c = local_ac;
            if ((char)psVar9[0xe1] != '\0') {
              fVar14 = (float)VectorSignedToFloat((int)psVar9[0x5e],(byte)(in_fpscr >> 0x15) & 3);
              fVar14 = fVar14 * fVar17 * fVar18;
              uVar13 = uVar13 | (uint)(fVar14 == fVar6) << 0x1e;
              if (!SUB41(uVar13 >> 0x1e,0)) {
                fVar15 = (float)FUN_003727f0(fVar14);
                fVar16 = (float)FUN_00372674(fVar14);
                fVar14 = local_70 * fVar15;
                local_70 = local_70 * fVar16 - local_74 * fVar15;
                fVar2 = local_60 * fVar15;
                local_60 = local_60 * fVar16 - local_64 * fVar15;
                fVar3 = local_50 * fVar15;
                local_50 = local_50 * fVar16 - local_54 * fVar15;
                local_74 = local_74 * fVar16 + fVar14;
                local_64 = local_64 * fVar16 + fVar2;
                local_54 = local_54 * fVar16 + fVar3;
              }
              fVar14 = (float)VectorSignedToFloat((int)psVar9[0x60],(byte)(uVar13 >> 0x15) & 3);
              fVar14 = fVar14 * fVar17 * fVar18;
              in_fpscr = uVar13 & 0xfffffff | (uint)(fVar14 == fVar6) << 0x1e;
              if (!SUB41(in_fpscr >> 0x1e,0)) {
                fVar15 = (float)FUN_003727f0(fVar14);
                fVar16 = (float)FUN_00372674(fVar14);
                fVar14 = local_74 * fVar15;
                local_74 = local_74 * fVar16 - local_78 * fVar15;
                fVar2 = local_64 * fVar15;
                local_64 = local_64 * fVar16 - local_68 * fVar15;
                fVar3 = local_54 * fVar15;
                local_54 = local_54 * fVar16 - local_58 * fVar15;
                local_78 = local_78 * fVar16 + fVar14;
                local_68 = local_68 * fVar16 + fVar2;
                local_58 = local_58 * fVar16 + fVar3;
              }
            }
            if (iVar8 != 0) {
              *(undefined1 *)(iVar8 + 0xac) = 1;
              FUN_003721e0(iVar8,&local_78);
              FUN_00372170(iVar8,0);
            }
          }
        }
        iVar8 = DAT_002ab794;
        fVar14 = DAT_002ab798;
      }
      psVar9 = *(short **)(&DAT_000020cc + iVar7);
      if (psVar9 != (short *)0x0) {
        do {
          if (((*psVar9 == 0x106) && (*(uint *)(psVar9 + 0x7a) < DAT_002ab79c)) &&
             ((char)psVar9[0xe3] != '\0')) {
            local_c0 = *(undefined4 *)(psVar9 + 0x14);
            local_b8 = *(undefined4 *)(psVar9 + 0x18);
            local_bc = fVar6;
            local_70 = 0.0;
            local_74 = 0.0;
            local_78 = 1.0;
            local_68 = 0.0;
            local_64 = 1.0;
            local_60 = 0.0;
            local_58 = 0.0;
            local_5c = fVar6;
            local_54 = 0.0;
            local_50 = 1.0;
            iVar11 = 0;
            local_6c = local_c0;
            local_4c = local_b8;
            do {
              if ((*(byte *)((int)psVar9 + 0x1c3) & *(byte *)(DAT_002ab7a0 + iVar11)) != 0) {
                local_a8 = local_78;
                fStack_a4 = local_74;
                fStack_a0 = local_70;
                uStack_9c = local_6c;
                fStack_98 = local_68;
                fStack_94 = local_64;
                local_90 = local_60;
                local_8c = local_5c;
                fStack_88 = local_58;
                fStack_84 = local_54;
                fStack_80 = local_50;
                uStack_7c = local_4c;
                puVar10 = (undefined4 *)(iVar8 + iVar11 * 0xc);
                local_cc = *puVar10;
                local_c4 = puVar10[2];
                local_c8 = fVar6;
                FUN_00372070(&local_78,&local_78,&local_cc);
                fVar20 = *(float *)(iVar8 + 0x30 + iVar11 * 4);
                if (fVar20 != fVar6) {
                  fVar17 = (float)FUN_003727f0(fVar20);
                  fVar18 = (float)FUN_00372674(fVar20);
                  fVar20 = local_78 * fVar17;
                  local_78 = local_78 * fVar18 - local_70 * fVar17;
                  local_70 = fVar20 + local_70 * fVar18;
                  fVar20 = local_68 * fVar17;
                  local_68 = local_68 * fVar18 - local_60 * fVar17;
                  local_60 = fVar20 + local_60 * fVar18;
                  fVar20 = local_50 * fVar17;
                  local_50 = local_58 * fVar17 + local_50 * fVar18;
                  local_58 = local_58 * fVar18 - fVar20;
                }
                fVar20 = *(float *)(psVar9 + 0xe4) * fVar14;
                local_78 = local_78 * fVar14;
                local_68 = local_68 * fVar14;
                local_58 = local_58 * fVar14;
                local_74 = local_74 * fVar20;
                local_64 = local_64 * fVar20;
                local_54 = local_54 * fVar20;
                local_70 = local_70 * fVar14;
                local_60 = local_60 * fVar14;
                local_50 = local_50 * fVar14;
                if (*(int *)(psVar9 + iVar11 * 2 + 0xf4) != 0) {
                  *(float *)(*(int *)(*(int *)(psVar9 + iVar11 * 2 + 0xf4) + 0xc) + 0xc) = fVar19;
                  *(undefined1 *)(*(int *)(psVar9 + iVar11 * 2 + 0xf4) + 0xac) = 1;
                  FUN_003721e0(*(undefined4 *)(psVar9 + iVar11 * 2 + 0xf4),&local_78);
                  FUN_00372170(*(undefined4 *)(psVar9 + iVar11 * 2 + 0xf4),0);
                }
                local_78 = local_a8;
                local_74 = fStack_a4;
                local_70 = fStack_a0;
                local_6c = uStack_9c;
                local_68 = fStack_98;
                local_64 = fStack_94;
                local_60 = local_90;
                local_5c = local_8c;
                local_58 = fStack_88;
                local_54 = fStack_84;
                local_50 = fStack_80;
                local_4c = uStack_7c;
              }
              iVar11 = (int)(short)((short)iVar11 + 1);
            } while (iVar11 < 4);
          }
          psVar9 = *(short **)(psVar9 + 0x98);
        } while (psVar9 != (short *)0x0);
      }
      *(undefined1 *)(local_48 + 0x7fc6) = 0;
      return;
    }
    sVar4 = *psVar9;
    bVar12 = sVar4 == 0xe8;
    if (bVar12) {
      sVar4 = psVar9[0xe];
    }
    if (bVar12 && sVar4 == 0) {
      if ((char)psVar9[0x562] != '\0') {
        fVar20 = DAT_002ab784;
      }
      goto LAB_002ab404;
    }
    psVar9 = *(short **)(psVar9 + 0x98);
  } while( true );
}

// OoT3D decomp @ 00150d58  name=FUN_00150d58  size=1048

void FUN_00150d58(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  uint in_fpscr;
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
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;

  FUN_00359450(*(undefined4 *)(DAT_00151164 + param_2),&local_d4);
  fVar17 = *(float *)(param_1 + 0x2e0);
  fVar20 = *(float *)(param_1 + 0x294) * DAT_00151168;
  fVar23 = local_cc * fVar17 * fVar20;
  fVar24 = local_bc * fVar17 * fVar20;
  fVar20 = local_ac * fVar17 * fVar20;
  local_68 = local_c8;
  local_74 = local_c8 + fVar23;
  local_64 = local_b8;
  local_70 = local_b8 + fVar24;
  local_60 = local_a8;
  local_6c = local_a8 + fVar20;
  local_e0 = local_c8 + local_d4 * DAT_0015116c;
  local_ec = local_74 + local_d4 * DAT_0015116c;
  local_dc = local_b8 + local_c4 * DAT_0015116c;
  local_e8 = local_70 + local_c4 * DAT_0015116c;
  local_d8 = local_a8 + local_b4 * DAT_0015116c;
  local_e4 = local_6c + local_b4 * DAT_0015116c;
  FUN_0035479c(param_1 + 0x214,&local_e0,&local_68,&local_ec,&local_74);
  fVar10 = DAT_00151190;
  fVar9 = DAT_0015118c;
  pfVar8 = DAT_00151188;
  fVar7 = DAT_00151184;
  fVar6 = DAT_00151180;
  puVar5 = DAT_0015117c;
  fVar4 = DAT_00151178;
  fVar3 = DAT_00151174;
  fVar17 = DAT_00151170;
  iVar14 = 0;
  do {
    pfVar13 = (float *)(param_3 + iVar14 * 0x44);
    fVar11 = pfVar13[0xf];
    if (fVar11 != 0.0) {
      fVar18 = (float)VectorSignedToFloat((int)*(short *)((int)fVar11 + 10),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)((int)fVar11 + 0xc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)((int)fVar11 + 0xe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar12 = FUN_00354698(&local_68,&local_74,&local_80,1);
      if (iVar12 == 0) {
        pfVar13[0xf] = 0.0;
      }
      else {
        *pfVar13 = local_80;
        pfVar13[1] = local_7c;
        pfVar13[2] = local_78;
        fVar22 = *(float *)(param_1 + 0x294) * fVar3;
        fVar19 = SQRT((local_80 - local_68) * (local_80 - local_68) +
                      (local_7c - local_64) * (local_7c - local_64) +
                      (local_78 - local_60) * (local_78 - local_60));
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar22 < fVar19) << 0x1f |
                (uint)(fVar22 == fVar19) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar22) || NAN(fVar19)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          *(char *)(pfVar13 + 0x10) = (char)(int)(fVar4 - fVar19);
        }
        else {
          *(undefined1 *)(pfVar13 + 0x10) = 200;
        }
        local_8c = local_68 + local_d4 * fVar9;
        local_98 = local_8c + fVar23 * fVar10;
        local_88 = local_64 + local_c4 * fVar9;
        local_94 = local_88 + fVar24 * fVar10;
        local_84 = local_60 + local_b4 * fVar9;
        local_90 = local_84 + fVar20 * fVar10;
        if (((*puVar5 & 1) == 0) && (iVar12 = FUN_003679b4(DAT_0015117c), iVar12 != 0)) {
          *pfVar8 = fVar6;
          pfVar8[1] = fVar7;
          pfVar8[2] = fVar7;
          pfVar8[3] = fVar7;
          pfVar8[4] = fVar7;
          pfVar8[5] = fVar6;
          pfVar8[6] = fVar7;
          pfVar8[7] = fVar7;
          pfVar8[8] = fVar7;
          pfVar8[9] = fVar7;
          pfVar8[10] = fVar6;
          pfVar8[0xb] = fVar7;
        }
        fVar19 = pfVar8[1];
        fVar22 = pfVar8[2];
        fVar15 = pfVar8[3];
        fVar16 = pfVar8[4];
        pfVar13[3] = *pfVar8;
        pfVar13[4] = fVar19;
        pfVar13[5] = fVar22;
        pfVar13[6] = fVar15;
        pfVar13[7] = fVar16;
        fVar19 = pfVar8[6];
        fVar22 = pfVar8[7];
        fVar15 = pfVar8[8];
        fVar16 = pfVar8[9];
        pfVar13[8] = pfVar8[5];
        pfVar13[9] = fVar19;
        pfVar13[10] = fVar22;
        pfVar13[0xb] = fVar15;
        pfVar13[0xc] = fVar16;
        fVar19 = pfVar8[0xb];
        pfVar13[0xd] = pfVar8[10];
        pfVar13[0xe] = fVar19;
        iVar12 = FUN_00354698(fVar18 * fVar17,fVar21 * fVar17,fVar11 * fVar17,
                              *(undefined4 *)((int)pfVar13[0xf] + 0x10),&local_8c,&local_98,
                              &local_a4,1);
        if (iVar12 != 0) {
          pfVar13[3] = local_a4 - local_80;
          pfVar13[7] = local_a0 - local_7c;
          pfVar13[0xb] = local_9c - local_78;
        }
        local_8c = local_68 + local_d0 * fVar9;
        local_98 = local_8c + fVar23 * fVar10;
        local_88 = local_64 + local_c0 * fVar9;
        local_94 = local_88 + fVar24 * fVar10;
        local_84 = local_60 + local_b0 * fVar9;
        local_90 = local_84 + fVar20 * fVar10;
        iVar12 = FUN_00354698(fVar18 * fVar17,fVar21 * fVar17,fVar11 * fVar17,
                              *(undefined4 *)((int)pfVar13[0xf] + 0x10),&local_8c,&local_98,
                              &local_a4,1);
        if (iVar12 != 0) {
          pfVar13[4] = local_a4 - local_80;
          pfVar13[8] = local_a0 - local_7c;
          pfVar13[0xc] = local_9c - local_78;
        }
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 6);
  return;
}

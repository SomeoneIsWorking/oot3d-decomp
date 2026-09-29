// OoT3D decomp @ 002b6d4c  name=FUN_002b6d4c  size=1196

/* WARNING: Removing unreachable block (ram,0x002b7110) */
/* WARNING: Removing unreachable block (ram,0x002b711c) */

void FUN_002b6d4c(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;

  iVar8 = *(int *)(DAT_002b7154 + param_2);
  fVar20 = (float)VectorUnsignedToFloat
                            (*(uint *)(param_2 + 0xf8) & 0x1f,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = (int)*(short *)(*DAT_002b7158 + 0x110);
  fVar10 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)*(short *)(param_1 + 0x1a4) < (int)(DAT_002b715c / fVar10 + DAT_002b7160)) {
    local_48 = (*(float *)(iVar8 + 0x23c4) + *(float *)(iVar8 + 0x23e8)) * DAT_002b7160;
    local_44 = (*(float *)(iVar8 + 0x23c8) + *(float *)(iVar8 + 0x23ec)) * DAT_002b7160;
    local_40 = (*(float *)(iVar8 + 0x23cc) + *(float *)(iVar8 + 0x23f0)) * DAT_002b7160;
    iVar8 = (int)*(short *)(*DAT_002b7158 + 0x110);
    iVar4 = (int)*(short *)(param_1 + 0x1a4);
    fVar10 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_002b7164 / fVar10 + DAT_002b7160) < iVar4) {
      fVar10 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar4 < 1) {
        fVar10 = fVar10 * fVar17 * DAT_002b7168 - DAT_002b7160;
      }
      else {
        fVar10 = DAT_002b7160 + fVar10 * fVar17 * DAT_002b7168;
      }
      fVar10 = (float)VectorSignedToFloat((int)fVar10 + -0x14,(byte)(in_fpscr >> 0x15) & 3);
      local_44 = local_44 + fVar10 * DAT_002b716c;
    }
    *(float *)(param_1 + 0x1a8) = local_48;
    *(float *)(param_1 + 0x1ac) = local_44;
    *(float *)(param_1 + 0x1b0) = local_40;
  }
  else {
    fVar10 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_002b7170 / fVar10 + DAT_002b7160) <= (int)*(short *)(param_1 + 0x1a4)) {
      return;
    }
    local_48 = *(float *)(param_1 + 0x1a8);
    local_44 = *(float *)(param_1 + 0x1ac);
    local_40 = *(float *)(param_1 + 0x1b0);
  }
  FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar17 = (float)FUN_002cfca0();
  FUN_00320d54(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar9 = (float)FUN_00338f60();
  fVar10 = DAT_002b7174;
  local_48 = local_48 - *(float *)(param_1 + 0x54) * DAT_002b7174 * fVar17 * fVar9;
  FUN_00320d54(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar17 = (float)FUN_002cfca0();
  local_44 = local_44 - *(float *)(param_1 + 0x54) * fVar17 * fVar10;
  FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar17 = (float)FUN_00338f60();
  FUN_00320d54(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar9 = (float)FUN_00338f60();
  local_40 = local_40 - *(float *)(param_1 + 0x54) * fVar10 * fVar17 * fVar9;
  FUN_003534b8(&local_88,0xaa,0xff,0xff,0xff,0,0x96,0xff);
  iVar4 = DAT_002b7188;
  fVar1 = DAT_002b7184;
  fVar9 = DAT_002b7180;
  fVar17 = DAT_002b717c;
  fVar10 = DAT_002b7178;
  iVar8 = 0;
  do {
    iVar7 = param_1 + iVar8 * 4;
    iVar2 = *(int *)(iVar7 + 0x1c8);
    *(float *)(iVar2 + 0x3c) = local_48;
    *(float *)(iVar2 + 0x40) = local_44;
    *(float *)(iVar2 + 0x44) = local_40;
    iVar2 = DAT_002b718c;
    fVar11 = *(float *)(param_1 + 0x54);
    fVar12 = *(float *)(param_1 + 0x58);
    iVar3 = *(int *)(iVar7 + 0x1c8);
    *(float *)(iVar3 + 0x50) = *(float *)(param_1 + 0x5c) * fVar10;
    *(float *)(iVar3 + 0x4c) = fVar12 * fVar10;
    *(float *)(iVar3 + 0x48) = fVar11 * fVar10;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 <= fVar20 * fVar17) << 0x1d;
    for (fVar11 = ABS(fVar20 * fVar17); iVar2 <= (int)fVar11; fVar11 = fVar11 - fVar1) {
    }
    uVar13 = VectorFloatToUnsigned(fVar9,3);
    uVar14 = VectorFloatToUnsigned(fVar9,3);
    uVar15 = VectorFloatToUnsigned(fVar11,3);
    fVar19 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    pfVar5 = (float *)(iVar4 + (uVar13 & 0xff) * 0x10);
    fVar16 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = pfVar5[1] + (fVar9 - fVar19) * pfVar5[3];
    pfVar6 = (float *)(iVar4 + (uVar14 & 0xff) * 0x10);
    fVar19 = *pfVar5 + (fVar9 - fVar19) * pfVar5[2];
    pfVar5 = (float *)(iVar4 + (uVar15 & 0xff) * 0x10);
    local_58 = *pfVar6 + (fVar9 - fVar12) * pfVar6[2];
    local_68 = pfVar6[1] + (fVar9 - fVar12) * pfVar6[3];
    fVar12 = *pfVar5 + (fVar11 - fVar16) * pfVar5[2];
    fVar11 = pfVar5[1] + (fVar11 - fVar16) * pfVar5[3];
    local_50 = fVar18 * local_68;
    local_54 = fVar19 * local_68;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar12 = -fVar12;
    }
    local_78 = fVar11 * local_68;
    local_68 = fVar12 * local_68;
    local_74 = fVar19 * fVar11 * local_58 - fVar18 * fVar12;
    local_60 = fVar18 * fVar12 * local_58 - fVar19 * fVar11;
    local_70 = fVar19 * fVar12 + fVar18 * fVar11 * local_58;
    local_64 = fVar18 * fVar11 + fVar19 * fVar12 * local_58;
    local_58 = -local_58;
    local_6c = 0;
    local_5c = 0;
    local_4c = 0;
    iVar2 = *(int *)(iVar7 + 0x1c8);
    *(float *)(iVar2 + 0x54) = local_78;
    *(float *)(iVar2 + 0x58) = local_74;
    *(float *)(iVar2 + 0x5c) = local_70;
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(float *)(iVar2 + 100) = local_68;
    *(float *)(iVar2 + 0x68) = local_64;
    *(float *)(iVar2 + 0x6c) = local_60;
    *(undefined4 *)(iVar2 + 0x70) = 0;
    *(float *)(iVar2 + 0x74) = local_58;
    *(float *)(iVar2 + 0x78) = local_54;
    *(float *)(iVar2 + 0x7c) = local_50;
    *(undefined4 *)(iVar2 + 0x80) = 0;
    iVar2 = *(int *)(iVar7 + 0x1c8);
    *(undefined4 *)(iVar2 + 0xf0) = local_88;
    *(undefined4 *)(iVar2 + 0xf4) = uStack_84;
    *(undefined4 *)(iVar2 + 0xf8) = uStack_80;
    *(undefined4 *)(iVar2 + 0xfc) = uStack_7c;
    FUN_00371eac(*(undefined4 *)(iVar7 + 0x1c8),1);
    fVar20 = -fVar20;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  *(undefined1 *)(*(int *)(param_1 + 0x1bc) + 0xad) = 0;
  return;
}

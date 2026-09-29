// OoT3D decomp @ 00494e80  name=FUN_00494e80  size=1828

/* WARNING: Removing unreachable block (ram,0x0049520c) */
/* WARNING: Removing unreachable block (ram,0x00495228) */

void FUN_00494e80(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  uint local_90;
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
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;

  local_54 = *(undefined4 *)(param_1 + 0x74);
  local_50 = *(int *)(param_1 + 0x78);
  local_4c = *(uint *)(param_1 + 0x7c);
  local_48 = *(float *)(param_1 + 0x80);
  local_44 = *(float *)(param_1 + 0x84);
  local_40 = *(undefined4 *)(param_1 + 0x88);
  local_3c = *(undefined4 *)(param_1 + 0x8c);
  local_38 = *(undefined4 *)(param_1 + 0x90);
  local_34 = *(float *)(param_1 + 0x94);
  local_30 = *(float *)(param_1 + 0x98);
  local_2c = *(float *)(param_1 + 0x9c);
  local_28 = *(uint *)(param_1 + 0xa0);
  local_24 = *(int *)(param_1 + 0xa4);
  local_20 = *(undefined4 *)(param_1 + 0xa8);
  local_1c = *(uint *)(param_1 + 0xac);
  bVar7 = false;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00498b0c(param_1 + 8);
    local_90 = *(uint *)(param_1 + 0x24);
    local_8c = *(float *)(param_1 + 0x28);
    local_88 = *(float *)(param_1 + 0x2c);
    local_84 = *(float *)(param_1 + 0x30);
    local_80 = *(float *)(param_1 + 0x34);
    local_7c = *(float *)(param_1 + 0x38);
    local_78 = *(float *)(param_1 + 0x3c);
    local_74 = *(float *)(param_1 + 0x40);
    local_70 = *(float *)(param_1 + 0x44);
    local_6c = *(float *)(param_1 + 0x48);
    local_68 = *(float *)(param_1 + 0x4c);
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    local_60 = *(float *)(param_1 + 0x54);
    local_5c = *(float *)(param_1 + 0x58);
    uVar6 = *(undefined4 *)(param_1 + 0x5c);
    if ((local_90 & 1) != 0) {
      local_50 = (int)local_8c;
    }
    if ((local_90 & 2) != 0) {
      local_4c = (uint)local_88;
    }
    if ((local_90 & 4) != 0) {
      local_48 = local_84;
    }
    if ((local_90 & 8) != 0) {
      local_44 = local_80;
    }
    if ((local_90 & 0x10) != 0) {
      local_40 = local_7c;
    }
    if ((local_90 & 0x20) != 0) {
      local_3c = local_78;
    }
    if ((local_90 & 0x40) != 0) {
      local_38 = local_74;
    }
    if ((local_90 & 0x80) != 0) {
      local_34 = local_70;
    }
    if ((local_90 & 0x100) != 0) {
      local_30 = local_6c;
    }
    if ((local_90 & 0x200) != 0) {
      local_2c = local_68;
    }
    if ((local_90 & 0x400) != 0) {
      local_28 = CONCAT31(local_28._1_3_,(char)uVar5);
    }
    if ((local_90 & 0x800) != 0) {
      local_64._1_1_ = (undefined1)((uint)uVar5 >> 8);
      local_28._0_2_ = CONCAT11(local_64._1_1_,(undefined1)local_28);
    }
    if ((local_90 & 0x1000) != 0) {
      local_64._2_1_ = (undefined1)((uint)uVar5 >> 0x10);
      local_28._0_3_ = CONCAT12(local_64._2_1_,(undefined2)local_28);
    }
    if ((local_90 & 0x2000) != 0) {
      local_64._3_1_ = (undefined1)((uint)uVar5 >> 0x18);
      local_28 = CONCAT13(local_64._3_1_,(undefined3)local_28);
    }
    if ((local_90 & 0x4000) != 0) {
      local_24 = (int)local_60;
    }
    if ((local_90 & 0x8000) != 0) {
      local_20 = local_5c;
    }
    if ((local_90 & 0x10000) != 0) {
      local_1c = CONCAT31(local_1c._1_3_,(char)uVar6);
    }
    if ((local_90 & 0x20000) != 0) {
      local_58._1_1_ = (undefined1)((uint)uVar6 >> 8);
      local_1c._0_2_ = CONCAT11(local_58._1_1_,(undefined1)local_1c);
    }
    if ((local_90 & 0x40000) != 0) {
      local_58._2_1_ = (undefined1)((uint)uVar6 >> 0x10);
      local_1c._0_3_ = CONCAT12(local_58._2_1_,(undefined2)local_1c);
    }
    bVar7 = (local_90 & 0x80000) != 0;
    local_64 = uVar5;
    local_58 = uVar6;
    if (bVar7) {
      local_1c = CONCAT13((char)((uint)uVar6 >> 0x18),(undefined3)local_1c);
    }
  }
  iVar2 = local_50;
  *(int *)(param_1 + 0x78) = local_50;
  FUN_003446ac(*(undefined4 *)(param_1 + 100),*(int *)(*(int *)(param_1 + 4) + local_50 * 4) + 4);
  FUN_003446ac(*(undefined4 *)(param_1 + 0x68),*(int *)(*(int *)(param_1 + 4) + iVar2 * 4) + 0x1bc);
  local_64 = DAT_00495474;
  local_60 = (float)VectorSignedToFloat((int)local_48,(byte)(in_fpscr >> 0x15) & 3);
  local_5c = (float)VectorSignedToFloat((int)local_44,(byte)(in_fpscr >> 0x15) & 3);
  local_58 = local_40;
  iVar2 = *(int *)(param_1 + 100);
  *(float *)(iVar2 + 0x3c) = local_60;
  *(float *)(iVar2 + 0x40) = local_5c;
  *(undefined4 *)(iVar2 + 0x44) = local_40;
  fVar9 = (float)VectorSignedToFloat(local_20,(byte)(in_fpscr >> 0x15) & 3);
  local_60 = local_60 + fVar9;
  fVar9 = (float)VectorSignedToFloat(local_20,(byte)(in_fpscr >> 0x15) & 3);
  local_5c = local_5c + fVar9;
  iVar2 = *(int *)(param_1 + 0x68);
  *(float *)(iVar2 + 0x3c) = local_60;
  *(float *)(iVar2 + 0x40) = local_5c;
  *(undefined4 *)(iVar2 + 0x44) = local_40;
  local_6c = (float)local_3c;
  local_68 = (float)local_38;
  iVar2 = *(int *)(param_1 + 100);
  *(undefined4 *)(iVar2 + 0x48) = local_3c;
  *(undefined4 *)(iVar2 + 0x4c) = local_38;
  *(undefined4 *)(iVar2 + 0x50) = local_64;
  iVar2 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar2 + 0x48) = local_3c;
  *(undefined4 *)(iVar2 + 0x4c) = local_38;
  *(undefined4 *)(iVar2 + 0x50) = local_64;
  local_d0 = DAT_00495478;
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00495478 <= local_34 * DAT_0049547c) << 0x1d;
  for (fVar9 = ABS(local_34 * DAT_0049547c); DAT_00495480 <= (int)fVar9;
      fVar9 = fVar9 - DAT_00495484) {
  }
  uVar10 = VectorFloatToUnsigned(DAT_00495478,3);
  uVar11 = VectorFloatToUnsigned(DAT_00495478,3);
  uVar12 = VectorFloatToUnsigned(fVar9,3);
  fVar14 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar3 = (float *)(DAT_00495488 + (uVar10 & 0xff) * 0x10);
  fVar16 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar4 = (float *)(DAT_00495488 + (uVar11 & 0xff) * 0x10);
  fVar17 = *pfVar3 + (DAT_00495478 - fVar13) * pfVar3[2];
  fVar13 = pfVar3[1] + (DAT_00495478 - fVar13) * pfVar3[3];
  pfVar3 = (float *)(DAT_00495488 + (uVar12 & 0xff) * 0x10);
  local_8c = pfVar4[1] + (DAT_00495478 - fVar14) * pfVar4[3];
  local_7c = *pfVar4 + (DAT_00495478 - fVar14) * pfVar4[2];
  fVar14 = *pfVar3 + (fVar9 - fVar16) * pfVar3[2];
  local_78 = fVar17 * local_8c;
  fVar9 = pfVar3[1] + (fVar9 - fVar16) * pfVar3[3];
  local_74 = fVar13 * local_8c;
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar14 = -fVar14;
  }
  local_9c = fVar9 * local_8c;
  local_8c = fVar14 * local_8c;
  local_98 = fVar17 * fVar9 * local_7c - fVar13 * fVar14;
  local_84 = fVar13 * fVar14 * local_7c - fVar17 * fVar9;
  local_94 = fVar17 * fVar14 + fVar13 * fVar9 * local_7c;
  local_88 = fVar13 * fVar9 + fVar17 * fVar14 * local_7c;
  local_7c = -local_7c;
  local_90 = 0;
  local_80 = 0.0;
  local_70 = 0.0;
  iVar2 = *(int *)(param_1 + 100);
  *(float *)(iVar2 + 0x54) = local_9c;
  *(float *)(iVar2 + 0x58) = local_98;
  *(float *)(iVar2 + 0x5c) = local_94;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(float *)(iVar2 + 100) = local_8c;
  *(float *)(iVar2 + 0x68) = local_88;
  *(float *)(iVar2 + 0x6c) = local_84;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(float *)(iVar2 + 0x74) = local_7c;
  *(float *)(iVar2 + 0x78) = local_78;
  *(float *)(iVar2 + 0x7c) = local_74;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  iVar2 = *(int *)(param_1 + 0x68);
  *(float *)(iVar2 + 0x54) = local_9c;
  *(float *)(iVar2 + 0x58) = local_98;
  *(float *)(iVar2 + 0x5c) = local_94;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(float *)(iVar2 + 100) = local_8c;
  *(float *)(iVar2 + 0x68) = local_88;
  *(float *)(iVar2 + 0x6c) = local_84;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(float *)(iVar2 + 0x74) = local_7c;
  *(float *)(iVar2 + 0x78) = local_78;
  *(float *)(iVar2 + 0x7c) = local_74;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + local_50 * 4);
  local_d8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x388),(byte)(uVar1 >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x38c),(byte)(uVar1 >> 0x15) & 3);
  local_d8 = local_30 / local_d8;
  local_d4 = -(local_2c / fVar9);
  local_c4 = 0;
  local_cc = 0x3f800000;
  local_b8 = 0x3f800000;
  local_bc = 0;
  local_a4 = 0x3f800000;
  local_a8 = 0;
  local_c8 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a0 = local_d0;
  iVar2 = *(int *)(param_1 + 100);
  *(undefined4 *)(iVar2 + 0x110) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x114) = 0;
  *(undefined4 *)(iVar2 + 0x118) = 0;
  *(float *)(iVar2 + 0x11c) = local_d8;
  *(undefined4 *)(iVar2 + 0x120) = 0;
  *(undefined4 *)(iVar2 + 0x124) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x128) = 0;
  *(float *)(iVar2 + 300) = local_d4;
  *(undefined4 *)(iVar2 + 0x130) = 0;
  *(undefined4 *)(iVar2 + 0x134) = 0;
  *(undefined4 *)(iVar2 + 0x138) = 0x3f800000;
  *(float *)(iVar2 + 0x13c) = local_d0;
  iVar2 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar2 + 0x110) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x114) = 0;
  *(undefined4 *)(iVar2 + 0x118) = 0;
  *(float *)(iVar2 + 0x11c) = local_d8;
  *(undefined4 *)(iVar2 + 0x120) = 0;
  *(undefined4 *)(iVar2 + 0x124) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x128) = 0;
  *(float *)(iVar2 + 300) = local_d4;
  *(undefined4 *)(iVar2 + 0x130) = 0;
  *(undefined4 *)(iVar2 + 0x134) = 0;
  *(undefined4 *)(iVar2 + 0x138) = 0x3f800000;
  *(float *)(iVar2 + 0x13c) = local_d0;
  fVar9 = DAT_0049548c;
  iVar2 = *(int *)(param_1 + 100);
  fVar13 = (float)VectorUnsignedToFloat(local_28 & 0xff,(byte)(uVar1 >> 0x15) & 3);
  fVar14 = (float)VectorUnsignedToFloat(local_28 >> 8 & 0xff,(byte)(uVar1 >> 0x15) & 3);
  fVar16 = (float)VectorUnsignedToFloat(local_28 >> 0x10 & 0xff,(byte)(uVar1 >> 0x15) & 3);
  fVar14 = fVar14 * DAT_0049548c;
  fVar16 = fVar16 * DAT_0049548c;
  *(float *)(iVar2 + 0xf0) = fVar13 * DAT_0049548c;
  *(float *)(iVar2 + 0xf4) = fVar14;
  fVar13 = (float)VectorUnsignedToFloat((uint)local_28._3_1_,(byte)(uVar1 >> 0x15) & 3);
  *(float *)(iVar2 + 0xf8) = fVar16;
  *(float *)(iVar2 + 0xfc) = fVar13 * fVar9;
  iVar2 = *(int *)(param_1 + 0x68);
  fVar13 = (float)VectorUnsignedToFloat(local_1c & 0xff,(byte)(uVar1 >> 0x15) & 3);
  fVar14 = (float)VectorUnsignedToFloat(local_1c >> 8 & 0xff,(byte)(uVar1 >> 0x15) & 3);
  fVar16 = (float)VectorUnsignedToFloat(local_1c >> 0x10 & 0xff,(byte)(uVar1 >> 0x15) & 3);
  fVar17 = (float)VectorUnsignedToFloat((uint)local_1c._3_1_,(byte)(uVar1 >> 0x15) & 3);
  fVar15 = (float)VectorUnsignedToFloat((uint)local_28._3_1_,(byte)(uVar1 >> 0x15) & 3);
  *(float *)(iVar2 + 0xf0) = fVar13 * fVar9;
  *(float *)(iVar2 + 0xf4) = fVar14 * fVar9;
  *(float *)(iVar2 + 0xf8) = fVar16 * fVar9;
  *(float *)(iVar2 + 0xfc) = fVar17 * fVar9 * fVar15 * fVar9;
  bVar8 = *(char *)(param_1 + 0x6c) != '\0';
  uVar10 = 0;
  if (bVar8) {
    uVar10 = local_4c;
  }
  *(bool *)(param_1 + 0x6d) = bVar8 && (uVar10 & 1) != 0;
  iVar2 = local_24;
  if (local_24 != 0) {
    iVar2 = local_24 + -3;
  }
  *(bool *)(param_1 + 0x6e) = iVar2 < 0 != (local_24 != 0 && SBORROW4(local_24,3));
  *(bool *)(param_1 + 0x6f) = local_24 == 2;
  *(bool *)(param_1 + 0x70) = local_24 == 3;
  if ((local_4c & 2) == 0) {
    iVar2 = *(int *)(param_1 + 100);
    if ((local_4c & 4) == 0) {
      *(uint *)(iVar2 + 0x178) = *(uint *)(iVar2 + 0x178) & 0xffffff9f;
      iVar2 = *(int *)(param_1 + 0x68);
      uVar10 = *(uint *)(iVar2 + 0x178) & 0xffffff9f;
    }
    else {
      uVar10 = *(uint *)(iVar2 + 0x178) & 0xffffffdf;
      *(uint *)(iVar2 + 0x178) = uVar10;
      *(uint *)(*(int *)(param_1 + 100) + 0x178) = uVar10 | 0x40;
      uVar10 = *(uint *)(*(int *)(param_1 + 0x68) + 0x178) & 0xffffffdf;
      *(uint *)(*(int *)(param_1 + 0x68) + 0x178) = uVar10;
      iVar2 = *(int *)(param_1 + 0x68);
      uVar10 = uVar10 | 0x40;
    }
    *(uint *)(iVar2 + 0x178) = uVar10;
  }
  else {
    uVar10 = *(uint *)(*(int *)(param_1 + 100) + 0x178) & 0xffffffbf;
    *(uint *)(*(int *)(param_1 + 100) + 0x178) = uVar10;
    *(uint *)(*(int *)(param_1 + 100) + 0x178) = uVar10 | 0x20;
    uVar10 = *(uint *)(*(int *)(param_1 + 0x68) + 0x178) & 0xffffffbf;
    *(uint *)(*(int *)(param_1 + 0x68) + 0x178) = uVar10;
    *(uint *)(*(int *)(param_1 + 0x68) + 0x178) = uVar10 | 0x20;
  }
  if (*(char *)(param_1 + 0x70) != '\0' && bVar7) {
    local_e8 = *DAT_004955c0;
    uStack_e4 = DAT_004955c0[1];
    uStack_e0 = DAT_004955c0[2];
    local_dc = (float)VectorUnsignedToFloat((uint)local_1c._3_1_,(byte)(uVar1 >> 0x15) & 3);
    local_dc = local_dc * fVar9;
    local_c0 = local_d8;
    local_b0 = local_d4;
    FUN_0035bae4(*(undefined4 *)(param_1 + 100),0,&local_e8);
  }
  return;
}

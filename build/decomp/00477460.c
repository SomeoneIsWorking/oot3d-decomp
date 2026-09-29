// OoT3D decomp @ 00477460  name=FUN_00477460  size=1336

undefined4 FUN_00477460(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined4 local_1b8 [4];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined1 auStack_184 [280];
  uint local_6c [13];
  uint local_38;
  int local_34;
  undefined4 local_30;

  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x104);
  puVar3 = DAT_00477998;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((*puVar3 & 1) == 0) {
    uVar17 = FUN_003679b4(DAT_00477998);
    param_2 = (undefined4)((ulonglong)uVar17 >> 0x20);
    if ((int)uVar17 != 0) {
      FUN_0036788c(DAT_0047799c);
      param_2 = DAT_004779a4;
    }
  }
  local_30 = DAT_004779a8;
  local_38 = FUN_0048841c(DAT_004779a8,param_2);
  *(char *)(param_1 + 0x13c) = (char)local_38;
  bVar2 = true;
  local_34 = 1;
  bVar1 = false;
  iVar8 = FUN_0034491c(local_30,*(undefined1 *)(param_1 + 0x13c));
  if (iVar8 != 0) {
    iVar15 = 0;
    iVar14 = 0;
    if (0 < iVar8) {
      do {
        uVar9 = FUN_00344a4c(local_30,*(undefined1 *)(param_1 + 0x13c),iVar14);
        iVar10 = FUN_00344a3c(local_30,uVar9);
        if ((iVar10 != 0) || (iVar10 = FUN_00344a28(local_30,uVar9), iVar10 != 0)) {
          bVar1 = true;
          iVar10 = FUN_003448f4(local_30,uVar9);
          if (iVar10 == 0) {
            bVar2 = false;
          }
          iVar10 = FUN_00344a28(local_30,uVar9);
          if (iVar10 != 0) {
            iVar15 = iVar15 + 1;
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar8);
    }
    *(undefined1 *)(param_1 + 0x15c) = 0;
    if (bVar1) {
      if (bVar2) {
        *(undefined1 *)(param_1 + 0x15c) = 1;
      }
      if (iVar8 == iVar15) {
        *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | 2;
      }
      goto LAB_004775b4;
    }
  }
  local_34 = 0;
LAB_004775b4:
  local_6c[0] = *DAT_004779ac;
  local_6c[1] = DAT_004779ac[1];
  local_6c[2] = DAT_004779ac[2];
  local_6c[3] = DAT_004779ac[3];
  local_6c[4] = DAT_004779ac[4];
  local_6c[5] = DAT_004779ac[5];
  local_6c[6] = DAT_004779ac[6];
  local_6c[7] = DAT_004779ac[7];
  local_6c[8] = DAT_004779ac[8];
  local_6c[9] = DAT_004779ac[9];
  local_6c[10] = DAT_004779ac[10];
  iVar8 = 0;
  local_6c[0xb] = DAT_004779ac[0xb];
  local_6c[0xc] = DAT_004779ac[0xc];
  do {
    uVar16 = local_6c[iVar8];
    if ((local_38 != uVar16) && (iVar14 = FUN_0034491c(local_30,uVar16 & 0xff), iVar14 != 0)) {
      iVar10 = 0;
      bVar1 = false;
      bVar2 = true;
      iVar15 = 0;
      if (0 < iVar14) {
        do {
          uVar9 = FUN_00344a4c(local_30,uVar16 & 0xff,iVar15);
          iVar11 = FUN_00344a3c(local_30,uVar9);
          if ((iVar11 != 0) || (iVar11 = FUN_00344a28(local_30,uVar9), iVar11 != 0)) {
            bVar1 = true;
            iVar11 = FUN_003448f4(local_30,uVar9);
            if (iVar11 == 0) {
              bVar2 = false;
            }
            iVar11 = FUN_00344a28(local_30,uVar9);
            if (iVar11 != 0) {
              iVar10 = iVar10 + 1;
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar14);
        if (bVar1) {
          iVar15 = local_34 + param_1;
          *(char *)(iVar15 + 0x13c) = (char)uVar16;
          *(undefined1 *)(iVar15 + 0x15c) = 0;
          if (bVar2) {
            *(undefined1 *)(iVar15 + 0x15c) = 1;
          }
          if (iVar14 == iVar10) {
            *(byte *)(iVar15 + 0x15c) = *(byte *)(iVar15 + 0x15c) | 2;
          }
          local_34 = local_34 + 1;
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xd);
  *(int *)(param_1 + 0x17c) = local_34;
  uVar16 = 0x20 - local_34;
  if (0 < (int)uVar16) {
    iVar8 = param_1 + local_34;
    puVar12 = (undefined1 *)(iVar8 + 0x13b);
    puVar13 = (undefined1 *)(iVar8 + 0x15b);
    if ((uVar16 & 1) != 0) {
      puVar12 = (undefined1 *)(iVar8 + 0x13c);
      *puVar12 = 0xff;
      puVar13 = (undefined1 *)(iVar8 + 0x15c);
      *puVar13 = 0;
    }
    for (iVar8 = (int)uVar16 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar12[1] = 0xff;
      puVar13[1] = 0;
      puVar12 = puVar12 + 2;
      *puVar12 = 0xff;
      puVar13 = puVar13 + 2;
      *puVar13 = 0;
    }
  }
  uVar9 = DAT_004779b0;
  if (*(int *)(param_1 + 0x10c) == 4) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = uVar9;
  }
  uVar4 = DAT_004779b8;
  iVar8 = DAT_004779b4;
  *(int *)(param_1 + 300) = *(int *)(param_1 + 0x138);
  fVar6 = DAT_004779c0;
  fVar5 = DAT_004779bc;
  iVar8 = (int)((ulonglong)((longlong)iVar8 * (longlong)*(int *)(param_1 + 0x138)) >> 0x20);
  iVar14 = 0;
  iVar8 = (iVar8 - (iVar8 >> 0x1f)) * 3;
  *(int *)(param_1 + 0x130) = iVar8;
  *(int *)(param_1 + 0x134) = iVar8;
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  do {
    iVar8 = iVar14 * 0xf;
    iVar14 = iVar14 + 1;
    iVar8 = *(int *)(param_1 + (iVar8 + 3) * 4 + 0x424);
    *(float *)(iVar8 + 0x110) = fVar5 * 1.0;
    *(float *)(iVar8 + 0x114) = fVar6 * 0.0;
    *(undefined4 *)(iVar8 + 0x118) = 0;
    *(undefined4 *)(iVar8 + 0x11c) = uVar9;
    *(float *)(iVar8 + 0x120) = fVar5 * 0.0;
    *(float *)(iVar8 + 0x124) = fVar6 * 1.0;
    *(undefined4 *)(iVar8 + 0x128) = 0;
    *(undefined4 *)(iVar8 + 300) = uVar4;
    *(float *)(iVar8 + 0x130) = fVar5 * 0.0;
    *(float *)(iVar8 + 0x134) = fVar6 * 0.0;
    *(undefined4 *)(iVar8 + 0x138) = 0x3f800000;
    *(undefined4 *)(iVar8 + 0x13c) = uVar9;
    uVar7 = DAT_004779c8;
  } while (iVar14 < 3);
  local_1b8[0] = *DAT_004779c4;
  local_1b8[1] = DAT_004779c4[1];
  local_1b8[2] = DAT_004779c4[2];
  local_1b8[3] = DAT_004779c4[3];
  uStack_1a8 = DAT_004779c4[4];
  uStack_1a4 = DAT_004779c4[5];
  uStack_1a0 = DAT_004779c4[6];
  uStack_19c = DAT_004779c4[7];
  uStack_198 = DAT_004779c4[8];
  uStack_194 = DAT_004779c4[9];
  uStack_190 = DAT_004779c4[10];
  iVar8 = 0;
  local_18c = DAT_004779c4[0xb];
  uStack_188 = DAT_004779c4[0xc];
  if (0 < *(int *)(param_1 + 0x17c)) {
    do {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x518) + 0xf0) + 0xec) = 0;
      FUN_003446e8(uVar9,*(undefined4 *)(param_1 + 0x518),
                   local_1b8[*(byte *)(param_1 + iVar8 + 0x13c)],0,0,0xe4,0x2c,auStack_184,0);
      iVar15 = param_1 + iVar8 * 4;
      FUN_002ccf04(*(undefined4 *)(param_1 + 0x518),*(undefined4 *)(iVar15 + 0x1b0),0);
      FUN_00348b90(*(undefined4 *)(iVar15 + 0x364),auStack_184);
      FUN_00348a64(*(undefined4 *)(iVar15 + 0x364),0,*(undefined4 *)(iVar15 + 0x1b0),0x2600,0x2600,
                   uVar7,uVar7);
      FUN_003446dc(*(undefined4 *)(param_1 + 0x518));
      iVar14 = *(int *)(param_1 + 0x130);
      if ((iVar14 <= iVar8) && (iVar8 < iVar14 + 3)) {
        iVar10 = (iVar8 - iVar14) * 0xf + 2;
        FUN_003446ac(*(undefined4 *)(param_1 + iVar10 * 4 + 0x43c),*(undefined4 *)(iVar15 + 0x364));
        iVar14 = 0;
        do {
          FUN_003446ac(*(undefined4 *)(param_1 + (iVar10 + iVar14) * 4 + 0x440),
                       *(undefined4 *)(iVar15 + 0x364));
          iVar14 = iVar14 + 1;
        } while (iVar14 < 8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x17c));
  }
  return 1;
}

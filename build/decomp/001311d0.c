// OoT3D decomp @ 001311d0  name=FUN_001311d0  size=1388

void FUN_001311d0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;

  uVar7 = 0xffffffff;
  *param_1 = param_3;
  sVar2 = *(short *)(*DAT_0013173c + DAT_00131740);
  puVar6 = param_1 + 0x400;
  if (((sVar2 == 0x10 || sVar2 == 0x20) || sVar2 == 0x30) || sVar2 == 0x40) {
    uVar9 = DAT_00131744;
    if (*(short *)(param_2 + 0x104) == 0x36) {
      uVar9 = DAT_00131748;
    }
    param_1[0x57c] = uVar9;
    param_1[0x579] = 500;
    param_1[0x57a] = 0x100;
    param_1[0x57b] = 0x100;
    uVar9 = 2;
    param_1[7] = 2;
    param_1[8] = 2;
  }
  else {
    iVar8 = 1;
    psVar12 = DAT_0013174c;
    do {
      if (*(short *)(param_2 + 0x104) == *psVar12) {
        param_1[0x57c] = 0x78000;
        param_1[0x57a] = 0x200;
        param_1[0x579] = 1000;
        param_1[0x57b] = 0x200;
        param_1[7] = 0x20;
        param_1[8] = 8;
        param_1[9] = 0x20;
        goto LAB_00131388;
      }
      iVar8 = iVar8 + 1;
      psVar12 = psVar12 + 1;
    } while (iVar8 < 0x14);
    iVar8 = 0;
    do {
      if (*(short *)(DAT_00131750 + iVar8 * 8) == *(short *)(param_2 + 0x104)) {
        param_1[0x57c] = *(undefined4 *)(DAT_00131750 + iVar8 * 8 + 4);
        goto LAB_001312f8;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 8);
    param_1[0x57c] = 0x60000;
LAB_001312f8:
    psVar12 = DAT_00131754;
    param_1[0x57a] = 600;
    param_1[0x579] = 1000;
    param_1[0x57b] = 600;
    bVar14 = *psVar12 == *(short *)(param_2 + 0x104);
    if (bVar14) {
      param_1[7] = (int)psVar12[1];
      param_1[8] = (int)psVar12[2];
      param_1[9] = (int)psVar12[3];
      uVar7 = *(uint *)(psVar12 + 4);
    }
    if (psVar12[6] == *(short *)(param_2 + 0x104)) {
      param_1[7] = (int)psVar12[7];
      param_1[8] = (int)psVar12[8];
      param_1[9] = (int)psVar12[9];
      uVar7 = *(uint *)(psVar12 + 10);
      goto LAB_00131388;
    }
    if (bVar14) goto LAB_00131388;
    uVar9 = 0x10;
    param_1[7] = 0x10;
    param_1[8] = 4;
  }
  param_1[9] = uVar9;
LAB_00131388:
  fVar4 = DAT_00131760;
  iVar8 = DAT_00131758;
  iVar10 = (*(uint *)(param_2 + 0xe0) & 0xfffffffe) - param_1[7] * param_1[8] * param_1[9] * 6;
  *(int *)(param_2 + 0xe0) = iVar10;
  param_1[0x10] = iVar10;
  psVar12 = (short *)*param_1;
  fVar21 = (float)VectorSignedToFloat((int)*psVar12,(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar21;
  fVar19 = (float)VectorSignedToFloat((int)psVar12[1],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar19;
  fVar15 = (float)VectorSignedToFloat((int)psVar12[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar15;
  fVar16 = (float)VectorSignedToFloat((int)psVar12[3],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar16;
  fVar20 = (float)VectorSignedToFloat((int)psVar12[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar20;
  fVar18 = (float)VectorSignedToFloat((int)psVar12[5],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar18;
  fVar17 = DAT_0013175c;
  iVar10 = param_1[7];
  fVar22 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
  fVar23 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)((fVar16 - fVar21) / fVar22) + 1,
                                      (byte)(in_fpscr >> 0x15) & 3);
  param_1[10] = fVar16;
  if ((int)fVar16 < iVar8) {
    fVar16 = fVar17;
  }
  param_1[10] = fVar16;
  param_1[0xd] = fVar4 / fVar16;
  param_1[4] = fVar21 + fVar16 * fVar23;
  iVar13 = param_1[8];
  fVar16 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)((fVar20 - fVar19) / fVar16) + 1,
                                      (byte)(in_fpscr >> 0x15) & 3);
  param_1[0xb] = fVar16;
  if ((int)fVar16 < iVar8) {
    fVar16 = fVar17;
  }
  fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
  param_1[0xb] = fVar16;
  param_1[0xe] = fVar4 / fVar16;
  param_1[5] = fVar19 + fVar16 * fVar20;
  iVar11 = param_1[9];
  fVar16 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)((fVar18 - fVar15) / fVar16) + 1,
                                      (byte)(in_fpscr >> 0x15) & 3);
  param_1[0xc] = fVar16;
  if (iVar8 <= (int)fVar16) {
    fVar17 = fVar16;
  }
  param_1[0xc] = fVar17;
  param_1[0xf] = fVar4 / fVar17;
  param_1[6] = fVar15 + fVar17 * fVar19;
  uVar1 = psVar12[7];
  if ((int)uVar7 < 1) {
    puVar6 = (undefined4 *)param_1[0x57c];
  }
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((int)param_1 + 0x46) = 0;
  param_1[0x12] = 0;
  if ((int)uVar7 < 1) {
    puVar6 = (undefined4 *)
             ((int)puVar6 -
             (iVar10 * iVar13 * iVar11 * 6 + (uint)uVar1 +
              param_1[0x579] * 4 + param_1[0x57a] * 0x14 + param_1[0x57b] * 6 + 0x15f4));
  }
  param_1[0x13] = 0;
  uVar1 = psVar12[7];
  if ((int)uVar7 < 1) {
    uVar7 = (uint)puVar6 >> 2;
  }
  *(short *)(param_1 + 0x11) = (short)uVar7;
  iVar8 = (*(uint *)(param_2 + 0xe0) & 0xfffffffe) + uVar7 * -4;
  *(int *)(param_2 + 0xe0) = iVar8;
  param_1[0x12] = iVar8;
  uVar7 = (*(uint *)(param_2 + 0xe0) & 0xfffffff0) - (uint)uVar1 & 0xfffffff0;
  *(uint *)(param_2 + 0xe0) = uVar7;
  param_1[0x13] = uVar7;
  FUN_0014da40(param_1,param_2,param_1[0x10]);
  iVar8 = DAT_00131764;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(iVar8 + (int)param_1) = 0;
  uVar5 = DAT_0013176c;
  *(undefined4 *)(iVar8 + 4 + (int)param_1) = 0;
  uVar9 = DAT_00131768;
  param_1[0x576] = 0;
  iVar8 = 0;
  param_1[0x577] = 0;
  do {
    iVar10 = iVar8 * 0x6c;
    param_1[iVar8 * 0x1b + 0x15] = 0;
    param_1[iVar8 * 0x1b + 0x16] = 0;
    param_1[iVar8 * 0x1b + 0x1c] = fVar4;
    param_1[iVar8 * 0x1b + 0x1b] = fVar4;
    param_1[iVar8 * 0x1b + 0x1a] = fVar4;
    *(undefined2 *)(param_1 + iVar8 * 0x1b + 0x1e) = 0;
    *(undefined2 *)((int)param_1 + iVar10 + 0x76) = 0;
    *(undefined2 *)(param_1 + iVar8 * 0x1b + 0x1d) = 0;
    param_1[iVar8 * 0x1b + 0x21] = uVar9;
    param_1[iVar8 * 0x1b + 0x20] = uVar9;
    param_1[iVar8 * 0x1b + 0x1f] = uVar9;
    param_1[iVar8 * 0x1b + 0x24] = fVar4;
    param_1[iVar8 * 0x1b + 0x23] = fVar4;
    param_1[iVar8 * 0x1b + 0x22] = fVar4;
    *(undefined2 *)(param_1 + iVar8 * 0x1b + 0x26) = 0;
    *(undefined2 *)((int)param_1 + iVar10 + 0x96) = 0;
    *(undefined2 *)(param_1 + iVar8 * 0x1b + 0x25) = 0;
    param_1[iVar8 * 0x1b + 0x29] = uVar9;
    param_1[iVar8 * 0x1b + 0x28] = uVar9;
    param_1[iVar8 * 0x1b + 0x27] = uVar9;
    *(undefined2 *)(param_1 + iVar8 * 0x1b + 0x17) = 0;
    uVar3 = (undefined2)uVar5;
    *(undefined2 *)((int)param_1 + iVar10 + 0x5e) = uVar3;
    *(undefined2 *)(param_1 + iVar8 * 0x1b + 0x18) = uVar3;
    *(undefined2 *)((int)param_1 + iVar10 + 0x62) = uVar3;
    *(undefined2 *)(param_1 + iVar8 * 0x1b + 0x19) = 0;
    param_1[iVar8 * 0x1b + 0x2c] = uVar9;
    param_1[iVar8 * 0x1b + 0x2b] = uVar9;
    param_1[iVar8 * 0x1b + 0x2a] = uVar9;
    param_1[iVar8 * 0x1b + 0x2d] = uVar9;
    iVar10 = iVar8 * 2;
    iVar8 = iVar8 + 1;
    *(undefined2 *)((int)param_1 + iVar10 + 0x156c) = 0;
  } while (iVar8 < 0x32);
  param_1[0x574] = 0;
  iVar8 = (*(uint *)(param_2 + 0xe0) & 0xfffffffe) + param_1[0x57a] * -0x20;
  *(int *)(param_2 + 0xe0) = iVar8;
  param_1[0x574] = iVar8;
  param_1[0x575] = 0;
  iVar8 = (*(uint *)(param_2 + 0xe0) & 0xfffffffe) + param_1[0x57b] * -0xc;
  *(int *)(param_2 + 0xe0) = iVar8;
  param_1[0x575] = iVar8;
  param_1[0x576] = 0;
  param_1[0x577] = 0;
  iVar8 = param_1[0x579];
  iVar10 = (*(uint *)(param_2 + 0xe0) & 0xfffffffe) + iVar8 * -4;
  *(int *)(param_2 + 0xe0) = iVar10;
  param_1[0x576] = iVar10;
  param_1[0x577] = 0;
  param_1[0x578] = iVar8;
  return;
}

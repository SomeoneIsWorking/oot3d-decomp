// OoT3D decomp @ 00105508  name=FUN_00105508  size=1340

void FUN_00105508(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
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
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  undefined1 auStack_c4 [48];
  undefined1 auStack_94 [48];

  FUN_00372224(auStack_94,param_1 + 0x148);
  fVar2 = DAT_0010590c;
  fVar1 = DAT_00105908;
  FUN_003713fc(DAT_0010590c,DAT_0010590c,DAT_00105908,auStack_94,1);
  fVar15 = *(float *)(param_1 + 0x538) * DAT_00105910;
  FUN_00371348(fVar15,fVar15,fVar15,auStack_94,1);
  FUN_00371234(*(undefined4 *)(param_1 + 0x544),auStack_94,1);
  iVar9 = DAT_00105920;
  fVar4 = DAT_0010591c;
  fVar3 = DAT_00105918;
  fVar15 = DAT_00105914;
  if (*(short *)(param_1 + 0x1c) == 0) {
    iVar8 = FUN_00371178(*(undefined4 *)(DAT_00105920 + 0x20),6,0x10);
    uVar12 = DAT_00105924;
    if (iVar8 != 0) {
      fVar22 = *(float *)(param_1 + 0x530) * fVar4;
      *(undefined4 *)(iVar8 + 0x10) = DAT_00105924;
      *(float *)(iVar8 + 0x14) = fVar15;
      *(float *)(iVar8 + 0x18) = fVar3;
      *(float *)(iVar8 + 0x1c) = fVar22;
      *(undefined4 *)(iVar8 + 0x30) = 0;
      *(undefined4 *)(iVar8 + 0x38) = 0;
      *(undefined1 *)(iVar8 + 0xc) = 1;
      *(undefined4 *)(iVar8 + 0x20) = uVar12;
      *(float *)(iVar8 + 0x24) = fVar15;
      *(float *)(iVar8 + 0x28) = fVar3;
      *(float *)(iVar8 + 0x2c) = fVar22;
      *(undefined4 *)(iVar8 + 0x34) = 4;
      *(undefined4 *)(iVar8 + 0x3c) = 0;
      *(undefined1 *)(iVar8 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar9 + 0x20),iVar8,auStack_94);
    }
  }
  else {
    iVar8 = FUN_00371178(*(undefined4 *)(DAT_00105920 + 0x20),7,0x11);
    if (iVar8 != 0) {
      fVar22 = *(float *)(param_1 + 0x530) * fVar4;
      *(float *)(iVar8 + 0x10) = fVar3;
      *(float *)(iVar8 + 0x14) = fVar15;
      *(float *)(iVar8 + 0x18) = fVar2;
      *(float *)(iVar8 + 0x1c) = fVar22;
      *(undefined4 *)(iVar8 + 0x30) = 0;
      *(undefined4 *)(iVar8 + 0x38) = 0;
      *(undefined1 *)(iVar8 + 0xc) = 1;
      *(float *)(iVar8 + 0x20) = fVar3;
      *(float *)(iVar8 + 0x24) = fVar15;
      *(float *)(iVar8 + 0x28) = fVar2;
      *(float *)(iVar8 + 0x2c) = fVar22;
      *(undefined4 *)(iVar8 + 0x34) = 4;
      *(undefined4 *)(iVar8 + 0x3c) = 0;
      *(undefined1 *)(iVar8 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar9 + 0x20),iVar8,auStack_94);
    }
  }
  FUN_00372224(auStack_c4,auStack_94);
  piVar5 = DAT_00105928;
  fVar22 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00105928 + 0xa16),
                                      (byte)(in_fpscr >> 0x15) & 3);
  FUN_003713fc(fVar2,fVar2,fVar22 + fVar1,auStack_c4,1);
  iVar9 = (int)*(short *)(*piVar5 + 0xa14);
  fVar22 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
  fVar24 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
  fVar25 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00371348(fVar3 + fVar25 * DAT_0010592c,fVar3 + fVar24 * DAT_0010592c,
               fVar3 + fVar22 * DAT_0010592c,auStack_c4,1);
  FUN_00371fac(auStack_c4,param_2 + 0x2fc);
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar12 = 0x22;
  }
  else {
    uVar12 = 0x21;
  }
  iVar9 = FUN_00371178(*(undefined4 *)(DAT_00105920 + 0x20),uVar12,6);
  uVar6 = DAT_00105938;
  uVar12 = DAT_00105934;
  fVar22 = DAT_00105930;
  if (iVar9 != 0) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      fVar20 = *(float *)(param_1 + 0x534);
      fVar24 = DAT_00105930;
      fVar25 = fVar3;
      uVar23 = DAT_00105934;
    }
    else {
      fVar20 = *(float *)(param_1 + 0x534);
      fVar24 = fVar3;
      fVar25 = fVar2;
      uVar23 = DAT_00105938;
    }
    *(float *)(iVar9 + 0x10) = fVar24;
    *(undefined4 *)(iVar9 + 0x14) = uVar23;
    *(float *)(iVar9 + 0x18) = fVar25;
    *(float *)(iVar9 + 0x1c) = fVar20 * fVar4;
    *(undefined4 *)(iVar9 + 0x30) = 0;
    *(undefined4 *)(iVar9 + 0x38) = 0;
    *(undefined1 *)(iVar9 + 0xc) = 1;
    *(float *)(iVar9 + 0x20) = fVar24;
    *(undefined4 *)(iVar9 + 0x24) = uVar23;
    *(float *)(iVar9 + 0x28) = fVar25;
    *(float *)(iVar9 + 0x2c) = fVar20 * fVar4;
    *(undefined4 *)(iVar9 + 0x34) = 4;
    *(undefined4 *)(iVar9 + 0x3c) = 0;
    *(undefined1 *)(iVar9 + 0xd) = 1;
    FUN_003710bc(*(undefined4 *)(DAT_00105920 + 0x20),iVar9,auStack_c4);
  }
  fVar7 = DAT_00105948;
  fVar20 = DAT_00105944;
  fVar25 = DAT_00105940;
  fVar24 = DAT_0010593c;
  iVar9 = DAT_00105920;
  local_c8 = 6;
  uVar10 = (uint)*(ushort *)(param_1 + 0x1c);
  iVar8 = 0x14;
  bVar14 = uVar10 == 0;
  if (bVar14) {
    uVar10 = 4;
    iVar8 = 0x2d;
  }
  iVar13 = 0;
  if (bVar14) {
    local_c8 = uVar10;
  }
  do {
    FUN_00372224(&local_110,param_1 + 0x148);
    local_d4 = fVar2;
    local_d0 = fVar2;
    local_cc = fVar1;
    FUN_00372070(&local_110,&local_110,&local_d4);
    fVar16 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = *(float *)(param_1 + 0x540) + fVar16 * fVar24 * fVar25 * fVar20;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar2) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      fVar17 = (float)FUN_003727f0(fVar16);
      fVar18 = (float)FUN_00372674(fVar16);
      fVar16 = local_10c * fVar17;
      local_10c = local_10c * fVar18 - local_110 * fVar17;
      fVar21 = local_fc * fVar17;
      local_fc = local_fc * fVar18 - local_100 * fVar17;
      fVar19 = local_ec * fVar17;
      local_ec = local_ec * fVar18 - local_f0 * fVar17;
      local_110 = local_110 * fVar18 + fVar16;
      local_100 = local_100 * fVar18 + fVar21;
      local_f0 = local_f0 * fVar18 + fVar19;
    }
    local_e0 = fVar2;
    local_dc = *(float *)(param_1 + 0x538) * fVar7;
    local_d8 = fVar2;
    FUN_00372070(&local_110,&local_110,&local_e0);
    local_110 = local_110 * fVar15;
    local_100 = local_100 * fVar15;
    local_f0 = local_f0 * fVar15;
    local_10c = local_10c * fVar15;
    local_fc = local_fc * fVar15;
    local_ec = local_ec * fVar15;
    local_108 = local_108 * fVar15;
    local_f8 = local_f8 * fVar15;
    local_e8 = local_e8 * fVar15;
    FUN_00371fac(&local_110,param_2 + 0x2fc);
    iVar11 = FUN_00371178(*(undefined4 *)(iVar9 + 0x20),iVar8 + iVar13,local_c8);
    if (iVar11 != 0) {
      if (*(short *)(param_1 + 0x1c) == 0) {
        fVar19 = *(float *)(param_1 + 0x52c);
        fVar21 = fVar3;
        uVar23 = uVar12;
        fVar16 = fVar22;
      }
      else {
        fVar19 = *(float *)(param_1 + 0x52c);
        fVar21 = fVar2;
        uVar23 = uVar6;
        fVar16 = fVar3;
      }
      *(float *)(iVar11 + 0x10) = fVar16;
      *(undefined4 *)(iVar11 + 0x14) = uVar23;
      *(float *)(iVar11 + 0x18) = fVar21;
      *(float *)(iVar11 + 0x1c) = fVar19 * fVar4;
      *(undefined4 *)(iVar11 + 0x38) = 0;
      *(undefined4 *)(iVar11 + 0x30) = 0;
      *(undefined1 *)(iVar11 + 0xc) = 1;
      *(float *)(iVar11 + 0x20) = fVar16;
      *(undefined4 *)(iVar11 + 0x24) = uVar23;
      *(float *)(iVar11 + 0x28) = fVar21;
      *(float *)(iVar11 + 0x2c) = fVar19 * fVar4;
      *(undefined4 *)(iVar11 + 0x34) = 4;
      *(undefined4 *)(iVar11 + 0x3c) = 0;
      *(undefined1 *)(iVar11 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar9 + 0x20),iVar11,&local_110);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 8);
  return;
}

// OoT3D decomp @ 0017bf98  name=FUN_0017bf98  size=6924

void FUN_0017bf98(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint in_fpscr;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;

  iVar10 = DAT_0017c29c;
  bVar2 = false;
  iVar12 = *(int *)(DAT_0017c294 + param_2);
  iVar7 = *(int *)(DAT_0017c29c + 0x44);
  *(undefined4 *)(iVar7 + 0x1708) = DAT_0017c298;
  *(undefined4 *)(iVar7 + 0x170c) = DAT_0017c2a0;
  *(undefined4 *)(iVar7 + 0x1710) = DAT_0017c2a4;
  uVar14 = VectorSignedToFloat(*(undefined4 *)(iVar10 + 8),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(iVar7 + 0x1728) = uVar14;
  *(int *)(param_1 + 0xffc) = *(int *)(param_1 + 0xffc) + 1;
  uVar14 = FUN_003731e0(param_1 + 0x1a8);
  puVar11 = (undefined2 *)(param_1 + 0x1000);
  switch(*puVar11) {
  case 0:
    FUN_0035af04(iVar12,1);
    uVar13 = DAT_0017c2ac;
    uVar14 = DAT_0017c2a8;
    *(undefined4 *)(iVar12 + 0x28) = DAT_0017c2a8;
    *(undefined4 *)(iVar12 + 0x2c) = uVar14;
    *(undefined4 *)(iVar12 + 0x30) = uVar13;
    uVar13 = DAT_0017c2b0;
    *(undefined4 *)(param_1 + 0x28) = uVar14;
    *(undefined4 *)(param_1 + 0x2c) = uVar13;
    *(undefined4 *)(param_1 + 0x30) = DAT_0017c2b4;
    *(undefined4 *)(param_1 + 0xc4) = DAT_0017c2b8;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    FUN_00367494(param_2,param_2 + 0x2298);
    FUN_0036e980(param_2,param_1,8);
    uVar6 = FUN_00367d74(param_2);
    *(undefined2 *)(param_1 + 0x1002) = uVar6;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x1002),7);
    FUN_0035b494(DAT_0017c2c0,DAT_0017c2bc,param_1,param_2,0);
    uVar13 = DAT_0017c2c4;
    iVar10 = DAT_0017c29c;
    iVar7 = *(int *)(DAT_0017c29c + 0x44);
    *(undefined4 *)(iVar7 + 0x1714) = uVar14;
    *(undefined4 *)(iVar7 + 0x1718) = uVar14;
    *(undefined4 *)(iVar7 + 0x171c) = uVar14;
    iVar7 = DAT_0017c2c8;
    *(undefined4 *)(param_1 + 0x107c) = uVar13;
    if ((*(ushort *)(iVar7 + 0xfa) & 0x100) == 0) {
      *(undefined1 *)(param_1 + 0x10a2) = 1;
      FUN_0034be30(param_1,0);
      *puVar11 = 1;
      uVar13 = FUN_0036aa20(uVar14,DAT_0017c2e4,DAT_0017c2e0,param_2 + 0x208c,param_1,param_2,0x179,
                            0,0,0,0x2000);
      *(undefined4 *)(iVar10 + 0x4c) = uVar13;
    }
    else {
      *puVar11 = 0x11;
      uVar13 = DAT_0017c2cc;
      *(undefined4 *)(param_1 + 0xffc) = 0;
      *(undefined4 *)(iVar12 + 0x30) = uVar13;
      uVar13 = DAT_0017c2d0;
      *(undefined1 *)(param_1 + 0x10a2) = 0;
      FUN_00370350(uVar13,param_1 + 0x1a8,0xe);
      *(undefined4 *)(param_1 + 0xaf8) = DAT_0017c2d4;
      FUN_0034be30(param_1,0xb);
      iVar7 = DAT_0017c2d8;
      *(undefined1 *)(param_1 + 0xac4) = 2;
      *(undefined2 *)(iVar7 + param_1) = 0xa5;
      *(undefined2 *)(DAT_0017c2dc + 0xb2) = 0x140;
      *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
      FUN_003655d0(0);
    }
    FUN_0036aa20(uVar14,uVar14,uVar14,param_2 + 0x208c,param_1,param_2,DAT_0017c2e8,0,0,0,1);
    *(undefined4 *)(*(int *)(iVar10 + 0x44) + 0x1704) = DAT_0017c2ec;
  case 1:
    *(undefined1 *)(param_1 + 0xacc) = 3;
    if (*(int *)(param_1 + 0xffc) == 0x69) {
      *puVar11 = 2;
      *(undefined4 *)(param_1 + 0xffc) = 0;
    }
    break;
  case 2:
    FUN_0035b494(DAT_0017c6dc,DAT_0017c2bc,param_1,param_2,0);
    FUN_0034be30(param_1,1);
    if (*(int *)(param_1 + 0xffc) == 0xf) {
      FUN_0036e980(param_2,param_1,5);
    }
    if (*(int *)(param_1 + 0xffc) == 0x14) {
      FUN_0036f59c(iVar12,(uint)*(ushort *)(*(int *)(DAT_0017c6e0 + iVar12) + 0xf4) - DAT_0017c6e4);
    }
    if (*(int *)(param_1 + 0xffc) != 0x35) break;
    *puVar11 = 3;
    uVar13 = DAT_0017c2c4;
    uVar14 = DAT_0017c2a8;
    *(undefined4 *)(param_1 + 0xffc) = 0;
    *(undefined4 *)(param_1 + 0x1008) = uVar14;
    *(undefined4 *)(param_1 + 0x100c) = uVar13;
    *(float *)(param_1 + 0x1010) = DAT_0017c6e8;
    *(undefined4 *)(param_1 + 0x1014) = uVar14;
    *(undefined4 *)(param_1 + 0x108c) = DAT_0017c6ec;
  case 3:
    FUN_0035b494(DAT_0017c6f0,DAT_0017c2bc,param_1,param_2,0);
    uVar14 = DAT_0017c2a8;
    *(undefined1 *)(param_1 + 0xacc) = 0;
    *(undefined4 *)(param_2 + 0x3258) = uVar14;
    fVar17 = (float)FUN_003727f0(*(undefined4 *)(param_1 + 0x108c));
    *(float *)(param_1 + 0x1018) = *(float *)(param_1 + 0x100c) + fVar17 * DAT_0017c6e8;
    fVar17 = (float)FUN_00372674(*(undefined4 *)(param_1 + 0x108c));
    uVar14 = DAT_0017c2a0;
    *(float *)(param_1 + 0x101c) = *(float *)(param_1 + 0x1010) + fVar17 * DAT_0017c6f4;
    FUN_00373500(uVar14,DAT_0017c6f8,*(undefined4 *)(param_1 + 0x103c),param_1 + 0x108c);
    FUN_00373500(DAT_0017c704,DAT_0017c700,DAT_0017c6fc,param_1 + 0x103c);
    if (*(int *)(param_1 + 0xffc) != 300) break;
    FUN_0036e980(param_2,param_1,8);
    *puVar11 = 4;
    FUN_0034be30(param_1,2);
    *(undefined4 *)(param_1 + 0xffc) = 0;
switchD_0017c00c_caseD_4:
    iVar10 = *(int *)(param_1 + 0xffc);
    if (iVar10 == 0) {
      FUN_0035b494(DAT_0017c6f0,DAT_0017c2bc,param_1,param_2,0);
LAB_0017c48c:
      fVar17 = DAT_0017c710;
      iVar10 = *(int *)(param_1 + 0xffc);
      if ((iVar10 == 0 || iVar10 == 0xf) || iVar10 == 0x1e) {
        *(float *)(param_1 + 0x100c) = *(float *)(param_1 + 0x100c) + DAT_0017c70c;
        *(float *)(param_1 + 0x1010) = *(float *)(param_1 + 0x1010) - fVar17;
      }
    }
    else {
      if (iVar10 == 0xf) {
        FUN_0035b494(DAT_0017c714,DAT_0017c2bc,param_1,param_2,0);
        goto LAB_0017c48c;
      }
      if (iVar10 == 0x1e) {
        FUN_0035b494(DAT_0017c708,DAT_0017c2bc,param_1,param_2,0);
        goto LAB_0017c48c;
      }
    }
    if (*(uint *)(param_1 + 0xffc) < 0x1e) {
      uVar5 = 0x23;
    }
    else {
      uVar5 = 4;
    }
    *(undefined1 *)(param_1 + 0xacc) = uVar5;
    if (*(uint *)(param_1 + 0xffc) == 0x5a) {
      FUN_0034be30(param_1,1);
      *puVar11 = 5;
      *(undefined4 *)(param_1 + 0xffc) = 0;
    }
    break;
  case 4:
    goto switchD_0017c00c_caseD_4;
  case 5:
    FUN_0035b494(DAT_0017c2cc,DAT_0017c2bc,param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xacc) = 5;
    if ((*(uint *)(param_1 + 0xffc) < 0x4b) &&
       (*(undefined4 *)(param_2 + 0x3258) = DAT_0017c700, *(int *)(param_1 + 0xffc) == 0xf)) {
      FUN_0036e980(param_2,param_1,0x4b);
    }
    if (*(int *)(param_1 + 0xffc) == 0x69) {
      FUN_0034be30(param_1,3);
      *puVar11 = 6;
      *(undefined4 *)(param_1 + 0xffc) = 0;
      *(undefined1 *)(param_1 + 0xacc) = 3;
    }
    break;
  case 6:
    FUN_0035b494(DAT_0017c718,DAT_0017c2bc,param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xacc) = 3;
    if (*(int *)(param_1 + 0xffc) != 0x2d) break;
    *puVar11 = 7;
    *(undefined4 *)(param_1 + 0xffc) = 0;
    FUN_0034be30(param_1,4);
    uVar14 = DAT_0017c2a8;
    *(undefined4 *)(param_1 + 0xb0c) = DAT_0017c71c;
    *(undefined4 *)(param_1 + 0xb04) = uVar14;
    uVar13 = DAT_0017c720;
    *(undefined4 *)(param_1 + 0xb18) = uVar14;
    *(undefined4 *)(param_1 + 0xb00) = uVar13;
    uVar13 = DAT_0017c728;
    *(undefined4 *)(param_1 + 0xb08) = DAT_0017c6f0;
    *(undefined4 *)(param_1 + 0xb20) = uVar14;
    uVar9 = DAT_0017c72c;
    *(undefined2 *)(DAT_0017c724 + param_1) = 0;
    FUN_0037547c(DAT_0017c730,0,4,uVar9,uVar9,uVar13);
    *(undefined4 *)(param_2 + 0x3258) = uVar14;
  case 7:
    uVar9 = DAT_0017c734;
    FUN_0035b494(DAT_0017c734,DAT_0017c2bc,param_1,param_2,0);
    uVar3 = DAT_0017c738;
    uVar13 = DAT_0017c720;
    uVar14 = DAT_0017c700;
    *(undefined1 *)(param_1 + 0xacc) = 6;
    FUN_00373500(uVar13,uVar14,uVar3,param_1 + 0xb04);
    FUN_00373500(DAT_0017c740,uVar14,DAT_0017c73c,param_1 + 0xb0c);
    FUN_00373500(DAT_0017ca48,uVar14,DAT_0017ca44,param_1 + 0xb00);
    FUN_00373500(DAT_0017ca4c,uVar14,uVar3,param_1 + 0xb08);
    if (0x23 < *(uint *)(param_1 + 0xffc)) {
      *(undefined1 *)(param_1 + 0xacc) = 0x41;
      if ((*(uint *)(param_1 + 0xffc) == 0x24) &&
         (*(undefined4 *)(param_2 + 0x3258) = uVar14, *(int *)(param_1 + 0xffc) == 0x24)) {
        *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_1 + 0xb0c);
        *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_1 + 0xb04);
        *(undefined4 *)(param_1 + 0xb20) = uVar13;
      }
      else if (*(uint *)(param_1 + 0xffc) < 0x24) goto LAB_0017c814;
      fVar17 = DAT_0017ca54;
      uVar13 = DAT_0017ca50;
      FUN_00373500(DAT_0017ca54,uVar14,DAT_0017ca50,param_1 + 0xb20);
      FUN_00373500(fVar17,uVar14,uVar9,param_1 + 0xb18);
      FUN_00373500(uVar13,uVar14,DAT_0017ca58,param_1 + 0xb1c);
    }
LAB_0017c814:
    FUN_0034be30(param_1,4);
    fVar17 = DAT_0017ca5c;
    *(float *)(param_1 + 0x1008) = *(float *)(param_1 + 0x1008) + DAT_0017ca5c;
    fVar4 = DAT_0017ca60;
    *(float *)(param_1 + 0x100c) = *(float *)(param_1 + 0x100c) + fVar17;
    fVar17 = DAT_0017ca64;
    *(float *)(param_1 + 0x1010) = *(float *)(param_1 + 0x1010) + fVar4;
    *(float *)(param_1 + 0x1014) = *(float *)(param_1 + 0x1014) + fVar17;
    if (*(int *)(param_1 + 0xffc) == 0x5a) {
      *puVar11 = 8;
      *(undefined4 *)(param_1 + 0xffc) = 0;
    }
    break;
  case 8:
    FUN_0035b494(DAT_0017ca6c,DAT_0017ca68,param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xacc) = 3;
    FUN_0034be30(param_1,5);
    if (*(int *)(param_1 + 0xffc) != 0x2d) break;
    *puVar11 = 9;
    *(undefined4 *)(param_1 + 0xffc) = 0;
    FUN_0036e980(param_2,param_1,8);
    fVar17 = DAT_0017ca54;
    uVar9 = DAT_0017c72c;
    uVar13 = DAT_0017c728;
    iVar10 = DAT_0017c724;
    uVar14 = DAT_0017c71c;
    *(undefined1 *)(*(int *)(DAT_0017c29c + 0x4c) + 0x10e8) = 0;
    *(undefined4 *)(param_1 + 0xb0c) = uVar14;
    *(float *)(param_1 + 0xb04) = fVar17;
    uVar14 = DAT_0017c720;
    *(float *)(param_1 + 0xb18) = fVar17;
    *(undefined4 *)(param_1 + 0xb00) = uVar14;
    *(undefined4 *)(param_1 + 0xb08) = DAT_0017c6f0;
    *(float *)(param_1 + 0xb20) = fVar17;
    *(undefined2 *)(iVar10 + param_1) = 1;
    FUN_0037547c(DAT_0017c730,0,4,uVar9,uVar9,uVar13);
    *(float *)(param_2 + 0x3258) = fVar17;
  case 9:
    FUN_0035b494(DAT_0017c708,DAT_0017ca68,param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xacc) = 7;
    FUN_0034be30(param_1,6);
    uVar9 = DAT_0017c738;
    uVar13 = DAT_0017c720;
    uVar14 = DAT_0017c700;
    FUN_00373500(DAT_0017c720,DAT_0017c700,DAT_0017c738,param_1 + 0xb04);
    FUN_00373500(DAT_0017c740,uVar14,DAT_0017c73c,param_1 + 0xb0c);
    FUN_00373500(DAT_0017ca48,uVar14,DAT_0017ca44,param_1 + 0xb00);
    FUN_00373500(DAT_0017ca4c,uVar14,uVar9,param_1 + 0xb08);
    if (*(int *)(param_1 + 0xffc) == 0x2d) {
      *(undefined1 *)(*(int *)(DAT_0017c29c + 0x4c) + 0x10e8) = 1;
    }
    if (0x23 < *(uint *)(param_1 + 0xffc)) {
      *(undefined1 *)(param_1 + 0xacc) = 0x4b;
      if ((*(uint *)(param_1 + 0xffc) == 0x24) &&
         (*(undefined4 *)(param_2 + 0x3258) = uVar14, *(int *)(param_1 + 0xffc) == 0x24)) {
        *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_1 + 0xb0c);
        *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_1 + 0xb04);
        *(undefined4 *)(param_1 + 0xb20) = uVar13;
      }
      else if (*(uint *)(param_1 + 0xffc) < 0x24) break;
      fVar17 = DAT_0017ca54;
      uVar13 = DAT_0017ca50;
      FUN_00373500(DAT_0017ca54,uVar14,DAT_0017ca50,param_1 + 0xb20);
      FUN_00373500(fVar17,uVar14,DAT_0017c734,param_1 + 0xb18);
      FUN_00373500(uVar13,uVar14,DAT_0017ca58,param_1 + 0xb1c);
      if (*(int *)(param_1 + 0xffc) == 0x4b) {
        *puVar11 = 10;
        *(undefined4 *)(param_1 + 0xffc) = 0;
      }
    }
    break;
  case 10:
    FUN_0035b494(DAT_0017cdf0,DAT_0017cdec,param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xacc) = 3;
    FUN_0034be30(param_1,7);
    if (*(int *)(param_1 + 0xffc) == 0x28) {
      *puVar11 = 0xb;
      *(undefined4 *)(param_1 + 0xffc) = 0;
      fVar17 = DAT_0017ca54;
      *(float *)(param_1 + 0xb04) = DAT_0017ca54;
      *(float *)(param_1 + 0xb18) = fVar17;
    }
    break;
  case 0xb:
    FUN_0035b494(DAT_0017ca68,DAT_0017ca68,param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xacc) = 3;
    FUN_0034be30(param_1,8);
    fVar17 = DAT_0017cdf4;
    *(float *)(iVar12 + 0x30) = DAT_0017cdf4;
    if (*(int *)(param_1 + 0xffc) == 0x14) {
      FUN_0036e980(param_2,param_1,0x17);
      FUN_0034be04(0xb);
      *(undefined1 *)(DAT_0017cdf8 + param_2) = 1;
    }
    if (*(int *)(param_1 + 0xffc) == 0x19) {
      *(undefined2 *)(DAT_0017c2dc + 0xb2) = 0x140;
      *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
    }
    fVar4 = DAT_0017cdfc;
    if (*(int *)(param_1 + 0xffc) == 0x19) {
      FUN_0036f59c(iVar12,DAT_0017ce00);
    }
    if (*(int *)(param_1 + 0xffc) - 0x19U < 0x3d) {
      iVar10 = *(int *)(param_1 + 0xffc) + -0x19;
      fVar18 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = fVar18 * DAT_0017ce04;
      local_4c = *(float *)(iVar12 + 0x28);
      local_48 = *(float *)(iVar12 + 0x2c);
      local_44 = *(float *)(iVar12 + 0x30);
      fVar15 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar19 = (fVar15 + DAT_0017ce08) * DAT_0017ce04;
      local_58 = DAT_0017ca54;
      local_54 = DAT_0017ca54;
      local_50 = DAT_0017ca54;
      local_64 = DAT_0017ca54;
      local_60 = DAT_0017ca54;
      local_5c = DAT_0017ca54;
      local_70 = DAT_0017ca54;
      local_6c = DAT_0017ca54;
      local_68 = DAT_0017ca54;
      local_74 = 0xff;
      local_73 = 0xff;
      local_78 = 0xff;
      local_72 = 0xff;
      local_77 = 0xff;
      local_76 = 100;
      fVar20 = fVar18 * DAT_0017ce0c * DAT_0017ce10 * DAT_0017ce14;
      fVar15 = (float)FUN_0037103c(fVar20);
      fVar16 = (float)FUN_00372298(fVar20);
      local_70 = (float)FUN_0037103c(fVar20);
      local_70 = local_70 * fVar17;
      local_68 = (float)FUN_00372298(fVar20);
      local_68 = local_68 * fVar17;
      local_4c = local_4c + fVar15 * fVar17;
      local_48 = local_48 + fVar18 * fVar4;
      local_44 = local_44 + fVar16 * fVar17;
      FUN_0036ea98(param_2,&local_4c,&local_58,&local_64,&local_74,&local_78,1000,0x10);
      local_4c = *(float *)(iVar12 + 0x28) + local_70;
      local_48 = *(float *)(iVar12 + 0x2c) + fVar19 * fVar4;
      local_44 = *(float *)(iVar12 + 0x30) + local_68;
      local_58 = local_70 * *(float *)(DAT_0017c29c + 0xc);
      local_50 = local_68 * *(float *)(DAT_0017c29c + 0xc);
      local_54 = *(float *)(DAT_0017c29c + 0x10);
      FUN_0036ea98(param_2,&local_4c,&local_58,&local_64,&local_74,&local_78,1000,0x10);
    }
    if (*(int *)(param_1 + 0xffc) == 100) {
      FUN_0034be04(1);
    }
    iVar10 = DAT_0017cdf8;
    if (*(int *)(param_1 + 0xffc) == 0x78) {
      *puVar11 = 0xc;
      *(undefined4 *)(param_1 + 0xffc) = 0;
      *(undefined1 *)(iVar10 + param_2) = 0;
    }
    break;
  case 0xc:
    FUN_0035b494(DAT_0017d1c8,DAT_0017cdec,param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xacc) = 3;
    FUN_0034be30(param_1,9);
    if (*(int *)(param_1 + 0xffc) == 0x1e) {
      FUN_003655d0(0,1);
      uVar14 = FUN_0036ae14(param_1 + 0x1a8,9);
      uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar14;
      FUN_00374a58(DAT_0017d1cc,param_1 + 0x1a8,9);
    }
    if ((0x1e < *(uint *)(param_1 + 0xffc)) &&
       (iVar10 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),DAT_0017d1d0,param_1 + 0x1a8),
       iVar10 != 0)) {
      FUN_00370350(DAT_0017d1d4,param_1 + 0x1a8,0xb);
      *(undefined4 *)(param_1 + 0xaf8) = DAT_0017d1d8;
    }
    if (*(int *)(param_1 + 0xffc) == 0x50) {
      FUN_00367c7c(param_2,DAT_0017d1dc,0);
    }
    if ((0xb4 < *(uint *)(param_1 + 0xffc)) &&
       (iVar10 = FUN_003769d8(param_2 + 0x28a0), iVar10 == 0)) {
      *puVar11 = 0xf;
      *(undefined4 *)(param_1 + 0xffc) = 0;
      *(undefined1 *)(param_1 + 0x10a2) = 0;
    }
    break;
  case 0xf:
    FUN_0035b494(DAT_0017d1e4,DAT_0017d1e0,param_1,param_2,0);
    uVar14 = DAT_0017d1d4;
    *(undefined1 *)(param_1 + 0xacc) = 0;
    *(undefined4 *)(param_2 + 0x3258) = uVar14;
    FUN_0034be30(param_1,10);
    if (*(int *)(param_1 + 0xffc) == 0x1e) {
      FUN_00367c7c(param_2,DAT_0017d1e8,0);
    }
    if ((100 < *(uint *)(param_1 + 0xffc)) && (iVar10 = FUN_003769d8(param_2 + 0x28a0), iVar10 == 0)
       ) {
      *puVar11 = 0x10;
      *(undefined4 *)(param_1 + 0xffc) = 0;
      FUN_0034be30(param_1,0xb);
      iVar10 = DAT_0017c29c;
      *(undefined1 *)(param_1 + 0xac4) = 2;
      *(undefined1 *)(*(int *)(iVar10 + 0x4c) + 0x10e8) = 2;
      *(undefined2 *)(DAT_0017c2d8 + param_1) = 0xa5;
      *(undefined1 *)(param_1 + 0xacc) = 3;
    }
    break;
  case 0x10:
    FUN_0035b494(DAT_0017d1ec,DAT_0017d1e0,param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xacc) = 3;
    if (*(uint *)(param_1 + 0xffc) < 0x15) {
      if (*(uint *)(param_1 + 0xffc) != 0x14) break;
      FUN_00374a58(DAT_0017d1cc,param_1 + 0x1a8,8);
      uVar14 = FUN_0036ae14(param_1 + 0x1a8,8);
      uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar14;
    }
    else {
      iVar10 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),DAT_0017d1d0,param_1 + 0x1a8);
      if (iVar10 != 0) {
        FUN_00367c7c(param_2,DAT_0017d1f0,0);
        FUN_00370350(DAT_0017d1cc,param_1 + 0x1a8,0xe);
        *(undefined4 *)(param_1 + 0xaf8) = DAT_0017d1d8;
      }
    }
    if ((100 < *(uint *)(param_1 + 0xffc)) && (iVar10 = FUN_003769d8(param_2 + 0x28a0), iVar10 == 0)
       ) {
      *puVar11 = 0x11;
      *(undefined4 *)(param_1 + 0xffc) = 0;
    }
    break;
  case 0x11:
    *(undefined1 *)(param_1 + 0xacc) = 3;
    if (*(int *)(param_1 + 0xffc) == 0x14) {
      FUN_00374a58(DAT_0017d1cc,param_1 + 0x1a8,6);
      uVar14 = FUN_0036ae14(param_1 + 0x1a8,6);
      uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar14;
    }
    if (10 < *(uint *)(param_1 + 0xffc)) {
      if (*(uint *)(param_1 + 0xffc) == 0x3e) {
        *(undefined4 *)(*(int *)(DAT_0017c29c + 0x44) + 0x1714) = DAT_0017d1f4;
      }
      if (*(int *)(param_1 + 0xffc) == 0x39) {
        FUN_00375bcc(param_1,DAT_0017d1f8);
      }
      FUN_00373500(DAT_0017d204,DAT_0017d200,*(float *)(param_1 + 0x1074) * DAT_0017d1fc,
                   param_1 + 0x107c);
      FUN_00373500(DAT_0017d20c,DAT_0017d1d0,DAT_0017d208,param_1 + 0x1074);
      if (*(int *)(param_1 + 0xffc) == 0x46) {
        *puVar11 = 0x12;
        uVar14 = DAT_0017d210;
        *(undefined4 *)(param_1 + 0xffc) = 0;
        *(undefined4 *)(param_1 + 0x107c) = uVar14;
        FUN_0034be30(param_1,0xc);
        FUN_00367c7c(param_2,DAT_0017d214,0);
      }
    }
    break;
  case 0x12:
    FUN_0035b494(DAT_0017d5b8,DAT_0017d1e0,param_1,param_2,0);
    *(undefined1 *)(param_1 + 0xacc) = 3;
    FUN_0034be30(param_1,0xc);
    fVar4 = DAT_0017d5c4;
    fVar17 = DAT_0017d5c0;
    *(float *)(param_1 + 0x100c) = *(float *)(param_1 + 0x100c) + DAT_0017d5bc;
    *(float *)(param_1 + 0x1010) = *(float *)(param_1 + 0x1010) + fVar17;
    iVar10 = FUN_003736fc(*(float *)(param_1 + 0xaf8) - fVar4,DAT_0017d1d0,param_1 + 0x1a8);
    if (iVar10 != 0) {
      FUN_00370350(DAT_0017d1cc,param_1 + 0x1a8,7);
      *(undefined4 *)(param_1 + 0xaf8) = DAT_0017d1d8;
    }
    if ((*(uint *)(param_1 + 0xffc) < 0x33) ||
       (iVar10 = FUN_003769d8(param_2 + 0x28a0), iVar10 != 0)) break;
    *puVar11 = 0x13;
    *(undefined4 *)(param_1 + 0xffc) = 0;
    FUN_00367c7c(param_2,DAT_0017d5c8,0);
    FUN_00374a58(DAT_0017d1cc,param_1 + 0x1a8,0xc);
    uVar14 = DAT_0017d1d4;
    *(float *)(param_1 + 0xb0c) = fVar17;
    *(undefined4 *)(param_1 + 0xb04) = uVar14;
    uVar13 = DAT_0017d5cc;
    *(undefined4 *)(param_1 + 0xb18) = uVar14;
    *(undefined4 *)(param_1 + 0xb00) = uVar13;
    iVar10 = DAT_0017c724;
    *(float *)(param_1 + 0xb08) = DAT_0017d1e4;
    *(undefined4 *)(param_1 + 0xb20) = uVar14;
    *(undefined2 *)(iVar10 + param_1) = 2;
    *(undefined4 *)(param_2 + 0x3258) = uVar14;
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1d0),4);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1d0),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1d0),5);
    uVar14 = FUN_0036932c(*(undefined4 *)(param_1 + 0x1d0),7);
  case 0x13:
    *(undefined1 *)(param_1 + 0xacc) = 8;
    uVar8 = *(uint *)(param_1 + 0xffc);
    if (0x4f < uVar8) {
      iVar10 = 9;
      *(undefined1 *)(param_1 + 0xacc) = 9;
      if (uVar8 == 0x50) {
        iVar10 = param_2 + 0x3000;
        uVar14 = DAT_0017d1d0;
      }
      if (uVar8 == 0x50) {
        *(undefined4 *)(iVar10 + 600) = uVar14;
      }
    }
    FUN_0034be30(param_1,0xc);
    fVar17 = DAT_0017d5c0;
    *(float *)(param_1 + 0x100c) = *(float *)(param_1 + 0x100c) + DAT_0017d5bc;
    *(float *)(param_1 + 0x1010) = *(float *)(param_1 + 0x1010) + fVar17;
    if (0x2c < *(uint *)(param_1 + 0xffc)) {
      if (*(uint *)(param_1 + 0xffc) == 0x2d) {
        FUN_0037547c(DAT_0017c730,0,4,DAT_0017c72c,DAT_0017c72c,DAT_0017c728);
      }
      uVar13 = DAT_0017d5d0;
      uVar14 = DAT_0017d1d0;
      FUN_00373500(DAT_0017d5cc,DAT_0017d1d0,DAT_0017d5d0,param_1 + 0xb04);
      FUN_00373500(DAT_0017d5d8,uVar14,DAT_0017d5d4,param_1 + 0xb0c);
      FUN_00373500(DAT_0017d5e0,uVar14,DAT_0017d5dc,param_1 + 0xb00);
      FUN_00373500(DAT_0017d5e4,uVar14,uVar13,param_1 + 0xb08);
    }
    if (*(int *)(param_1 + 0xffc) == 0x1a) {
      FUN_00370350(DAT_0017d1cc,param_1 + 0x1a8,0xd);
    }
    uVar14 = DAT_0017d5cc;
    if (*(uint *)(param_1 + 0xffc) == 0x51) {
      *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_1 + 0xb0c);
      *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_1 + 0xb04);
      *(undefined4 *)(param_1 + 0xb20) = uVar14;
    }
    else if (*(uint *)(param_1 + 0xffc) < 0x51) break;
    uVar9 = DAT_0017d5e8;
    uVar13 = DAT_0017d1d4;
    uVar14 = DAT_0017d1d0;
    FUN_00373500(DAT_0017d1d4,DAT_0017d1d0,DAT_0017d5e8,param_1 + 0xb20);
    FUN_00373500(uVar13,uVar14,DAT_0017d5ec,param_1 + 0xb18);
    FUN_00373500(uVar9,uVar14,DAT_0017d5f0,param_1 + 0xb1c);
    if ((0x78 < *(uint *)(param_1 + 0xffc)) &&
       (iVar10 = FUN_003769d8(param_2 + 0x28a0), fVar4 = DAT_0017d5f4, fVar17 = DAT_0017d1e4,
       iVar10 == 0)) {
      *(undefined1 *)(DAT_0017cdf8 + param_2) = 0;
      *puVar11 = 0x14;
      *(undefined4 *)(param_1 + 0xffc) = 0;
      uVar9 = DAT_0017d600;
      *(float *)(param_1 + 0x1044) = *(float *)(param_1 + 0x1008) - fVar4;
      *(float *)(param_1 + 0x1048) = *(float *)(param_1 + 0x100c) - fVar17;
      fVar15 = DAT_0017d5f8;
      *(float *)(param_1 + 0x104c) = *(float *)(param_1 + 0x1010) + DAT_0017d5f8;
      *(float *)(param_1 + 0x102c) = fVar4;
      *(float *)(param_1 + 0x1030) = fVar17;
      *(float *)(param_1 + 0x1034) = fVar15;
      *(float *)(param_1 + 0x105c) = *(float *)(param_1 + 0x1014) + fVar15;
      *(undefined4 *)(param_1 + 0x1060) = *(undefined4 *)(param_1 + 0x1018);
      *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x101c);
      *(float *)(param_1 + 0x1038) = fVar15;
      uVar14 = DAT_0017d5fc;
      *(undefined4 *)(param_1 + 0x1074) = uVar13;
      *(undefined4 *)(param_1 + 0x1078) = uVar14;
      uVar14 = DAT_0017d200;
      *(undefined4 *)(param_1 + 0xb10) = uVar13;
      *(undefined4 *)(param_1 + 0xb14) = uVar14;
      FUN_00375bcc(param_1,uVar9);
    }
    break;
  case 0x14:
    FUN_0035b494(DAT_0017d9b8,DAT_0017d5f4,param_1,param_2,4);
    uVar14 = DAT_0017d9c0;
    *(undefined1 *)(param_1 + 0xacc) = 10;
    bVar2 = true;
    FUN_00373500(DAT_0017d9c4,uVar14,DAT_0017d9bc,param_1 + 0x1074);
    if (*(uint *)(param_1 + 0xffc) < 0x3d) {
      FUN_00373500(DAT_0017d5cc,uVar14,DAT_0017d9c8,param_1 + 0xb10);
      FUN_00373500(DAT_0017d5fc,uVar14,DAT_0017d9cc,param_1 + 0xb14);
      if (*(uint *)(param_1 + 0xffc) < 0x1f) break;
    }
    FUN_00375bcc(param_1,DAT_0017d9d0);
    uVar14 = DAT_0017d9d4;
    if (*(uint *)(param_1 + 0xffc) < 0x1f) break;
    FUN_0036cae4(DAT_0017d9d4,param_2,2);
    FUN_0036cae4(uVar14,param_2,2);
    if (*(int *)(param_1 + 0xffc) == 0x2d) {
      FUN_0036e980(param_2,param_1,0x4a);
    }
    if (*(uint *)(param_1 + 0xffc) < 0x4c) break;
    *puVar11 = 0x15;
    *(undefined4 *)(param_1 + 0xffc) = 0;
    uVar14 = DAT_0017d9d8;
    *(undefined4 *)(param_1 + 0xb04) = DAT_0017d9d8;
    *(undefined4 *)(param_1 + 0xb18) = uVar14;
    *(undefined4 *)(param_1 + 0xb14) = DAT_0017d9dc;
    goto LAB_0017d768;
  case 0x15:
    FUN_0035b494(DAT_0017d9e0,DAT_0017d5f4,param_1,param_2,4);
    *(undefined1 *)(param_1 + 0xacc) = 0xb;
    FUN_00375bcc(param_1,DAT_0017d9d0);
    uVar14 = DAT_0017d9d4;
    FUN_0036cae4(DAT_0017d9d4,param_2,2);
    FUN_0036cae4(uVar14,param_2,2);
LAB_0017d768:
    uVar13 = DAT_0017d9e8;
    uVar14 = DAT_0017d9e4;
    *(undefined4 *)(param_1 + 0x1008) = DAT_0017d9e4;
    *(undefined4 *)(param_1 + 0x100c) = uVar13;
    *(undefined4 *)(param_1 + 0x1010) = uVar14;
    *(undefined4 *)(param_1 + 0x1014) = DAT_0017d9ec;
    *(undefined4 *)(param_1 + 0x1018) = DAT_0017d9f0;
    *(undefined4 *)(param_1 + 0x101c) = DAT_0017d9d8;
    if (*(int *)(param_1 + 0xffc) == 0x14) {
      FUN_00367c7c(param_2,DAT_0017d9f4,0);
    }
    if ((0xb4 < *(uint *)(param_1 + 0xffc)) &&
       (iVar7 = FUN_003769d8(param_2 + 0x28a0), iVar10 = DAT_0017d9f8, iVar7 == 0)) {
      *puVar11 = 0x16;
      *(undefined4 *)(param_1 + 0xffc) = 0;
      *(undefined2 *)(iVar10 + param_1) = 0x2d;
      *(undefined2 *)(param_1 + 0x10a0) = 0xfe;
      fVar17 = DAT_0017da00;
      uVar14 = DAT_0017d5cc;
      *(float *)(param_1 + 0x1014) = *(float *)(param_1 + 0xb30) - DAT_0017d9fc;
      *(float *)(param_1 + 0x1018) = *(float *)(param_1 + 0xb34) + fVar17;
      uVar13 = DAT_0017d5fc;
      *(undefined4 *)(param_1 + 0x101c) = *(undefined4 *)(param_1 + 0xb38);
      *(undefined4 *)(param_1 + 0xb10) = uVar14;
      *(undefined4 *)(param_1 + 0xb14) = uVar13;
switchD_0017c00c_caseD_16:
      FUN_0035b494(DAT_0017da08,DAT_0017da04,param_1,param_2,4);
      fVar17 = DAT_0017d9fc;
      uVar14 = DAT_0017d9c0;
      if (*(uint *)(param_1 + 0xffc) < 0x2e) {
        uVar5 = 0xc;
      }
      else {
        uVar5 = 0;
      }
      *(undefined1 *)(param_1 + 0xacc) = uVar5;
      FUN_0036fc20(uVar14,fVar17,param_1 + 0xb10);
      *(undefined4 *)(param_1 + 0x1008) = DAT_0017d9e4;
      fVar4 = DAT_0017da00;
      *(undefined4 *)(param_1 + 0x100c) = DAT_0017da0c;
      uVar13 = DAT_0017da18;
      *(undefined4 *)(param_1 + 0x1010) = DAT_0017da10;
      FUN_00373500(*(float *)(param_1 + 0xb34) + fVar4,uVar13,DAT_0017da14,param_1 + 0x1018);
      FUN_00373500(*(float *)(param_1 + 0xb30) - fVar17,uVar13,DAT_0017d5c4);
      if (*(int *)(param_1 + 0xffc) == 0x1e) {
        uVar9 = FUN_00363c10(param_2 + 0x3a58,0x17c);
        uVar13 = DAT_0017d9d8;
        *(undefined4 *)(param_1 + 0x1a4) = uVar9;
        FUN_00374a58(uVar13,param_1 + 0x1a8,0x16);
        FUN_003731e0(param_1 + 0x1a8);
        iVar10 = DAT_0017da20;
        *(undefined4 *)(param_1 + 0xc4) = uVar13;
        uVar13 = DAT_0017d1f8;
        *(undefined4 *)(*(int *)(iVar10 + 0x44) + 0x171c) = DAT_0017da1c;
        FUN_00375bcc(param_1,uVar13);
        uVar13 = DAT_0017da24;
        *(undefined1 *)(param_1 + 0xac4) = 0;
        FUN_0036ec40(0,uVar13,0);
      }
      if (*(int *)(param_1 + 0xffc) == 0x4b) {
        FUN_00363c10(param_2 + 0x3a58,0xe1);
        iVar10 = DAT_0017da28;
        if ((*(ushort *)(DAT_0017da28 + 0xfa) & 0x100) == 0) {
          FUN_00354248(DAT_0017d9d8,param_2,param_2 + 0x224c,*(undefined4 *)(param_1 + 0x978),200,
                       0xb4,0x100,0x40);
        }
        *(ushort *)(iVar10 + 0xfa) = *(ushort *)(iVar10 + 0xfa) | 0x100;
      }
      if (0x1d < *(uint *)(param_1 + 0xffc)) {
        *(undefined1 *)(param_1 + 0xac5) = 1;
        FUN_00375bcc(param_1,DAT_0017dd20);
        uVar13 = DAT_0017dd28;
        fVar17 = DAT_0017dd24;
        FUN_00373500(DAT_0017dd2c,DAT_0017dd28,DAT_0017dd24,param_1 + 0x2c);
        FUN_00373500(DAT_0017dd34,uVar13,DAT_0017dd30,param_1 + 0x30);
        fVar4 = DAT_0017dd40;
        uVar9 = DAT_0017dd3c;
        uVar13 = DAT_0017dd38;
        iVar10 = *(int *)(DAT_0017da20 + 0x44);
        *(undefined4 *)(iVar10 + 0x1708) = DAT_0017dd38;
        *(undefined4 *)(iVar10 + 0x170c) = uVar9;
        *(undefined4 *)(iVar10 + 0x1710) = uVar13;
        fVar15 = (float)VectorUnsignedToFloat
                                  (*(undefined4 *)(param_1 + 0xffc),(byte)(in_fpscr >> 0x15) & 3);
        fVar15 = (float)FUN_002cfca0((int)(short)(int)(fVar15 * fVar17 * fVar4 * DAT_0017dd44));
        fVar16 = fVar15 * DAT_0017dd48 * *(float *)(param_1 + 0xaf4);
        *(float *)(param_1 + 100) = fVar16;
        fVar15 = DAT_0017dd4c;
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar16;
        fVar16 = (float)VectorUnsignedToFloat
                                  (*(undefined4 *)(param_1 + 0xffc),(byte)(in_fpscr >> 0x15) & 3);
        fVar17 = (float)FUN_00338f60((int)(short)(int)(fVar16 * fVar17 * fVar4 * fVar15));
        fVar17 = fVar17 * DAT_0017dd50 * *(float *)(param_1 + 0xaf4);
        *(float *)(param_1 + 0x28) = fVar17;
        *(float *)(param_1 + 0x60) = fVar17 - *(float *)(param_1 + 0x108);
        FUN_00373500(DAT_0017dd54,uVar14,uVar14,param_1 + 0xaf4);
        if (0x2d < *(uint *)(param_1 + 0xffc)) {
          sVar1 = *(short *)(param_1 + 0x10a0) + -5;
          *(short *)(param_1 + 0x10a0) = sVar1;
          if (sVar1 < 0) {
            *(undefined2 *)(param_1 + 0x10a0) = 0;
          }
          if (*(uint *)(param_1 + 0xffc) == 0xb4) {
            iVar10 = FUN_0036c5bc(param_2,0);
            uVar14 = *(undefined4 *)(param_1 + 0x100c);
            uVar13 = *(undefined4 *)(param_1 + 0x1010);
            *(undefined4 *)(iVar10 + 0x8c) = *(undefined4 *)(param_1 + 0x1008);
            *(undefined4 *)(iVar10 + 0x90) = uVar14;
            *(undefined4 *)(iVar10 + 0x94) = uVar13;
            uVar14 = *(undefined4 *)(param_1 + 0x100c);
            uVar13 = *(undefined4 *)(param_1 + 0x1010);
            *(undefined4 *)(iVar10 + 0xa4) = *(undefined4 *)(param_1 + 0x1008);
            *(undefined4 *)(iVar10 + 0xa8) = uVar14;
            *(undefined4 *)(iVar10 + 0xac) = uVar13;
            uVar14 = *(undefined4 *)(param_1 + 0x1018);
            uVar13 = *(undefined4 *)(param_1 + 0x101c);
            *(undefined4 *)(iVar10 + 0x80) = *(undefined4 *)(param_1 + 0x1014);
            *(undefined4 *)(iVar10 + 0x84) = uVar14;
            *(undefined4 *)(iVar10 + 0x88) = uVar13;
            FUN_0036e9b8(param_2,(int)*(short *)(param_1 + 0x1002),0);
            *(undefined2 *)(param_1 + 0x1002) = 0;
            *puVar11 = 0;
            FUN_00367374(param_2,param_2 + 0x2298);
            FUN_0036e980(param_2,param_1,7);
            FUN_0036e288(param_1,param_2);
          }
        }
      }
      uVar13 = DAT_0017dd58;
      uVar14 = DAT_0017d9d8;
      iVar10 = *(int *)(DAT_0017da20 + 0x4c);
      if (iVar10 != 0) {
        *(undefined4 *)(iVar10 + 0x28) = DAT_0017d9d8;
        *(undefined4 *)(iVar10 + 0x2c) = uVar13;
        *(undefined4 *)(iVar10 + 0x30) = uVar14;
      }
    }
    break;
  case 0x16:
    goto switchD_0017c00c_caseD_16;
  }
  if (*(short *)(param_1 + 0x1002) == 0) {
    return;
  }
  if (bVar2) {
    FUN_00373500(*(undefined4 *)(param_1 + 0x1044),*(undefined4 *)(param_1 + 0x1078),
                 *(float *)(param_1 + 0x102c) * *(float *)(param_1 + 0x1074),param_1 + 0x1008);
    FUN_00373500(*(undefined4 *)(param_1 + 0x1048),*(undefined4 *)(param_1 + 0x1078),
                 *(float *)(param_1 + 0x1030) * *(float *)(param_1 + 0x1074),param_1 + 0x100c);
    FUN_00373500(*(undefined4 *)(param_1 + 0x104c),*(undefined4 *)(param_1 + 0x1078),
                 *(float *)(param_1 + 0x1034) * *(float *)(param_1 + 0x1074),param_1 + 0x1010);
    FUN_00373500(*(undefined4 *)(param_1 + 0x105c),*(undefined4 *)(param_1 + 0x1078),
                 *(float *)(param_1 + 0x1038) * *(float *)(param_1 + 0x1074),param_1 + 0x1014);
    FUN_00373500(*(undefined4 *)(param_1 + 0x1060),*(undefined4 *)(param_1 + 0x1078),
                 *(float *)(param_1 + 0x103c) * *(float *)(param_1 + 0x1074),param_1 + 0x1018);
    FUN_00373500(*(undefined4 *)(param_1 + 0x1064),*(undefined4 *)(param_1 + 0x1078),
                 *(float *)(param_1 + 0x1040) * *(float *)(param_1 + 0x1074),param_1 + 0x101c);
  }
  FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x1002),param_1 + 0x1014,param_1 + 0x1008);
  return;
}

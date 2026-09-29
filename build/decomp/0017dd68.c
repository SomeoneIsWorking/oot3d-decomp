// OoT3D decomp @ 0017dd68  name=FUN_0017dd68  size=8268

void FUN_0017dd68(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  short *psVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;

  bVar1 = false;
  iVar15 = *(int *)(param_3 + 0x20ac);
  *(int *)(param_2 + 0xa94) = *(int *)(param_2 + 0xa94) + 1;
  uVar14 = DAT_00180088;
  fVar4 = DAT_0017fc64;
  fVar3 = DAT_0017f454;
  fVar20 = DAT_0017f450;
  fVar19 = DAT_0017eadc;
  switch(*(undefined2 *)(param_2 + 0xa98)) {
  case 0:
    FUN_0035b2d0(DAT_0017e1e0,DAT_0017e1dc,param_2,param_3,0);
    uVar14 = FUN_00363c10(param_3 + 0x3a58,DAT_0017e1e4);
    iVar13 = FUN_00373074(param_3 + 0x3a58,uVar14);
    if (iVar13 == 0) break;
    FUN_00367494(param_3,param_3 + 0x2298);
    FUN_0036e980(param_3,param_2,8);
    uVar6 = FUN_00367d74(param_3);
    *(undefined2 *)(param_2 + 0xa9a) = uVar6;
    FUN_00320d7c(param_3,0,1);
    FUN_00320d7c(param_3,(int)*(short *)(param_2 + 0xa9a),7);
    *(undefined2 *)(param_2 + 0xa98) = 1;
    uVar17 = DAT_0017e1f0;
    uVar14 = DAT_0017e1ec;
    iVar7 = FUN_0036aa20(DAT_0017e1f0,param_3 + 0x208c,param_2,param_3,0x179,0,0,0,1);
    uVar2 = DAT_0017e200;
    uVar16 = DAT_0017e1fc;
    iVar13 = DAT_0017e1f8;
    *(int *)(DAT_0017e1f4 + 0x30) = iVar7;
    *(undefined1 *)(iVar13 + iVar7) = 0;
    *(undefined4 *)(iVar7 + 0x28) = uVar17;
    *(undefined4 *)(iVar7 + 0x2c) = uVar14;
    *(undefined4 *)(iVar7 + 0x30) = uVar16;
    *(undefined2 *)(iVar7 + 0xbe) = 0x9000;
    uVar16 = DAT_0017e204;
    *(undefined4 *)(param_2 + 0xa94) = 0;
    *(undefined4 *)(param_2 + 0xab8) = uVar2;
    *(undefined4 *)(param_2 + 0xabc) = uVar16;
    *(undefined4 *)(param_2 + 0xac0) = uVar2;
    uVar16 = DAT_0017e208;
    *(undefined4 *)(param_2 + 0xaa0) = uVar2;
    *(undefined4 *)(param_2 + 0xaa4) = uVar16;
    *(undefined4 *)(param_2 + 0xaa8) = DAT_0017e20c;
    *(undefined4 *)(iVar15 + 0x28) = uVar17;
    uVar17 = DAT_0017e210;
    *(undefined4 *)(iVar15 + 0x2c) = uVar14;
    *(undefined4 *)(iVar15 + 0x30) = uVar17;
    *(undefined2 *)(iVar15 + 0xbe) = 0xb000;
    param_1 = FUN_00370350(uVar2,param_2 + 0x1a4,1);
    *(undefined4 *)(param_3 + 0x3258) = uVar2;
  case 1:
    uVar14 = DAT_0017e218;
    uVar9 = *(uint *)(param_2 + 0xa94);
    bVar18 = uVar9 < 0x69;
    if (bVar18) {
      uVar9 = param_3 + 0x3000;
      param_1 = DAT_0017e200;
    }
    if (bVar18) {
      *(undefined4 *)(uVar9 + 600) = param_1;
    }
    *(undefined1 *)(param_2 + 0xa35) = 3;
    FUN_00373500(DAT_0017e214,uVar14,*(float *)(param_2 + 0xb0c) * DAT_0017e214,param_2 + 0xaa0);
    FUN_00373500(DAT_0017e220,uVar14,*(float *)(param_2 + 0xb0c) * DAT_0017e21c,param_2 + 0xaa8);
    uVar16 = DAT_0017e204;
    FUN_00373500(DAT_0017e228,DAT_0017e204,DAT_0017e224,param_2 + 0xb0c);
    uVar17 = DAT_0017e1ec;
    uVar14 = DAT_0017e1e8;
    *(undefined4 *)(param_2 + 0xaac) = DAT_0017e1e8;
    *(undefined4 *)(param_2 + 0xab0) = uVar17;
    *(undefined4 *)(param_2 + 0xab4) = uVar14;
    if (*(int *)(param_2 + 0xa94) == 0xe1) {
      FUN_00367c7c(param_3,DAT_0017e22c,0);
    }
    if ((0x177 < *(uint *)(param_2 + 0xa94)) &&
       (iVar13 = FUN_003769d8(param_3 + 0x28a0), iVar13 == 0)) {
      *(undefined2 *)(param_2 + 0xa98) = 2;
      uVar14 = DAT_0017e200;
      *(undefined4 *)(param_2 + 0xa94) = 0;
      *(undefined4 *)(param_2 + 0xb0c) = uVar14;
      *(undefined4 *)(param_3 + 0x3258) = uVar16;
switchD_0017ddac_caseD_2:
      FUN_0035b2d0(DAT_0017e234,DAT_0017e230,param_2,param_3,0);
      uVar14 = DAT_0017e1f0;
      *(undefined1 *)(param_2 + 0xa35) = 4;
      *(undefined4 *)(iVar15 + 0x28) = uVar14;
      uVar17 = DAT_0017e238;
      puVar11 = DAT_0017e1f4;
      uVar14 = DAT_0017e1ec;
      *(undefined4 *)(iVar15 + 0x2c) = DAT_0017e1ec;
      *(undefined4 *)(iVar15 + 0x30) = uVar17;
      uVar17 = DAT_0017e240;
      iVar13 = *(int *)(puVar11 + 0x30);
      *(undefined4 *)(iVar13 + 0x28) = DAT_0017e23c;
      *(undefined4 *)(iVar13 + 0x2c) = uVar14;
      *(undefined4 *)(iVar13 + 0x30) = DAT_0017e210;
      *(short *)(iVar15 + 0xbe) = (short)uVar17;
      *(short *)(iVar13 + 0xbe) = (short)uVar17;
      if (*(int *)(param_2 + 0xa94) == 0x5a) {
        FUN_00367c7c(param_3,DAT_0017e244,0);
      }
      if (*(int *)(param_2 + 0xa94) == 0x3c) {
        *(undefined1 *)(*(int *)(puVar11 + 0x30) + 0x10e8) = 1;
        FUN_0036e980(param_3,param_2,0x4e);
      }
      if (*(int *)(param_2 + 0xa94) == 0x80) {
        *(undefined1 *)(*(int *)(puVar11 + 0x30) + 0x10e8) = 2;
        FUN_0036e980(param_3,param_2,0x4f);
      }
      fVar20 = DAT_0017e258;
      *(undefined4 *)(param_2 + 0xaa0) = DAT_0017e248;
      *(undefined4 *)(param_2 + 0xaa4) = DAT_0017e24c;
      *(undefined4 *)(param_2 + 0xaa8) = DAT_0017e250;
      fVar19 = DAT_0017e254;
      *(undefined4 *)(param_2 + 0xaac) = *(undefined4 *)(iVar15 + 0x28);
      *(float *)(param_2 + 0xab4) = (*(float *)(iVar15 + 0x30) - fVar19) + fVar20;
      uVar14 = DAT_0017e218;
      if (*(uint *)(param_2 + 0xa94) < 0x9e) {
        *(float *)(param_2 + 0xab0) = *(float *)(iVar15 + 0x2c) + DAT_0017e25c;
      }
      else {
        FUN_00373500(*(float *)(iVar15 + 0x2c) + DAT_0017e260 + DAT_0017e264,DAT_0017e218,
                     *(undefined4 *)(param_2 + 0xb0c),param_2 + 0xab0);
        FUN_00373500(DAT_0017e268,DAT_0017e204,uVar14,param_2 + 0xb0c);
      }
      if ((0xff < *(uint *)(param_2 + 0xa94)) &&
         (iVar15 = FUN_003769d8(param_3 + 0x28a0), iVar15 == 0)) {
        *(undefined2 *)(param_2 + 0xa98) = 3;
        uVar14 = DAT_0017e200;
        *(undefined4 *)(param_2 + 0xa94) = 0;
        *(undefined4 *)(param_2 + 0xb0c) = uVar14;
      }
    }
    break;
  case 2:
    goto switchD_0017ddac_caseD_2;
  case 3:
    if (0x1e < *(uint *)(param_2 + 0xa94)) {
      FUN_0035b2d0(DAT_0017e65c,DAT_0017e230,param_2,param_3,5);
    }
    FUN_00373500(*(float *)(iVar15 + 0x2c) + DAT_0017e25c,DAT_0017e218,DAT_0017e268,param_2 + 0xab0)
    ;
    *(undefined1 *)(param_2 + 0xa35) = 4;
    if (*(int *)(param_2 + 0xa94) == 0xf) {
      FUN_0037547c(DAT_0017e66c,DAT_0017e668,4,DAT_0017e664,DAT_0017e664,DAT_0017e660);
      FUN_0034bdb8(0);
    }
    if (*(int *)(param_2 + 0xa94) == 0x1e) {
      *(undefined1 *)(*(int *)(DAT_0017e1f4 + 0x30) + 0x10e8) = 3;
      FUN_0036e980(param_3,param_2,0x50);
    }
    if (*(int *)(param_2 + 0xa94) == 0x53) {
      *(undefined2 *)(param_2 + 0xa98) = 4;
      *(undefined4 *)(param_2 + 0xa94) = 0;
      puVar11 = DAT_0017e1f4;
      *(undefined4 *)(param_2 + 0xb0c) = DAT_0017e200;
      *(undefined1 *)(*(int *)(puVar11 + 0x30) + 0x10e8) = 4;
      FUN_0036e980(param_3,param_2,0x50);
    }
    break;
  case 4:
    *(undefined1 *)(param_2 + 0xa35) = 4;
    uVar14 = DAT_0017e218;
    FUN_00373500(DAT_0017e674,DAT_0017e218,*(float *)(param_2 + 0xb0c) * DAT_0017e670,
                 param_2 + 0xaa0);
    FUN_00373500(DAT_0017e67c,uVar14,*(float *)(param_2 + 0xb0c) * DAT_0017e678,param_2 + 0xaa8);
    FUN_00373500(DAT_0017e684,DAT_0017e204,DAT_0017e680,param_2 + 0xb0c);
    if (*(int *)(param_2 + 0xa94) == 0x96) {
      iVar15 = FUN_0036c5bc(param_3,0);
      uVar14 = *(undefined4 *)(param_2 + 0xaa4);
      uVar17 = *(undefined4 *)(param_2 + 0xaa8);
      *(undefined4 *)(iVar15 + 0x8c) = *(undefined4 *)(param_2 + 0xaa0);
      *(undefined4 *)(iVar15 + 0x90) = uVar14;
      *(undefined4 *)(iVar15 + 0x94) = uVar17;
      uVar14 = *(undefined4 *)(param_2 + 0xaa4);
      uVar17 = *(undefined4 *)(param_2 + 0xaa8);
      *(undefined4 *)(iVar15 + 0xa4) = *(undefined4 *)(param_2 + 0xaa0);
      *(undefined4 *)(iVar15 + 0xa8) = uVar14;
      *(undefined4 *)(iVar15 + 0xac) = uVar17;
      uVar14 = *(undefined4 *)(param_2 + 0xab0);
      uVar17 = *(undefined4 *)(param_2 + 0xab4);
      *(undefined4 *)(iVar15 + 0x80) = *(undefined4 *)(param_2 + 0xaac);
      *(undefined4 *)(iVar15 + 0x84) = uVar14;
      *(undefined4 *)(iVar15 + 0x88) = uVar17;
      FUN_0036e9b8(param_3,(int)*(short *)(param_2 + 0xa9a),0);
      *(undefined2 *)(param_2 + 0xa9a) = 0;
      FUN_00367374(param_3,param_3 + 0x2298);
      FUN_0036e980(param_3,param_2,7);
      *(undefined2 *)(param_2 + 0xa98) = 5;
      fVar19 = DAT_0017e65c;
      uVar14 = DAT_0017e230;
      *(undefined4 *)(param_2 + 0xa94) = 0;
      FUN_0035b2d0(fVar19,uVar14,param_2,param_3,0xffffffff);
      FUN_0035af04(*(undefined4 *)(param_3 + 0x20ac),1);
    }
    break;
  case 5:
    *(undefined1 *)(param_2 + 0xa35) = 4;
    if (DAT_0017e688 <= *(int *)(param_2 + 0x98)) break;
    FUN_003725e0(param_3);
    *(undefined2 *)(param_2 + 0xa98) = 10;
    *(undefined4 *)(param_2 + 0xa94) = 0;
    FUN_00367494(param_3,param_3 + 0x2298);
    uVar6 = FUN_00367d74(param_3);
    *(undefined2 *)(param_2 + 0xa9a) = uVar6;
    FUN_00320d7c(param_3,0,1);
    FUN_00320d7c(param_3,(int)*(short *)(param_2 + 0xa9a),7);
  case 10:
    FUN_0035b2d0(DAT_0017e68c,DAT_0017e230,param_2,param_3,0);
    puVar11 = DAT_0017e1f4;
    *(undefined4 *)(iVar15 + 0x28) = DAT_0017e690;
    uVar17 = DAT_0017e238;
    uVar14 = DAT_0017e1ec;
    *(undefined4 *)(iVar15 + 0x2c) = DAT_0017e1ec;
    *(undefined4 *)(iVar15 + 0x30) = uVar17;
    fVar19 = DAT_0017e65c;
    iVar13 = *(int *)(puVar11 + 0x30);
    *(undefined4 *)(iVar13 + 0x28) = DAT_0017e694;
    *(undefined4 *)(iVar13 + 0x2c) = uVar14;
    fVar20 = DAT_0017e6a4;
    *(undefined4 *)(iVar13 + 0x30) = DAT_0017e210;
    *(undefined2 *)(iVar15 + 0xbe) = 0xc000;
    uVar14 = DAT_0017e698;
    *(undefined2 *)(iVar13 + 0xbe) = 0xb000;
    *(undefined4 *)(param_2 + 0xaa0) = uVar14;
    *(undefined4 *)(param_2 + 0xaa4) = DAT_0017e69c;
    *(undefined4 *)(param_2 + 0xaa8) = DAT_0017e6a0;
    *(float *)(param_2 + 0xaac) = *(float *)(iVar15 + 0x28) + fVar19;
    *(float *)(param_2 + 0xab0) = (*(float *)(iVar15 + 0x2c) + fVar20) - DAT_0017e6a8;
    *(undefined4 *)(param_2 + 0xab4) = *(undefined4 *)(iVar15 + 0x30);
    if (*(uint *)(param_2 + 0xa94) < 0x1e) {
      *(undefined1 *)(param_2 + 0xa35) = 4;
    }
    else {
      FUN_0037547c(DAT_0017e6ac,0,4,DAT_0017e664,DAT_0017e664,DAT_0017e660);
      FUN_00373500(DAT_0017e6b4,DAT_0017e6b0,fVar19,param_2 + 0xa20);
      *(undefined1 *)(param_2 + 0xa35) = 5;
      uVar14 = DAT_0017e6b8;
      if (*(int *)(param_2 + 0xa94) == 0x1e) {
        *(undefined4 *)(param_2 + 0xa38) = DAT_0017e6b8;
        *(undefined4 *)(param_3 + 0x3258) = uVar14;
      }
    }
    if (*(int *)(param_2 + 0xa94) == 0x2d) {
      *(undefined1 *)(*(int *)(puVar11 + 0x30) + 0x10e8) = 5;
      FUN_0036e980(param_3,param_2,0x51);
    }
    if (*(int *)(param_2 + 0xa94) == 0x4b) {
      *(undefined4 *)(param_2 + 0xa94) = 0;
      *(undefined2 *)(param_2 + 0xa98) = 0xb;
    }
    break;
  case 0xb:
    FUN_0035b2d0(DAT_0017eadc,DAT_0017ead8,param_2,param_3,0);
    uVar17 = DAT_0017e664;
    uVar14 = DAT_0017e660;
    *(undefined1 *)(param_2 + 0xa35) = 5;
    FUN_0037547c(DAT_0017e6ac,0,4,uVar17,uVar17,uVar14);
    puVar11 = DAT_0017e1f4;
    *(undefined4 *)(iVar15 + 0x28) = DAT_0017e690;
    uVar17 = DAT_0017eae4;
    uVar14 = DAT_0017eae0;
    *(undefined4 *)(iVar15 + 0x2c) = DAT_0017eae0;
    *(undefined4 *)(iVar15 + 0x30) = uVar17;
    fVar20 = DAT_0017e6a4;
    iVar13 = *(int *)(puVar11 + 0x30);
    *(undefined4 *)(iVar13 + 0x28) = DAT_0017e694;
    *(undefined4 *)(iVar13 + 0x2c) = uVar14;
    *(undefined4 *)(iVar13 + 0x30) = DAT_0017eae8;
    *(undefined2 *)(iVar15 + 0xbe) = 0xc000;
    uVar14 = DAT_0017eaec;
    *(undefined2 *)(iVar13 + 0xbe) = 0xb000;
    *(undefined4 *)(param_2 + 0xaa0) = uVar14;
    *(undefined4 *)(param_2 + 0xaa4) = DAT_0017eaf0;
    *(undefined4 *)(param_2 + 0xaa8) = DAT_0017eaf4;
    fVar3 = DAT_0017eaf8;
    *(float *)(param_2 + 0xaac) = (*(float *)(iVar15 + 0x28) - fVar19) + DAT_0017eaf8;
    *(float *)(param_2 + 0xab0) = ((*(float *)(iVar15 + 0x2c) + fVar20) - DAT_0017eafc) - fVar3;
    *(float *)(param_2 + 0xab4) = *(float *)(iVar15 + 0x30) + fVar3;
    if (*(int *)(param_2 + 0xa94) == 0xf) {
      FUN_0037547c(DAT_0017e66c,DAT_0017e668,4,DAT_0017e664,DAT_0017e664,DAT_0017e660);
    }
    if (*(int *)(param_2 + 0xa94) == 0x1e) {
      FUN_0037547c(DAT_0017e66c,0,4,DAT_0017e664,DAT_0017e664,DAT_0017e660);
    }
    if (*(int *)(param_2 + 0xa94) == 0x2d) {
      FUN_0036e980(param_3,param_2,0x52);
    }
    uVar14 = DAT_0017e6b8;
    if (*(int *)(param_2 + 0xa94) != 0x4b) break;
    *(undefined4 *)(param_2 + 0xa94) = 0;
    *(undefined2 *)(param_2 + 0xa98) = 0xc;
    FUN_00374a58(uVar14,param_2 + 0x1a4,1);
    uVar16 = FUN_0036ae14(param_2 + 0x1a4,1);
    uVar2 = DAT_0017eb08;
    uVar17 = DAT_0017eb00;
    uVar16 = VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x88c) = uVar16;
    uVar16 = DAT_0017eb04;
    *(undefined4 *)(param_2 + 0x28) = uVar17;
    *(undefined4 *)(param_2 + 0x2c) = uVar16;
    *(undefined4 *)(param_2 + 0x30) = uVar17;
    *(undefined4 *)(param_2 + 0xc4) = uVar2;
    uVar16 = DAT_0017eb0c;
    *(undefined2 *)(param_2 + 0x36) = 0x5000;
    *(undefined4 *)(param_2 + 0xaa0) = uVar16;
    *(undefined4 *)(param_2 + 0xaa4) = DAT_0017eb10;
    *(undefined4 *)(param_2 + 0xaa8) = uVar17;
    *(undefined4 *)(param_2 + 0xaac) = uVar17;
    *(undefined4 *)(param_2 + 0xab0) = DAT_0017eb14;
    *(undefined4 *)(param_2 + 0xab4) = uVar17;
    *(undefined4 *)(param_3 + 0x3258) = uVar14;
    *(undefined1 *)(param_3 + 0x3236) = 0xd;
    *(undefined1 *)(param_3 + 0x3235) = 0xd;
    *(undefined1 *)(param_2 + 0xa35) = 0;
  case 0xc:
  case 0xd:
    FUN_0035b2d0(DAT_0017eb1c,DAT_0017eb18,param_2,param_3,2);
    FUN_003731e0(param_2 + 0x1a4);
    uVar17 = DAT_0017e664;
    uVar14 = DAT_0017e660;
    if (*(int *)(param_2 + 0xa94) == 0x2d) {
      *DAT_0017e1f4 = 1;
      *(undefined1 *)(param_2 + 0xa10) = 1;
      FUN_0037547c(DAT_0017eb20,0,4,uVar17,uVar17,uVar14);
    }
    if (0x2c < *(uint *)(param_2 + 0xa94)) {
      FUN_00373500(DAT_0017eb28,DAT_0017eb24,DAT_0017e65c,param_2 + 0x2c);
      *(float *)(param_2 + 0xab0) = *(float *)(param_2 + 0x2c) + DAT_0017e68c;
    }
    iVar13 = FUN_003736fc(*(undefined4 *)(param_2 + 0x88c),DAT_0017e6b0,param_2 + 0x1a4);
    if (iVar13 != 0) {
      FUN_00370350(DAT_0017e6b8,param_2 + 0x1a4,3);
      *(undefined2 *)(param_2 + 0xa98) = 0xe;
      *(undefined4 *)(param_2 + 0xa94) = 0;
      uVar17 = DAT_0017eb30;
      *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) - DAT_0017eb2c;
      uVar14 = DAT_0017eb00;
      *(undefined4 *)(param_2 + 0x28) = DAT_0017eb00;
      *(undefined4 *)(param_2 + 0x30) = uVar14;
      FUN_0036ec40(0,uVar17,0);
      iVar13 = 100;
      pcVar8 = *(char **)(DAT_0017eb34 + param_3);
      do {
        if (*pcVar8 == '\x02') {
          *pcVar8 = '\0';
        }
        iVar13 = iVar13 + -1;
        pcVar8 = pcVar8 + 0x44;
      } while (iVar13 != 0);
      *(undefined4 *)(DAT_0017eb38 + param_3) = 1;
switchD_0017ddac_caseD_e:
      FUN_0035b2d0(DAT_0017eb3c,DAT_0017eb18,param_2,param_3,0);
      FUN_003731e0(param_2 + 0x1a4);
      uVar14 = DAT_0017e6b0;
      FUN_00373500(DAT_0017eb28,DAT_0017eb40,DAT_0017e6b0,param_2 + 0x2c);
      uVar16 = DAT_0017eb48;
      *(undefined4 *)(iVar15 + 0x28) = DAT_0017eb44;
      uVar17 = DAT_0017eae0;
      *(undefined4 *)(iVar15 + 0x2c) = DAT_0017eae0;
      *(undefined4 *)(iVar15 + 0x30) = uVar16;
      *(undefined2 *)(iVar15 + 0xbe) = 0xc000;
      iVar13 = *(int *)(DAT_0017e1f4 + 0x30);
      *(undefined4 *)(iVar13 + 0x28) = DAT_0017e694;
      *(undefined4 *)(iVar13 + 0x2c) = uVar17;
      fVar19 = DAT_0017eb4c;
      *(undefined4 *)(iVar13 + 0x30) = DAT_0017eae8;
      fVar20 = DAT_0017eb50;
      *(float *)(param_2 + 0xaa0) = *(float *)(param_2 + 0x28) + fVar19;
      fVar19 = DAT_0017ead8;
      *(float *)(param_2 + 0xaa4) = *(float *)(param_2 + 0x2c) + fVar20;
      *(float *)(param_2 + 0xaa8) = *(float *)(param_2 + 0x30) + fVar19;
      *(undefined4 *)(param_2 + 0xaac) = *(undefined4 *)(iVar15 + 0x28);
      *(undefined4 *)(param_2 + 0xab0) = *(undefined4 *)(iVar15 + 0x2c);
      fVar19 = DAT_0017ef0c;
      *(float *)(param_2 + 0xab4) = *(float *)(iVar15 + 0x30) - DAT_0017ef0c;
      if (*(int *)(param_2 + 0xa94) == 0x1e) {
        FUN_0036e980(param_3,param_2,0x1e);
      }
      if (*(int *)(param_2 + 0xa94) == 0x5a) {
        *(undefined2 *)(param_2 + 0xa98) = 0xf;
        *(undefined4 *)(param_2 + 0xa94) = 0;
        *(undefined4 *)(param_3 + 0x19c) = uVar14;
        fVar3 = DAT_0017ef20;
        fVar20 = DAT_0017ef18;
        *(float *)(param_2 + 0xaa0) =
             ((*(float *)(param_2 + 0x28) + fVar19) - DAT_0017ef10) - DAT_0017ef14;
        fVar19 = DAT_0017eaf8;
        *(float *)(param_2 + 0xaa4) = (*(float *)(param_2 + 0x2c) + fVar20) - DAT_0017ef1c;
        *(float *)(param_2 + 0xaa8) = (*(float *)(param_2 + 0x30) - fVar3) - fVar19;
        *(float *)(param_2 + 0xaac) = *(float *)(param_2 + 0x28);
        *(float *)(param_2 + 0xab0) = *(float *)(param_2 + 0x2c) + DAT_0017ef24;
        *(float *)(param_2 + 0xab4) = *(float *)(param_2 + 0x30) + DAT_0017ef28;
        *(undefined1 *)(param_2 + 0xa10) = 2;
      }
      if ((*(uint *)(DAT_0017ef2c + param_3) & 0x1f) == 0) {
        FUN_00375bcc(param_2,DAT_0017ef30);
      }
    }
    break;
  case 0xe:
    goto switchD_0017ddac_caseD_e;
  case 0xf:
    FUN_0035b2d0(DAT_0017eb3c,DAT_0017eb18,param_2,param_3,0);
    if (((*(uint *)(DAT_0017ef2c + param_3) & 0x1f) == 0) && (*(uint *)(param_2 + 0xa94) < 0x96)) {
      FUN_00375bcc(param_2,DAT_0017ef30);
    }
    FUN_003731e0(param_2 + 0x1a4);
    FUN_00373500(*(float *)(param_2 + 0x2c) + DAT_0017ef34,DAT_0017eb40,DAT_0017ef28,param_2 + 0xab0
                );
    if (0x4a < *(uint *)(param_2 + 0xa94)) {
      if (*(uint *)(param_2 + 0xa94) == 0x4b) {
        FUN_00374a58(DAT_0017ef38,param_2 + 0x1a4,0);
        uVar14 = FUN_0036ae14(param_2 + 0x1a4,0);
        uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_2 + 0x88c) = uVar14;
        *(undefined1 *)(param_2 + 0xa10) = 3;
      }
      fVar19 = DAT_0017ef3c;
      iVar15 = FUN_003736fc(*(undefined4 *)(param_2 + 0x88c),DAT_0017ef3c,param_2 + 0x1a4);
      if (iVar15 != 0) {
        FUN_00370350(DAT_0017ef38,param_2 + 0x1a4,6);
        *(undefined4 *)(param_2 + 0x88c) = DAT_0017ef40;
      }
      if (0x69 < *(uint *)(param_2 + 0xa94)) {
        FUN_00373500(DAT_0017ef48,fVar19,DAT_0017ef44,param_2 + 0x8ac);
      }
    }
    if (*(int *)(param_2 + 0xa94) != 0xd2) break;
    *(undefined2 *)(param_2 + 0xa98) = 0x10;
    *(undefined4 *)(param_2 + 0xa94) = 0;
    FUN_00374a58(DAT_0017ef38,param_2 + 0x1a4,4);
    uVar17 = FUN_0036ae14(param_2 + 0x1a4,4);
    uVar14 = DAT_0017ef4c;
    uVar17 = VectorSignedToFloat(uVar17,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x88c) = uVar17;
    *(undefined1 *)(param_2 + 0xa35) = 0x37;
    *(float *)(param_3 + 0x3258) = DAT_0017ef3c;
    FUN_00375bcc(param_2,uVar14);
  case 0x10:
    fVar19 = DAT_0017ef54;
    uVar14 = DAT_0017ef50;
    *(undefined4 *)(param_3 + 0x19c) = DAT_0017ef50;
    FUN_0035b2d0(fVar19,DAT_0017eb18,param_2,param_3,2);
    if (*(uint *)(param_2 + 0xa94) < 0x26) {
      *(undefined1 *)(param_2 + 0xa35) = 0x37;
    }
    else {
      *(undefined1 *)(param_2 + 0xa35) = 6;
      if (DAT_0017ef58 < *(int *)(param_2 + 0x88c)) {
        FUN_00373500(DAT_0017ef20,DAT_0017ef3c,DAT_0017eaf8,param_2 + 0xa08);
      }
      else {
        FUN_00373500(uVar14,DAT_0017ef3c,DAT_0017ef5c,param_2 + 0xa08);
      }
    }
    uVar17 = DAT_0017ef38;
    uVar14 = DAT_0017eb24;
    *(undefined4 *)(param_2 + 0x8ac) = DAT_0017ef38;
    *(undefined4 *)(param_2 + 0x8b0) = uVar14;
    FUN_003731e0(param_2 + 0x1a4);
    iVar15 = FUN_003736fc(*(undefined4 *)(param_2 + 0x88c),DAT_0017ef3c,param_2 + 0x1a4);
    if (iVar15 != 0) {
      FUN_00374a58(uVar17,param_2 + 0x1a4,2);
      *(undefined4 *)(param_2 + 0x88c) = DAT_0017ef40;
    }
    FUN_00373500((*(float *)(param_2 + 0x28) + DAT_0017ef0c) - fVar19,uVar14,DAT_0017ef60,
                 param_2 + 0xaa0);
    FUN_00373500(((*(float *)(param_2 + 0x2c) + DAT_0017ef18) - DAT_0017ef18) - DAT_0017ef64,uVar14,
                 DAT_0017eb3c,param_2 + 0xaa4);
    FUN_00373500(*(float *)(param_2 + 0x2c) + DAT_0017ef68,uVar14,DAT_0017ef6c,param_2 + 0xab0);
    if (*(int *)(param_2 + 0xa94) == 0x30) {
      FUN_00375bcc(param_2,DAT_0017ef70);
      FUN_00375bcc(param_2,DAT_0017ef74);
    }
    bVar1 = *(uint *)(param_2 + 0xa94) < 0x4c;
    if ((!bVar1) && (0x59 < *(uint *)(param_2 + 0xa94))) {
      iVar15 = FUN_0036c5bc(param_3,0);
      uVar14 = *(undefined4 *)(param_2 + 0xaa4);
      uVar16 = *(undefined4 *)(param_2 + 0xaa8);
      *(undefined4 *)(iVar15 + 0x8c) = *(undefined4 *)(param_2 + 0xaa0);
      *(undefined4 *)(iVar15 + 0x90) = uVar14;
      *(undefined4 *)(iVar15 + 0x94) = uVar16;
      uVar14 = *(undefined4 *)(param_2 + 0xaa4);
      uVar16 = *(undefined4 *)(param_2 + 0xaa8);
      *(undefined4 *)(iVar15 + 0xa4) = *(undefined4 *)(param_2 + 0xaa0);
      *(undefined4 *)(iVar15 + 0xa8) = uVar14;
      *(undefined4 *)(iVar15 + 0xac) = uVar16;
      uVar14 = *(undefined4 *)(param_2 + 0xab0);
      uVar16 = *(undefined4 *)(param_2 + 0xab4);
      *(undefined4 *)(iVar15 + 0x80) = *(undefined4 *)(param_2 + 0xaac);
      *(undefined4 *)(iVar15 + 0x84) = uVar14;
      *(undefined4 *)(iVar15 + 0x88) = uVar16;
      *(undefined2 *)(param_2 + 0xa98) = 0x11;
      *(undefined4 *)(param_2 + 0xa94) = 0;
      *(undefined1 *)(param_2 + 0xa33) = 2;
      uVar14 = *(undefined4 *)(param_2 + 0x2b0);
      uVar16 = ObjectBankArchive_00358ef8(uVar14,0);
      FUN_00353e78(uVar14,param_3,param_2 + 0x228,uVar16,*(undefined4 *)(param_2 + 0x178),0xffffffff
                   ,0,0,0);
      FUN_0034e994(param_2 + 0x524,*(undefined4 *)(param_2 + 0x250),*(undefined4 *)(param_2 + 0x2b0)
                   ,3,0xffffffff,0xffffffff);
      FUN_00374a58(uVar17,param_2 + 0x228,0x19);
      FUN_003731e0(param_2 + 0x228);
      *(undefined4 *)(param_2 + 0x8b0) = DAT_0017ef5c;
      FUN_0036e980(param_3,param_2,0x54);
      *(undefined1 *)(param_2 + 0xa10) = 3;
    }
    break;
  case 0x11:
    FUN_0035b2d0(DAT_0017f454,DAT_0017f450,param_2,param_3,0);
    *(undefined1 *)(param_2 + 0xa35) = 6;
    FUN_003731e0(param_2 + 0x228);
    fVar19 = DAT_0017ef68;
    *(float *)(param_2 + 0xaa0) = *(float *)(iVar15 + 0x28) - DAT_0017ef68;
    fVar4 = DAT_0017ef64;
    *(float *)(param_2 + 0xaa4) = *(float *)(iVar15 + 0x2c) + fVar19;
    fVar19 = DAT_0017ef18;
    *(float *)(param_2 + 0xaa8) = *(float *)(iVar15 + 0x30) + fVar3;
    *(undefined4 *)(param_2 + 0xaac) = *(undefined4 *)(iVar15 + 0x28);
    *(float *)(param_2 + 0xab0) = (*(float *)(iVar15 + 0x2c) + fVar4) - DAT_0017f458;
    *(undefined4 *)(param_2 + 0xab4) = *(undefined4 *)(iVar15 + 0x30);
    uVar14 = DAT_0017ef38;
    if (*(int *)(param_2 + 0xa94) == 0x26) {
      *(undefined2 *)(param_2 + 0xa98) = 0x12;
      *(undefined4 *)(param_2 + 0xa94) = 0;
      FUN_00374a58(uVar14,param_2 + 0x228,0x19);
      *(undefined4 *)(param_2 + 0x268) = uVar14;
      *(float *)(param_2 + 0xaa0) =
           ((*(float *)(param_2 + 0x28) + DAT_0017f45c) - DAT_0017f460) - fVar20;
      *(float *)(param_2 + 0xaa4) = *(float *)(param_2 + 0x2c);
      *(undefined4 *)(param_2 + 0xaa8) = *(undefined4 *)(param_2 + 0x30);
      *(float *)(param_2 + 0xaac) = *(float *)(param_2 + 0x28) + fVar20;
      *(float *)(param_2 + 0xab0) = *(float *)(param_2 + 0x2c) + fVar19;
      *(undefined4 *)(param_2 + 0xab4) = *(undefined4 *)(param_2 + 0x30);
      *(undefined2 *)(param_2 + 0x36) = 0x4000;
    }
    break;
  case 0x12:
    FUN_0035b2d0(DAT_0017ef68,DAT_0017f450,param_2,param_3,3);
    *(undefined1 *)(param_2 + 0xa35) = 6;
    if (*(int *)(param_2 + 0xa94) == 0x2d) {
      FUN_0036ec40(0,DAT_0017f464);
    }
    uVar14 = DAT_0017f468;
    fVar19 = DAT_0017ef3c;
    FUN_00373500(DAT_0017ef50,DAT_0017ef3c,DAT_0017f468,param_2 + 0xa08);
    FUN_00373500((*(float *)(param_2 + 0x28) + DAT_0017f45c) - DAT_0017f460,uVar14,fVar19,
                 param_2 + 0xaa0);
    FUN_00373500(*(undefined4 *)(param_2 + 0x28),uVar14,fVar19,param_2 + 0xaac);
    FUN_00373500(fVar19,uVar14,DAT_0017f46c,param_2 + 0x924);
    if (*(int *)(param_2 + 0xa94) == 0x62) {
      *(undefined2 *)(param_2 + 0xa98) = 0x13;
      *(undefined4 *)(param_2 + 0xa94) = 0;
    }
    break;
  case 0x13:
    FUN_0035b2d0(DAT_0017ef68,DAT_0017f450,param_2,param_3,3);
    *(undefined1 *)(param_2 + 0xa35) = 6;
    fVar19 = DAT_0017ef3c;
    *(float *)(param_2 + 0xa90) = *(float *)(param_2 + 0xa90) + DAT_0017f470;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + *(float *)(param_2 + 100);
    *(float *)(param_2 + 100) = *(float *)(param_2 + 100) - fVar19;
    if (*(int *)(param_2 + 0xa94) == 0xf) {
      *(undefined2 *)(param_2 + 0xa98) = 0x14;
      *(undefined4 *)(param_2 + 0xa94) = 0;
      *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) + DAT_0017f474;
      *(undefined4 *)(param_2 + 0x2c) = DAT_0017f478;
      *(undefined4 *)(param_2 + 0xa90) = DAT_0017ef38;
      FUN_0036e980(param_3,param_2,0x53);
      *(float *)(param_2 + 0xa08) = DAT_0017ef28;
      *(float *)(param_2 + 0x924) = fVar19;
    }
    break;
  case 0x14:
    *(undefined1 *)(param_2 + 0xa35) = 6;
    FUN_003731e0(param_2 + 0x228);
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + *(float *)(param_2 + 100);
    *(float *)(param_2 + 100) = *(float *)(param_2 + 100) - DAT_0017ef3c;
    *(float *)(iVar15 + 0x28) = DAT_0017f474;
    *(undefined4 *)(iVar15 + 0x2c) = DAT_0017f47c;
    *(undefined4 *)(iVar15 + 0x30) = DAT_0017f480;
    *(undefined2 *)(iVar15 + 0xbe) = 0xc000;
    fVar3 = DAT_0017f488;
    uVar14 = DAT_0017f484;
    fVar19 = DAT_0017ef68;
    *(undefined4 *)(param_2 + 0xaa0) = DAT_0017f484;
    iVar13 = DAT_0017f494;
    fVar20 = DAT_0017f458;
    *(float *)(param_2 + 0xaa4) = (*(float *)(iVar15 + 0x2c) + fVar19) - DAT_0017f458;
    fVar4 = DAT_0017f48c;
    fVar19 = DAT_0017f454;
    *(float *)(param_2 + 0xaa8) = (*(float *)(iVar15 + 0x30) - DAT_0017f454) + fVar3;
    *(undefined4 *)(param_2 + 0xaac) = *(undefined4 *)(iVar15 + 0x28);
    *(float *)(param_2 + 0xab0) = ((*(float *)(iVar15 + 0x2c) + fVar4) - fVar19) + fVar20;
    *(undefined4 *)(param_2 + 0xab4) = *(undefined4 *)(iVar15 + 0x30);
    *(undefined4 *)(param_2 + 0xab8) = DAT_0017f490;
    if (*(int *)(param_2 + 0x2c) <= iVar13) {
      *(undefined4 *)(param_2 + 0x2c) = DAT_0017f498;
      *(undefined4 *)(param_2 + 100) = DAT_0017f49c;
      *(undefined2 *)(param_2 + 0xa98) = 0x15;
      *(undefined4 *)(param_2 + 0xa94) = 0;
      *(undefined4 *)(param_2 + 0xb1c) = uVar14;
      FUN_00374a58(param_2 + 0x228,0x19);
      uVar17 = DAT_0017f4a4;
      uVar14 = DAT_0017f4a0;
      FUN_0036f00c(DAT_0017f4a4,DAT_0017f4a0,param_3,param_2,param_2 + 0x8cc,3,500,10,1);
      FUN_0036f00c(uVar17,uVar14,param_3,param_2,param_2 + 0x8d8,3,500,10,1);
      FUN_00375bcc(param_2,DAT_0017f8a0);
      FUN_0036fca8(param_2,param_3,2,10);
    }
    break;
  case 0x15:
    FUN_0035b2d0(DAT_0017f8a4,DAT_0017f450,param_2,param_3,0);
    *(undefined1 *)(param_2 + 0xa35) = 6;
    FUN_003731e0(param_2 + 0x228);
    fVar19 = (float)FUN_00338f60((int)(short)(*(int *)(DAT_0017ef2c + param_3) << 0xf));
    uVar14 = DAT_0017f8a8;
    *(float *)(param_2 + 0xb18) = fVar19 * *(float *)(param_2 + 0xb1c);
    FUN_0036fc20(DAT_0017f8ac,uVar14,param_2 + 0xb1c);
    uVar14 = DAT_0017f484;
    if (*(int *)(param_2 + 0xa94) != 0x2d) break;
    *(undefined2 *)(param_2 + 0xa98) = 0x16;
    *(undefined4 *)(param_2 + 0xa08) = uVar14;
  case 0x16:
    FUN_0035b2d0(DAT_0017f48c,DAT_0017f8b0,param_2,param_3,2);
    uVar17 = DAT_0017f49c;
    uVar14 = DAT_0017f498;
    if (*(uint *)(param_2 + 0xa94) < 0x5a) {
      *(undefined1 *)(param_2 + 0xa35) = 7;
    }
    *(undefined4 *)(param_2 + 0xab8) = uVar17;
    *(undefined4 *)(param_2 + 0x2c) = uVar14;
    FUN_003731e0(param_2 + 0x228);
    uVar14 = DAT_0017f8ac;
    FUN_0036fc20(DAT_0017f8ac,DAT_0017f468,param_2 + 0xa08);
    uVar9 = *(uint *)(param_2 + 0xa94);
    if (uVar9 < 0x4c) {
LAB_0017f5f8:
      if (uVar9 == 0x78) {
        FUN_00354248(uVar17,param_3,param_3 + 0x224c,*(undefined4 *)(param_2 + 0x884),200,0xb4,0x100
                     ,0x40);
      }
    }
    else {
      FUN_00373500(uVar14,uVar14,DAT_0017f8b4,param_2 + 0x920);
      uVar9 = *(uint *)(param_2 + 0xa94);
      if (uVar9 != 0x5a) goto LAB_0017f5f8;
      *(undefined1 *)(param_2 + 0xa32) = 2;
    }
    fVar3 = DAT_0017f488;
    fVar20 = DAT_0017f460;
    fVar19 = DAT_0017f45c;
    *(uint *)(DAT_0017f8b8 + 0x3d0) = *(uint *)(DAT_0017f8b8 + 0x3d0) | 2;
    fVar5 = DAT_0017f8c0;
    fVar4 = DAT_0017f8bc;
    *(float *)(param_2 + 0xaa0) = ((*(float *)(param_2 + 0x28) + fVar19) - fVar20) + fVar3;
    *(undefined4 *)(param_2 + 0xaa4) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0xaa8) = *(undefined4 *)(param_2 + 0x30);
    *(float *)(param_2 + 0xaac) = *(float *)(param_2 + 0x28);
    *(float *)(param_2 + 0xab0) = (*(float *)(param_2 + 0x8b8) + fVar4) - fVar5;
    *(undefined4 *)(param_2 + 0xab4) = *(undefined4 *)(param_2 + 0x30);
    iVar15 = *(int *)(param_2 + 0xa94);
    if (iVar15 - 0xf3U < 0x12) {
      *(undefined1 *)(param_2 + 0xa0e) = 2;
    }
    if (iVar15 - 0x116U < 0x11) {
      *(undefined1 *)(param_2 + 0xa0e) = 1;
    }
    if (iVar15 == 0x12d) {
      *(undefined1 *)(DAT_0017f8c4 + 3) = 0;
    }
    uVar9 = iVar15 - 0x12d;
    if (uVar9 < 0x16) {
      uVar9 = 2;
      *(undefined1 *)(param_2 + 0xa0e) = 2;
    }
    if (iVar15 != 0xf9) {
      uVar9 = iVar15 - 0x100;
    }
    if ((iVar15 == 0xf9 || uVar9 == 0x1f) || iVar15 == 0x140) {
      FUN_0037547c(DAT_0017f8d0,0,4,DAT_0017f8cc,DAT_0017f8cc,DAT_0017f8c8);
      FUN_0037547c(DAT_0017f8d4,0,4,DAT_0017f8cc,DAT_0017f8cc,DAT_0017f8c8);
    }
    if (*(int *)(param_2 + 0xa94) == 0x143) {
      *(undefined4 *)(param_2 + 0x920) = uVar17;
      *(undefined2 *)(param_2 + 0xa98) = 0x17;
      FUN_0036e980(param_3,param_2,0x55);
    }
    break;
  case 0x17:
    FUN_0035b2d0(DAT_0017f8d8,DAT_0017f450,param_2,param_3,0);
    FUN_003731e0(param_2 + 0x228);
    if (*(int *)(param_2 + 0xa94) - 0x14eU < 0xe) {
      *(undefined1 *)(param_2 + 0xa0e) = 2;
    }
    if (*(int *)(param_2 + 0xa94) == 0x14d) {
      FUN_0037547c(DAT_0017f8d0,0,4,DAT_0017f8cc,DAT_0017f8cc,DAT_0017f8c8);
      FUN_0037547c(DAT_0017f8d4,0,4,DAT_0017f8cc,DAT_0017f8cc,DAT_0017f8c8);
    }
    fVar19 = DAT_0017f8c0;
    *(float *)(param_2 + 0xaa0) = (*(float *)(iVar15 + 0x28) - DAT_0017f8c0) + DAT_0017f8dc;
    fVar20 = DAT_0017f8e0;
    *(float *)(param_2 + 0xaa4) = *(float *)(iVar15 + 0x2c) + fVar19;
    fVar19 = DAT_0017f454;
    *(float *)(param_2 + 0xaa8) = (*(float *)(iVar15 + 0x30) + DAT_0017f454) - fVar20;
    fVar20 = DAT_0017f48c;
    *(undefined4 *)(param_2 + 0xaac) = *(undefined4 *)(iVar15 + 0x28);
    *(float *)(param_2 + 0xab0) = ((*(float *)(iVar15 + 0x2c) + fVar20) - fVar19) - DAT_0017f8e4;
    *(undefined4 *)(param_2 + 0xab4) = *(undefined4 *)(iVar15 + 0x30);
    if (*(int *)(param_2 + 0xa94) == 0x156) {
      FUN_0037547c(DAT_0017f8e8,0,4,DAT_0017f8cc,DAT_0017f8cc,DAT_0017f8c8);
      FUN_0036e980(param_3,param_2,0x56);
    }
    if (*(uint *)(param_2 + 0xa94) < 0x158) break;
    *(undefined1 *)(param_3 + 0x3261) = 1;
    *(undefined1 *)(param_3 + 0x3264) = 0xff;
    *(undefined1 *)(param_3 + 0x3263) = 0xff;
    *(undefined1 *)(param_3 + 0x3262) = 0xff;
    *(undefined1 *)(param_3 + 0x3265) = 100;
    if (*(int *)(param_2 + 0xa94) != 0x15f) break;
    *(undefined1 *)(param_3 + 0x3261) = 0;
    *(undefined2 *)(param_2 + 0xa98) = 0x18;
    *(undefined4 *)(param_2 + 0xa94) = 0;
    puVar10 = (undefined4 *)FUN_0036f57c(iVar15,0x10);
    uVar17 = DAT_0017fc60;
    fVar19 = DAT_0017fc54;
    uVar14 = *puVar10;
    uVar16 = puVar10[2];
    fVar20 = (float)puVar10[1] + DAT_0017fc50;
    puVar11 = *(undefined1 **)(DAT_0017eb34 + param_3);
    *puVar11 = 1;
    *(undefined4 *)(puVar11 + 4) = uVar14;
    *(float *)(puVar11 + 8) = fVar20;
    *(undefined4 *)(puVar11 + 0xc) = uVar16;
    *(float *)(puVar11 + 0x10) = fVar19;
    *(undefined4 *)(puVar11 + 0x14) = DAT_0017fc58;
    uVar14 = DAT_0017fc5c;
    *(undefined4 *)(puVar11 + 0x18) = DAT_0017fc5c;
    *(undefined4 *)(puVar11 + 0x1c) = uVar14;
    *(undefined4 *)(puVar11 + 0x20) = uVar17;
    *(undefined4 *)(puVar11 + 0x24) = uVar14;
    *(undefined2 *)(puVar11 + 0x2e) = 0;
    puVar11[1] = 0;
    *(undefined4 *)(param_3 + 0x3258) = uVar14;
    *(undefined1 *)(param_3 + 0x3236) = 0;
    *(undefined1 *)(param_2 + 0xa35) = 0;
  case 0x18:
    FUN_0035b2d0(DAT_0017fc68,DAT_0017fc64,param_2,param_3,4);
    FUN_003731e0(param_2 + 0x228);
    fVar20 = DAT_0017fc70;
    fVar19 = DAT_0017fc6c;
    iVar15 = *(int *)(DAT_0017eb34 + param_3);
    uVar14 = *(undefined4 *)(iVar15 + 8);
    uVar17 = *(undefined4 *)(iVar15 + 0xc);
    *(undefined4 *)(param_2 + 0xaac) = *(undefined4 *)(iVar15 + 4);
    *(undefined4 *)(param_2 + 0xab0) = uVar14;
    *(undefined4 *)(param_2 + 0xab4) = uVar17;
    *(float *)(param_2 + 0xaa0) = *(float *)(iVar15 + 4) + fVar19;
    *(float *)(param_2 + 0xaa4) = *(float *)(iVar15 + 8) - fVar20;
    *(float *)(param_2 + 0xaa8) = *(float *)(iVar15 + 0xc) + fVar19;
    if ((*(uint *)(param_2 + 0xa94) & 5) == 0) {
      FUN_0037547c(DAT_0017fc74,0,4,DAT_0017f8cc,DAT_0017f8cc,DAT_0017f8c8);
    }
    if (*(int *)(param_2 + 0xa94) == 0x26) {
      FUN_0036e980(param_3,param_2,0x57);
      *(undefined2 *)(param_2 + 0xa98) = 0x19;
      *(undefined4 *)(param_2 + 0xa94) = 0;
    }
    break;
  case 0x19:
    FUN_0035b2d0(DAT_0017fc78,DAT_0017fc64,param_2,param_3,0);
    FUN_003731e0(param_2 + 0x228);
    fVar5 = DAT_0017fc80;
    fVar19 = DAT_0017fc70;
    fVar3 = DAT_0017fc6c;
    fVar20 = DAT_0017f8c0;
    *(float *)(param_2 + 0xaa0) = (*(float *)(iVar15 + 0x28) - DAT_0017f8c0) + DAT_0017fc7c;
    *(float *)(param_2 + 0xaa4) = *(float *)(iVar15 + 0x2c) + fVar4;
    fVar4 = DAT_0017fc84;
    *(float *)(param_2 + 0xaa8) = *(float *)(iVar15 + 0x30) + fVar19;
    *(float *)(param_2 + 0xaac) = *(float *)(iVar15 + 0x28) - fVar4;
    fVar19 = DAT_0017f8bc;
    *(float *)(param_2 + 0xab0) = ((*(float *)(iVar15 + 0x2c) + fVar3) - fVar4) - DAT_0017fc50;
    *(float *)(param_2 + 0xab4) = (*(float *)(iVar15 + 0x30) - fVar20) - fVar5;
    fVar3 = DAT_0017fc8c;
    fVar20 = DAT_0017fc54;
    if (*(int *)(param_2 + 0xa94) != 0xf) break;
    iVar15 = *(int *)(DAT_0017fc88 + param_3);
    *(undefined2 *)(iVar15 + 0x2e) = 1;
    iVar13 = *(int *)(DAT_0017f8c4 + 0x30);
    *(float *)(iVar15 + 4) = *(float *)(iVar13 + 0x28) + fVar19;
    *(float *)(iVar15 + 8) = *(float *)(iVar13 + 0x2c) + fVar3;
    uVar14 = DAT_0017fc5c;
    *(float *)(iVar15 + 0xc) = *(float *)(iVar13 + 0x30) - fVar20;
    *(undefined4 *)(iVar15 + 0x18) = uVar14;
    *(undefined4 *)(iVar15 + 0x10) = uVar14;
    *(undefined4 *)(iVar15 + 0x14) = DAT_0017fc90;
    *(undefined2 *)(param_2 + 0xa98) = 0x1a;
    *(undefined4 *)(param_2 + 0xa94) = 0;
  case 0x1a:
    FUN_0035b2d0(DAT_0017f8c0,DAT_0017fc94,param_2,param_3,0);
    fVar20 = DAT_0017fc80;
    fVar19 = DAT_0017fc70;
    iVar15 = *(int *)(DAT_0017f8c4 + 0x30);
    *(float *)(param_2 + 0xaa0) = *(float *)(iVar15 + 0x28) + DAT_0017fc98;
    fVar3 = DAT_0017fc9c;
    *(float *)(param_2 + 0xaa4) = *(float *)(iVar15 + 0x2c) + fVar20;
    *(float *)(param_2 + 0xaa8) = *(float *)(iVar15 + 0x30) + fVar3;
    *(undefined4 *)(param_2 + 0xaac) = *(undefined4 *)(iVar15 + 0x28);
    fVar20 = DAT_0017fc84;
    *(float *)(param_2 + 0xab0) = *(float *)(iVar15 + 0x2c) + fVar19;
    *(float *)(param_2 + 0xab4) = *(float *)(iVar15 + 0x30) - fVar20;
    *(undefined4 *)(param_2 + 0xac0) = DAT_0017fca0;
    if (*(int *)(param_2 + 0xa94) == 0x14) {
      *(undefined1 *)(iVar15 + 0x10e8) = 6;
    }
    if (*(int *)(param_2 + 0xa94) == 0x4b) {
      *(undefined2 *)(param_2 + 0xa98) = 0x1b;
      *(undefined4 *)(param_2 + 0xa94) = 0;
    }
    break;
  case 0x1b:
    FUN_0035b2d0(DAT_0017fc54,DAT_00180070,param_2,param_3,0);
    *(undefined4 *)(param_2 + 0xac0) = DAT_0017fc5c;
    if (*(int *)(param_2 + 0xa94) == 6) {
      FUN_0036e980(param_3,param_2,0x58);
    }
    *(float *)(param_2 + 0xaa0) = *(float *)(iVar15 + 0x28) - DAT_0017fc84;
    fVar19 = DAT_0017fc64;
    *(float *)(param_2 + 0xaa4) = *(float *)(iVar15 + 0x2c) + DAT_0017fc64;
    *(undefined4 *)(param_2 + 0xaa8) = *(undefined4 *)(iVar15 + 0x30);
    *(undefined4 *)(param_2 + 0xaac) = *(undefined4 *)(iVar15 + 0x28);
    *(float *)(param_2 + 0xab0) = *(float *)(iVar15 + 0x2c) + fVar19;
    *(undefined4 *)(param_2 + 0xab4) = *(undefined4 *)(iVar15 + 0x30);
    iVar15 = DAT_0017f8c4;
    if (*(int *)(param_2 + 0xa94) == 0x27) {
      psVar12 = *(short **)(param_3 + 0x20d4);
      *(short **)(DAT_0017f8c4 + 0x34) = psVar12;
      while (psVar12 != (short *)0x0) {
        if (*psVar12 == 0x18) {
          *(float *)(param_2 + 0xaa0) = *(float *)(psVar12 + 0x14) - DAT_0017fc70;
          *(undefined4 *)(param_2 + 0xaa4) = *(undefined4 *)(psVar12 + 0x16);
          *(undefined4 *)(param_2 + 0xaa8) = *(undefined4 *)(psVar12 + 0x18);
          *(undefined4 *)(param_2 + 0xaac) = *(undefined4 *)(psVar12 + 0x14);
          *(undefined4 *)(param_2 + 0xab0) = *(undefined4 *)(psVar12 + 0x16);
          *(undefined4 *)(param_2 + 0xab4) = *(undefined4 *)(psVar12 + 0x18);
          break;
        }
        psVar12 = *(short **)(psVar12 + 0x98);
        *(short **)(iVar15 + 0x34) = psVar12;
      }
      *(undefined2 *)(param_2 + 0xa98) = 0x1c;
      *(undefined4 *)(param_2 + 0xa94) = 0;
    }
    break;
  case 0x1c:
    FUN_0035b2d0(DAT_0017fc80,DAT_00180074,param_2,param_3,0);
    if (*(int *)(param_2 + 0xa94) == 8) {
      FUN_00367c7c(param_3,DAT_00180078,0);
    }
    uVar14 = DAT_0018007c;
    fVar19 = DAT_0017fc64;
    iVar15 = DAT_0017f8c4;
    iVar13 = *(int *)(DAT_0017f8c4 + 0x34);
    if (iVar13 != 0) {
      *(float *)(param_2 + 0xaa0) = *(float *)(iVar13 + 0x28) - DAT_0017fc84;
      *(undefined4 *)(param_2 + 0xaa4) = *(undefined4 *)(iVar13 + 0x2c);
      *(undefined4 *)(param_2 + 0xaa8) = *(undefined4 *)(iVar13 + 0x30);
      FUN_00373500(*(undefined4 *)(iVar13 + 0x28),uVar14,fVar19,param_2 + 0xaac);
      FUN_00373500(*(undefined4 *)(*(int *)(iVar15 + 0x34) + 0x2c),uVar14,fVar19,param_2 + 0xab0);
      FUN_00373500(*(undefined4 *)(*(int *)(iVar15 + 0x34) + 0x30),uVar14,fVar19,param_2 + 0xab4);
      if ((0x3c < *(uint *)(param_2 + 0xa94)) &&
         (iVar15 = FUN_003769d8(param_3 + 0x28a0), uVar14 = DAT_0017fc5c, iVar15 == 0)) {
        *(undefined2 *)(param_2 + 0xa98) = 0x1d;
        *(undefined4 *)(param_2 + 0xa94) = 0;
        FUN_00374a58(uVar14,param_2 + 0x228,0x1a);
        uVar17 = FUN_0036ae14(param_2 + 0x228,0x1a);
        uVar17 = VectorSignedToFloat(uVar17,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_2 + 0x88c) = uVar17;
        uVar17 = DAT_00180080;
        *(undefined4 *)(param_2 + 0xc4) = uVar14;
        *(undefined4 *)(param_2 + 0x2c) = uVar17;
        *(undefined4 *)(param_2 + 0x70) = DAT_0017fc60;
        uVar14 = DAT_00180084;
        *(undefined1 *)(param_2 + 0xa31) = 1;
        *(undefined4 *)(param_2 + 0x920) = uVar14;
      }
    }
    break;
  case 0x1d:
    FUN_0035b2d0(DAT_00180088,DAT_0017fc64,param_2,param_3,4);
    FUN_003731e0(param_2 + 0x228);
    fVar20 = DAT_00180094;
    fVar19 = DAT_0017fc80;
    *(float *)(param_2 + 0xaa0) =
         (((*(float *)(param_2 + 0x28) + DAT_0018008c) - DAT_0017fc8c) + DAT_00180090) -
         DAT_00180094;
    *(undefined4 *)(param_2 + 0xaa4) = *(undefined4 *)(param_2 + 0x2c);
    *(float *)(param_2 + 0xaa8) = *(float *)(param_2 + 0x30) + fVar19;
    *(float *)(param_2 + 0xaac) = *(float *)(param_2 + 0x28);
    *(float *)(param_2 + 0xab0) = (*(float *)(param_2 + 0x8b8) + fVar20) - DAT_00180098;
    uVar17 = DAT_0018009c;
    *(float *)(param_2 + 0xab4) = *(float *)(param_2 + 0x30);
    *(undefined4 *)(iVar15 + 0x28) = uVar17;
    *(undefined4 *)(iVar15 + 0x30) = DAT_001800a0;
    *(undefined2 *)(iVar15 + 0xbe) = 0xc000;
    if (*(int *)(param_2 + 0xa94) == 0x4b) {
      FUN_00375bcc(param_2,DAT_0017f8d4);
    }
    iVar15 = FUN_003736fc(*(undefined4 *)(param_2 + 0x88c),DAT_00180084,param_2 + 0x228);
    if (iVar15 != 0) {
      FUN_0035b2d0(uVar14,fVar4,param_2,param_3,0xffffffff);
      iVar15 = FUN_0036c5bc(param_3,0);
      uVar14 = *(undefined4 *)(param_2 + 0xaa4);
      uVar17 = *(undefined4 *)(param_2 + 0xaa8);
      *(undefined4 *)(iVar15 + 0x8c) = *(undefined4 *)(param_2 + 0xaa0);
      *(undefined4 *)(iVar15 + 0x90) = uVar14;
      *(undefined4 *)(iVar15 + 0x94) = uVar17;
      uVar14 = *(undefined4 *)(param_2 + 0xaa4);
      uVar17 = *(undefined4 *)(param_2 + 0xaa8);
      *(undefined4 *)(iVar15 + 0xa4) = *(undefined4 *)(param_2 + 0xaa0);
      *(undefined4 *)(iVar15 + 0xa8) = uVar14;
      *(undefined4 *)(iVar15 + 0xac) = uVar17;
      uVar14 = *(undefined4 *)(param_2 + 0xab0);
      uVar17 = *(undefined4 *)(param_2 + 0xab4);
      *(undefined4 *)(iVar15 + 0x80) = *(undefined4 *)(param_2 + 0xaac);
      *(undefined4 *)(iVar15 + 0x84) = uVar14;
      *(undefined4 *)(iVar15 + 0x88) = uVar17;
      FUN_0036e9b8(param_3,(int)*(short *)(param_2 + 0xa9a),0);
      *(undefined2 *)(param_2 + 0xa9a) = 0;
      FUN_00367374(param_3,param_3 + 0x2298);
      FUN_0036e980(param_3,param_2,7);
      *(undefined2 *)(param_2 + 0xa98) = 0;
      *(undefined1 *)(param_2 + 0xa33) = 1;
      FUN_0036fadc(param_2,param_3);
      *(undefined2 *)(param_2 + 0x89c) = 0x4b;
      iVar15 = DAT_0017f8c4;
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 1;
      *(undefined1 *)(*(int *)(iVar15 + 0x30) + 0x10e8) = 7;
    }
  }
  if ((DAT_00180130 < *(int *)(param_2 + 0xa08)) && (!bVar1)) {
    FUN_00375bcc(param_2,DAT_00180134);
  }
  if (*(short *)(param_2 + 0xa9a) != 0) {
    *(float *)(param_2 + 0xab0) = *(float *)(param_2 + 0xab0) + *(float *)(param_2 + 0xb18);
    FUN_0035b1cc(param_3,(int)*(short *)(param_2 + 0xa9a),param_2 + 0xaac,param_2 + 0xaa0,
                 param_2 + 0xab8);
  }
  return;
}

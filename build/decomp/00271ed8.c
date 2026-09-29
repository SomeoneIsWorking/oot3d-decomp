// OoT3D decomp @ 00271ed8  name=FUN_00271ed8  size=1768

void FUN_00271ed8(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 uVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;

  piVar7 = DAT_00272618;
  uVar6 = DAT_00272234;
  uVar13 = DAT_00272228;
  fVar19 = DAT_00272210;
  fVar5 = DAT_0027220c;
  fVar4 = DAT_00272208;
  uVar12 = DAT_00272204;
  fVar3 = DAT_00272200;
  fVar18 = DAT_002721fc;
  fVar17 = DAT_002721f8;
  puVar15 = (undefined4 *)(param_1 + 0xe4c);
  puVar16 = (undefined4 *)(param_1 + 0xe58);
  iVar14 = *(int *)(DAT_002721f4 + param_2);
  switch(*(undefined1 *)(param_1 + 0xe31)) {
  case 0:
    FUN_0035c528(DAT_00272214);
    iVar11 = FUN_0036c5bc(param_2,0xffffffff);
    uVar8 = FUN_00367d74(param_2);
    *(undefined1 *)(param_1 + 0xe30) = uVar8;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,*(undefined1 *)(param_1 + 0xe30),7);
    FUN_0036e980(param_2,param_1,5);
    fVar18 = DAT_00272220;
    fVar19 = DAT_00272218;
    uVar12 = *(undefined4 *)(iVar11 + 0x90);
    uVar13 = *(undefined4 *)(iVar11 + 0x94);
    *puVar15 = *(undefined4 *)(iVar11 + 0x8c);
    *(undefined4 *)(param_1 + 0xe50) = uVar12;
    *(undefined4 *)(param_1 + 0xe54) = uVar13;
    uVar12 = *(undefined4 *)(iVar11 + 0x84);
    uVar13 = *(undefined4 *)(iVar11 + 0x88);
    uVar8 = 1;
    *puVar16 = *(undefined4 *)(iVar11 + 0x80);
    *(undefined4 *)(param_1 + 0xe5c) = uVar12;
    *(undefined4 *)(param_1 + 0xe60) = uVar13;
    *(undefined4 *)(param_1 + 0xe40) = *(undefined4 *)(param_1 + 0x28);
    fVar17 = DAT_0027221c;
    *(float *)(param_1 + 0xe44) = *(float *)(param_1 + 0x2c) + fVar19;
    *(undefined4 *)(param_1 + 0xe48) = *(undefined4 *)(param_1 + 0x30);
    *(float *)(param_1 + 0xe34) =
         *(float *)(param_1 + 0xe40) * fVar17 + *(float *)(iVar14 + 0x28) * fVar18;
    *(undefined4 *)(param_1 + 0xe38) = *(undefined4 *)(param_1 + 0xe44);
    *(undefined4 *)(param_1 + 0xe3c) = *(undefined4 *)(param_1 + 0xe48);
    *(undefined4 *)(param_1 + 0xdd4) = DAT_00272224;
    break;
  case 1:
    FUN_0036e168(*(undefined4 *)(param_1 + 0xe34),DAT_00272228,*(undefined4 *)(param_1 + 0xe64),
                 DAT_002721f8,puVar15);
    FUN_0036e168(*(undefined4 *)(param_1 + 0xe38),uVar13,*(undefined4 *)(param_1 + 0xe64),fVar17,
                 param_1 + 0xe50);
    FUN_0036e168(*(undefined4 *)(param_1 + 0xe3c),uVar13,*(undefined4 *)(param_1 + 0xe64),fVar17,
                 param_1 + 0xe54);
    FUN_0036e168(*(undefined4 *)(param_1 + 0xe40),uVar13,*(undefined4 *)(param_1 + 0xe64),fVar17,
                 puVar16);
    FUN_0036e168(*(undefined4 *)(param_1 + 0xe44),uVar13,*(undefined4 *)(param_1 + 0xe64),fVar17,
                 param_1 + 0xe5c);
    FUN_0036e168(*(undefined4 *)(param_1 + 0xe48),uVar13,*(undefined4 *)(param_1 + 0xe64),fVar17,
                 param_1 + 0xe60);
    FUN_0036e168(DAT_00272230,uVar13,DAT_0027222c,fVar17,param_1 + 0xe64);
    fVar18 = *(float *)(param_1 + 0xdd4) - fVar18;
    *(float *)(param_1 + 0xdd4) = fVar18;
    if (fVar17 < fVar18) goto switchD_00271f34_default;
    uVar8 = 2;
    break;
  case 2:
    *(short *)(DAT_00272238 + param_1) = (short)DAT_00272234;
    FUN_00367c7c(param_2,uVar6,0);
    *(undefined4 *)(iVar14 + 0x28) = DAT_0027223c;
    uVar12 = DAT_00272240;
    *(float *)(iVar14 + 0x2c) = fVar17;
    *(undefined4 *)(iVar14 + 0x30) = uVar12;
    *(undefined2 *)(iVar14 + 0xbe) = 0x4000;
    *(undefined2 *)(DAT_00272244 + iVar14) = 0;
    FUN_0036e980(param_2,param_1,0x6b);
    *(undefined1 *)(param_1 + 0xe31) = 3;
    goto switchD_00271f34_default;
  case 3:
    FUN_00376340(DAT_00272204,DAT_00272200,DAT_00272200,param_2,param_1,4);
    FUN_00370734(param_1 + 0x1a4);
    FUN_0033292c(param_1);
    FUN_0037322c(fVar4,param_1);
    iVar11 = FUN_003769d8(param_2 + 0x28a0);
    if ((iVar11 != 3) || (*(char *)(param_1 + 0xdd3) == '\x03')) goto switchD_002721d0_caseD_5;
    cVar9 = *(char *)(param_1 + 0xdd2) + '\x01';
    *(char *)(param_1 + 0xdd2) = cVar9;
    switch(cVar9) {
    case '\x03':
      FUN_0036e980(param_2,param_1,5);
      *(float *)(param_1 + 0xe4c) = *(float *)(iVar14 + 0x28) + fVar4;
      *(float *)(param_1 + 0xe50) = *(float *)(iVar14 + 0x2c) + fVar4;
      fVar19 = DAT_002725e4;
      *(float *)(param_1 + 0xe54) = *(float *)(iVar14 + 0x30) + DAT_002725e4;
      *(undefined4 *)(param_1 + 0xe58) = *(undefined4 *)(iVar14 + 0x28);
      *(float *)(param_1 + 0xe5c) = *(float *)(iVar14 + 0x2c) + fVar4;
      *(float *)(param_1 + 0xe60) = *(float *)(iVar14 + 0x30) + fVar19;
      break;
    case '\x04':
      *(undefined4 *)(param_1 + 0xe4c) = DAT_002725e8;
      uVar12 = DAT_002725ec;
      *(float *)(param_1 + 0xe50) = fVar4;
      *(undefined4 *)(param_1 + 0xe54) = uVar12;
      *(undefined4 *)(param_1 + 0xe58) = DAT_002725f0;
      *(float *)(param_1 + 0xe5c) = fVar4;
      uVar12 = DAT_002725f4;
      goto LAB_002722f4;
    case '\t':
      *(undefined4 *)(param_1 + 0xe4c) = DAT_002725f8;
      *(undefined4 *)(param_1 + 0xe50) = DAT_002725fc;
      *(undefined4 *)(param_1 + 0xe54) = DAT_00272600;
      *(undefined4 *)(param_1 + 0xe58) = DAT_00272604;
      uVar12 = DAT_00272608;
      *(float *)(param_1 + 0xe5c) = fVar4;
LAB_002722f4:
      *(undefined4 *)(param_1 + 0xe60) = uVar12;
    }
switchD_002721d0_caseD_5:
    *(char *)(param_1 + 0xdd3) = (char)iVar11;
    iVar14 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar14 != 2) goto switchD_00271f34_default;
    uVar8 = 4;
    *(undefined4 *)(param_1 + 0xe4c) = DAT_0027260c;
    *(undefined4 *)(param_1 + 0xe50) = DAT_00272610;
    *(undefined4 *)(param_1 + 0xe54) = DAT_00272614;
    *(undefined4 *)(param_1 + 0xe58) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(param_1 + 0xe5c) = *(float *)(param_1 + 0x2c) + fVar4;
    *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_1 + 0x30);
    break;
  case 4:
    FUN_00376340(DAT_00272204,DAT_00272200,DAT_00272200,param_2,param_1,4);
    FUN_00370734(param_1 + 0x1a4);
    FUN_0033292c(param_1);
    FUN_0037322c(fVar4,param_1);
    iVar14 = DAT_0027261c;
    fVar18 = *(float *)(param_1 + 0xdd4) + fVar18;
    *(float *)(param_1 + 0xdd4) = fVar18;
    iVar11 = *DAT_00272618;
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + iVar11),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (fVar17 + fVar3) * fVar5 * fVar19;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar18 < fVar19) << 0x1f |
            (uint)(fVar18 == fVar19) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar18) || NAN(fVar19))) {
      *(undefined4 *)(param_1 + 0xe58) = *(undefined4 *)(param_1 + 0x28);
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x9da),(byte)(uVar1 >> 0x15) & 3)
      ;
      *(float *)(param_1 + 0xe5c) = *(float *)(param_1 + 0x2c) + fVar19 + fVar4;
      *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_1 + 0x30);
      goto switchD_00271f34_default;
    }
    FUN_00347ed4(DAT_00272620,param_1,DAT_00272624,0);
    FUN_00375c10(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18);
    uVar8 = 5;
    break;
  case 5:
    sVar10 = *(short *)(param_1 + 0xdd0) + 1;
    *(short *)(param_1 + 0xdd0) = sVar10;
    fVar17 = (float)VectorUnsignedToFloat
                              ((uint)(ushort)(*(short *)(*piVar7 + 0x1458) + 0x96),
                               (byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(*piVar7 + 0x1458) == -0x96) {
      fVar17 = fVar17 * fVar5 * fVar19 - fVar19;
    }
    else {
      fVar17 = fVar19 + fVar17 * fVar5 * fVar19;
    }
    fVar17 = (float)FUN_0032c66c((int)fVar17 & 0xffff,0,sVar10,8,0);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar17 * DAT_00272628;
    FUN_00376340(uVar12,fVar3,fVar3,param_2,param_1,4);
    FUN_00370734(param_1 + 0x1a4);
    FUN_0033292c(param_1);
    FUN_0037322c(fVar4,param_1);
    iVar14 = DAT_00272690;
    iVar11 = *DAT_00272618;
    fVar17 = (float)VectorUnsignedToFloat
                              ((uint)(ushort)(*(short *)(iVar11 + 0x145a) + 0x28),
                               (byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(iVar11 + 0x145a) == -0x28) {
      fVar17 = fVar17 * fVar5 * fVar19 - fVar19;
    }
    else {
      fVar17 = fVar19 + fVar17 * fVar5 * fVar19;
    }
    fVar18 = (float)VectorUnsignedToFloat
                              ((uint)(ushort)(*(short *)(iVar11 + 0x1458) + 0x96),
                               (byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(iVar11 + 0x1458) == -0x96) {
      fVar19 = fVar18 * fVar5 * fVar19 - fVar19;
    }
    else {
      fVar19 = fVar19 + fVar18 * fVar5 * fVar19;
    }
    if (((int)fVar19 + (int)fVar17 & 0xffffU) < (uint)*(ushort *)(param_1 + 0xdd0)) {
      FUN_0036e9b8(param_2,*(undefined1 *)(param_1 + 0xe30),0);
      *(undefined1 *)(param_1 + 0xe30) = 0;
      FUN_0036c5bc(param_2,0xffffffff);
      FUN_00367c48();
      FUN_00367bfc(param_2,0);
      FUN_0036e980(param_2,param_1,7);
      FUN_00374428(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0xe58) = *(undefined4 *)(param_1 + 0x28);
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + iVar11),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xe5c) = *(float *)(param_1 + 0x2c) + fVar19 + fVar4;
      *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_1 + 0x30);
    }
  default:
    goto switchD_00271f34_default;
  }
  *(undefined1 *)(param_1 + 0xe31) = uVar8;
switchD_00271f34_default:
  if (*(char *)(param_1 + 0xe30) == '\0') {
    return;
  }
  FUN_00367b14(param_2,*(char *)(param_1 + 0xe30),puVar16,puVar15);
  return;
}

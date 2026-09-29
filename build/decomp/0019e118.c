// OoT3D decomp @ 0019e118  name=FUN_0019e118  size=2920

void FUN_0019e118(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;

  if (((*DAT_0019e55c & 1) == 0) && (iVar10 = FUN_003679b4(DAT_0019e55c), iVar10 != 0)) {
    FUN_0036788c(DAT_0019e560);
  }
  local_58 = DAT_0019e56c;
  local_78 = DAT_0019e56c;
  iVar14 = *(int *)(DAT_0019e570 + param_2);
  iVar10 = FUN_0036c5bc(param_2,0);
  local_5c = param_2 + 0x2298;
  if (*(short *)(param_1 + 0x766) != 0) {
    *(short *)(param_1 + 0x766) = *(short *)(param_1 + 0x766) + -1;
  }
  iVar6 = DAT_0019e5a0;
  uVar13 = DAT_0019e574;
  if (*(short *)(param_1 + 0x768) != 0) {
    *(short *)(param_1 + 0x768) = *(short *)(param_1 + 0x768) + -1;
  }
  uVar15 = DAT_0019e57c;
  fVar18 = DAT_0019e578;
  if (*(short *)(param_1 + 0x76a) != 0) {
    *(short *)(param_1 + 0x76a) = *(short *)(param_1 + 0x76a) + -1;
  }
  uVar7 = DAT_0019e5a8;
  uVar5 = DAT_0019e59c;
  fVar17 = DAT_0019e598;
  uVar4 = DAT_0019e594;
  uVar3 = DAT_0019e590;
  fVar2 = DAT_0019e58c;
  fVar16 = DAT_0019e588;
  uVar1 = DAT_0019e584;
  fVar20 = DAT_0019e580;
  local_60 = param_1 + 0x9fc;
  local_64 = param_1 + 0x7d4;
  local_68 = param_1 + 0x7dc;
  local_6c = param_1 + 0xa08;
  local_70 = (undefined4 *)(param_1 + 0x9f8);
  switch(*(undefined2 *)(param_1 + 0x76c)) {
  case 0:
    if (DAT_0019e5a4 < *(uint *)(iVar14 + 0x2c)) {
      *(undefined2 *)(param_1 + 0x76c) = 1;
      *(undefined4 *)(param_1 + 0x28) = uVar7;
      *(undefined4 *)(param_1 + 0x30) = DAT_0019e5ac;
      *(undefined2 *)(param_1 + 0x770) = 1;
    }
    iVar10 = *(int *)(param_1 + 0x1cc);
    if ((*(ushort *)(iVar6 + 0xfa) & 2) != 0) {
      *(undefined1 *)(iVar10 + 0xad) = 1;
      goto switchD_0019e248_default;
    }
    uVar12 = 0;
    break;
  case 1:
    FUN_00367494(param_2,local_5c);
    FUN_0036e980(param_2,param_1,1);
    FUN_002b6b9c(param_2);
    uVar8 = FUN_00367d74(param_2);
    *(undefined2 *)(param_1 + 0x784) = uVar8;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x784),7);
    *(undefined2 *)(param_1 + 0x76c) = 2;
    *(undefined2 *)(param_1 + 0x766) = 0x5a;
    uVar1 = DAT_0019e5b0;
    *(undefined2 *)(param_1 + 0x768) = 0xf0;
    *(undefined4 *)(iVar14 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x9fc) = DAT_0019e5b4;
    FUN_00345a08(DAT_0019e5b8,uVar3,param_1,param_2,0);
  case 2:
    if (0 < *(short *)(param_1 + 0x766)) {
      FUN_00345a08(DAT_0019e5bc,uVar3,param_1,param_2,10);
    }
    if ((-1 < *(int *)(local_78 + 0x3ec)) && (*(int *)(local_78 + 1000) == 8)) {
      FUN_0040a084(local_78);
    }
    if ((DAT_0019e5c0 < *(uint *)(iVar14 + 0x2c)) && (*(char *)(param_1 + 0x2068) == '\0')) {
      FUN_0035af04(iVar14,1);
      FUN_0036e980(param_2,param_1,0x67);
      *(undefined1 *)(param_1 + 0x2068) = 1;
    }
    fVar20 = DAT_0019e5d0;
    uVar4 = DAT_0019e5cc;
    uVar1 = DAT_0019e5c4;
    uVar8 = (undefined2)DAT_0019e5c8;
    if (0xc3 < *(short *)(param_1 + 0x768)) {
      *(undefined4 *)(iVar14 + 0x28) = DAT_0019e5cc;
      *(undefined4 *)(iVar14 + 0x30) = uVar1;
      *(float *)(iVar14 + 0x6c) = fVar17;
      *(undefined2 *)(iVar14 + 0x36) = uVar8;
      *(undefined2 *)(iVar14 + 0xbe) = uVar8;
      *(undefined4 *)(param_1 + 0x9f8) = uVar4;
      *(float *)(param_1 + 0xa00) = *(float *)(iVar14 + 0x30) - fVar20;
      *(undefined4 *)(param_1 + 0xa04) = *(undefined4 *)(iVar14 + 0x28);
      *(float *)(param_1 + 0xa08) = *(float *)(iVar14 + 0x2c) + fVar16;
      *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(iVar14 + 0x30);
    }
    if (*(short *)(param_1 + 0x768) == 0xa5) {
      FUN_0036e980(param_2,param_1,9);
    }
    if (*(short *)(param_1 + 0x768) == 8) {
      FUN_0036e980(param_2,param_1,0xc);
    }
    if (8 < *(short *)(param_1 + 0x768)) {
      *(undefined2 *)(iVar14 + 0xbe) = uVar8;
    }
    if (*(short *)(param_1 + 0x768) < 0x5a) {
      uVar9 = 1;
    }
    else {
      uVar9 = 2;
    }
    *(undefined2 *)(param_1 + 0x78c) = uVar9;
    FUN_00345590(param_1,param_2);
    if (*(short *)(param_1 + 0x766) == 1) {
      FUN_003655d0(0,1);
    }
    if (*(short *)(param_1 + 0x766) == 0) {
      FUN_00345a08(DAT_0019e5d4,uVar3,param_1,param_2,5);
      FUN_0036e168(*(float *)(param_1 + 0x9bc) + DAT_0019e5d8,uVar13,
                   *(float *)(param_1 + 0x7d4) * fVar16,fVar17,local_70);
      FUN_0036e168(*(undefined4 *)(param_1 + 0x9c0),uVar13,*(float *)(param_1 + 0x7d4) * fVar16,
                   fVar17,local_60);
      FUN_0036e168(*(float *)(param_1 + 0x9c4) + fVar18,uVar13,*(float *)(param_1 + 0x7d4) * fVar16,
                   fVar17,param_1 + 0xa00);
      FUN_0036e168(uVar5,uVar5,uVar15,fVar17,local_64);
    }
    else {
      *(undefined4 *)(param_1 + 0xa04) = *(undefined4 *)(iVar14 + 0x28);
      *(float *)(param_1 + 0xa08) = *(float *)(iVar14 + 0x2c) + fVar16;
      *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(iVar14 + 0x30);
    }
    if ((*(ushort *)(iVar6 + 0xfa) & 2) == 0) {
      if (*(short *)(param_1 + 0x768) == 0) {
        *(undefined2 *)(param_1 + 0x76c) = 3;
        *(float *)(param_1 + 0x7d4) = fVar17;
        *(undefined2 *)(param_1 + 0x76e) = 0x14;
      }
    }
    else if (*(short *)(param_1 + 0x768) == 0x96) {
      *(undefined4 *)(param_1 + 0x28) = DAT_0019e9bc;
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      *(undefined2 *)(param_1 + 0x36) = uVar8;
      *(undefined2 *)(param_1 + 0x772) = 0;
      *(undefined2 *)(param_1 + 0x770) = 2;
      *(undefined2 *)(param_1 + 0x76c) = 4;
      *(float *)(param_1 + 0x7d4) = fVar17;
      *(undefined2 *)(param_1 + 0x766) = 0x2d;
      *(undefined2 *)(param_1 + 0x768) = 0xe1;
      uVar13 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_0019e9c0 + 0x10));
      uVar13 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(uVar5,fVar17,uVar13,fVar17,param_1 + 0x1a4,DAT_0019e9c4,2);
      FUN_00370734(param_1 + 0x1a4);
    }
    goto switchD_0019e248_default;
  case 3:
    FUN_00345590(param_1,param_2);
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x76e),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)FUN_003727f0(fVar19 * fVar20);
    FUN_0036e168(fVar20 * DAT_0019e9c8,uVar5,uVar1,fVar17,local_68);
    FUN_0036e168(*(float *)(param_1 + 0x9bc) + fVar2,uVar13,*(float *)(param_1 + 0x7d4) * fVar16,
                 fVar17,local_70);
    FUN_0036e168(*(float *)(param_1 + 0x9c0) + DAT_0019e9cc,uVar13,
                 *(float *)(param_1 + 0x7d4) * fVar16,fVar17,local_60);
    FUN_0036e168(*(undefined4 *)(param_1 + 0x9c4),uVar13,*(float *)(param_1 + 0x7d4) * fVar16,fVar17
                 ,param_1 + 0xa00);
    FUN_0036e168(*(float *)(param_1 + 0x9c0) - fVar18,uVar13,*(float *)(param_1 + 0x7d4) * fVar16,
                 fVar17,local_6c);
    FUN_0036e168(uVar5,uVar5,uVar15,fVar17,local_64);
    if (DAT_0019e9d0 <= (int)ABS(*(float *)(iVar14 + 0x28) - *(float *)(param_1 + 0x28)))
    goto switchD_0019e248_default;
    *(undefined2 *)(param_1 + 0x76c) = 4;
    *(float *)(param_1 + 0x7d4) = fVar17;
    *(undefined2 *)(param_1 + 0x766) = 0x2d;
    *(undefined2 *)(param_1 + 0x768) = 0xe1;
    uVar13 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_0019e9c0 + 0x10));
    uVar13 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(uVar5,fVar17,uVar13,DAT_0019e9d4,param_1 + 0x1a4,DAT_0019e9c4,2);
    FUN_00345a08(uVar4,uVar3,param_1,param_2,4);
    iVar10 = *(int *)(param_1 + 0x1cc);
    uVar12 = 1;
    break;
  case 4:
    if (0 < *(short *)(param_1 + 0x766)) {
      FUN_00345a08(DAT_0019e594,DAT_0019e590,param_1,param_2,4);
    }
    FUN_0036e168(fVar17,uVar5,uVar1,fVar17,local_68);
    fVar19 = fVar17;
    if ((*(ushort *)(iVar6 + 0xfa) & 2) != 0) {
      fVar19 = DAT_0019e9d8;
    }
    FUN_0036e168(*(float *)(iVar14 + 0x28) + fVar19 + DAT_0019e9dc,uVar13,
                 *(float *)(param_1 + 0x7d4) * fVar16,fVar17,local_70);
    FUN_0036e168(*(float *)(iVar14 + 0x2c) + fVar18,uVar13,*(float *)(param_1 + 0x7d4) * fVar16,
                 fVar17,local_60);
    FUN_0036e168(*(float *)(iVar14 + 0x30) - DAT_0019e5bc,uVar13,
                 *(float *)(param_1 + 0x7d4) * fVar16,fVar17,param_1 + 0xa00);
    local_74 = (undefined4 *)(param_1 + 0xa04);
    FUN_0036e168(*(undefined4 *)(param_1 + 0x9bc),uVar13,*(float *)(param_1 + 0x7d4) * fVar16,fVar17
                );
    FUN_0036e168(*(undefined4 *)(param_1 + 0x9c0),uVar13,*(float *)(param_1 + 0x7d4) * fVar16,fVar17
                 ,local_6c);
    FUN_0036e168(*(undefined4 *)(param_1 + 0x9c4),uVar13,*(float *)(param_1 + 0x7d4) * fVar16,fVar17
                 ,param_1 + 0xa0c);
    FUN_0036e168(uVar5,uVar5,uVar15,fVar17,local_64);
    iVar11 = FUN_003736fc(DAT_0019e9e0,uVar5,param_1 + 0x1a4);
    uVar15 = DAT_0019e9e8;
    uVar13 = DAT_0019e9e4;
    if (iVar11 == 0) {
      iVar11 = FUN_003736fc(DAT_0019ed48,uVar5,param_1 + 0x1a4);
      if (iVar11 != 0) {
        local_9c = 10;
        local_98 = 0;
        FUN_0036f00c(uVar15,uVar13,param_2,param_1,param_1 + 0x9d4,10,500);
        FUN_00375bcc(param_1,DAT_0019e9ec);
      }
    }
    else {
      local_9c = 10;
      local_98 = 0;
      FUN_0036f00c(DAT_0019e9e8,DAT_0019e9e4,param_2,param_1,param_1 + 0x9e0,10,500);
      FUN_00375bcc(param_1,DAT_0019e9ec);
    }
    if (*(short *)(param_1 + 0x766) == 0) {
      FUN_00370734(param_1 + 0x1a4);
      FUN_0036e168(fVar20,uVar5,DAT_0019ed4c,fVar17,param_1 + 0x7d8);
    }
    if (*(short *)(param_1 + 0x768) == 0x96) {
      FUN_00375bcc(param_1,DAT_0019ed50);
    }
    if (*(short *)(param_1 + 0x768) == 0x87) {
      if ((*(ushort *)(iVar6 + 0xfa) & 2) == 0) {
        local_9c = 0x100;
        local_98 = 0x40;
        FUN_00354248(fVar17,param_2,param_2 + 0x224c,*(undefined4 *)(param_1 + 0x368),200,0xb4);
      }
      FUN_0036ec40(0,DAT_0019ed54);
      iVar11 = FUN_0035b164();
      if ((iVar11 != 0) && (iVar11 = FUN_0035b0a0(), iVar11 == 0)) {
        if (((*DAT_0019e55c & 1) == 0) && (iVar11 = FUN_003679b4(DAT_0019e55c), iVar11 != 0)) {
          FUN_0036788c(DAT_0019e560);
        }
        FUN_003542c4(local_58,1);
      }
    }
    if (*(short *)(param_1 + 0x768) == 0) {
      FUN_00345a08(uVar4,uVar3,param_1,param_2,0xffffffff);
      uVar13 = local_70[1];
      uVar15 = local_70[2];
      *(undefined4 *)(iVar10 + 0x8c) = *local_70;
      *(undefined4 *)(iVar10 + 0x90) = uVar13;
      *(undefined4 *)(iVar10 + 0x94) = uVar15;
      uVar13 = local_70[1];
      uVar15 = local_70[2];
      *(undefined4 *)(iVar10 + 0xa4) = *local_70;
      *(undefined4 *)(iVar10 + 0xa8) = uVar13;
      *(undefined4 *)(iVar10 + 0xac) = uVar15;
      uVar13 = local_74[1];
      uVar15 = local_74[2];
      *(undefined4 *)(iVar10 + 0x80) = *local_74;
      *(undefined4 *)(iVar10 + 0x84) = uVar13;
      *(undefined4 *)(iVar10 + 0x88) = uVar15;
      FUN_0036e9b8(param_2,(int)*(short *)(param_1 + 0x784),0);
      *(undefined2 *)(param_1 + 0x784) = 0;
      FUN_00367374(param_2,local_5c);
      FUN_0036e980(param_2,param_1,7);
      uVar13 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_0019e9c0 + 8));
      uVar13 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(uVar5,fVar17,uVar13,DAT_0019ed58,param_1 + 0x1a4,DAT_0019ed5c,2);
      uVar13 = DAT_0019ed60;
      *(undefined2 *)(param_1 + 0x77a) = 0;
      *(undefined4 *)(param_1 + 0x760) = uVar13;
      *(float *)(param_1 + 0x7b4) = fVar17;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(undefined2 *)(param_1 + 0x7aa) = 0x4b;
      uVar13 = DAT_0019ed64;
      *(undefined2 *)(param_1 + 0x78c) = 0;
      *(short *)(iVar14 + 0xbe) = (short)uVar13;
      *(ushort *)(iVar6 + 0xfa) = *(ushort *)(iVar6 + 0xfa) | 2;
    }
  default:
    goto switchD_0019e248_default;
  }
  *(undefined1 *)(iVar10 + 0xad) = uVar12;
switchD_0019e248_default:
  fVar20 = DAT_0019ed6c;
  fVar18 = DAT_0019ed68;
  if (*(short *)(param_1 + 0x784) != 0) {
    if (*(short *)(param_1 + 0x786) != 0) {
      *(short *)(param_1 + 0x786) = *(short *)(param_1 + 0x786) + -1;
    }
    local_84 = *(undefined4 *)(param_1 + 0x9f8);
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x786),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)FUN_003727f0(fVar16 * fVar18 * fVar2 * fVar20);
    fVar16 = DAT_0019ed70;
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x786),
                                        (byte)(in_fpscr >> 0x15) & 3);
    local_80 = *(float *)(param_1 + 0x9fc) + fVar17 * fVar19 * DAT_0019ed70;
    local_7c = *(undefined4 *)(param_1 + 0xa00);
    local_90 = *(undefined4 *)(param_1 + 0xa04);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x786),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar18 = (float)FUN_003727f0(fVar17 * fVar18 * fVar2 * fVar20);
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x786),
                                        (byte)(in_fpscr >> 0x15) & 3);
    local_8c = *(float *)(param_1 + 0xa08) + fVar18 * fVar20 * fVar16;
    local_88 = *(undefined4 *)(param_1 + 0xa0c);
    local_9c = *(undefined4 *)(param_1 + 0x7dc);
    local_94 = *(undefined4 *)(param_1 + 0x7dc);
    local_98 = uVar5;
    FUN_0035b1cc(param_2,(int)*(short *)(param_1 + 0x784),&local_90,&local_84,&local_9c);
  }
  return;
}

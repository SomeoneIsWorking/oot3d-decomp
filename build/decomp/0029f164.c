// OoT3D decomp @ 0029f164  name=FUN_0029f164  size=1780

void FUN_0029f164(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffbff;
  *(undefined1 *)(param_1 + 0x448) = 3;
  if (*(char *)(param_1 + 0x26e) != '\0') {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  iVar12 = *(int *)(param_1 + 0x128);
  *(short *)(param_1 + 0x23c) = *(short *)(param_1 + 0x23c) + 1;
  (**(code **)(param_1 + 0x238))(param_1,param_2);
  iVar3 = 0;
  do {
    iVar8 = param_1 + iVar3 * 2;
    iVar9 = (int)*(short *)(iVar8 + 0x264);
    iVar3 = (int)(short)((short)iVar3 + 1);
    if (iVar9 != 0) {
      iVar9 = iVar9 + -1;
      *(short *)(iVar8 + 0x264) = (short)iVar9;
    }
    fVar16 = DAT_0029f570;
  } while (iVar3 < 5);
  if (*(short *)(param_1 + 0x244) != 0) {
    *(short *)(param_1 + 0x244) = *(short *)(param_1 + 0x244) + -1;
  }
  if (*(short *)(param_1 + 0x246) != 0) {
    *(short *)(param_1 + 0x246) = *(short *)(param_1 + 0x246) + -1;
  }
  if (*(int *)(param_1 + 0x238) == DAT_0029f56c) goto LAB_0029f5f0;
  iVar3 = *(int *)(param_1 + 0x128);
  if (*(short *)(param_1 + 0x248) != 0) {
    *(short *)(param_1 + 0x248) = *(short *)(param_1 + 0x248) + -1;
    *(undefined1 *)(param_1 + 0x26f) = 0;
    *(byte *)(param_1 + 0x445) = *(byte *)(param_1 + 0x445) & 0xfd;
    goto LAB_0029f5f0;
  }
  bVar1 = *(byte *)(param_1 + 0x445);
  uVar4 = bVar1 & 2;
  bVar13 = (bVar1 & 2) != 0;
  if (bVar13) {
    iVar9 = (int)*(char *)(param_1 + 0xb7);
  }
  if ((!bVar13 || iVar9 < 1) && (*(char *)(param_1 + 0x26f) == '\0')) goto LAB_0029f5f0;
  puVar11 = (uint *)0x0;
  if ((bVar1 & 2) != 0) {
    puVar11 = *(uint **)(param_1 + 0x470);
    *(byte *)(param_1 + 0x445) = bVar1 & 0xfd;
  }
  fVar14 = DAT_0029f580;
  uStack_40 = VectorSignedToFloat((int)*(short *)(param_1 + 0x45a),(byte)(in_fpscr >> 0x15) & 3);
  uStack_3c = VectorSignedToFloat((int)*(short *)(param_1 + 0x45c),(byte)(in_fpscr >> 0x15) & 3);
  uStack_38 = VectorSignedToFloat((int)*(short *)(param_1 + 0x45e),(byte)(in_fpscr >> 0x15) & 3);
  if (*(char *)(param_1 + 0x271) == '\0') {
    bVar13 = (bVar1 & 2) != 0;
    if (bVar13) {
      uVar4 = *puVar11;
    }
    if (bVar13 && (uVar4 & DAT_0029f574) != 0) {
      *(undefined2 *)(param_1 + 0x248) = 0xf;
      *(char *)(param_1 + 0xb7) = *(char *)(param_1 + 0xb7) + -2;
      *(undefined2 *)(iVar3 + 0x236) = 0x1e;
      FUN_00375bcc(param_1,DAT_0029f590);
      FUN_003741e4(param_2,*puVar11,0,&uStack_40);
    }
  }
  else {
    if ((bVar1 & 2) != 0) {
      bVar13 = *(uint *)(param_1 + 0x238) != DAT_0029f578;
      uVar4 = DAT_0029f578;
      if (bVar13) {
        uVar4 = *puVar11;
      }
      if (bVar13 && (uVar4 & DAT_0029f574) != 0) {
        FUN_003741e4(param_2,uVar4,2,&uStack_40);
        FUN_0033af2c(param_2,&uStack_40,8);
        goto LAB_0029f5ec;
      }
    }
    if (*(uint *)(param_1 + 0x238) != DAT_0029f57c) {
      if (*(char *)(param_1 + 0x26f) == '\0') {
        iVar9 = FUN_003656fc(param_2,*puVar11);
        bVar13 = iVar9 == 0;
        if ((bVar13) && ((*puVar11 & 0x80) == 0)) {
          iVar9 = 2;
        }
        if (((*(char *)(param_1 + 0xb7) < '\x03') || (iVar9 == 0)) && (bVar13)) {
          FUN_003741e4(param_2,*puVar11,1,&uStack_40);
          goto LAB_0029f5f0;
        }
        *(char *)(param_1 + 0xb7) = *(char *)(param_1 + 0xb7) - (char)iVar9;
        FUN_003741e4(param_2,*puVar11,0,&uStack_40);
        if (*(char *)(param_1 + 0xb7) < '\x01') {
          FUN_00373d40(param_1 + 0x1a4,2);
          uVar5 = FUN_0036ae14(param_1 + 0x1a4,2);
          iVar3 = DAT_0029f56c;
          fVar15 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x278) = fVar15 * fVar14;
          *(int *)(param_1 + 0x238) = iVar3;
          FUN_003655d0(0,1);
          FUN_00375bcc(param_1,DAT_0029f584);
          *(undefined2 *)(DAT_0029f588 + param_1) = 1;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          *(undefined2 *)(param_1 + 0x23c) = 0;
          *(undefined1 *)(param_1 + 0x270) = 0x4b;
          FUN_00375b70(param_2,param_1);
          goto LAB_0029f5f0;
        }
      }
      uVar4 = DAT_0029f578;
      if (*(uint *)(param_1 + 0x238) == DAT_0029f578) {
        uVar5 = FUN_0036ae14(param_1 + 0x1a4,0xe);
        fVar15 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x278) = fVar15 * fVar14;
        FUN_00370350(fVar16,param_1 + 0x1a4,0xe);
      }
      else {
        uVar5 = FUN_0036ae14(param_1 + 0x1a4,0x11);
        fVar15 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x278) = fVar15 * fVar14;
        FUN_00370350(fVar16,param_1 + 0x1a4,0x11);
        *(undefined2 *)(param_1 + 0x264) = 0x4b;
        *(undefined1 *)(param_1 + 0x270) = 0x5a;
      }
      *(uint *)(param_1 + 0x238) = uVar4;
      *(float *)(param_1 + 0x68) = fVar16;
      *(float *)(param_1 + 0x60) = fVar16;
      *(undefined2 *)(param_1 + 0x24a) = 0;
      if (1 < *(byte *)(param_1 + 0x26f)) {
        *(undefined2 *)(param_1 + 0x264) = 0xb4;
        FUN_00365560(param_2,0,0,param_1 + 0x3c);
      }
      *(undefined2 *)(param_1 + 0x248) = 0xf;
      *(undefined2 *)(iVar3 + 0x236) = 0x1e;
      FUN_00375bcc(param_1,DAT_0029f590);
    }
  }
LAB_0029f5ec:
  *(undefined1 *)(param_1 + 0x26f) = 0;
LAB_0029f5f0:
  puVar6 = (undefined4 *)(param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 700);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x2c4);
  iVar3 = param_1 + 0x434;
  *(undefined4 *)(param_1 + 0x4d8) = *puVar6;
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_1 + 0x2b4);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x2b8);
  iVar9 = param_2 + 0x5c78;
  bVar13 = *(char *)(param_1 + 0x271) == '\0';
  if (bVar13) {
    puVar6 = (undefined4 *)(uint)*(byte *)(iVar12 + 0x1a5);
  }
  if (bVar13 && puVar6 == (undefined4 *)0x0) {
    FUN_00376168(param_2,iVar9,iVar3);
  }
  uVar4 = DAT_0029f578;
  uVar7 = *(uint *)(param_1 + 0x238);
  if ((uVar7 == DAT_0029f578) && (2 < *(short *)(param_1 + 0x264))) {
    FUN_00376168(param_2,iVar9,iVar3);
    FUN_003762a4(param_2,iVar9,iVar3);
  }
  else if (uVar7 == DAT_0029f880) {
    FUN_00376168(param_2,iVar9,iVar3);
  }
  else if (uVar7 == DAT_0029f57c) {
    FUN_00376168(param_2,iVar9,iVar3);
    FUN_003761f0(param_2,iVar9,iVar3);
    FUN_003761f0(param_2,iVar9,param_1 + 0x48c);
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 700);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x2c4);
  fVar14 = (float)FUN_002cfca0((int)-*(short *)(param_1 + 0xbe));
  fVar15 = (float)FUN_00338f60((int)-*(short *)(param_1 + 0xbe));
  uVar2 = DAT_0029f88c;
  uVar5 = DAT_0029f888;
  fVar17 = (*(float *)(param_1 + 0x68) * fVar15 - fVar14 * *(float *)(param_1 + 0x60)) *
           DAT_0029f884;
  FUN_00373500((*(float *)(param_1 + 0x68) * fVar14 + fVar15 * *(float *)(param_1 + 0x60)) *
               DAT_0029f884,DAT_0029f88c,DAT_0029f888,param_1 + 0x40c);
  FUN_00373500(fVar17,uVar2,uVar5,param_1 + 0x410);
  bVar13 = *(char *)(param_1 + 0x271) != '\0';
  uVar7 = 0;
  if (bVar13) {
    uVar7 = *(uint *)(param_1 + 0x238);
  }
  if ((bVar13 && uVar7 != uVar4) && (*(short *)(DAT_0029f588 + param_1) == 0)) {
    fVar16 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x23c) * (short)DAT_0029f890));
    fVar16 = fVar16 * DAT_0029f894 - DAT_0029f898;
  }
  FUN_00373500(fVar16,uVar2,DAT_0029f89c,param_1 + 0x414);
  if (*(char *)(param_1 + 0x270) != '\0') {
    sVar10 = 0;
    *(char *)(param_1 + 0x270) = *(char *)(param_1 + 0x270) + -1;
    do {
      FUN_0032fa4c(param_2,param_1,param_1 + 0x28,0x2d);
      sVar10 = sVar10 + 1;
    } while (sVar10 < 7);
  }
  if (*(short *)(param_1 + 0x1c) == 1) {
    FUN_003591e4(*(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b4),
                 *(undefined4 *)(param_1 + 0x2b8),param_1 + 0x41c,0xff,0xff);
  }
  return;
}

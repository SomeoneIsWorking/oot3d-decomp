// OoT3D decomp @ 001b9450  name=FUN_001b9450  size=968

void FUN_001b9450(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  
  FUN_0037632c(param_1,param_1 + 0x3f8);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x3f8);
  if (*(int *)(param_1 + 0x1d4) == 0xe) {
    fVar14 = *(float *)(param_1 + 0x1e0);
    uVar6 = FUN_003603c0(param_1 + 0x1a4,0xe);
    fVar13 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar13) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      FUN_0035fbb0(param_1,6);
    }
  }
  if (*(int *)(param_1 + 0x1d4) == 0x12) {
    fVar14 = *(float *)(param_1 + 0x1e0);
    uVar6 = FUN_003603c0(param_1 + 0x1a4,0x12);
    fVar13 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar13) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      FUN_0035fbb0(param_1,0xc);
    }
  }
  if (*(int *)(param_1 + 0x1d4) == 0x11) {
    fVar14 = *(float *)(param_1 + 0x1e0);
    uVar6 = FUN_003603c0(param_1 + 0x1a4,0x11);
    fVar13 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    if (fVar14 < fVar13 == (NAN(fVar14) || NAN(fVar13))) {
      FUN_0035fbb0(param_1,0xd);
    }
  }
  iVar2 = DAT_001b9818;
  if (*(int *)(param_1 + 0x3f4) == DAT_001b9818) {
    sVar4 = 0xff;
  }
  else {
    sVar4 = FUN_00341c28(DAT_001b981c,param_1,param_2,(int)*(short *)(param_1 + 0x484));
  }
  *(short *)(param_1 + 0x484) = sVar4;
  *(char *)(param_1 + 0xd0) = (char)sVar4;
  if ((sVar4 == 0) || (FUN_003731e0(param_1 + 0x1a4), *(short *)(param_1 + 0x484) == 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000000;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
  }
  if (*(int *)(param_1 + 0x3f4) == iVar2) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x60);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x68);
  }
  else {
    FUN_0036b96c();
  }
  uVar6 = DAT_001b9820;
  if (*(short *)(param_2 + 0x104) != 0x56) {
    if (*(char *)(param_1 + 0xc49) == '\0') {
      if (*(char *)(param_1 + 0xc48) == '\0') {
        FUN_00376340(DAT_001b9820,DAT_001b9820,DAT_001b9820,param_2,param_1,4);
        *(undefined *)(param_1 + 0xc48) = 1;
        *(undefined4 *)(param_1 + 0x70) = uVar6;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x70) = DAT_001b9824;
      FUN_00376340(uVar6,uVar6,uVar6,param_2,param_1,4);
    }
  }
  if (*(int *)(param_1 + 0x1d4) == 0x10 || *(int *)(param_1 + 0x1d4) == 0xe) {
    sVar4 = *(short *)(param_1 + 0x450);
    bVar12 = sVar4 == 0;
    if (bVar12) {
      *(undefined2 *)(param_1 + 0x47c) = 0;
      sVar4 = *(short *)(param_1 + 0x480);
    }
    if (!bVar12 || sVar4 != 2) goto LAB_001b9694;
  }
  else {
LAB_001b9694:
    if ((((*(short *)(param_1 + 0x47c) == 0) ||
         (sVar4 = *(short *)(param_1 + 0x47c) + -1, *(short *)(param_1 + 0x47c) = sVar4, sVar4 == 0)
         ) && ((*(uint *)(param_2 + 0xf8) & 1) != 0)) &&
       (sVar4 = *(short *)(param_1 + 0x480) + 1, *(short *)(param_1 + 0x480) = sVar4, 2 < sVar4)) {
      uVar5 = FUN_003702c8(0x1e);
      *(undefined2 *)(param_1 + 0x47c) = uVar5;
      *(undefined2 *)(param_1 + 0x480) = 0;
    }
  }
  (**(code **)(param_1 + 0x3f4))(param_1,param_2);
  if (((*(short *)(param_2 + 0x104) != 0x56) ||
      ((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x1554U <=
       DAT_001b9828)) || (*(short *)(param_1 + 0x450) != 0)) {
    FUN_00342714(*(float *)(param_1 + 0x438) + DAT_001b9830,param_2,param_1,param_1 + 0x450,
                 DAT_001b9834,DAT_001b982c);
  }
  uVar6 = DAT_001b9840;
  iVar9 = *(int *)(DAT_001b9838 + param_2);
  uVar7 = 0;
  if (*(short *)(param_2 + 0x104) == 0x55) {
    if (*(int *)(param_1 + 0x3f4) != iVar2) {
      uVar7 = 4;
      goto LAB_001b97c8;
    }
  }
  else {
    if (*(short *)(param_2 + 0x104) != 0x56) goto LAB_001b97c8;
    iVar8 = *(int *)(param_1 + 0x1d4);
    if (iVar8 == 0x10) {
      uVar7 = 1;
    }
    else {
      uVar7 = 3;
    }
    if (*(int *)(param_1 + 0x3f4) == DAT_001b983c && iVar8 == 0x11) {
      uVar7 = 1;
    }
    if (*(int *)(param_1 + 0x3f4) != iVar2 || iVar8 != 0xe) goto LAB_001b97c8;
  }
  uVar7 = 1;
LAB_001b97c8:
  uVar10 = *(undefined4 *)(iVar9 + 0x2c);
  uVar11 = *(undefined4 *)(iVar9 + 0x30);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(iVar9 + 0x28);
  *(undefined4 *)(param_1 + 0x46c) = uVar10;
  *(undefined4 *)(param_1 + 0x470) = uVar11;
  *(undefined4 *)(param_1 + 0x464) = uVar6;
  FUN_0034c664(param_1,param_1 + 0x450,2,uVar7);
  cVar3 = *(char *)(param_1 + 0x121);
  if (cVar3 != '\0') {
    cVar3 = '\x01';
  }
  *(char *)(*(int *)(param_1 + 0x1cc) + 0xad) = cVar3;
  return;
}


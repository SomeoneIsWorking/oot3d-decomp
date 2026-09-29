// OoT3D decomp @ 00123ef4  name=FUN_00123ef4  size=508

void FUN_00123ef4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;
  int iVar5;
  float fVar6;
  float fVar7;

  FUN_003731e0(param_1 + 0x208);
  uVar3 = DAT_001240f4;
  fVar7 = DAT_001240f0;
  iVar2 = FUN_003736fc(DAT_001240f4,DAT_001240f0,param_1 + 0x208);
  sVar1 = 0;
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_1 + 0x1aa);
  }
  if (iVar2 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x1aa) = sVar1 + -1;
  }
  bVar4 = *(char *)(param_1 + 0x1a8) == '\0';
  if (!bVar4) {
    FUN_00375bcc(param_1,DAT_001240f8);
  }
  *(bool *)(param_1 + 0x1a8) = bVar4;
  FUN_003705a0(DAT_001240fc,fVar7,param_1 + 0x6c);
  iVar2 = FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x1ac),1,DAT_00124100,0xb6);
  if (iVar2 == 0) {
    if ((*(ushort *)(param_1 + 0x90) & 0x20) == 0) {
      if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
        if (*(char *)(param_1 + 0x1a9) == '\0') {
          sVar1 = FUN_00367358(param_1,param_1 + 8);
          iVar2 = (int)(short)(sVar1 - *(short *)(param_1 + 0x92));
          if (iVar2 + 0x2000U < 0x4001) {
            if (iVar2 < 0) {
              fVar7 = DAT_00124118;
            }
            fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),
                                               (byte)(in_fpscr >> 0x15) & 3);
            sVar1 = (short)(int)(fVar6 + fVar7 * DAT_0012411c);
          }
        }
        else {
          sVar1 = *(short *)(param_1 + 0x92) + -0x8000;
        }
      }
      else {
        sVar1 = *(short *)(param_1 + 0x82);
      }
    }
    else {
      sVar1 = FUN_00367358(param_1,param_1 + 8);
    }
    *(short *)(param_1 + 0x1ac) = sVar1;
  }
  iVar2 = DAT_00124104;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x36) + -0x8000;
  if (((*(char *)(param_1 + 0x1a9) == '\0') &&
      (iVar5 = FUN_00363e64(param_1,param_1 + 8), iVar5 < DAT_00124108)) &&
     ((int)ABS(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc)) < 0x40000000)) {
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    FUN_00374a58(DAT_0012410c,param_1 + 0x208,*(undefined4 *)(iVar2 + 8));
    FUN_00375bcc(param_1,DAT_00124110);
    uVar3 = DAT_00124114;
  }
  else {
    if (*(short *)(param_1 + 0x1aa) != 0) {
      return;
    }
    FUN_0036e734(param_1 + 0x208,*(undefined4 *)(iVar2 + 0x20));
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined2 *)(param_1 + 0x1aa) = 5;
    uVar3 = DAT_00124120;
    if (*(char *)(param_1 + 0x1a9) != '\0') {
      *(char *)(param_1 + 0x1a9) = *(char *)(param_1 + 0x1a9) + -1;
      uVar3 = DAT_00124120;
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  return;
}

// OoT3D decomp @ 003aa7b8  name=FUN_003aa7b8  size=884

void FUN_003aa7b8(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  fVar2 = DAT_003aab24;
  iVar7 = *(int *)(DAT_003aab20 + param_2);
  iVar6 = FUN_00328e08(param_2,param_1);
  if (iVar6 != 0) {
    return;
  }
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000,1);
  fVar12 = DAT_003aab28;
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 16000;
  fVar11 = DAT_003aab34;
  fVar9 = *(float *)(param_1 + 0x6c);
  sVar5 = *(short *)(iVar7 + 0xbe);
  if (fVar9 < fVar2) {
    fVar10 = DAT_003aab38;
    if ((uint)fVar9 < 0xc0c00000) {
      fVar10 = fVar9 - fVar12;
    }
  }
  else {
    fVar10 = DAT_003aab30;
    if ((int)fVar9 < DAT_003aab2c) {
      fVar10 = fVar9 + fVar12;
    }
  }
  *(float *)(param_1 + 0x6c) = fVar10;
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    if ((*(short *)(param_1 + 0x1c) == 3) &&
       (iVar6 = FUN_0035e600(*(undefined4 *)(param_1 + 0x6c),param_1,param_2), iVar6 == 0)) {
      if ((*(ushort *)(param_1 + 0x90) & 8) != 0) goto LAB_003aa894;
      iVar6 = 0;
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar11;
      goto LAB_003aa8e8;
    }
  }
  else {
LAB_003aa894:
    if (*(float *)(param_1 + 0x6c) < fVar2) {
      sVar3 = *(short *)(param_1 + 0xbe) + -0x3fff;
    }
    else {
      sVar3 = *(short *)(param_1 + 0xbe) + 0x3fff;
    }
    iVar6 = (int)(short)(*(short *)(param_1 + 0x82) - sVar3);
LAB_003aa8e8:
    if (0x8000 < iVar6 + 0x4000U) {
      fVar11 = *(float *)(param_1 + 0x6c) * fVar11;
      *(float *)(param_1 + 0x6c) = fVar11;
      if (fVar2 <= fVar11) {
        fVar11 = fVar11 + fVar12;
      }
      else {
        fVar11 = fVar11 - fVar12;
      }
      *(float *)(param_1 + 0x6c) = fVar11;
    }
  }
  iVar6 = FUN_00369608(param_2,param_1);
  fVar11 = fVar2;
  if (iVar6 != 0) {
    fVar11 = DAT_003aab3c;
  }
  if (fVar11 + DAT_003aab40 < *(float *)(param_1 + 0x98)) {
    fVar9 = fVar2;
    uVar1 = DAT_003aab54;
    if (fVar11 + DAT_003aab50 < *(float *)(param_1 + 0x98)) {
      fVar9 = DAT_003aab58;
      uVar1 = DAT_003aab44;
    }
    FUN_0036e168(fVar9,DAT_003aab48,uVar1,fVar2,param_1 + 0x1c70);
  }
  else {
    FUN_0036e168(DAT_003aab4c,DAT_003aab48,DAT_003aab44,fVar2,param_1 + 0x1c70);
  }
  if (*(float *)(param_1 + 0x1c70) != fVar2) {
    fVar9 = *(float *)(iVar7 + 0x2c);
    fVar11 = fVar9 - *(float *)(param_1 + 0x2c);
    if (fVar11 < fVar2) {
      fVar11 = *(float *)(param_1 + 0x2c) - fVar9;
    }
    if ((DAT_003aab5c < (int)fVar11) && (*(char *)(DAT_003aab60 + 0xe) != '\0')) {
      uVar4 = *(ushort *)(param_2 + 0x104);
      bVar8 = uVar4 == 7;
      if (bVar8) {
        uVar4 = (ushort)*(byte *)(DAT_003aab64 + param_2);
      }
      if (bVar8 && uVar4 == 0xe) goto LAB_003aaa28;
    }
    fVar11 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar11 * *(float *)(param_1 + 0x1c70);
    fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar11 * *(float *)(param_1 + 0x1c70);
  }
LAB_003aaa28:
  *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x6c) * fVar12;
  fVar12 = *(float *)(param_1 + 0x21c);
  FUN_003731e0(param_1 + 0x1e0);
  fVar11 = *(float *)(param_1 + 0x220);
  if (fVar11 < fVar2) {
    fVar11 = -fVar11;
  }
  iVar7 = (int)(*(float *)(param_1 + 0x21c) - fVar11);
  iVar6 = (int)fVar11 + (int)fVar12;
  if (((int)*(float *)(param_1 + 0x21c) != (int)fVar12) &&
     (((1 < iVar6 && (iVar7 < 1)) || ((iVar7 < 7 && (7 < iVar6)))))) {
    FUN_00375bcc(param_1,DAT_003aab68);
  }
  if ((*(uint *)(DAT_003aab6c + param_2) & 0x5f) == 0) {
    FUN_00375bcc(param_1,DAT_003aab70);
  }
  sVar5 = (sVar5 + -0x8000) - *(short *)(param_1 + 0xbe);
  if (sVar5 < 0) {
    sVar5 = -sVar5;
  }
  if ((sVar5 < 0x6801) && (*(int *)(param_1 + 0x1c6c) != 0)) {
    *(int *)(param_1 + 0x1c6c) = *(int *)(param_1 + 0x1c6c) + -1;
    return;
  }
  FUN_003b77e4(param_1,param_2);
  return;
}

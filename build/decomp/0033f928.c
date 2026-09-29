// OoT3D decomp @ 0033f928  name=FUN_0033f928  size=1088

void FUN_0033f928(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  iVar11 = DAT_0033fdb0;
  fVar18 = DAT_0033fc70;
  fVar15 = DAT_0033fc64;
  iVar12 = *(int *)(DAT_0033fc5c + param_2);
  fVar17 = *(float *)(iVar12 + 0x28) - *(float *)(param_1 + 0x28);
  fVar16 = *(float *)(iVar12 + 0x30) - *(float *)(param_1 + 0x30);
  if ((((fVar17 <= *(float *)(param_1 + 0x54) * DAT_0033fc60) ||
       (*(float *)(param_1 + 0x54) * DAT_0033fc68 <= fVar17)) ||
      (fVar16 <= *(float *)(param_1 + 0x5c) * DAT_0033fc6c)) ||
     ((*(float *)(param_1 + 0x5c) * DAT_0033fc70 <= fVar16 ||
      (DAT_0033fc64 <= *(float *)(iVar12 + 0x2c) - *(float *)(param_1 + 0x2c))))) {
    if (*(int *)(param_1 + 0x1e0) != 0) {
      uVar10 = *(ushort *)(param_2 + 0x104);
      bVar13 = uVar10 != 5;
      if (!bVar13) {
        uVar10 = (ushort)*(byte *)(param_1 + 3);
      }
      if (bVar13 || uVar10 != 9) {
        fVar18 = *(float *)(param_1 + 0x1e4) + *(float *)(iVar12 + 0x221c) * DAT_0033fdac;
      }
      else {
        fVar18 = *(float *)(iVar12 + 0x221c) + *(float *)(param_1 + 0x1e4);
      }
      *(float *)(iVar12 + 0x221c) = fVar18;
      *(undefined2 *)(iVar11 + iVar12) = *(undefined2 *)(param_1 + 0x1ec);
    }
    *(float *)(param_1 + 0x1e8) = fVar15;
    *(float *)(param_1 + 0x1e4) = fVar15;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    return;
  }
  iVar11 = FUN_0036adf4(param_1);
  if (iVar11 != 0) {
    if (*(int *)(param_1 + 0x1dc) < 1) {
      FUN_0036e670(param_2,iVar12 + 0x28,0,0,1,1);
      iVar11 = 0xf;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1dc) + -1;
    }
    *(int *)(param_1 + 0x1dc) = iVar11;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(float *)(param_1 + 0x1e4) = fVar15;
    *(float *)(param_1 + 0x1e8) = fVar15;
    return;
  }
  *(undefined4 *)(param_1 + 0x1e0) = 1;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  fVar14 = (float)FUN_003696ec(fVar17,fVar16);
  fVar3 = DAT_0033fc74;
  uVar10 = *(ushort *)(iVar12 + 0x36);
  *(float *)(iVar12 + 0x70) = fVar15;
  *(float *)(iVar12 + 100) = fVar15;
  *(undefined1 *)(iVar12 + 0x227f) = 0;
  fVar5 = DAT_0033fc7c;
  fVar4 = DAT_0033fc78;
  fVar2 = DAT_0033fc78;
  if (*(char *)(iVar12 + 0x1a7) == '\x02') {
    fVar2 = DAT_0033fc7c;
  }
  *(uint *)(iVar12 + 0x29b8) = *(uint *)(iVar12 + 0x29b8) | 0x1000000;
  iVar11 = FUN_00374be8(param_2,0x19);
  fVar7 = DAT_0033fc84;
  fVar6 = DAT_0033fc80;
  if (iVar11 == 0) {
    FUN_0036e168(*(undefined4 *)(param_1 + 0x2c),DAT_0033fc84,DAT_0033fc80,fVar2,iVar12 + 0x2c);
  }
  uVar8 = DAT_0033fc8c;
  uVar9 = *(ushort *)(param_2 + 0x104);
  if (DAT_0033fc88 <= (int)(short)((uVar10 ^ 0x8000) - (short)(int)(fVar14 * fVar3)) + 0x3fffU) {
    bVar13 = uVar9 != 5;
    if (!bVar13) {
      uVar9 = (ushort)*(byte *)(param_1 + 3);
    }
    if (bVar13 || uVar9 != 9) {
      *(undefined2 *)(param_1 + 0x1ec) = *(undefined2 *)(param_1 + 0x92);
      *(float *)(iVar12 + 0x221c) = *(float *)(iVar12 + 0x221c) * fVar7;
      FUN_00373500(fVar4 * fVar6,fVar2,fVar2,param_1 + 0x1e8);
    }
    else {
      *(undefined2 *)(param_1 + 0x1ec) = *(undefined2 *)(iVar12 + 0x36);
      *(float *)(iVar12 + 0x221c) = *(float *)(iVar12 + 0x221c) * fVar7;
      FUN_00373500(uVar8,fVar2,fVar2,param_1 + 0x1e8);
    }
    FUN_00373500(*(undefined4 *)(param_1 + 0x1e8),fVar2,DAT_0033fda4,param_1 + 0x1e4);
    goto LAB_0033fd14;
  }
  bVar13 = uVar9 == 5;
  if (bVar13) {
    uVar9 = (ushort)*(byte *)(param_1 + 3);
  }
  if (bVar13 && uVar9 == 9) {
    uVar10 = *(ushort *)(iVar12 + 0x36) ^ 0x8000;
  }
  else {
    uVar10 = *(ushort *)(param_1 + 0x92);
  }
  *(ushort *)(param_1 + 0x1ec) = uVar10;
  iVar11 = DAT_0033fc94;
  fVar3 = DAT_0033fc90;
  fVar18 = SQRT(fVar17 * fVar17 + fVar16 * fVar16) / (*(float *)(param_1 + 0x54) * fVar18);
  if (fVar18 < fVar15) {
    fVar18 = fVar15;
  }
  if (0x3f800000 < (int)fVar18) {
    fVar18 = fVar2;
  }
  sVar1 = *(short *)(param_2 + 0x104);
  if (sVar1 == 5) {
    if (*(char *)(param_1 + 3) != '\x04') {
LAB_0033fba8:
      if (*(char *)(param_1 + 3) != '\t') goto LAB_0033fbc4;
      fVar15 = *(float *)(iVar12 + 0x221c) * fVar18;
      goto LAB_0033fbbc;
    }
    *(float *)(iVar12 + 0x221c) = *(float *)(iVar12 + 0x221c) * fVar18 * DAT_0033fc90;
  }
  else {
    if (sVar1 == 2) {
      if (*(char *)(param_1 + 3) == '\x0e') {
        fVar15 = *(float *)(iVar12 + 0x221c) * fVar18 * fVar7;
        goto LAB_0033fbbc;
      }
    }
    else if (sVar1 == 5) goto LAB_0033fba8;
LAB_0033fbc4:
    *(float *)(iVar12 + 0x221c) = *(float *)(iVar12 + 0x221c) * fVar18;
    if (iVar11 < *(int *)(param_1 + 0x1e8)) {
LAB_0033fbbc:
      *(float *)(iVar12 + 0x221c) = fVar15;
    }
  }
  uVar10 = *(ushort *)(param_2 + 0x104);
  bVar13 = uVar10 != 5;
  if (!bVar13) {
    uVar10 = (ushort)*(byte *)(param_1 + 3);
  }
  if (bVar13 || uVar10 != 9) {
    FUN_00373500(fVar4 * fVar6,fVar2,fVar2,param_1 + 0x1e8);
    FUN_00373500(*(undefined4 *)(param_1 + 0x1e8),fVar2,fVar18 * fVar5,param_1 + 0x1e4);
  }
  else {
    FUN_00373500(uVar8,fVar2,fVar2,param_1 + 0x1e8);
    FUN_00373500(*(undefined4 *)(param_1 + 0x1e8),fVar2,fVar18 * fVar3,param_1 + 0x1e4);
  }
LAB_0033fd14:
  *(undefined2 *)(DAT_0033fda8 + iVar12) = *(undefined2 *)(param_1 + 0x1ec);
  *(undefined4 *)(iVar12 + 0x229c) = *(undefined4 *)(param_1 + 0x1e4);
  return;
}

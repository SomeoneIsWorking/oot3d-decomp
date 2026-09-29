// OoT3D decomp @ 003e8c78  name=FUN_003e8c78  size=652

void FUN_003e8c78(int param_1,int param_2)

{
  float fVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;

  FUN_00370734(param_1 + 0x1a4);
  if ((*(uint *)(DAT_003e8f04 + param_2) +
       (uint)((ulonglong)*(uint *)(DAT_003e8f04 + param_2) * (ulonglong)DAT_003e8f08 >> 0x22) * -6
       == 3) && (*(uint *)(param_1 + 0xc4) < DAT_003e8f0c)) {
    FUN_0036f00c(*(undefined4 *)(param_1 + 0xcc),DAT_003e8f10,param_2,param_1,param_1 + 0x28,1,500,
                 10,1);
  }
  if ((*(char *)(param_1 + 0x49a) == '\0') && (*(uint *)(param_1 + 0xc4) < DAT_003e8f14)) {
    if (*(short *)(param_1 + 0x4ae) == 0) {
      FUN_00375bcc(param_1,DAT_003e8f1c);
    }
    else {
      FUN_00375bcc(param_1,DAT_003e8f18);
    }
    *(undefined1 *)(param_1 + 0x49a) = 1;
  }
  uVar3 = DAT_003e8f24;
  fVar1 = DAT_003e8f20;
  if (*(float *)(param_1 + 0xc4) < DAT_003e8f20) {
    FUN_0036fc20(DAT_003e8f24,*(undefined4 *)(param_1 + 0x4bc),param_1 + 0xc4);
    FUN_00373500(DAT_003e8f2c,uVar3,DAT_003e8f28,param_1 + 0x4bc);
    return;
  }
  *(float *)(param_1 + 0xc4) = DAT_003e8f20;
  *(float *)(param_1 + 0x4bc) = fVar1;
  fVar13 = DAT_003e8f30;
  if (*(short *)(param_1 + 0x4ae) == 0) {
    fVar6 = (float)FUN_00371e50(DAT_003e8f30);
    *(float *)(param_1 + 0x6c) = (fVar6 + DAT_003e8f34) * DAT_003e8f38;
  }
  iVar4 = *(int *)(param_2 + 0x20ac);
  bVar5 = false;
  fVar14 = *(float *)(iVar4 + 0x28);
  fVar15 = *(float *)(iVar4 + 0x30);
  fVar7 = (float)FUN_002cfca0((int)*(short *)(iVar4 + 0x2220));
  fVar7 = fVar7 * *(float *)(iVar4 + 0x221c);
  fVar8 = (float)FUN_00338f60((int)*(short *)(iVar4 + 0x2220));
  fVar8 = fVar8 * *(float *)(iVar4 + 0x221c);
  fVar9 = *(float *)(param_1 + 0x28);
  fVar10 = *(float *)(param_1 + 0x30);
  fVar6 = (fVar7 * fVar7 + fVar8 * fVar8) - *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x6c);
  fVar11 = ((fVar14 - fVar9) * fVar7 + fVar8 * (fVar15 - fVar10)) * DAT_003e8f3c;
  fVar13 = fVar11 * fVar11 -
           fVar6 * fVar13 *
           ((fVar9 - fVar14) * (fVar9 - fVar14) + (fVar10 - fVar15) * (fVar10 - fVar15));
  if (fVar1 <= fVar13) {
    fVar13 = SQRT(fVar13);
    fVar6 = fVar6 * DAT_003e8f3c;
    fVar12 = (fVar13 - fVar11) / fVar6;
    fVar6 = (-fVar11 - fVar13) / fVar6;
    if (fVar1 <= fVar12 || fVar1 <= fVar6) {
      if (fVar1 < fVar12) {
        fVar6 = fVar12;
      }
      uVar2 = FUN_003758b0((fVar15 + fVar8 * fVar6) - fVar10,(fVar14 + fVar7 * fVar6) - fVar9);
      goto LAB_003e8ec4;
    }
  }
  bVar5 = true;
  uVar2 = 0;
LAB_003e8ec4:
  *(undefined2 *)(param_1 + 0x36) = uVar2;
  if (bVar5) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  }
  *(undefined1 *)(param_1 + 0x498) = 0;
  uVar3 = DAT_003e8f44;
  if (*(short *)(param_1 + 0x4ae) == 0) {
    *(undefined2 *)(param_1 + 0x4a6) = 0xc3;
    uVar3 = DAT_003e8f40;
  }
  *(undefined4 *)(param_1 + 0x4a0) = uVar3;
  return;
}

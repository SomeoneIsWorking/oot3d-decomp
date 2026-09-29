// OoT3D decomp @ 00428c8c  name=FUN_00428c8c  size=456

uint FUN_00428c8c(void)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  if (*(int *)(DAT_00428cb8 + 0xc) == 0) {
    return DAT_00428cb8;
  }
  (**(code **)(**(int **)(DAT_00428cb8 + 8) + 0xc))();
  fVar9 = *DAT_0043f72c - DAT_0043f72c[6];
  fVar7 = DAT_0043f72c[1] - DAT_0043f72c[7];
  fVar11 = DAT_0043f72c[2] - DAT_0043f72c[8];
  fVar8 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar11 * fVar11);
  if (fVar8 != DAT_0043f730) {
    FUN_00333ed8(fVar7 / fVar8,*(undefined4 *)(DAT_0043f728 + 0x30));
  }
  fVar7 = DAT_0044af78;
  if (fVar11 == DAT_0044af6c && fVar9 == DAT_0044af6c) {
    return 0;
  }
  fVar8 = -fVar9;
  if (fVar11 < DAT_0044af6c) {
    fVar4 = -fVar11;
    if (fVar9 < DAT_0044af6c) {
      fVar6 = fVar4;
      fVar5 = fVar8;
      fVar11 = fVar4;
      fVar2 = DAT_0044af74;
      fVar10 = DAT_0044af7c;
      if (fVar4 < fVar8) goto LAB_0044af58;
    }
    else {
      fVar6 = fVar9;
      fVar5 = fVar4;
      fVar11 = fVar9;
      fVar2 = DAT_0044af7c;
      fVar10 = DAT_0044af70;
      if (fVar9 <= fVar4) goto LAB_0044af58;
    }
  }
  else if (fVar9 < DAT_0044af6c) {
    bVar1 = fVar8 <= fVar11;
    fVar6 = fVar8;
    fVar5 = fVar11;
    fVar11 = fVar8;
    fVar2 = DAT_0044af78;
    fVar10 = DAT_0044af74;
    if (bVar1) goto LAB_0044af58;
  }
  else {
    fVar6 = fVar11;
    fVar5 = fVar9;
    fVar2 = DAT_0044af70;
    fVar10 = DAT_0044af6c;
    if (fVar11 < fVar9) {
LAB_0044af58:
      fVar11 = (float)FUN_002e1adc(fVar6 / fVar5);
      fVar2 = fVar2 - fVar11;
      goto LAB_0044af38;
    }
  }
  fVar2 = (float)FUN_002e1adc(fVar5 / fVar11);
  fVar2 = fVar2 + fVar10;
LAB_0044af38:
  uVar3 = VectorFloatToUnsigned(fVar2 * fVar7,3);
  return uVar3 & 0xffff;
}

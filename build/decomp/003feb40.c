// OoT3D decomp @ 003feb40  name=FUN_003feb40  size=572

void FUN_003feb40(int param_1)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;

  fVar7 = *(float *)(param_1 + 0x34) * fRam003fed7c;
  fVar4 = *(float *)(param_1 + 0x38) * fRam003fed7c;
  fVar6 = *(float *)(param_1 + 0x3c) * fRam003fed7c;
  fVar5 = ABS(fVar4);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fRam003fed80 <= fVar6) << 0x1d;
  fVar6 = ABS(fVar6);
  for (fVar8 = ABS(fVar7); iRam003fed84 <= (int)fVar8; fVar8 = fVar8 - fRam003fed88) {
  }
  for (; iRam003fed84 <= (int)fVar5; fVar5 = fVar5 - fRam003fed88) {
  }
  for (; iRam003fed84 <= (int)fVar6; fVar6 = fVar6 - fRam003fed88) {
  }
  uVar9 = VectorFloatToUnsigned(fVar8,3);
  uVar10 = VectorFloatToUnsigned(fVar5,3);
  uVar11 = VectorFloatToUnsigned(fVar6,3);
  fVar14 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar2 = (float *)(iRam003fed8c + (uVar9 & 0xff) * 0x10);
  fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar12 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar3 = (float *)(iRam003fed8c + (uVar10 & 0xff) * 0x10);
  fVar13 = *pfVar2 + (fVar8 - fVar14) * pfVar2[2];
  fVar14 = pfVar2[1] + (fVar8 - fVar14) * pfVar2[3];
  pfVar2 = (float *)(iRam003fed8c + (uVar11 & 0xff) * 0x10);
  fVar8 = *pfVar3 + (fVar5 - fVar12) * pfVar3[2];
  fVar5 = pfVar3[1] + (fVar5 - fVar12) * pfVar3[3];
  fVar12 = *pfVar2 + (fVar6 - fVar15) * pfVar2[2];
  if (fVar7 < fRam003fed80) {
    fVar13 = -fVar13;
  }
  fVar6 = pfVar2[1] + (fVar6 - fVar15) * pfVar2[3];
  if (fVar4 < fRam003fed80) {
    fVar8 = -fVar8;
  }
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar12 = -fVar12;
  }
  *(float *)(param_1 + 0x4c) = fVar6 * fVar5;
  *(float *)(param_1 + 0x5c) = fVar12 * fVar5;
  *(float *)(param_1 + 0x70) = fVar13 * fVar5;
  *(float *)(param_1 + 0x74) = fVar14 * fVar5;
  *(float *)(param_1 + 0x50) = fVar13 * fVar6 * fVar8 - fVar14 * fVar12;
  *(float *)(param_1 + 100) = fVar14 * fVar12 * fVar8 - fVar13 * fVar6;
  *(float *)(param_1 + 0x54) = fVar13 * fVar12 + fVar14 * fVar6 * fVar8;
  *(float *)(param_1 + 0x60) = fVar14 * fVar6 + fVar13 * fVar12 * fVar8;
  *(float *)(param_1 + 0x6c) = -fVar8;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  func_0x003393ac(param_1 + 0x4c,param_1 + 0x40,param_1 + 0x4c);
  uStack_20 = *(undefined4 *)(param_1 + 0x24);
  uStack_1c = *(undefined4 *)(param_1 + 0x28);
  uStack_18 = *(undefined4 *)(param_1 + 0x2c);
  func_0x0032c78c(param_1 + 0x4c,&uStack_20,param_1 + 0x4c);
  return;
}

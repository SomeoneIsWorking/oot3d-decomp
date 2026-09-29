// OoT3D decomp @ 0040f758  name=FUN_0040f758  size=568

void FUN_0040f758(int *param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  iVar2 = *param_1;
  fVar8 = *(float *)(iVar2 + 0x10) * DAT_0040f990;
  fVar5 = *(float *)(iVar2 + 0x14) * DAT_0040f990;
  fVar7 = *(float *)(iVar2 + 0x18) * DAT_0040f990;
  fVar6 = ABS(fVar5);
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_0040f994 <= fVar7) << 0x1d;
  fVar7 = ABS(fVar7);
  for (fVar9 = ABS(fVar8); DAT_0040f998 <= (int)fVar9; fVar9 = fVar9 - DAT_0040f99c) {
  }
  for (; DAT_0040f998 <= (int)fVar6; fVar6 = fVar6 - DAT_0040f99c) {
  }
  for (; DAT_0040f998 <= (int)fVar7; fVar7 = fVar7 - DAT_0040f99c) {
  }
  uVar11 = VectorFloatToUnsigned(fVar9,3);
  uVar12 = VectorFloatToUnsigned(fVar6,3);
  uVar13 = VectorFloatToUnsigned(fVar7,3);
  fVar15 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar14 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar3 = (float *)(DAT_0040f9a0 + (uVar11 & 0xff) * 0x10);
  fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar4 = (float *)(DAT_0040f9a0 + (uVar12 & 0xff) * 0x10);
  fVar16 = *pfVar3 + (fVar9 - fVar14) * pfVar3[2];
  fVar10 = pfVar3[1] + (fVar9 - fVar14) * pfVar3[3];
  pfVar3 = (float *)(DAT_0040f9a0 + (uVar13 & 0xff) * 0x10);
  fVar14 = pfVar4[1] + (fVar6 - fVar15) * pfVar4[3];
  fVar9 = *pfVar4 + (fVar6 - fVar15) * pfVar4[2];
  fVar6 = *pfVar3 + (fVar7 - fVar17) * pfVar3[2];
  if (fVar8 < DAT_0040f994) {
    fVar16 = -fVar16;
  }
  fVar7 = pfVar3[1] + (fVar7 - fVar17) * pfVar3[3];
  if (fVar5 < DAT_0040f994) {
    fVar9 = -fVar9;
  }
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar6 = -fVar6;
  }
  *param_2 = fVar7 * fVar14;
  param_2[4] = fVar6 * fVar14;
  param_2[9] = fVar16 * fVar14;
  param_2[10] = fVar10 * fVar14;
  param_2[1] = fVar16 * fVar7 * fVar9 - fVar10 * fVar6;
  param_2[6] = fVar10 * fVar6 * fVar9 - fVar16 * fVar7;
  param_2[2] = fVar16 * fVar6 + fVar10 * fVar7 * fVar9;
  param_2[5] = fVar10 * fVar7 + fVar16 * fVar6 * fVar9;
  param_2[8] = -fVar9;
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  iVar2 = *param_1;
  local_20 = *(undefined4 *)(iVar2 + 0x1c);
  local_1c = *(undefined4 *)(iVar2 + 0x20);
  local_18 = *(undefined4 *)(iVar2 + 0x24);
  FUN_0032c78c(param_2,&local_20,param_2);
  return;
}

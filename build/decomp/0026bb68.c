// OoT3D decomp @ 0026bb68  name=FUN_0026bb68  size=528

/* WARNING: Removing unreachable block (ram,0x0026bcc8) */
/* WARNING: Removing unreachable block (ram,0x0026bcd4) */

void FUN_0026bb68(int param_1)

{
  uint uVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;

  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_0026bd78 <= fVar5 * DAT_0026bd7c) << 0x1d;
  for (fVar5 = ABS(fVar5 * DAT_0026bd7c); fVar12 = DAT_0026bd78, DAT_0026bd80 <= (int)fVar5;
      fVar5 = fVar5 - DAT_0026bd84) {
  }
  for (; fVar2 = DAT_0026bd78, DAT_0026bd80 <= (int)fVar12; fVar12 = fVar12 - DAT_0026bd84) {
  }
  for (; DAT_0026bd80 <= (int)fVar2; fVar2 = fVar2 - DAT_0026bd84) {
  }
  uVar7 = VectorFloatToUnsigned(fVar5,3);
  uVar8 = VectorFloatToUnsigned(fVar12,3);
  uVar9 = VectorFloatToUnsigned(fVar2,3);
  fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar3 = (float *)(DAT_0026bd88 + (uVar7 & 0xff) * 0x10);
  fVar13 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
  pfVar4 = (float *)(DAT_0026bd88 + (uVar8 & 0xff) * 0x10);
  fVar6 = *pfVar3 + (fVar5 - fVar10) * pfVar3[2];
  fVar10 = pfVar3[1] + (fVar5 - fVar10) * pfVar3[3];
  pfVar3 = (float *)(DAT_0026bd88 + (uVar9 & 0xff) * 0x10);
  local_34 = pfVar4[1] + (fVar12 - fVar11) * pfVar4[3];
  local_24 = *pfVar4 + (fVar12 - fVar11) * pfVar4[2];
  fVar5 = *pfVar3 + (fVar2 - fVar13) * pfVar3[2];
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar6 = -fVar6;
  }
  fVar12 = pfVar3[1] + (fVar2 - fVar13) * pfVar3[3];
  local_1c = fVar10 * local_34;
  local_20 = fVar6 * local_34;
  local_44 = fVar12 * local_34;
  local_34 = fVar5 * local_34;
  local_40 = fVar6 * fVar12 * local_24 - fVar10 * fVar5;
  local_2c = fVar10 * fVar5 * local_24 - fVar6 * fVar12;
  local_3c = fVar6 * fVar5 + fVar10 * fVar12 * local_24;
  local_30 = fVar10 * fVar12 + fVar6 * fVar5 * local_24;
  local_24 = -local_24;
  local_38 = 0;
  local_28 = 0;
  local_18 = 0;
  FUN_0036c174(param_1 + 0x148,param_1 + 0x148,&local_44);
  *(undefined1 *)(*(int *)(param_1 + 0x204) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x204),param_1 + 0x148);
  FUN_00372170(*(undefined4 *)(param_1 + 0x204),0);
  return;
}

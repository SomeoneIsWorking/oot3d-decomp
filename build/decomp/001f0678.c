// OoT3D decomp @ 001f0678  name=FUN_001f0678  size=480

void FUN_001f0678(int param_1)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  fVar3 = DAT_001f085c;
  piVar2 = DAT_001f0858;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001f0858 + 0x149a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (fVar6 + DAT_001f085c) - DAT_001f0860;
  uVar5 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1c4) == fVar6) << 0x1e |
          (uint)(fVar6 <= *(float *)(param_1 + 0x1c4)) << 0x1d;
  bVar1 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    FUN_0037547c(DAT_001f086c,param_1 + 0x28,4,DAT_001f0868,DAT_001f0868,DAT_001f0864);
  }
  *(short *)(param_1 + 0x1be) = *(short *)(param_1 + 0x1be) + *(short *)(param_1 + 0x1b6);
  *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + *(short *)(param_1 + 0x1b4);
  *(short *)(param_1 + 0x1ba) = *(short *)(param_1 + 0x1b2) + *(short *)(param_1 + 0x1ba);
  iVar4 = *piVar2;
  *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + *(short *)(iVar4 + 0x1498) + 1000;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x149a),(byte)(uVar5 >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x149a),(byte)(uVar5 >> 0x15) & 3);
  fVar6 = ((fVar6 + fVar3) - *(float *)(param_1 + 0x1c4)) / (fVar8 + fVar3);
  uVar5 = uVar5 & 0xfffffff | (uint)(DAT_001f0870 <= fVar6) << 0x1d;
  if (!SUB41(uVar5 >> 0x1d,0)) {
    fVar6 = DAT_001f0870;
  }
  fVar8 = (float)VectorUnsignedToFloat(*(short *)(iVar4 + 0x148c) + 0xff,(byte)(uVar5 >> 0x15) & 3);
  *(int *)(param_1 + 0x1c8) = (int)(fVar8 * fVar6);
  fVar8 = DAT_001f0874;
  fVar7 = (float)VectorUnsignedToFloat(*(short *)(iVar4 + 0x1494) + 0xff,(byte)(uVar5 >> 0x15) & 3);
  *(int *)(param_1 + 0x1cc) = (int)(fVar7 * fVar6);
  fVar7 = DAT_001f0878;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x147a),(byte)(uVar5 >> 0x15) & 3);
  *(float *)(param_1 + 0x1d0) = (fVar9 + fVar8) * fVar6;
  iVar4 = *piVar2;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x147c),(byte)(uVar5 >> 0x15) & 3);
  *(float *)(param_1 + 0x1d4) = (fVar9 + fVar7) * fVar6;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x147e),(byte)(uVar5 >> 0x15) & 3);
  *(float *)(param_1 + 0x1d8) = (fVar7 + fVar8) * fVar6;
  fVar6 = *(float *)(param_1 + 0x1c4) + DAT_001f087c;
  *(float *)(param_1 + 0x1c4) = fVar6;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x149a),(byte)(uVar5 >> 0x15) & 3);
  if (fVar8 + fVar3 <= fVar6) {
    FUN_00374428(param_1);
    return;
  }
  return;
}

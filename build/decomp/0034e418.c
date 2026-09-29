// OoT3D decomp @ 0034e418  name=FUN_0034e418  size=220

void FUN_0034e418(int param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  fVar2 = DAT_0034e4f8;
  bVar1 = *(byte *)(param_1 + 0x2fa);
  iVar4 = DAT_0034e4f4 + *(short *)(param_1 + 0x1c) * 0x40 + (uint)bVar1 * 8;
  pfVar5 = (float *)(DAT_0034e4f4 + 0x388 + (uint)(bVar1 >> 2) * 0xc);
  iVar3 = *(int *)(param_1 + (uint)bVar1 * 4 + 0x2a4);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 2),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = *(float *)(param_1 + 0x378);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 2),(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 4),(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 6),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = pfVar5[1];
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 4),(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = pfVar5[2];
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 6),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(iVar3 + 0x28) =
       *(float *)(*(int *)(param_1 + 0x2c4) + 0x28) + fVar8 + (*pfVar5 - fVar7) * fVar6;
  *(float *)(iVar3 + 0x2c) =
       *(float *)(*(int *)(param_1 + 0x2c4) + 0x2c) + fVar10 + (fVar9 - fVar11) * fVar6;
  *(float *)(iVar3 + 0x30) =
       *(float *)(*(int *)(param_1 + 0x2c4) + 0x30) + fVar13 + (fVar12 - fVar14) * fVar6;
  *(float *)(iVar3 + 0x1fc) = fVar2 - *(float *)(param_1 + 0x378);
  return;
}

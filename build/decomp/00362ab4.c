// OoT3D decomp @ 00362ab4  name=FUN_00362ab4  size=444

void FUN_00362ab4(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;

  uVar2 = DAT_00362c74;
  local_28 = *DAT_00362c70;
  uStack_24 = DAT_00362c70[1];
  uStack_20 = DAT_00362c70[2];
  FUN_00362a4c(DAT_00362c74,param_1 + 0x26c,DAT_00362c70 + -6);
  fVar14 = DAT_00362c84;
  *(undefined4 *)(param_1 + 0x254) = DAT_00362c78;
  iVar3 = DAT_00362c7c;
  *(short *)(param_1 + 0x21a) = (short)param_3;
  sVar1 = *(short *)((int)&local_28 + param_3 * 2);
  pfVar7 = (float *)(iVar3 + param_3 * 0x10);
  *(short *)(param_1 + 0x21c) = sVar1;
  fVar4 = DAT_00362c88;
  fVar9 = DAT_00362c80;
  fVar8 = fVar14 + *pfVar7 * DAT_00362c80;
  *(float *)(param_1 + 0x28) = fVar8;
  fVar13 = DAT_00362c8c;
  *(float *)(param_1 + 0x2c) = pfVar7[1] + fVar4;
  fVar12 = pfVar7[2] * fVar9 - fVar13;
  *(float *)(param_1 + 0x30) = fVar12;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(pfVar7 + 3);
  pfVar7 = (float *)(iVar3 + sVar1 * 0x10);
  fVar14 = fVar14 + *pfVar7 * fVar9;
  *(float *)(param_1 + 0x1e4) = fVar14;
  fVar4 = DAT_00362c90;
  *(float *)(param_1 + 0x1e8) = pfVar7[1];
  fVar5 = DAT_00362c98;
  fVar10 = DAT_00362c94;
  fVar13 = pfVar7[2] * fVar9 - fVar13;
  *(float *)(param_1 + 0x1ec) = fVar13;
  fVar9 = ABS(fVar14 - fVar8) * fVar4 * fVar10;
  *(float *)(param_1 + 0x1f0) = fVar9;
  if ((int)fVar9 < 0x3f800001) {
    fVar9 = fVar5;
  }
  *(float *)(param_1 + 0x1f0) = fVar9;
  fVar10 = ABS(fVar13 - fVar12) * fVar4 * fVar10;
  *(float *)(param_1 + 500) = fVar10;
  piVar6 = DAT_00362c9c;
  if ((int)fVar10 < 0x3f800001) {
    fVar10 = fVar5;
  }
  *(float *)(param_1 + 500) = fVar10;
  uVar11 = DAT_00362ca8;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x22c) = (short)(int)(DAT_00362ca0 / fVar9 + DAT_00362ca4);
  *(undefined4 *)(param_1 + 0x54) = uVar11;
  *(undefined4 *)(param_1 + 0x58) = uVar11;
  *(undefined4 *)(param_1 + 0x5c) = DAT_00362cac;
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  uVar11 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x240) = uVar11;
  uVar11 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa83),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x244) = uVar11;
  uVar11 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0xa84),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x248) = uVar11;
  *(undefined4 *)(param_1 + 0x24c) = uVar2;
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  *(undefined2 *)(param_1 + 0x238) = 0;
  *(undefined2 *)(param_1 + 0x21e) = 0;
  *(undefined2 *)(param_1 + 0x220) = 0;
  return;
}

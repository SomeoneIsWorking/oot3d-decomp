// OoT3D decomp @ 00497aa0  name=FUN_00497aa0  size=416

void FUN_00497aa0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;

  fVar3 = DAT_00497c5c;
  uVar2 = DAT_00497c58;
  fVar1 = DAT_00497c50;
  fVar8 = DAT_00497c48;
  fVar6 = DAT_00497c44;
  iVar7 = DAT_00497c40;
  iVar4 = 0;
  iVar5 = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = DAT_00497c44;
  if (DAT_00497c40 < iVar5) {
    fVar9 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar5 = VectorFloatToUnsigned(fVar9 * DAT_00497c48,3);
  *(int *)(param_1 + 0x98) = iVar5 * 0xa0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  fVar9 = DAT_00497c4c;
  iVar5 = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  if (iVar7 < iVar5) {
    fVar6 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar7 = VectorFloatToUnsigned(fVar6 * fVar8,3);
  *(int *)(param_1 + 0xa0) = iVar7 * 0xa0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x2c);
  fVar6 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x30);
  fVar6 = fVar6 * fVar9 * DAT_00497c54;
  do {
    iVar7 = param_1 + iVar4 * 4;
    *(undefined4 *)(iVar7 + 0xb0) = 0;
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0xa8),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)FUN_0030b8d8(uVar2,(fVar8 * fVar1) / fVar6);
    iVar4 = iVar4 + 1;
    *(int *)(iVar7 + 0xb8) = (int)(fVar8 * fVar3);
    fVar8 = DAT_00497c68;
    iVar7 = DAT_00497c60;
  } while (iVar4 < 2);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(int *)(param_1 + 200) = (int)(*(float *)(param_1 + 0x10) * fVar3);
  *(int *)(param_1 + 0xdc) = (int)(*(float *)(param_1 + 0x1c) * fVar3);
  *(int *)(param_1 + 0xe0) = (int)(*(float *)(param_1 + 0x20) * fVar3);
  fVar6 = *(float *)(param_1 + 0x14);
  if (iVar7 < (int)*(float *)(param_1 + 0x14)) {
    fVar6 = DAT_00497c64;
  }
  *(int *)(param_1 + 0xe4) = (int)((fVar8 - fVar6) * fVar3);
  *(int *)(param_1 + 0xe8) = (int)(fVar6 * fVar3);
  FUN_0032b184(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  return;
}

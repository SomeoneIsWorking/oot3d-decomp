// OoT3D decomp @ 004937b8  name=FUN_004937b8  size=284

void FUN_004937b8(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  int iVar6;
  int iVar7;
  int iVar8;

  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 4);
  fVar2 = DAT_004938dc;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xc);
  iVar1 = DAT_004938d4;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x34);
  fVar3 = *(float *)(param_1 + 4);
  iVar6 = VectorUnsignedToFloat(fVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = *(int *)(param_1 + 0x24) + 0x1fU & 0xffffffe0;
  if (iVar6 <= iVar1) {
    fVar3 = DAT_004938d8;
  }
  if (iVar1 < iVar6) {
    fVar3 = (float)VectorUnsignedToFloat(fVar3,(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar6 = VectorFloatToUnsigned(fVar3 * fVar2,3);
  iVar8 = VectorUnsignedToFloat(*(float *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = DAT_004938d8;
  if (iVar1 < iVar8) {
    fVar3 = *(float *)(param_1 + 0xc);
  }
  *(uint *)(param_1 + 0x38) = uVar4;
  iVar5 = uVar4 + iVar6 * 0x280;
  *(int *)(param_1 + 0x48) = iVar5;
  if (iVar1 < iVar8) {
    fVar3 = (float)VectorUnsignedToFloat(fVar3,(byte)(in_fpscr >> 0x15) & 3);
  }
  iVar1 = *(int *)(param_1 + 0x2c) * 4;
  iVar8 = *(int *)(param_1 + 0x30) * 4;
  iVar7 = VectorFloatToUnsigned(fVar3 * fVar2,3);
  iVar5 = iVar5 + iVar7 * 0x280;
  *(int *)(param_1 + 0x58) = iVar5;
  iVar5 = iVar5 + iVar1;
  *(int *)(param_1 + 0x5c) = iVar5;
  iVar5 = iVar5 + iVar8;
  *(int *)(param_1 + 0x78) = iVar5;
  iVar5 = iVar5 + *(int *)(param_1 + 0x34) * 4;
  iVar6 = iVar6 * 0x280 + iVar5;
  *(int *)(param_1 + 0x3c) = iVar5;
  *(int *)(param_1 + 0x4c) = iVar6;
  iVar6 = iVar6 + iVar7 * 0x280;
  *(int *)(param_1 + 0x60) = iVar6;
  iVar6 = iVar6 + iVar1;
  *(int *)(param_1 + 100) = iVar6;
  *(int *)(param_1 + 0x7c) = iVar6 + iVar8;
  FUN_00497aa0(param_1);
  *(undefined1 *)(param_1 + 0x100) = 1;
  return;
}

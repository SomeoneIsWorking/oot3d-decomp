// OoT3D decomp @ 003a4e2c  name=FUN_003a4e2c  size=340

void FUN_003a4e2c(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  uVar7 = DAT_003a4f90;
  fVar10 = DAT_003a4f8c;
  fVar4 = DAT_003a4f88;
  fVar8 = DAT_003a4f84;
  piVar3 = DAT_003a4f80;
  iVar5 = *DAT_003a4f80;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_3 + 0xc) =
       *(float *)(param_3 + 0xc) * (DAT_003a4f8c - fVar9 * DAT_003a4f84 * DAT_003a4f88);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_3 + 0x14) = *(float *)(param_3 + 0x14) * (fVar10 - fVar9 * fVar8 * fVar4);
  uVar6 = FUN_003738a8(uVar7);
  *(undefined4 *)(param_3 + 0x18) = uVar6;
  uVar7 = FUN_003738a8(uVar7);
  *(undefined4 *)(param_3 + 0x20) = uVar7;
  fVar8 = DAT_003a4f94;
  sVar2 = *(short *)(param_3 + 0x58);
  fVar10 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if (sVar2 < 1) {
    fVar10 = fVar10 * fVar9 * fVar4 - DAT_003a4f94;
  }
  else {
    fVar10 = DAT_003a4f94 + fVar10 * fVar9 * fVar4;
  }
  sVar1 = (short)(int)fVar10 + *(short *)(param_3 + 0x56);
  *(short *)(param_3 + 0x56) = sVar1;
  if (sVar1 < 0) {
    *(undefined2 *)(param_3 + 0x56) = 0;
    *(short *)(param_3 + 0x58) = -sVar2;
  }
  else if (0xff < sVar1) {
    *(undefined2 *)(param_3 + 0x56) = 0xff;
    *(short *)(param_3 + 0x58) = -sVar2;
  }
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x44),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_3 + 0x44) < 1) {
    fVar8 = fVar10 * fVar9 * fVar4 - fVar8;
  }
  else {
    fVar8 = fVar8 + fVar10 * fVar9 * fVar4;
  }
  *(short *)(param_3 + 0x46) = (short)(int)fVar8 + *(short *)(param_3 + 0x46);
  return;
}

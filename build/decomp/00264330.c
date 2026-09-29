// OoT3D decomp @ 00264330  name=FUN_00264330  size=380

void FUN_00264330(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  iVar7 = (int)*(short *)(param_3 + 0x5a);
  sVar1 = *(short *)(param_3 + 0x60);
  sVar5 = FUN_00368d94((iVar7 - sVar1) * 0x10 + -0x10,iVar7);
  *(short *)(param_3 + 0x46) = sVar5;
  if (0x10 < sVar5) {
    sVar5 = 0x10;
  }
  *(short *)(param_3 + 0x46) = sVar5;
  fVar4 = DAT_002644b8;
  fVar3 = DAT_002644b4;
  fVar2 = DAT_002644b0;
  iVar6 = *DAT_002644ac;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x56),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_3 + 0x56) < 1) {
    fVar8 = fVar8 * fVar9 * DAT_002644b0 - DAT_002644b4;
  }
  else {
    fVar8 = DAT_002644b4 + fVar8 * fVar9 * DAT_002644b0;
  }
  *(short *)(param_3 + 0x44) = (short)(int)fVar8 + *(short *)(param_3 + 0x44);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  sVar5 = *(short *)(param_3 + 0x48) - (short)(int)(fVar3 + fVar8 * fVar4 * fVar2);
  *(short *)(param_3 + 0x48) = sVar5;
  if (sVar5 < 0) {
    *(undefined2 *)(param_3 + 0x48) = 0;
  }
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  sVar5 = *(short *)(param_3 + 0x4a) - (short)(int)(fVar3 + fVar8 * fVar4 * fVar2);
  *(short *)(param_3 + 0x4a) = sVar5;
  if (sVar5 < 0) {
    *(undefined2 *)(param_3 + 0x4a) = 0;
  }
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  sVar5 = *(short *)(param_3 + 0x4c) - (short)(int)(fVar3 + fVar8 * fVar4 * fVar2);
  *(short *)(param_3 + 0x4c) = sVar5;
  if (sVar5 < 0) {
    *(undefined2 *)(param_3 + 0x4c) = 0;
  }
  if ((*(short *)(param_3 + 0x58) != 0) && (iVar7 + -2 == (int)sVar1)) {
    FUN_0037547c(DAT_002644c4,param_3,4,DAT_002644c0,DAT_002644c0,DAT_002644bc);
  }
  return;
}

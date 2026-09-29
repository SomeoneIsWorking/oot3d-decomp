// OoT3D decomp @ 00212290  name=FUN_00212290  size=264

void FUN_00212290(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;

  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_00212398,0,param_1,0);
    return;
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 * DAT_0021239c;
  if (fVar2 != DAT_002123a0) {
    fVar1 = (float)FUN_003727f0();
    fVar2 = (float)FUN_00372674(fVar2);
    fVar3 = *(float *)(param_1 + 0x148);
    *(float *)(param_1 + 0x148) = fVar3 * fVar2 + *(float *)(param_1 + 0x14c) * fVar1;
    *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0x14c) * fVar2 - fVar3 * fVar1;
    fVar3 = *(float *)(param_1 + 0x158);
    *(float *)(param_1 + 0x158) = fVar3 * fVar2 + *(float *)(param_1 + 0x15c) * fVar1;
    *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) * fVar2 - fVar3 * fVar1;
    fVar3 = *(float *)(param_1 + 0x168);
    *(float *)(param_1 + 0x168) = fVar3 * fVar2 + *(float *)(param_1 + 0x16c) * fVar1;
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) * fVar2 - fVar3 * fVar1;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x8a8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x8a8),param_1 + 0x148);
  FUN_00372170(*(undefined4 *)(param_1 + 0x8a8),0);
  return;
}

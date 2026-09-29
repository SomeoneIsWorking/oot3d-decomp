// OoT3D decomp @ 004879a0  name=FUN_004879a0  size=104

void FUN_004879a0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;

  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < uVar1) {
    if (uVar2 + param_2 <= uVar1) {
      *(uint *)(param_1 + 0x10) = uVar2 + param_2;
      return;
    }
    param_2 = param_2 - (uVar1 - uVar2);
    *(uint *)(param_1 + 0x10) = uVar1;
  }
  fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 4) * fVar4 * DAT_00487a08;
  fVar3 = (float)VectorSignedToFloat((int)fVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x14) = fVar4 - fVar3;
  return;
}

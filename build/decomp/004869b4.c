// OoT3D decomp @ 004869b4  name=FUN_004869b4  size=172

void FUN_004869b4(int param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;

  uVar2 = DAT_00486a60;
  param_1 = param_1 + param_2 * 0x10;
  if (param_3 == 0) {
    FUN_00309d80();
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x2c)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    uVar1 = (ulonglong)DAT_00486a64;
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x2c)) {
      fVar3 = *(float *)(param_1 + 0x24);
      fVar4 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x30),(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x2c),(byte)(in_fpscr >> 0x15) & 3);
      fVar3 = ((*(float *)(param_1 + 0x28) - fVar3) * fVar4) / fVar5 + fVar3;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x28);
    }
    *(float *)(param_1 + 0x24) = fVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(uint *)(param_1 + 0x2c) = (uint)((param_3 + 4) * uVar1 >> 0x22);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

// OoT3D decomp @ 0015e60c  name=FUN_0015e60c  size=256

void FUN_0015e60c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;

  uVar2 = DAT_0015e70c;
  if (*(short *)(param_1 + 0x1c) == 1) {
    uVar2 = DAT_0015e710;
  }
  iVar1 = FUN_003705a0(uVar2,DAT_0015e714,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  fVar4 = DAT_0015e718;
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 0x1c) != 1) {
      *(undefined2 *)(param_1 + 0x280) = 0x3c;
      *(float *)(param_1 + 100) = fVar4;
      fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      fVar4 = DAT_0015e724;
      *(float *)(param_1 + 0x60) = fVar3 * DAT_0015e724;
      fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      uVar2 = DAT_0015e728;
      *(float *)(param_1 + 0x68) = fVar3 * fVar4;
      *(undefined4 *)(param_1 + 0x1a4) = uVar2;
      return;
    }
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0015e71c;
    fVar3 = (float)FUN_0035a4fc(param_1,param_1 + 0x284);
    fVar4 = fVar4 / (fVar3 + fVar4);
    *(float *)(param_1 + 0x60) = (*(float *)(param_1 + 0x284) - *(float *)(param_1 + 0x28)) * fVar4;
    *(float *)(param_1 + 100) = (*(float *)(param_1 + 0x288) - *(float *)(param_1 + 0x2c)) * fVar4;
    *(float *)(param_1 + 0x68) = (*(float *)(param_1 + 0x28c) - *(float *)(param_1 + 0x30)) * fVar4;
    *(undefined4 *)(param_1 + 0x290) = DAT_0015e720;
    *(undefined2 *)(param_1 + 0x280) = 0xf0;
  }
  return;
}

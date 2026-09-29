// OoT3D decomp @ 003829c0  name=FUN_003829c0  size=228

void FUN_003829c0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;

  if (*(short *)(param_1 + 0x1bc) != 0) {
    sVar1 = *(short *)(param_1 + 0x1bc) + -1;
    *(short *)(param_1 + 0x1bc) = sVar1;
    if (sVar1 != 0) goto LAB_003829fc;
  }
  *(undefined2 *)(param_1 + 0x1bc) = 3;
LAB_003829fc:
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x100;
  fVar4 = (float)FUN_002cfca0();
  fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  iVar3 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x1dc) + iVar3 * 0x50;
    iVar3 = iVar3 + 1;
    *(float *)(iVar2 + 0x38) =
         *(float *)(iVar2 + 0x28) * fVar5 + fVar4 * *(float *)(iVar2 + 0x30) +
         *(float *)(param_1 + 8);
    *(float *)(iVar2 + 0x3c) = *(float *)(param_1 + 0xc) + *(float *)(iVar2 + 0x2c);
    *(float *)(iVar2 + 0x40) =
         (*(float *)(param_1 + 0x10) - fVar4 * *(float *)(iVar2 + 0x28)) +
         fVar5 * *(float *)(iVar2 + 0x30);
  } while (iVar3 < 6);
  FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1c0);
  FUN_00373264(param_1,DAT_00382aa4);
  return;
}

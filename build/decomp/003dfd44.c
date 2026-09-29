// OoT3D decomp @ 003dfd44  name=FUN_003dfd44  size=248

void FUN_003dfd44(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar3 = fRam003dfe40;
  fVar5 = fRam003dfe3c;
  if (*(short *)(param_1 + 0x1c0) != 0) {
    *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + -1;
  }
  fVar1 = fRam003dfe50;
  if (*(short *)(param_1 + 0x36) == *(short *)(param_1 + 0x16)) {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c0),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar3 = (float)FUN_003727f0((fVar4 * fVar5 - fVar3) * fRam003dfe44 * fRam003dfe48 * fRam003dfe4c
                               );
    fVar5 = fRam003dfe58;
  }
  else {
    fVar4 = (float)VectorSignedToFloat(0x5a - *(short *)(param_1 + 0x1c0),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)FUN_003727f0((fVar4 * fVar5 - fVar3) * fRam003dfe44 * fRam003dfe48 * fRam003dfe4c
                               );
    fVar5 = fRam003dfe54;
  }
  fVar5 = (fVar3 + fVar1) * fVar5;
  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar5 * fVar3;
  fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar5 * fVar3;
  if (*(short *)(param_1 + 0x1c0) == 0) {
    *(undefined2 *)(param_1 + 0x1c0) = 0x1e;
    *(undefined4 *)(param_1 + 0x1bc) = uRam003dfe5c;
  }
  uVar2 = uRam003dfe60;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return;
}

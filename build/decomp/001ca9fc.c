// OoT3D decomp @ 001ca9fc  name=FUN_001ca9fc  size=168

void FUN_001ca9fc(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  if ((*(short *)(param_1 + 0x29c) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x29c) + -1, *(short *)(param_1 + 0x29c) = sVar1, sVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001caaa4;
  }
  iVar3 = (int)(short)(*(short *)(param_1 + 0x29c) % 4 + -2);
  if (iVar3 == -2) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(short)(iVar3 << 1);
  }
  fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar5 * fVar4;
  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  uVar2 = DAT_001caaa8;
  fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar5 * fVar4;
  FUN_00373264(param_1,uVar2);
  return;
}

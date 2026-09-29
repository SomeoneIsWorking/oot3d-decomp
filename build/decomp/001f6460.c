// OoT3D decomp @ 001f6460  name=FUN_001f6460  size=156

void FUN_001f6460(int param_1,int param_2)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;

  fVar2 = DAT_001f65ec;
  FUN_00370734(param_1 + 0x1bc);
  fVar3 = DAT_001f65f8;
  uVar1 = (undefined2)DAT_001f65f0;
  *(undefined2 *)(param_1 + 0x24e) = uVar1;
  *(undefined2 *)(param_1 + 0x284) = uVar1;
  VectorSignedToFloat((int)*(short *)(param_2 + 0x3220),(byte)(in_fpscr >> 0x15) & 3);
  VectorSignedToFloat((int)*(short *)(param_2 + 0x3222),(byte)(in_fpscr >> 0x15) & 3);
  VectorSignedToFloat((int)*(short *)(param_2 + 0x3224),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = *(float *)(param_2 + 0x3228);
  if (DAT_001f65f4 < (int)*(float *)(param_2 + 0x3228)) {
    fVar4 = fVar3;
  }
  *(float *)(param_2 + 0x3228) = fVar4;
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  *(float *)(param_2 + 0x3228) = fVar4;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}

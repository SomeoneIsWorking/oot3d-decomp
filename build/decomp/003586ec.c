// OoT3D decomp @ 003586ec  name=FUN_003586ec  size=136

void FUN_003586ec(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;

  fVar3 = *(float *)(param_1 + 8);
  uVar2 = *(undefined4 *)(**(int **)(param_1 + 4) + *(int *)(**(int **)(param_1 + 4) + 0x14) + 4);
  fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar3 < fVar4) << 0x1f;
  if (SUB41(uVar1 >> 0x1f,0) == (NAN(fVar3) || NAN(fVar4))) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(uVar1 >> 0x15) & 3);
    }
    else {
      fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(uVar1 >> 0x15) & 3);
      fVar3 = fVar3 - fVar4;
    }
    *(float *)(param_1 + 8) = fVar3;
  }
  else {
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00358774 <= fVar3) << 0x1d;
    if (!SUB41(uVar1 >> 0x1d,0)) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        *(float *)(param_1 + 8) = DAT_00358774;
        return;
      }
      fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(uVar1 >> 0x15) & 3);
      *(float *)(param_1 + 8) = fVar3 + fVar4;
      return;
    }
  }
  return;
}

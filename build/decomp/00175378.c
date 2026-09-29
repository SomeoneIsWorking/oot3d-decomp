// OoT3D decomp @ 00175378  name=FUN_00175378  size=132

void FUN_00175378(int param_1)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  float fVar3;
  float fVar4;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x9ed) = 0;
    *(undefined4 *)(param_1 + 0xa90) = DAT_001753fc;
    FUN_0036efa8(param_1);
    return;
  }
  fVar3 = (float)VectorSignedToFloat((int)*(float *)(param_1 + 0x1ec),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat((int)*(float *)(param_1 + 0x1ec),(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorFloatToUnsigned(((fVar3 - *(float *)(param_1 + 0x1e0)) * DAT_00175400) / fVar4,3);
  *(char *)(param_1 + 0x9ed) = (char)uVar2;
  return;
}

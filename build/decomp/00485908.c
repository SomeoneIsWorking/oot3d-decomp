// OoT3D decomp @ 00485908  name=FUN_00485908  size=156

void FUN_00485908(int param_1,uint param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;

  if (16000 < param_2) {
    param_2 = 16000;
  }
  fVar2 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)FUN_00372298(fVar2 * DAT_00485984);
  fVar2 = DAT_00485988 - fVar2;
  fVar2 = SQRT(fVar2 * fVar2 - DAT_0048598c) - fVar2;
  fVar3 = fVar2 * DAT_00485990;
  *(short *)(param_1 + 8) = (short)(int)((fVar2 + DAT_0048598c) * DAT_00485990);
  *(short *)(param_1 + 10) = -(short)(int)fVar3;
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_1 + 10);
  *(ushort *)(iVar1 + 0x7c) = *(ushort *)(iVar1 + 0x7c) | 8;
  return;
}

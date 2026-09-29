// OoT3D decomp @ 00121024  name=FUN_00121024  size=228

void FUN_00121024(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  uint in_fpscr;
  float fVar3;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00121108;
  if (*(short *)(param_1 + 0x22c) != 0) {
    *(short *)(param_1 + 0x22c) = *(short *)(param_1 + 0x22c) + -1;
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    sVar2 = *(short *)(param_1 + 0x92) + -0x8000;
  }
  else {
    sVar2 = *(short *)(param_1 + 0x82);
  }
  *(short *)(param_1 + 0x22e) = sVar2;
  FUN_00370378(param_1 + 0x36,(int)sVar2,uVar1);
  FUN_00370378(param_1 + 0xbc,0,0x200);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x22c),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0x22c) < 1) {
    fVar3 = fVar3 * DAT_0012110c * DAT_00121110 - DAT_00121114;
  }
  else {
    fVar3 = DAT_00121114 + fVar3 * DAT_0012110c * DAT_00121110;
  }
  fVar3 = (float)VectorSignedToFloat((int)fVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)FUN_003727f0(fVar3 * DAT_00121118);
  *(short *)(param_1 + 0xc0) = (short)(int)(fVar3 * DAT_0012111c);
  if (*(short *)(param_1 + 0x22c) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x7f9) = *(byte *)(param_1 + 0x7f9) | 1;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  FUN_00364394(param_1);
  return;
}

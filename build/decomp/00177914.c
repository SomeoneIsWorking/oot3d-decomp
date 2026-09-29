// OoT3D decomp @ 00177914  name=FUN_00177914  size=136

void FUN_00177914(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;

  fVar3 = DAT_0017799c;
  if (*(short *)(param_1 + 0x1c2) != 0) {
    *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c2),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)FUN_00372674(fVar2 * fVar3);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar3 * DAT_001779a0;
  uVar1 = DAT_001779a4;
  if (*(short *)(param_1 + 0x1c2) == 0) {
    FUN_00375bcc(param_1,DAT_001779a8);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001779ac;
    FUN_00338654(param_2,0,0xffffffff);
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}

// OoT3D decomp @ 003dce84  name=FUN_003dce84  size=88

void FUN_003dce84(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;

  fVar3 = *(float *)(param_1 + 0x268);
  FUN_003731e0(param_1 + 0x22c);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c0),(byte)(in_fpscr >> 0x15) & 3);
  if (fVar2 <= fVar3) {
    uVar1 = DAT_003dcedc;
    if (*(short *)(param_1 + 0x1b6) != 3) {
      uVar1 = DAT_003dcee0;
    }
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
  return;
}

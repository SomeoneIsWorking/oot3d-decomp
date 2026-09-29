// OoT3D decomp @ 001e6530  name=FUN_001e6530  size=176

void FUN_001e6530(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar3 = DAT_001e65e0;
  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  fVar1 = DAT_001e65e4;
  fVar3 = *(float *)(param_1 + 0x58) - fVar3;
  *(float *)(param_1 + 0x58) = fVar3;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar1;
  fVar2 = DAT_001e65e8;
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar1;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar3 * fVar2;
  if (*(short *)(param_1 + 0x234) == 0) {
    *(undefined4 *)(param_1 + 0x140) = DAT_001e65ec;
    *(undefined2 *)(param_1 + 0x234) = 0x3c;
    FUN_0036ec40(0,DAT_001e65f0);
    FUN_00340218(DAT_001e65f4,6);
    *(undefined4 *)(param_1 + 0x22c) = DAT_001e65f8;
  }
  else if (0x2c < *(short *)(param_1 + 0x234)) {
    FUN_003400ac(param_1);
    return;
  }
  return;
}

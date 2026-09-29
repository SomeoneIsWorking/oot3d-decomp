// OoT3D decomp @ 003ed7e4  name=FUN_003ed7e4  size=132

void FUN_003ed7e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;

  fVar4 = *(float *)(param_1 + 0x1c0) - DAT_003ed868;
  iVar2 = FUN_0036adf4();
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x1c8) = 0xf;
  }
  uVar1 = DAT_003ed870;
  if (fVar4 < *(float *)(param_1 + 0x2c)) {
    fVar3 = *(float *)(param_1 + 0x2c) - DAT_003ed86c;
    *(float *)(param_1 + 0x2c) = fVar3;
    if (fVar4 < fVar3) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + 0x2c) = fVar4;
    FUN_0035ae08(param_1,uVar1);
  }
  if (*(short *)(param_1 + 0x1c8) == 0) {
    *(undefined4 *)(param_1 + 0x1cc) = DAT_003ed874;
  }
  else {
    *(short *)(param_1 + 0x1c8) = *(short *)(param_1 + 0x1c8) + -1;
  }
  return;
}

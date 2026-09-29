// OoT3D decomp @ 003e1448  name=FUN_003e1448  size=172

void FUN_003e1448(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_00370734(param_1 + 0x1a4);
  fVar1 = DAT_003e14f4;
  if (*(short *)(param_1 + 0x6a6) != 0) {
    *(short *)(param_1 + 0x6a6) = *(short *)(param_1 + 0x6a6) + -1;
  }
  if (*(float *)(param_1 + 100) != fVar1) {
    iVar3 = FUN_003705a0(*(undefined4 *)(param_1 + 0x84),param_1 + 0x2c);
    uVar2 = DAT_003e14f8;
    if (iVar3 == 0) {
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + DAT_003e14fc;
    }
    else {
      *(float *)(param_1 + 100) = fVar1;
      FUN_00375bcc(param_1,uVar2);
    }
  }
  if (*(short *)(param_1 + 0x6a6) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x7d4) = 1;
  FUN_00370634(param_1);
  return;
}

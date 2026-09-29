// OoT3D decomp @ 003da0b0  name=FUN_003da0b0  size=104

void FUN_003da0b0(int param_1)

{
  int iVar1;
  float fVar2;

  FUN_00370734(param_1 + 0x1a4);
  iVar1 = DAT_003da11c;
  fVar2 = *(float *)(param_1 + 100) * DAT_003da118;
  *(float *)(param_1 + 100) = fVar2;
  if (iVar1 < (int)fVar2) {
    fVar2 = DAT_003da120;
  }
  *(float *)(param_1 + 100) = fVar2;
  iVar1 = FUN_003705a0(*(undefined4 *)(param_1 + 0x84),param_1 + 0x2c);
  if (iVar1 != 0) {
    FUN_00375bcc(param_1,DAT_003da124);
    FUN_00370634(param_1);
    return;
  }
  return;
}

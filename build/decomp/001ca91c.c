// OoT3D decomp @ 001ca91c  name=FUN_001ca91c  size=68

void FUN_001ca91c(int param_1)

{
  int iVar1;

  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + DAT_001ca960;
  iVar1 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),param_1 + 0x2c);
  if (iVar1 != 0) {
    FUN_00375bcc(param_1,DAT_001ca964);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001ca968;
  }
  return;
}

// OoT3D decomp @ 001ca60c  name=FUN_001ca60c  size=64

void FUN_001ca60c(int param_1)

{
  undefined4 uVar1;

  FUN_0036fc20(DAT_001ca650,DAT_001ca64c,param_1 + 0x6c);
  if (*(short *)(param_1 + 0x4a6) == 0) {
    uVar1 = DAT_001ca654;
    if (*(short *)(param_1 + 0x4ae) != 0) {
      uVar1 = DAT_001ca658;
    }
    *(undefined4 *)(param_1 + 0x4a0) = uVar1;
  }
  return;
}

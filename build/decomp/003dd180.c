// OoT3D decomp @ 003dd180  name=FUN_003dd180  size=96

void FUN_003dd180(int param_1)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x5b0);
  if (iVar1 != 0) {
    *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x92) + -0x8000;
    FUN_0036e734(param_1 + 0x5b0,*(undefined4 *)(DAT_003dd1e0 + 0x1c));
    *(undefined2 *)(param_1 + 0x1a8) = 8;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003dd1e4;
  }
  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_003dd1e8);
  return;
}

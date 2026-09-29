// OoT3D decomp @ 001c5754  name=FUN_001c5754  size=72

void FUN_001c5754(int param_1)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1d4) != 0x18) {
      FUN_00370350(DAT_001c579c,param_1 + 0x1a4,0x18);
    }
    *(undefined4 *)(param_1 + 0x22c) = DAT_001c57a0;
  }
  return;
}

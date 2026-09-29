// OoT3D decomp @ 00425298  name=FUN_00425298  size=100

void FUN_00425298(void)

{
  int iVar1;

  iVar1 = DAT_004252fc;
  if (*(int *)(DAT_004252fc + 0x28) != 0) {
    (**(code **)(**(int **)(DAT_004252fc + 4) + 0xc))();
    (**(code **)(**(int **)(iVar1 + 0x10) + 0xc))();
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_002fb934();
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_002fb944();
    }
    if (*(int *)(iVar1 + 0x20) != 0) {
      FUN_002fb944();
      return;
    }
  }
  return;
}

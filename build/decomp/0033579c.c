// OoT3D decomp @ 0033579c  name=FUN_0033579c  size=60

void FUN_0033579c(int param_1)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x14) = DAT_003357d8;
  }
  return;
}

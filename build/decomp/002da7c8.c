// OoT3D decomp @ 002da7c8  name=FUN_002da7c8  size=16

undefined1 FUN_002da7c8(int param_1)

{
  undefined1 uVar1;

  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 4) + 0xe);
  }
  return uVar1;
}

// OoT3D decomp @ 002da7d8  name=FUN_002da7d8  size=16

undefined1 FUN_002da7d8(int param_1)

{
  undefined1 uVar1;

  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 4) + 0xd);
  }
  return uVar1;
}

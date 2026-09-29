// OoT3D decomp @ 002da60c  name=FUN_002da60c  size=16

undefined1 FUN_002da60c(int param_1)

{
  undefined1 uVar1;

  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 4) + 0xf);
  }
  return uVar1;
}

// OoT3D decomp @ 002d2664  name=FUN_002d2664  size=16

undefined2 FUN_002d2664(int param_1)

{
  undefined2 uVar1;

  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 4) + 8);
  }
  return uVar1;
}

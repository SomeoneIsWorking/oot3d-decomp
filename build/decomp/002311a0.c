// OoT3D decomp @ 002311a0  name=FUN_002311a0  size=68

undefined8 FUN_002311a0(int param_1)

{
  if (*(int **)(param_1 + 0x270) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x270) + 4))();
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  return CONCAT44(param_1 + 0x1a4,1);
}

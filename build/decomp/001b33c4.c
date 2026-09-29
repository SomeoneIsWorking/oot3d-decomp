// OoT3D decomp @ 001b33c4  name=FUN_001b33c4  size=52

void FUN_001b33c4(int param_1)

{
  if (*(int **)(param_1 + 0x818) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x818) + 4))();
    *(undefined4 *)(param_1 + 0x818) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}

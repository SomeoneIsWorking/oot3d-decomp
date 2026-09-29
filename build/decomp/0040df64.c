// OoT3D decomp @ 0040df64  name=FUN_0040df64  size=40

undefined4 FUN_0040df64(int param_1)

{
  undefined4 *puVar1;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_00304308(*(undefined4 *)(param_1 + 8));
  return *puVar1;
}

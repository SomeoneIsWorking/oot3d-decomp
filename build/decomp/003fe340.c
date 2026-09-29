// OoT3D decomp @ 003fe340  name=FUN_003fe340  size=52

int FUN_003fe340(int param_1)

{
  int *piVar1;

  piVar1 = (int *)FUN_0034807c(*(undefined4 *)(param_1 + 4));
  if (piVar1 != (int *)0x0) {
    return (int)(short)*(undefined4 *)(*piVar1 + *(int *)(*piVar1 + 0x14) + 0x10);
  }
  return -1;
}

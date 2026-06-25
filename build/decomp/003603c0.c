// OoT3D decomp @ 003603c0  name=FUN_003603c0  size=48

undefined4 FUN_003603c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0034807c(*(undefined4 *)(param_1 + 4));
  if (piVar1 != (int *)0x0) {
    return *(undefined4 *)(*piVar1 + *(int *)(*piVar1 + 0x14) + 0x10);
  }
  return 0xffffffff;
}


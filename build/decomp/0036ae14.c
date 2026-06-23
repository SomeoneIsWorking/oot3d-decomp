// OoT3D decomp @ 0036ae14  name=FUN_0036ae14  size=4

int FUN_0036ae14(int param_1)

{
  short sVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_0034807c(*(undefined4 *)(param_1 + 4));
  if (piVar2 == (int *)0x0) {
    sVar1 = -1;
  }
  else {
    sVar1 = (short)*(undefined4 *)(*piVar2 + *(int *)(*piVar2 + 0x14) + 0x10);
  }
  return (int)sVar1;
}


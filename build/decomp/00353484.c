// OoT3D decomp @ 00353484  name=FUN_00353484  size=52

void FUN_00353484(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_2 + 0x20ac);
  if (*(float *)(param_1 + 0x94) < *(float *)(iVar1 + 0x173c)) {
    *(int *)(iVar1 + 0x1734) = param_1;
    *(undefined4 *)(iVar1 + 0x173c) = *(undefined4 *)(param_1 + 0x94);
  }
  return;
}

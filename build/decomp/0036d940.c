// OoT3D decomp @ 0036d940  name=FUN_0036d940  size=56

void FUN_0036d940(int param_1,int param_2)

{
  int iVar1;

  iVar1 = param_2;
  if (param_2 < 0x28) {
    iVar1 = 3;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffc7ffff | 0x10000000;
  if (0x27 < param_2) {
    if (iVar1 < 100) {
      *(undefined4 *)(param_1 + 0x24) = 2;
      return;
    }
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}

// OoT3D decomp @ 0030835c  name=FUN_0030835c  size=52

void FUN_0030835c(int param_1,int param_2,undefined4 param_3)

{
  if ((param_2 != 3 && param_2 != 0) &&
     (((param_2 == 1 || param_2 == 2) || param_2 == 4) || param_2 == 5)) {
    *(undefined4 *)(param_1 + 0x10) = param_3;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// OoT3D decomp @ 004814ec  name=FUN_004814ec  size=56

int FUN_004814ec(int *param_1,int param_2,int param_3)

{
  return *(int *)(param_1[4] +
                 *(int *)(*(int *)(param_1[3] + param_1[param_2 + 7] * 0x10 + 4) + *param_1 +
                         param_3 * 4) * 8 + 4) + *param_1;
}

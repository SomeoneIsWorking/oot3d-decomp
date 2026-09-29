// OoT3D decomp @ 004958f0  name=FUN_004958f0  size=48

int FUN_004958f0(undefined4 *param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_002c4850(*param_1);
  return iVar1 + *(int *)(param_1[1] + param_2 * 0xc + 8) + 8;
}

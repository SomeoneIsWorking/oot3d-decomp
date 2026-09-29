// OoT3D decomp @ 0036759c  name=FUN_0036759c  size=92

void FUN_0036759c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r1;

  iVar1 = *(int *)(*param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  if (param_2 <= iVar1 * 0xc) {
    FUN_00368d94(param_1[0x49] + 1,param_1[0x4a]);
    FUN_0034338c(param_1[extraout_r1 + 0x68],param_3,param_2);
    return;
  }
  return;
}

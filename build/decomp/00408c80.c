// OoT3D decomp @ 00408c80  name=FUN_00408c80  size=60

int FUN_00408c80(int *param_1)

{
  int iVar1;
  int extraout_r1;

  FUN_00368d94(param_1[0x49] + 1,param_1[0x4a]);
  iVar1 = *(int *)(*param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  return param_1[extraout_r1 + 0x68] + iVar1 * 0xc;
}

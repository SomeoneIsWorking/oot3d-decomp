// OoT3D decomp @ 00333070  name=FUN_00333070  size=100

int FUN_00333070(int *param_1)

{
  int iVar1;
  int extraout_r1;
  int iVar2;

  FUN_00368d94(param_1[0x49] + 1,param_1[0x4a]);
  iVar1 = *(int *)(*param_1 + 0xc);
  iVar2 = iVar1;
  if (iVar1 == 0) {
    iVar2 = 4;
  }
  if ((*(uint *)(*param_1 + 0x1c) & 0x80) == 0) {
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    iVar1 = iVar1 * 0xc;
  }
  else {
    iVar1 = 0;
  }
  return iVar1 + param_1[extraout_r1 + 0x68] + iVar2 * 0xc;
}

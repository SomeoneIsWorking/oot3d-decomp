// OoT3D decomp @ 0036751c  name=FUN_0036751c  size=128

void FUN_0036751c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;

  iVar2 = *param_1;
  if ((*(uint *)(iVar2 + 0x1c) & 0x80) == 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    iVar1 = iVar1 * 0xc;
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 < param_2) {
    return;
  }
  FUN_00368d94(param_1[0x49] + 1,param_1[0x4a]);
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 4;
  }
  FUN_0034338c(param_1[extraout_r1 + 0x68] + iVar2 * 0xc,param_3,param_2);
  return;
}

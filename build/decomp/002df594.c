// OoT3D decomp @ 002df594  name=FUN_002df594  size=140

int FUN_002df594(int *param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  uint uVar4;

  FUN_00368d94(param_1[0x49] + 1,param_1[0x4a]);
  iVar1 = *(int *)(*param_1 + 0xc);
  iVar3 = iVar1;
  if (iVar1 == 0) {
    iVar3 = 4;
  }
  uVar4 = *(uint *)(*param_1 + 0x1c);
  if ((uVar4 & 0x80) == 0) {
    iVar2 = iVar1;
    if (iVar1 == 0) {
      iVar2 = 4;
    }
    iVar2 = iVar2 * 0xc;
  }
  else {
    iVar2 = 0;
  }
  if ((uVar4 & 0x10) == 0) {
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    iVar1 = iVar1 << 3;
  }
  else {
    iVar1 = 0;
  }
  return iVar1 + iVar2 + param_1[extraout_r1 + 0x68] + iVar3 * 0xc + param_2;
}

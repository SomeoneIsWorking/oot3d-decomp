// OoT3D decomp @ 002f9934  name=FUN_002f9934  size=192

void FUN_002f9934(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar4 = *param_1;
  uVar3 = *(uint *)(iVar4 + 0x1c);
  if ((uVar3 & 8) == 0) {
    iVar1 = *(int *)(iVar4 + 0xc);
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    iVar1 = iVar1 << 4;
  }
  else {
    iVar1 = 0;
  }
  if (param_2 <= iVar1) {
    FUN_00368d94(param_1[0x49] + 1,param_1[0x4a]);
    iVar4 = *(int *)(iVar4 + 0xc);
    iVar1 = iVar4;
    if (iVar4 == 0) {
      iVar1 = 4;
    }
    if ((uVar3 & 0x80) == 0) {
      iVar2 = iVar4;
      if (iVar4 == 0) {
        iVar2 = 4;
      }
      iVar2 = iVar2 * 0xc;
    }
    else {
      iVar2 = 0;
    }
    if ((uVar3 & 0x10) == 0) {
      if (iVar4 == 0) {
        iVar4 = 4;
      }
      iVar4 = iVar4 << 3;
    }
    else {
      iVar4 = 0;
    }
    FUN_0034338c(iVar4 + iVar2 + param_1[extraout_r1 + 0x68] + iVar1 * 0xc,param_3,param_2);
    return;
  }
  return;
}

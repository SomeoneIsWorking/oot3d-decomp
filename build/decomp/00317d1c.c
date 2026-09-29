// OoT3D decomp @ 00317d1c  name=FUN_00317d1c  size=160

void FUN_00317d1c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  uint uVar3;

  iVar2 = *param_1;
  uVar3 = *(uint *)(iVar2 + 0x1c);
  if ((uVar3 & 0x10) == 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    iVar1 = iVar1 << 3;
  }
  else {
    iVar1 = 0;
  }
  if (param_2 <= iVar1) {
    FUN_00368d94(param_1[0x49] + 1,param_1[0x4a]);
    iVar2 = *(int *)(iVar2 + 0xc);
    iVar1 = iVar2;
    if (iVar2 == 0) {
      iVar1 = 4;
    }
    if ((uVar3 & 0x80) == 0) {
      if (iVar2 == 0) {
        iVar2 = 4;
      }
      iVar2 = iVar2 * 0xc;
    }
    else {
      iVar2 = 0;
    }
    FUN_0034338c(iVar2 + param_1[extraout_r1 + 0x68] + iVar1 * 0xc,param_3,param_2);
    return;
  }
  return;
}

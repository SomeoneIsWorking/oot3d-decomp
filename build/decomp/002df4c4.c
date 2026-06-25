// OoT3D decomp @ 002df4c4  name=FUN_002df4c4  size=100

int FUN_002df4c4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  if (-1 < iVar3) {
    iVar2 = iVar3;
    do {
      iVar2 = iVar2 / 2;
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + iVar2 * 0x60);
      if (uVar1 == param_2) {
        return *(int *)(param_1 + 8) + iVar2 * 0x60;
      }
      if (param_2 < uVar1) {
        iVar3 = iVar2 + -1;
      }
      else {
        iVar4 = iVar2 + 1;
      }
      iVar2 = iVar4 + iVar3;
    } while (iVar4 <= iVar3);
  }
  return 0;
}


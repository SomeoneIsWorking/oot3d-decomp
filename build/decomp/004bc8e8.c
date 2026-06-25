// OoT3D decomp @ 004bc8e8  name=FUN_004bc8e8  size=52

int FUN_004bc8e8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + param_3 * 8 + 0x10);
  iVar1 = 0;
  while (iVar2 != 0) {
    bVar3 = iVar2 == param_2;
    if (bVar3) {
      param_4 = *(int *)(iVar2 + 0x134);
    }
    iVar2 = *(int *)(iVar2 + 0x130);
    if (bVar3 && param_4 == 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


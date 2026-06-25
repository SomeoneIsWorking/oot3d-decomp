// OoT3D decomp @ 00347cc4  name=FUN_00347cc4  size=92

void FUN_00347cc4(uint param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_00347d20;
  bVar3 = (param_1 & 1) == 0;
  param_1 = param_1 >> 1;
  if (bVar3) {
    *(undefined *)(DAT_00347d20 + 1) = 0;
  }
  iVar1 = iVar2 + 1;
  if (!bVar3) {
    *(undefined *)(iVar2 + 1) = 1;
  }
  iVar2 = 3;
  do {
    bVar3 = (param_1 & 1) == 0;
    if (bVar3) {
      *(undefined *)(iVar1 + 1) = 0;
    }
    if (!bVar3) {
      *(undefined *)(iVar1 + 1) = 1;
    }
    if ((param_1 >> 1 & 1) == 0) {
      *(undefined *)(iVar1 + 2) = 0;
    }
    else {
      *(undefined *)(iVar1 + 2) = 1;
    }
    iVar2 = iVar2 + -1;
    param_1 = param_1 >> 2;
    iVar1 = iVar1 + 2;
  } while (iVar2 != 0);
  return;
}


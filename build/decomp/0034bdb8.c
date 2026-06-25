// OoT3D decomp @ 0034bdb8  name=FUN_0034bdb8  size=68

void FUN_0034bdb8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0034bdfc;
  iVar4 = 0;
  do {
    iVar2 = *(int *)(iVar1 + iVar4 * 4);
    iVar3 = iVar2;
    if (iVar2 != 0) {
      iVar3 = 1;
    }
    if (iVar3 != 0) {
      FUN_003102dc(iVar2,param_1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  *DAT_0034be00 = 0;
  return;
}


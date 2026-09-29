// OoT3D decomp @ 002f2f74  name=FUN_002f2f74  size=104

void FUN_002f2f74(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  if (param_2 == 0) {
    uVar2 = 0x1c;
  }
  else {
    uVar2 = 0x1a;
  }
  if ((*(int *)(*(int *)(param_1 + 4) + 1000) == *(int *)(param_1 + 8)) && (param_2 != 0)) {
    uVar2 = 0x1d;
  }
  iVar1 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 4) + 0x918,1,*(int *)(param_1 + 0xc) + iVar1,uVar2,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

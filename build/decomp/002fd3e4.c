// OoT3D decomp @ 002fd3e4  name=FUN_002fd3e4  size=312

void FUN_002fd3e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (*(char *)(param_1 + 0x18) != param_2) {
    *(char *)(param_1 + 0x18) = (char)param_2;
    iVar3 = *(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0xc) + 3) * 4 + 0x1130);
    if (param_2 == 0) {
      iVar3 = 0;
      do {
        FUN_00307840(*(int *)(param_1 + 4) + 0x918,1,*(int *)(param_1 + 0xc) + iVar3,1,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      iVar3 = 0;
      do {
        FUN_00307840(*(int *)(param_1 + 4) + 0x918,1,*(int *)(param_1 + 0x10) + iVar3,0xe,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      return;
    }
    FUN_00307840(*(int *)(param_1 + 4) + 0x918,1,*(int *)(param_1 + 0xc) + 3,2,1);
    iVar2 = 0;
    do {
      uVar4 = *(undefined4 *)(iVar3 + 0x84);
      uVar5 = *(undefined4 *)(iVar3 + 0x88);
      iVar1 = *(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x10) + iVar2) * 4 + 0x1130);
      *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar3 + 0x80);
      *(undefined4 *)(iVar1 + 0x84) = uVar4;
      *(undefined4 *)(iVar1 + 0x88) = uVar5;
      FUN_00307840(*(int *)(param_1 + 4) + 0x918,1,*(int *)(param_1 + 0x10) + iVar2,0xd,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return;
}

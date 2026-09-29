// OoT3D decomp @ 0042a0cc  name=FUN_0042a0cc  size=392

void FUN_0042a0cc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2 * 0x1c;
    iVar1 = FUN_002fde08(*(int *)(iVar1 + 0x175c) + 0x918,1,*(int *)(iVar1 + 0x1764) + 3);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2 * 0x1c;
    if (*(int *)(param_1 + 1000) == iVar2) {
      iVar3 = 0;
      do {
        FUN_00307840(*(int *)(iVar1 + 0x175c) + 0x918,1,*(int *)(iVar1 + 0x1764) + iVar3,6,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
    else {
      iVar3 = 0;
      do {
        FUN_00307840(*(int *)(iVar1 + 0x175c) + 0x918,1,*(int *)(iVar1 + 0x1764) + iVar3,0x1b,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
    FUN_002fd274(iVar1 + 0x1758);
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + 0x1771) = 0;
  } while (iVar2 < 9);
  iVar2 = 0;
  do {
    uVar4 = 1;
    FUN_00307840(*(int *)(param_1 + 0x1858) + 0x918,1,*(int *)(param_1 + 0x1860) + iVar2,7);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_002fd274(param_1 + 0x1854);
  *(undefined1 *)(param_1 + 0x186d) = 0;
  FUN_002fd360(param_1 + 0x1870);
  FUN_002fd360(param_1 + 0x188c);
  *(undefined1 *)(param_1 + 8) = 2;
  FUN_002fd71c(param_1,*(undefined4 *)(param_1 + 1000),0,uVar4);
  return;
}

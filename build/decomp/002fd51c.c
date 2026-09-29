// OoT3D decomp @ 002fd51c  name=FUN_002fd51c  size=512

/* WARNING: Removing unreachable block (ram,0x002fd744) */
/* WARNING: Removing unreachable block (ram,0x002fd76c) */

void FUN_002fd51c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  do {
    iVar1 = param_1 + iVar4 * 0x1c;
    if (*(int *)(param_1 + 1000) == iVar4) {
      iVar3 = 0;
      do {
        FUN_00307840(*(int *)(iVar1 + 0x175c) + 0x918,1,*(int *)(iVar1 + 0x1764) + iVar3,5,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
    else {
      uVar2 = 0x1a;
      iVar3 = 0;
      if (*(int *)(*(int *)(iVar1 + 0x175c) + 1000) == *(int *)(iVar1 + 0x1760)) {
        uVar2 = 0x1d;
      }
      do {
        FUN_00307840(*(int *)(iVar1 + 0x175c) + 0x918,1,*(int *)(iVar1 + 0x1764) + iVar3,uVar2,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
    FUN_002fd274(iVar1 + 0x1758);
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar1 + 0x1771) = 0;
  } while (iVar4 < 9);
  iVar4 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1858) + 0x918,1,*(int *)(param_1 + 0x1860) + iVar4,8,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_002fd274(param_1 + 0x1854);
  *(undefined1 *)(param_1 + 0x186d) = 0;
  iVar4 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1874) + 0x918,1,*(int *)(param_1 + 0x187c) + iVar4,0x19,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_002fd274(param_1 + 0x1870);
  *(undefined1 *)(param_1 + 0x1889) = 0;
  iVar4 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1890) + 0x918,1,*(int *)(param_1 + 0x1898) + iVar4,0x19,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_002fd274(param_1 + 0x188c);
  *(undefined1 *)(param_1 + 0x18a5) = 0;
  if (*(int *)(param_1 + 1000) == 8) {
    uVar2 = 0xca;
  }
  else {
    uVar2 = 0xc9;
  }
  FUN_00344670(*(undefined4 *)(param_1 + 0x12c0),uVar2);
  *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 0;
  *(undefined1 *)(param_1 + 8) = 5;
  if (*(int *)(param_1 + 0x3e4) != 10) {
    *(undefined4 *)(param_1 + 0x3e4) = 10;
  }
  return;
}

// OoT3D decomp @ 00429600  name=FUN_00429600  size=1036

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00429600(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  FUN_002fd71c(param_1,param_2,0);
  if (param_2 == 8) {
    *(undefined4 *)(param_1 + 1000) = 8;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (param_2 == 9) {
    FUN_002e7248(7);
    iVar2 = 0;
    do {
      iVar1 = param_1 + iVar2 * 0x1c;
      iVar3 = 0;
      do {
        FUN_00307840(*(int *)(iVar1 + 0x175c) + 0x918,1,*(int *)(iVar1 + 0x1764) + iVar3,0x1c);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      FUN_002fd274(iVar1 + 0x1758);
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar1 + 0x1771) = 0;
    } while (iVar2 < 9);
    iVar2 = 0;
    do {
      FUN_00307840(*(int *)(param_1 + 0x1858) + 0x918,1,*(int *)(param_1 + 0x1860) + iVar2,8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    FUN_002fd274(param_1 + 0x1854);
    *(undefined1 *)(param_1 + 0x186d) = 0;
    FUN_002fd360(param_1 + 0x1870);
    FUN_002fd360(param_1 + 0x188c);
    iVar2 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 0;
    do {
      FUN_00307840(param_1 + 0x918,1,iVar2 + 3,0x25);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
    *(undefined4 *)(DAT_004414b8 + param_1) = 0;
    *(undefined1 *)(param_1 + 8) = 4;
    return;
  }
  if (param_2 == 10) {
    iVar2 = 0;
    do {
      iVar1 = param_1 + iVar2 * 0x1c;
      if (*(int *)(param_1 + 1000) == iVar2) {
        uVar4 = 0x1a;
        iVar3 = 0;
        if (*(int *)(*(int *)(iVar1 + 0x175c) + 1000) == *(int *)(iVar1 + 0x1760)) {
          uVar4 = 0x1d;
        }
        do {
          FUN_00307840(*(int *)(iVar1 + 0x175c) + 0x918,1,*(int *)(iVar1 + 0x1764) + iVar3,uVar4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 4);
        FUN_002fd274(iVar1 + 0x1758);
        *(undefined1 *)(iVar1 + 0x1771) = 0;
      }
      else {
        FUN_002fd360(iVar1 + 0x1758);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 9);
    FUN_002fd360(param_1 + 0x1854);
    FUN_002f2f74(param_1 + 0x1870,1);
    FUN_002fd274(param_1 + 0x1870);
    *(undefined1 *)(param_1 + 0x1889) = 0;
    FUN_002f2f74(param_1 + 0x188c,1);
    FUN_002fd274(param_1 + 0x188c);
    *(undefined1 *)(param_1 + 0x18a5) = 0;
    FUN_00344670(*(undefined4 *)(param_1 + 0x12c0),200);
    iVar2 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 0;
    do {
      FUN_00307840(param_1 + 0x918,1,iVar2 + 3,0x25);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 0;
    FUN_002e7248(0xf);
    *(int *)(param_1 + 0x3ec) = *(int *)(param_1 + 1000);
    if (*(int *)(param_1 + 1000) == 8) {
      *(undefined4 *)(param_1 + 0x3ec) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 8;
    return;
  }
  if (param_2 != 0xb) {
    *(int *)(param_1 + 1000) = param_2;
    *(undefined4 *)(param_1 + 0x18b0) = 0;
    FUN_002fd51c(param_1,param_2,0);
    return;
  }
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2 * 0x1c;
    if (*(int *)(param_1 + 1000) == iVar2) {
      FUN_002fd274(iVar1 + 0x1758);
      *(undefined1 *)(iVar1 + 0x1771) = 0;
    }
    else {
      FUN_002fd360(iVar1 + 0x1758);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  FUN_002fd360(param_1 + 0x1854);
  FUN_002f2f74(param_1 + 0x1870,0);
  FUN_002fd274(param_1 + 0x1870);
  *(undefined1 *)(param_1 + 0x1889) = 0;
  FUN_002f2f74(param_1 + 0x188c,0);
  FUN_002fd274(param_1 + 0x188c);
  *(undefined1 *)(param_1 + 0x18a5) = 0;
  FUN_00344670(*(undefined4 *)(param_1 + 0x12c0),200);
  *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 0;
  *(undefined1 *)(param_1 + 8) = 6;
  FUN_002fd71c(param_1,*(undefined4 *)(param_1 + 1000),0);
  return;
}

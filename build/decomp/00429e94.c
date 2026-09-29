// OoT3D decomp @ 00429e94  name=FUN_00429e94  size=388

void FUN_00429e94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;

  iVar1 = param_1 + 0x918;
  iVar2 = FUN_002fde08(iVar1,0,0xfa,param_4,param_4);
  if ((iVar2 != 0) && (iVar2 = FUN_002fde08(iVar1,1,0xfa), iVar2 != 0)) {
    iVar2 = 0;
    do {
      iVar3 = param_1 + iVar2 * 0x1c;
      iVar4 = 0;
      do {
        FUN_00307840(*(int *)(iVar3 + 0x175c) + 0x918,1,*(int *)(iVar3 + 0x1764) + iVar4,0x19,1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      FUN_002fd274(iVar3 + 0x1758);
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar3 + 0x1771) = 0;
    } while (iVar2 < 9);
    iVar2 = 0;
    do {
      FUN_00307840(*(int *)(param_1 + 0x1858) + 0x918,1,*(int *)(param_1 + 0x1860) + iVar2,7,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    FUN_002fd274(param_1 + 0x1854);
    *(undefined1 *)(param_1 + 0x186d) = 0;
    FUN_002fd360(param_1 + 0x1870);
    FUN_002fd360(param_1 + 0x188c);
    iVar2 = 0;
    do {
      *(undefined1 *)(*(int *)(iVar1 + (iVar2 + 3) * 4 + 0x818) + 0x6c) = 1;
      uVar5 = 1;
      FUN_00307840(iVar1,1,iVar2 + 3,0x24);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    FUN_00344670(*(undefined4 *)(param_1 + 0x12c0),200);
    *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 0;
    *(undefined1 *)(param_1 + 8) = 2;
    FUN_002fd71c(param_1,*(undefined4 *)(param_1 + 1000),0,uVar5);
    return;
  }
  return;
}

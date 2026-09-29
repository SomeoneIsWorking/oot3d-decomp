// OoT3D decomp @ 002e1478  name=FUN_002e1478  size=352

void FUN_002e1478(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  undefined4 local_14;

  iVar4 = FUN_002dbbac(&local_14);
  uVar3 = DAT_002e1600;
  uVar2 = DAT_002e15fc;
  if (iVar4 == 0) {
    FUN_0037547c(DAT_002e15f8,0,4,DAT_002e1600,DAT_002e1600,DAT_002e15fc);
    return;
  }
  iVar6 = 0;
  psVar7 = (short *)(DAT_002e1604 + *(int *)(DAT_002e1608 + 0x24) * 2);
  do {
    iVar1 = iVar6;
    if (*psVar7 == *(short *)(iVar4 + iVar6 * 2)) break;
    iVar6 = iVar6 + 1;
    iVar1 = -1;
  } while (iVar6 < 0x33);
  if (iVar1 != -1) {
    iVar6 = *(int *)(DAT_002e160c + iVar1 * 4);
  }
  uVar5 = DAT_002e15f8;
  if (iVar1 != -1 && iVar6 != 0) {
    switch(local_14) {
    case 0:
    case 1:
    case 3:
      iVar4 = DAT_002e1610[2];
      break;
    case 2:
      iVar4 = *DAT_002e1610;
      break;
    case 4:
    case 5:
    case 7:
      iVar4 = DAT_002e1610[6];
      break;
    case 6:
      iVar4 = DAT_002e1610[4];
    }
    *psVar7 = *(short *)(iVar4 + iVar1 * 2);
    uVar5 = DAT_002e1614;
  }
  FUN_0037547c(uVar5,0,4,uVar3,uVar3,uVar2);
  return;
}

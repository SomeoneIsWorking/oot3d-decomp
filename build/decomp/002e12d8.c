// OoT3D decomp @ 002e12d8  name=FUN_002e12d8  size=352

void FUN_002e12d8(void)

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
  uVar3 = DAT_002e1460;
  uVar2 = DAT_002e145c;
  if (iVar4 == 0) {
    FUN_0037547c(DAT_002e1458,0,4,DAT_002e1460,DAT_002e1460,DAT_002e145c);
    return;
  }
  iVar6 = 0;
  psVar7 = (short *)(DAT_002e1464 + *(int *)(DAT_002e1468 + 0x24) * 2);
  do {
    iVar1 = iVar6;
    if (*psVar7 == *(short *)(iVar4 + iVar6 * 2)) break;
    iVar6 = iVar6 + 1;
    iVar1 = -1;
  } while (iVar6 < 0x33);
  if (iVar1 != -1) {
    iVar6 = *(int *)(DAT_002e146c + iVar1 * 4);
  }
  uVar5 = DAT_002e1458;
  if (iVar1 != -1 && iVar6 != 0) {
    switch(local_14) {
    case 0:
    case 1:
    case 2:
      iVar4 = DAT_002e1470[3];
      break;
    case 3:
      iVar4 = *DAT_002e1470;
      break;
    case 4:
    case 5:
    case 6:
      iVar4 = DAT_002e1470[7];
      break;
    case 7:
      iVar4 = DAT_002e1470[4];
    }
    *psVar7 = *(short *)(iVar4 + iVar1 * 2);
    uVar5 = DAT_002e1474;
  }
  FUN_0037547c(uVar5,0,4,uVar3,uVar3,uVar2);
  return;
}

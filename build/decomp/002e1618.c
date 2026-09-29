// OoT3D decomp @ 002e1618  name=FUN_002e1618  size=432

void FUN_002e1618(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  short *psVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  iVar2 = DAT_002e17f0;
  iVar1 = DAT_002e17ec;
  local_1c = DAT_002e17e8;
  iVar5 = thunk_FUN_002e181c(&local_1c,DAT_002e17ec + *(int *)(DAT_002e17f0 + 0x24) * 2);
  uVar6 = DAT_002e17f4;
  if (iVar5 != 0) {
    local_20 = DAT_002e17f8;
    iVar5 = thunk_FUN_002e181c(&local_20,iVar1 + *(int *)(iVar2 + 0x24) * 2);
    if ((iVar5 != 0) &&
       (iVar5 = FUN_002dbbac(&local_18), uVar4 = DAT_002e1800, uVar3 = DAT_002e17fc, iVar5 != 0)) {
      iVar7 = 0;
      psVar8 = (short *)(iVar1 + *(int *)(iVar2 + 0x24) * 2);
      do {
        iVar1 = iVar7;
        if (*psVar8 == *(short *)(iVar5 + iVar7 * 2)) break;
        iVar7 = iVar7 + 1;
        iVar1 = -1;
      } while (iVar7 < 0x33);
      if (iVar1 != -1) {
        iVar7 = *(int *)(DAT_002e1804 + iVar1 * 4);
      }
      if (iVar1 != -1 && iVar7 != 0) {
        switch(local_18) {
        case 0:
        case 2:
        case 3:
          iVar5 = DAT_002e1808[1];
          break;
        case 1:
          iVar5 = *DAT_002e1808;
          break;
        case 4:
        case 6:
        case 7:
          iVar5 = DAT_002e1808[5];
          break;
        case 5:
          iVar5 = DAT_002e1808[4];
        }
        *psVar8 = *(short *)(iVar5 + iVar1 * 2);
        uVar6 = DAT_002e180c;
      }
      FUN_0037547c(uVar6,0,4,uVar4,uVar4,uVar3);
      return;
    }
  }
  FUN_0037547c(uVar6,0,4,DAT_002e1800,DAT_002e1800,DAT_002e17fc);
  return;
}

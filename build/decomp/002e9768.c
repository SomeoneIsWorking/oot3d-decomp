// OoT3D decomp @ 002e9768  name=FUN_002e9768  size=312

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002e9768(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uStack_14;

  uVar2 = DAT_002e98f4;
  uVar1 = DAT_002e98f0;
  iVar4 = DAT_002e98e0;
  if (*(int *)(DAT_002e98e0 + 0x28) == 2) {
    switch(*(undefined4 *)(DAT_002e98e0 + 0x24)) {
    case 0:
    case 2:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xe:
    case 0xf:
      goto switchD_002e97a4_caseD_0;
    default:
      uVar5 = DAT_002e98f8;
      if (*(int *)(DAT_002e98e0 + 0x38) == 0) {
        FUN_002f79b4(DAT_002e9900,DAT_002e98fc,*(undefined4 *)(DAT_002e98e0 + 0x18));
        iVar3 = *(int *)(iVar4 + 0x18);
        uStack_14 = DAT_002e9908;
        if (*(int *)(iVar4 + 0x34) == 0) {
          uStack_14 = DAT_002e990c;
        }
        iVar4 = 0;
        if (0 < *(int *)(iVar3 + 0xc)) {
          do {
            FUN_002f9430(*(undefined4 *)(iVar3 + 8),&uStack_14,1,iVar4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar3 + 0xc));
        }
        return;
      }
    }
  }
  else {
    if ((*(int *)(DAT_002e98e0 + 0x28) != 3) || (*(int *)(iVar4 + 0x3c) == 1)) {
switchD_002e97a4_caseD_0:
      DAT_002e98e0 = iVar4;
      DAT_002e98f0 = uVar1;
      DAT_002e98f4 = uVar2;
      FUN_002f7af4(DAT_002e98e8,DAT_002e98e4);
      return;
    }
    iVar3 = *(int *)(iVar4 + 0x30);
    if (iVar3 < 3) {
      uVar5 = VectorSignedToFloat(iVar3 * 0x36 + 0x18,(byte)(in_fpscr >> 0x15) & 3);
      DAT_002e98e0 = iVar4;
      DAT_002e98f0 = uVar1;
      DAT_002e98f4 = uVar2;
      FUN_002f7af4(DAT_002e9910,uVar5);
      FUN_002f79b4(DAT_002e9918,DAT_002e9914,*(undefined4 *)(iVar4 + 0x18));
      return;
    }
    uVar5 = DAT_002e98e4;
    if ((iVar3 != 3) && (uVar5 = DAT_002e991c, iVar3 != 4)) {
      return;
    }
  }
  DAT_002e98e0 = iVar4;
  DAT_002e98f0 = uVar1;
  DAT_002e98f4 = uVar2;
  FUN_002f7af4(uVar5,DAT_002e98ec);
  FUN_002f79b4(uVar2,uVar1,*(undefined4 *)(iVar4 + 0x18));
  return;
}

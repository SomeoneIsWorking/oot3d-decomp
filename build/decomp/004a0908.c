// OoT3D decomp @ 004a0908  name=FUN_004a0908  size=424

undefined4 FUN_004a0908(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_138 [280];

  puVar1 = DAT_004a0ab0;
  if (((*DAT_004a0ab0 & 1) == 0) &&
     (uVar7 = FUN_003679b4(DAT_004a0ab0), param_2 = (undefined4)((ulonglong)uVar7 >> 0x20),
     (int)uVar7 != 0)) {
    FUN_0036788c(DAT_004a0ab4);
    param_2 = DAT_004a0abc;
  }
  iVar3 = DAT_004a0ac0;
  uVar6 = *(undefined4 *)(DAT_004a0ac0 + 0x47c);
  FUN_002c008c(param_1,param_2);
  FUN_004a4188(param_1,auStack_138,*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148)
              );
  uVar5 = DAT_004a0ac4;
  iVar2 = 0;
  do {
    iVar4 = param_1 + iVar2 * 0x1b8;
    FUN_00348b90(iVar4 + 0x33c,auStack_138);
    FUN_00348a64(iVar4 + 0x33c,0,param_1 + iVar2 * 0xa8 + 0x1ec,0x2600,0x2600,uVar5,uVar5);
    iVar4 = BoardModelFactory_0034897c(uVar6,iVar4 + 0x33c,0);
    *(int *)(param_1 + iVar2 * 4 + 0x6fc) = iVar4;
    if (iVar4 == 0) {
      if (((*puVar1 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_004a0ab0), iVar2 != 0)) {
        FUN_0036788c(DAT_004a0ab4);
      }
      uVar5 = *(undefined4 *)(iVar3 + 0x47c);
      iVar3 = 0;
      do {
        iVar2 = param_1 + iVar3 * 4;
        if (*(int *)(iVar2 + 0x6fc) != 0) {
          FUN_00348904(uVar5);
          *(undefined4 *)(iVar2 + 0x6fc) = 0;
        }
        FUN_003445d4(param_1 + iVar3 * 0x1b8 + 0x33c);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  *(uint *)(*(int *)(param_1 + 0x6fc) + 0x178) = *(uint *)(*(int *)(param_1 + 0x6fc) + 0x178) | 0x20
  ;
  *(uint *)(*(int *)(param_1 + 0x700) + 0x178) = *(uint *)(*(int *)(param_1 + 0x700) + 0x178) | 0x40
  ;
  return 1;
}

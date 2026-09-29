// OoT3D decomp @ 0047e14c  name=FUN_0047e14c  size=156

uint FUN_0047e14c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;

  FUN_002d36e0(0);
  iVar1 = DAT_0047e1e8;
  *(undefined1 *)(DAT_0047e1e8 + 0xe) = 5;
  uVar7 = FUN_002ce364();
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 != 0) {
    FUN_00310040(1);
    uVar5 = extraout_r1;
  }
  *(undefined4 *)(iVar1 + 0x58) = param_1;
  uVar2 = FUN_002dbe88(DAT_0047e1ec,uVar5,*(undefined4 *)(iVar1 + 0xd0),
                       *(undefined4 *)(iVar1 + 0xd4));
  if ((int)uVar7 == 0) {
    iVar3 = FUN_002ce364();
    if (iVar3 != 0) {
      FUN_00310040(1);
    }
  }
  else {
    iVar3 = FUN_002ce364();
    if (iVar3 == 0) {
      FUN_0030dbb4(1);
    }
  }
  uVar4 = *(uint *)(iVar1 + 0xa0);
  bVar6 = (uVar4 & 7) == 0;
  if (bVar6) {
    uVar4 = uVar2 & 0x3ff;
  }
  if (bVar6 && uVar4 == 0x3fc) {
    uVar2 = 0;
  }
  return uVar2;
}

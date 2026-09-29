// OoT3D decomp @ 0047df94  name=FUN_0047df94  size=372

int FUN_0047df94(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_24;

  iVar1 = DAT_0047e108;
  uVar5 = *(uint *)(DAT_0047e108 + 0xa0) & 7;
  uVar7 = param_1;
  uVar8 = param_2;
  uVar9 = param_3;
  uStack_24 = param_4;
  if (uVar5 == 0) {
    *(undefined1 *)(DAT_0047e108 + 0xf) = 1;
    FUN_002ce734();
    iVar2 = FUN_002e1ef0();
    if (iVar2 != 0) {
      FUN_002ce818();
      *(undefined1 *)(iVar1 + 5) = 1;
    }
    FUN_002dc008(0);
    FUN_002ce618();
  }
  else {
    if (uVar5 != 2) {
      return DAT_0047e10c;
    }
    FUN_002dc008(0);
  }
  uVar6 = FUN_002ce364();
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 0) {
    FUN_00310040(1);
    uVar4 = extraout_r1;
  }
  *(undefined4 **)(iVar1 + 100) = &uStack_24;
  *(undefined4 *)(iVar1 + 0x5c) = param_2;
  *(undefined4 *)(iVar1 + 0x60) = param_3;
  *(undefined4 *)(iVar1 + 0x58) = param_1;
  iVar2 = FUN_002dbe88(DAT_0047e110,uVar4,*(undefined4 *)(iVar1 + 0xd0),
                       *(undefined4 *)(iVar1 + 0xd4),uVar7,uVar8,uVar9);
  if ((int)uVar6 == 0) {
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
  if (iVar2 < 0) {
    if (iVar2 < 0) {
      FUN_0030e3ac(iVar2,&DAT_0047e114,0,&DAT_0047e114);
      FUN_002fb928(0);
    }
  }
  else {
    *(undefined1 *)(iVar1 + 3) = 0;
    if (uVar5 == 0) {
      iVar2 = FUN_002ce680(param_1);
    }
    else if (uVar5 == 2) {
      software_interrupt(3);
    }
  }
  return iVar2;
}

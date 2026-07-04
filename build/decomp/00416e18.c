// OoT3D decomp @ 00416e18  name=FUN_00416e18  size=260

void FUN_00416e18(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined8 uVar6;
  
  puVar1 = DAT_00416f24;
  *(undefined4 *)(param_1 + 4) = DAT_00416f1c;
  *(undefined4 *)(param_1 + 8) = DAT_00416f20;
  if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(puVar1), iVar4 != 0)) {
    FUN_0036788c(DAT_00416f28);
  }
  uVar3 = DAT_00416f40;
  uVar2 = DAT_00416f3c;
  uVar5 = DAT_00416f38;
  iVar4 = DAT_00416f34;
  *(undefined1 *)(DAT_00416f34 + 9) = 1;
  FUN_00301680(uVar3,uVar2,uVar5,iVar4,1);
  *(undefined1 *)(iVar4 + 0x21) = 1;
  uVar5 = extraout_r1;
  if (((*puVar1 & 1) == 0) &&
     (uVar6 = FUN_003679b4(DAT_00416f24), uVar5 = (int)((ulonglong)uVar6 >> 0x20), (int)uVar6 != 0))
  {
    FUN_0036788c(DAT_00416f28);
    uVar5 = DAT_00416f30;
  }
  FUN_0030166c(DAT_00416f44,uVar5);
  FUN_00307390();
  FUN_00331754(0);
  iVar4 = FUN_00313ce0(0x9b0);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_0041d0e4();
  }
  *(undefined4 *)(param_1 + 0x104) = uVar5;
  *(undefined1 *)(param_1 + 0x108) = 0;
  return;
}


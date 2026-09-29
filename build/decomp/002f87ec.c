// OoT3D decomp @ 002f87ec  name=FUN_002f87ec  size=212

void FUN_002f87ec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = DAT_002f88dc;
  iVar1 = DAT_002f88d8;
  switch(param_1) {
  case 0:
    *(undefined4 *)(DAT_002f88d8 + 0x34) = 1;
    FUN_0033c25c();
    FUN_002efd88();
    break;
  case 1:
    *(undefined4 *)(DAT_002f88d8 + 0x34) = 0xd;
    *(undefined4 *)(iVar1 + 0x5c) = 4;
    goto LAB_002f8890;
  case 2:
    *(undefined4 *)(DAT_002f88d8 + 0x34) = 0x11;
    *(undefined4 *)(iVar1 + 0x5c) = 4;
    FUN_002ef684();
    break;
  case 3:
    *(undefined4 *)(DAT_002f88d8 + 0x5c) = 4;
    *(undefined4 *)(iVar1 + 0x34) = 0x15;
    FUN_002f8b80(uVar2,uVar2,*(undefined4 *)(iVar1 + 4),1,0);
LAB_002f8890:
    FUN_002ef684();
    break;
  case 4:
    *(undefined4 *)(DAT_002f88d8 + 0x34) = 0x13;
    *(undefined4 *)(iVar1 + 0x5c) = 4;
    FUN_002ef684();
    break;
  case 5:
    *(undefined4 *)(DAT_002f88d8 + 0x34) = 0xf;
    *(undefined4 *)(iVar1 + 0x5c) = 4;
    FUN_002ef684();
  }
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  FUN_002fd84c(0,0);
  return;
}

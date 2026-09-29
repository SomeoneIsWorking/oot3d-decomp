// OoT3D decomp @ 00301f34  name=FUN_00301f34  size=96

int FUN_00301f34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_18;

  uVar3 = param_1;
  uVar4 = param_2;
  uStack_18 = param_3;
  FUN_004663bc();
  FUN_002dc008(0);
  iVar1 = DAT_00301f94;
  *(undefined4 **)(DAT_00301f94 + 0x8c) = &uStack_18;
  *(undefined4 *)(iVar1 + 0x88) = param_2;
  *(undefined4 *)(iVar1 + 0x84) = param_1;
  iVar2 = FUN_002dbe88(DAT_00301f98,extraout_r1,*(undefined4 *)(iVar1 + 0xd0),
                       *(undefined4 *)(iVar1 + 0xd4),uVar3,uVar4);
  if (-1 < iVar2) {
    *(undefined1 *)(iVar1 + 3) = 0;
  }
  software_interrupt(3);
  return iVar2;
}

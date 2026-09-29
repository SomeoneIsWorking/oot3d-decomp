// OoT3D decomp @ 0048b1f4  name=FUN_0048b1f4  size=336

undefined4 * FUN_0048b1f4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 *puVar2;
  undefined4 unaff_lr;

  *param_1 = param_2;
  iVar1 = FUN_004267a0(param_1 + 0x1d12);
  iVar1 = FUN_00422874(iVar1 + -0xb4);
  iVar1 = FUN_00313058(iVar1 + -0x3c);
  *(undefined4 *)(iVar1 + -0x80) = DAT_0048b2c4;
  FUN_00307434();
  iVar1 = FUN_0042a278(iVar1 + -0x19b8);
  iVar1 = FUN_0042cb48(iVar1 + -0x1710);
  iVar1 = FUN_0042cbe8(iVar1 + -0xfd0);
  iVar1 = FUN_004228c8(iVar1 + -0xcd0);
  iVar1 = FUN_0042279c(iVar1 + -0x228);
  iVar1 = FUN_00422598(iVar1 + -0xd8);
  puVar2 = (undefined4 *)(iVar1 + -0x224c);
  *puVar2 = DAT_0048b2c8;
  FUN_00311284(puVar2);
  iVar1 = FUN_003111e8(puVar2);
  *(undefined4 *)(iVar1 + -0xa4) = DAT_0042286c;
  FUN_00310040(1);
  FUN_0031012c(0);
  FUN_0031002c(0);
  FUN_00310118(0);
  *(undefined4 *)(iVar1 + -0xc) = 0xffffffff;
  FUN_0030ff04(2,iVar1 + -0x44,extraout_r2,extraout_r3,unaff_r4,unaff_lr);
  FUN_0030266c(iVar1 + -0x54);
  FUN_0030fed0((undefined4 *)(iVar1 + -0xa4));
  iVar1 = FUN_00447534(iVar1 + -0x54);
  puVar2 = (undefined4 *)(iVar1 + -0x50);
  *puVar2 = DAT_00422870;
  FUN_0030fed0(puVar2);
  return puVar2;
}

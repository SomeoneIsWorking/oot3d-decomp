// OoT3D decomp @ 0048a2ec  name=FUN_0048a2ec  size=88

undefined4 FUN_0048a2ec(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;

  FUN_0030db4c();
  FUN_0030dab0();
  uVar1 = FUN_00493f1c(param_1,param_2);
  FUN_0030da40();
  software_interrupt(0x14);
  uVar2 = *DAT_0048a344 >> 0x1b;
  if ((*DAT_0048a344 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
  }
  return uVar1;
}

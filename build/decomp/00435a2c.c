// OoT3D decomp @ 00435a2c  name=FUN_00435a2c  size=164

undefined4
FUN_00435a2c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;

  if (param_2 == (undefined4 *)0x0 || param_5 == 0) {
    return DAT_00435ad0;
  }
  bVar1 = *DAT_00435ad4;
  if ((bVar1 != 0) && (software_interrupt(0x28), (bVar1 & 0x10) != 0)) {
    uVar2 = FUN_00339384(100,(bVar1 & 0xf) + 1);
    FUN_0030e604((int)((ulonglong)uVar2 * (ulonglong)DAT_00435ad8),
                 (int)((ulonglong)uVar2 * (ulonglong)DAT_00435ad8 >> 0x20));
  }
  uVar3 = (**(code **)*param_2)(param_2,param_1,param_3,param_4,param_5,param_6);
  return uVar3;
}

// OoT3D decomp @ 00449f18  name=FUN_00449f18  size=168

undefined4
FUN_00449f18(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;

  if ((param_1 == 0 || param_2 == (int *)0x0) || param_5 == 0) {
    return DAT_00449fc0;
  }
  bVar1 = *DAT_00449fc4;
  if ((bVar1 != 0) && (software_interrupt(0x28), (bVar1 & 0x10) != 0)) {
    uVar2 = FUN_00339384(0x17c,(bVar1 & 0xf) + 1);
    FUN_0030e604((int)((ulonglong)uVar2 * (ulonglong)DAT_00449fc8),
                 (int)((ulonglong)uVar2 * (ulonglong)DAT_00449fc8 >> 0x20));
  }
  uVar3 = (**(code **)(*param_2 + 4))(param_2,param_1,param_3,param_4,param_5,param_6,param_7);
  return uVar3;
}

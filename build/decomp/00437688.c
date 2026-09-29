// OoT3D decomp @ 00437688  name=FUN_00437688  size=212

undefined4
FUN_00437688(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
            undefined1 *param_5,int *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];

  FUN_0030db4c();
  FUN_0030dab0();
  if (param_1 == (undefined1 *)0x0) {
    param_1 = auStack_20;
  }
  if (param_2 == (undefined1 *)0x0) {
    param_2 = auStack_24;
  }
  if (param_3 == (undefined1 *)0x0 || param_4 == 0) {
    param_3 = auStack_28;
    param_4 = 0;
  }
  if (param_5 == (undefined1 *)0x0) {
    param_5 = auStack_2c;
  }
  local_30 = 0;
  if (param_6 == (int *)0x0) {
    param_6 = &local_30;
  }
  uVar1 = FUN_0044b168(param_1,*(undefined4 *)(DAT_0043775c + 0x9c),param_2,param_3,param_4,param_5,
                       param_6);
  if (local_30 != 0) {
    software_interrupt(0x23);
  }
  FUN_0030da40();
  software_interrupt(0x14);
  uVar2 = *DAT_00437760 >> 0x1b;
  if ((*DAT_00437760 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
  }
  return uVar1;
}

// OoT3D decomp @ 0047dedc  name=FUN_0047dedc  size=180

void FUN_0047dedc(undefined4 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];

  FUN_0030db4c();
  FUN_0030dab0();
  iVar1 = FUN_002ce7a4(param_1,local_1c,&local_20,&local_24,&local_28);
  FUN_0030da40();
  software_interrupt(0x14);
  uVar2 = *DAT_0047df90 >> 0x1b;
  if ((*DAT_0047df90 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
  }
  if (-1 < iVar1) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = local_1c[0];
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_20;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_24;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = local_28;
    }
  }
  return;
}

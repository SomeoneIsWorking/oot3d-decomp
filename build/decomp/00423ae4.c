// OoT3D decomp @ 00423ae4  name=FUN_00423ae4  size=80

void FUN_00423ae4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;

  FUN_0030db4c();
  iVar1 = DAT_00423b34;
  *(undefined4 *)(DAT_00423b34 + 0x20) = param_1;
  *(undefined4 *)(iVar1 + 0x30) = param_2;
  software_interrupt(0x14);
  uVar2 = *DAT_00423b38 >> 0x1b;
  if ((*DAT_00423b38 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
    return;
  }
  return;
}

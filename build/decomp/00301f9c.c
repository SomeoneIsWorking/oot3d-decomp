// OoT3D decomp @ 00301f9c  name=FUN_00301f9c  size=32

void FUN_00301f9c(byte param_1)

{
  int iVar1;

  iVar1 = DAT_00301fbc;
  *(undefined1 *)(DAT_00301fbc + 0xe) = 9;
  *(byte *)(iVar1 + 0x15) = param_1 ^ 1;
  FUN_002dbe88(DAT_00301fc0,iVar1,*(undefined4 *)(iVar1 + 0xd0),*(undefined4 *)(iVar1 + 0xd4));
  return;
}

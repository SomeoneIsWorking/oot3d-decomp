// OoT3D decomp @ 0047e240  name=FUN_0047e240  size=52

int FUN_0047e240(undefined1 param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = DAT_0047e274;
  *(undefined1 *)(iVar1 + 0x84) = param_1;
  iVar2 = *DAT_0047e278;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}

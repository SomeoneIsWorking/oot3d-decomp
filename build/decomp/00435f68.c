// OoT3D decomp @ 00435f68  name=FUN_00435f68  size=36

void FUN_00435f68(void)

{
  int iVar1;
  undefined4 *puVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar2 = (undefined4 *)(iVar1 + -4);
  iVar1 = 8;
  do {
    puVar2[1] = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
  } while (iVar1 != 0);
  return;
}

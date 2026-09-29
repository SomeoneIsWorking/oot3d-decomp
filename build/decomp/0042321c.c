// OoT3D decomp @ 0042321c  name=FUN_0042321c  size=120

int FUN_0042321c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;

  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0xa0000;
  iVar2 = *DAT_00423294;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_1 = *(undefined4 *)(iVar1 + 0x8c);
    *param_2 = *(undefined4 *)(iVar1 + 0x90);
    *param_3 = *(undefined4 *)(iVar1 + 0x94);
    *param_4 = *(undefined4 *)(iVar1 + 0x98);
    *param_5 = *(undefined4 *)(iVar1 + 0x9c);
    *param_6 = *(undefined4 *)(iVar1 + 0xa0);
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}

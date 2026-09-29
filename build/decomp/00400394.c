// OoT3D decomp @ 00400394  name=FUN_00400394  size=56

int FUN_00400394(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_004003cc;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    uVar3 = *(undefined4 *)(iVar2 + 0x8c);
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    param_2[1] = uVar3;
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

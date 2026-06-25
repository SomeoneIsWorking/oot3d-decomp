// OoT3D decomp @ 0043608c  name=FUN_0043608c  size=56

int FUN_0043608c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + 0x80) = 0x10800;
  FUN_00371738(iVar1 + 0x84,param_2,0x80);
  iVar2 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  return iVar2;
}


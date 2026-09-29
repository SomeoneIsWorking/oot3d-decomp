// OoT3D decomp @ 0041c2ec  name=FUN_0041c2ec  size=76

int FUN_0041c2ec(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  uVar1 = DAT_0041c338;
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x84) = param_1;
  *(undefined4 *)(iVar4 + 0x88) = param_2;
  piVar2 = DAT_0041c33c;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    *param_3 = *(undefined4 *)(iVar4 + 0x8c);
    *param_4 = *(undefined4 *)(iVar4 + 0x90);
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}

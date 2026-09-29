// OoT3D decomp @ 00453f44  name=FUN_00453f44  size=100

int FUN_00453f44(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  uVar4 = *DAT_00453f74;
  piVar2 = (int *)FUN_0030dd98();
  uVar1 = DAT_004663b8;
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar5 + 0x90) = uVar4;
  *(undefined4 *)(iVar5 + 0x84) = param_1;
  *(undefined4 *)(iVar5 + 0x88) = param_2;
  *(undefined4 *)(iVar5 + 0x8c) = 0;
  *(undefined4 *)(iVar5 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    iVar3 = *(int *)(iVar5 + 0x84);
  }
  return iVar3;
}

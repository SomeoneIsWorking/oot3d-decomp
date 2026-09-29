// OoT3D decomp @ 0041bd54  name=FUN_0041bd54  size=112

int FUN_0041bd54(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;

  uVar2 = 0x10;
  uVar5 = 0x11;
  if ((param_1 != 0) && (param_1 == 1)) {
    uVar2 = 0x19;
    uVar5 = 0x1a;
  }
  piVar3 = (int *)FUN_0030dd98();
  uVar1 = DAT_0042370c;
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar6 + 0x84) = uVar2;
  *(undefined4 *)(iVar6 + 0x88) = uVar5;
  *(undefined4 *)(iVar6 + 0x80) = uVar1;
  iVar4 = *piVar3;
  software_interrupt(0x32);
  if (-1 < iVar4) {
    iVar4 = *(int *)(iVar6 + 0x84);
  }
  return iVar4;
}

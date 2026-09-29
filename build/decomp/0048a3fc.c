// OoT3D decomp @ 0048a3fc  name=FUN_0048a3fc  size=68

int FUN_0048a3fc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x84) = param_1;
  *(int *)(iVar4 + 0x88) = param_3;
  *(undefined4 *)(iVar4 + 0x8c) = 0;
  *(uint *)(iVar4 + 0x94) = param_3 << 0xe | 2;
  *(undefined4 *)(iVar4 + 0x98) = param_2;
  piVar2 = DAT_0048a444;
  uVar1 = DAT_0048a440;
  *(undefined4 *)(iVar4 + 0x90) = param_4;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}

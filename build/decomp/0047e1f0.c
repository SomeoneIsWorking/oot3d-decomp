// OoT3D decomp @ 0047e1f0  name=FUN_0047e1f0  size=72

int FUN_0047e1f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(int *)(iVar4 + 0x84) = param_2;
  *(undefined4 *)(iVar4 + 0x88) = 0;
  *(undefined4 *)(iVar4 + 0x94) = param_1;
  piVar2 = DAT_0047e23c;
  uVar1 = DAT_0047e238;
  *(uint *)(iVar4 + 0x90) = param_2 << 0xe | 2;
  *(undefined4 *)(iVar4 + 0x8c) = param_3;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  iVar3 = *piVar2;
  software_interrupt(0x32);
  if (-1 < iVar3) {
    iVar3 = *(int *)(iVar4 + 0x84);
  }
  return iVar3;
}

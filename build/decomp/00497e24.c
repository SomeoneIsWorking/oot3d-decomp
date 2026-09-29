// OoT3D decomp @ 00497e24  name=FUN_00497e24  size=68

int FUN_00497e24(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x180000;
  iVar1 = *param_1;
  software_interrupt(0x32);
  if (-1 < iVar1) {
    uVar3 = *(undefined4 *)(iVar2 + 0x8c);
    uVar4 = *(undefined4 *)(iVar2 + 0x90);
    uVar5 = *(undefined4 *)(iVar2 + 0x94);
    uVar6 = *(undefined4 *)(iVar2 + 0x98);
    uVar7 = *(undefined4 *)(iVar2 + 0x9c);
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    param_2[4] = uVar6;
    param_2[5] = uVar7;
    uVar3 = *(undefined4 *)(iVar2 + 0xa4);
    param_2[6] = *(undefined4 *)(iVar2 + 0xa0);
    param_2[7] = uVar3;
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}

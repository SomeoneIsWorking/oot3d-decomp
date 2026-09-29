// OoT3D decomp @ 00303738  name=FUN_00303738  size=220

void FUN_00303738(undefined1 *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  code *extraout_r12;

  piVar2 = DAT_0030381c;
  uVar1 = DAT_00303818;
  pcVar5 = (code *)*DAT_0030381c;
  if (param_1 == DAT_00303814) goto LAB_00303800;
  if ((int)param_1 < (int)DAT_00303814) {
    if (param_1 == &DAT_01010000) {
      if (param_2[1] == 0 || pcVar5 == (code *)0x0) goto LAB_00303800;
    }
    else {
      if (param_1 != (undefined1 *)0x1020000 && param_1 != (undefined1 *)0x1030000)
      goto LAB_00303800;
      if (*param_2 != 0 && pcVar5 != (code *)0x0) {
        (*pcVar5)(param_2[0xf],DAT_00303818,param_2[0x10]);
        pcVar5 = extraout_r12;
      }
      if (param_2[1] != 0) {
        pcVar5 = (code *)*piVar2;
      }
      if (param_2[1] == 0 || pcVar5 == (code *)0x0) goto LAB_00303800;
    }
    iVar4 = param_2[0x10];
    iVar3 = 0x10000;
  }
  else {
    if (((int)param_1 - (int)DAT_00303814 != 0x10000 && (int)param_1 - (int)DAT_00303814 != 0x20000)
       || (*param_2 == 0 || pcVar5 == (code *)0x0)) goto LAB_00303800;
    iVar3 = param_2[0xf];
    iVar4 = param_2[0x10];
  }
  (*pcVar5)(iVar3,uVar1,iVar4);
LAB_00303800:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

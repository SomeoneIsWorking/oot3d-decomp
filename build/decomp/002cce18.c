// OoT3D decomp @ 002cce18  name=FUN_002cce18  size=224

void FUN_002cce18(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  code *extraout_r12;

  piVar2 = DAT_002ccf00;
  uVar1 = DAT_002ccefc;
  piVar6 = (int *)param_1[2];
  puVar3 = (undefined1 *)piVar6[6];
  pcVar7 = (code *)*DAT_002ccf00;
  if (puVar3 == DAT_002ccef8) goto LAB_002ccee8;
  if ((int)puVar3 < (int)DAT_002ccef8) {
    if (puVar3 == &DAT_01010000) {
      if (piVar6[1] == 0 || pcVar7 == (code *)0x0) goto LAB_002ccee8;
    }
    else {
      if (puVar3 != (undefined1 *)0x1020000 && puVar3 != (undefined1 *)0x1030000) goto LAB_002ccee8;
      if (*piVar6 != 0 && pcVar7 != (code *)0x0) {
        (*pcVar7)(piVar6[5],DAT_002ccefc,*param_1);
        pcVar7 = extraout_r12;
      }
      if (piVar6[1] != 0) {
        pcVar7 = (code *)*piVar2;
      }
      if (piVar6[1] == 0 || pcVar7 == (code *)0x0) goto LAB_002ccee8;
    }
    uVar5 = *param_1;
    iVar4 = 0x10000;
  }
  else {
    if (((int)puVar3 - (int)DAT_002ccef8 != 0x10000 && (int)puVar3 - (int)DAT_002ccef8 != 0x20000)
       || (*piVar6 == 0 || pcVar7 == (code *)0x0)) goto LAB_002ccee8;
    uVar5 = *param_1;
    iVar4 = piVar6[5];
  }
  (*pcVar7)(iVar4,uVar1,uVar5);
LAB_002ccee8:
  *piVar6 = 0;
  piVar6[1] = 0;
  return;
}

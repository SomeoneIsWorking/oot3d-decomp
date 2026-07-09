// OoT3D decomp @ 0044d778  name=FUN_0044d778  size=396

bool FUN_0044d778(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  code *extraout_r12;
  code *extraout_r12_00;
  bool bVar7;
  
  uVar2 = DAT_0044d90c;
  puVar1 = DAT_0044d908;
  bVar7 = true;
  piVar5 = (int *)param_1[2];
  iVar3 = piVar5[6];
  pcVar6 = (code *)*DAT_0044d908;
  if (iVar3 != DAT_0044d904) {
    if (iVar3 < DAT_0044d904) {
      if (iVar3 == 0x1010000) {
        if (pcVar6 == (code *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*pcVar6)(0x10000,DAT_0044d90c,*param_1,piVar5[3]);
        }
        bVar7 = iVar3 != 0;
        piVar5[1] = iVar3;
        *piVar5 = iVar3;
      }
      else {
        if (iVar3 == 0x1020000) {
          iVar3 = 0x20000;
        }
        else {
          if (iVar3 != 0x1030000) {
            return true;
          }
          iVar3 = 0x30000;
        }
        piVar5[5] = iVar3;
        if (pcVar6 == (code *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*pcVar6)(iVar3,uVar2,*param_1,piVar5[3]);
        }
        *piVar5 = iVar3;
        if ((code *)*puVar1 == (code *)0x0) {
          iVar3 = 0;
          pcVar6 = (code *)0x0;
        }
        else {
          iVar3 = (*(code *)*puVar1)(0x10000,uVar2,*param_1,piVar5[3]);
          pcVar6 = extraout_r12;
        }
        piVar5[1] = iVar3;
        puVar1 = DAT_0044d910;
        iVar4 = *piVar5;
        if (iVar4 == 0 || iVar3 == 0) {
          bVar7 = false;
          if (iVar4 != 0) {
            pcVar6 = (code *)*DAT_0044d910;
          }
          if (iVar4 != 0 && pcVar6 != (code *)0x0) {
            (*pcVar6)(piVar5[5],uVar2,*param_1);
            pcVar6 = extraout_r12_00;
          }
          if (piVar5[1] != 0) {
            pcVar6 = (code *)*puVar1;
          }
          if (piVar5[1] != 0 && pcVar6 != (code *)0x0) {
            (*pcVar6)(0x10000,uVar2,*param_1);
          }
        }
      }
    }
    else if (iVar3 - DAT_0044d904 == 0x10000 || iVar3 - DAT_0044d904 == 0x20000) {
      if (iVar3 == 0x2020000) {
        iVar3 = 0x20000;
      }
      else {
        iVar3 = 0x30000;
      }
      piVar5[5] = iVar3;
      if (pcVar6 == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*pcVar6)(iVar3,uVar2,*param_1,piVar5[3]);
      }
      bVar7 = iVar3 != 0;
      *piVar5 = iVar3;
    }
  }
  return bVar7;
}


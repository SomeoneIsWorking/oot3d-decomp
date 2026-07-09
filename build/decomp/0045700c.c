// OoT3D decomp @ 0045700c  name=FUN_0045700c  size=388

bool FUN_0045700c(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  code *extraout_r12;
  code *extraout_r12_00;
  bool bVar6;
  
  puVar1 = DAT_00457194;
  bVar6 = true;
  pcVar5 = (code *)*DAT_00457194;
  uVar4 = DAT_00457190 >> 0x11 | 1;
  if (param_1 != DAT_00457190) {
    if (param_1 < DAT_00457190) {
      if (param_1 == 0x1010000) {
        if (pcVar5 == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*pcVar5)(0x10000,uVar4,param_2[0x10],param_2[8]);
        }
        bVar6 = iVar2 != 0;
        param_2[1] = iVar2;
        *param_2 = iVar2;
      }
      else {
        if (param_1 == 0x1020000) {
          iVar2 = 0x20000;
        }
        else {
          if (param_1 != 0x1030000) {
            return true;
          }
          iVar2 = 0x30000;
        }
        param_2[0xf] = iVar2;
        if (pcVar5 == (code *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*pcVar5)(iVar2,uVar4,param_2[0x10],param_2[8]);
        }
        *param_2 = iVar2;
        if ((code *)*puVar1 == (code *)0x0) {
          iVar2 = 0;
          pcVar5 = (code *)0x0;
        }
        else {
          iVar2 = (*(code *)*puVar1)(0x10000,uVar4,param_2[0x10],param_2[8]);
          pcVar5 = extraout_r12;
        }
        param_2[1] = iVar2;
        puVar1 = DAT_00457198;
        iVar3 = *param_2;
        if (iVar3 == 0 || iVar2 == 0) {
          bVar6 = false;
          if (iVar3 != 0) {
            pcVar5 = (code *)*DAT_00457198;
          }
          if (iVar3 != 0 && pcVar5 != (code *)0x0) {
            (*pcVar5)(param_2[0xf],uVar4,param_2[0x10]);
            pcVar5 = extraout_r12_00;
          }
          if (param_2[1] != 0) {
            pcVar5 = (code *)*puVar1;
          }
          if (param_2[1] != 0 && pcVar5 != (code *)0x0) {
            (*pcVar5)(0x10000,uVar4,param_2[0x10]);
          }
        }
      }
    }
    else if (param_1 - DAT_00457190 == 0x10000 || param_1 - DAT_00457190 == 0x20000) {
      if (param_1 == 0x2020000) {
        iVar2 = 0x20000;
      }
      else {
        iVar2 = 0x30000;
      }
      param_2[0xf] = iVar2;
      if (pcVar5 == (code *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*pcVar5)(iVar2,uVar4,param_2[0x10],param_2[8]);
      }
      bVar6 = iVar2 != 0;
      *param_2 = iVar2;
    }
  }
  return bVar6;
}


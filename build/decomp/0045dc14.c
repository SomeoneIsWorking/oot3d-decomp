// OoT3D decomp @ 0045dc14  name=FUN_0045dc14  size=268

void FUN_0045dc14(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint in_r12;
  code *pcVar9;
  uint extraout_r12;
  
  iVar3 = DAT_0045dd20;
  piVar8 = (int *)(param_2 + 0x1c4);
  if (piVar8 < (int *)(param_2 + *(int *)(param_2 + 0x1c0) * 4 + 0x1c4U)) {
    do {
      iVar4 = *piVar8;
      bVar1 = 0;
      if (iVar4 != 0) {
        bVar1 = *(byte *)(iVar4 + 0x12);
      }
      if ((iVar4 != 0 && (bVar1 & 1) != 0) &&
         (piVar7 = piVar8 + 1, piVar7 < (int *)(param_2 + *(int *)(param_2 + 0x1c0) * 4 + 0x1c4))) {
        do {
          piVar6 = (int *)*piVar7;
          if (piVar6 != (int *)0x0) {
            in_r12 = (uint)*(byte *)((int)piVar6 + 0x12);
          }
          if (piVar6 != (int *)0x0 && (in_r12 & 1) != 0) {
            piVar5 = (int *)*piVar8;
            bVar1 = *(byte *)((int)piVar6 + 0x13);
            if ((*(byte *)((int)piVar5 + 0x12) & bVar1 & 0x38) != 0) {
              bVar2 = *(byte *)((int)piVar5 + 0x13);
              in_r12 = in_r12 & bVar2;
              if (((((in_r12 & 0x38) != 0) && ((bVar2 & 2) == 0 || (bVar1 & 4) == 0)) &&
                  ((bVar1 & 2) == 0 || (bVar2 & 4) == 0)) && (*piVar5 != *piVar6)) {
                pcVar9 = *(code **)(iVar3 + (uint)*(byte *)((int)piVar5 + 0x15) * 0x10 +
                                   (uint)*(byte *)((int)piVar6 + 0x15) * 4);
                in_r12 = 0;
                if (pcVar9 != (code *)0x0) {
                  (*pcVar9)(param_1,param_2);
                  in_r12 = extraout_r12;
                }
              }
            }
          }
          piVar7 = piVar7 + 1;
        } while (piVar7 < (int *)(param_2 + *(int *)(param_2 + 0x1c0) * 4 + 0x1c4));
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 < (int *)(param_2 + *(int *)(param_2 + 0x1c0) * 4 + 0x1c4));
  }
  return;
}


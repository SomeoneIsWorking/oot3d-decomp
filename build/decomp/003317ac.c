// OoT3D decomp @ 003317ac  name=FUN_003317ac  size=204

int FUN_003317ac(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar1 = DAT_00331878;
  ppiVar5 = (int **)(param_2 + 0x1c4);
  iVar2 = 0;
  uVar7 = param_1;
  iVar8 = param_2;
  uVar9 = param_3;
  if (ppiVar5 < (int **)(param_2 + *(int *)(param_2 + 0x1c0) * 4 + 0x1c4U)) {
    do {
      piVar4 = *ppiVar5;
      if ((*(byte *)((int)piVar4 + 0x12) & 1) != 0) {
        iVar3 = 0;
        if (0 < param_6) {
          do {
            if (*piVar4 == *(int *)(param_5 + iVar3 * 4)) goto LAB_00331858;
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_6);
        }
        pcVar6 = *(code **)(iVar1 + (uint)*(byte *)((int)piVar4 + 0x15) * 4);
        if ((pcVar6 != (code *)0x0) &&
           (iVar2 = (*pcVar6)(param_1,param_2,piVar4,param_3,param_4,uVar7,iVar8,uVar9), iVar2 != 0)
           ) {
          return iVar2;
        }
      }
LAB_00331858:
      ppiVar5 = ppiVar5 + 1;
    } while (ppiVar5 < (int **)(param_2 + *(int *)(param_2 + 0x1c0) * 4 + 0x1c4U));
  }
  return iVar2;
}


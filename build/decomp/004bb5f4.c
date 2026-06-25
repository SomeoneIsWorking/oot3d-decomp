// OoT3D decomp @ 004bb5f4  name=FUN_004bb5f4  size=764

void FUN_004bb5f4(char **param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar1 = (char *)FUN_002bedd4(param_2);
  *(uint *)(pcVar1 + 0x10) = *param_5;
  *(uint *)(pcVar1 + 0x14) = param_5[1];
  *(uint *)(pcVar1 + 0x18) = param_5[2];
  piVar3 = (int *)param_5[3];
  *(int **)(pcVar1 + 0x1c) = piVar3;
  *piVar3 = *piVar3 + 1;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  if (((*(int *)(param_2 + 0x14) == param_4) || (param_3 != 0)) ||
     (*param_5 < *(uint *)(param_4 + 0x10))) {
    *(char **)(param_4 + 8) = pcVar1;
    iVar4 = *(int *)(param_2 + 0x14);
    if (iVar4 == param_4) {
      *(char **)(iVar4 + 4) = pcVar1;
      *(char **)(*(int *)(param_2 + 0x14) + 0xc) = pcVar1;
    }
    else if (*(int *)(iVar4 + 8) == param_4) {
      *(char **)(iVar4 + 8) = pcVar1;
    }
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar1;
    if (*(int *)(*(int *)(param_2 + 0x14) + 0xc) == param_4) {
      *(char **)(*(int *)(param_2 + 0x14) + 0xc) = pcVar1;
    }
  }
  *(int *)(pcVar1 + 4) = param_4;
  pcVar2 = pcVar1;
  while (*(char **)(*(int *)(param_2 + 0x14) + 4) != pcVar2) {
    pcVar5 = *(char **)(pcVar2 + 4);
    if (*pcVar5 != '\0') break;
    pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 8);
    if (pcVar7 == pcVar5) {
      pcVar7 = *(char **)(*(int *)(pcVar5 + 4) + 0xc);
      if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) {
        if (*(char **)(pcVar5 + 0xc) == pcVar2) {
          iVar4 = *(int *)(pcVar5 + 0xc);
          *(int *)(pcVar5 + 0xc) = *(int *)(iVar4 + 8);
          if (*(int *)(iVar4 + 8) != 0) {
            *(char **)(*(int *)(iVar4 + 8) + 4) = pcVar5;
          }
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(pcVar5 + 4);
          if (*(char **)(*(int *)(param_2 + 0x14) + 4) == pcVar5) {
            *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar4;
          }
          else {
            iVar6 = *(int *)(pcVar5 + 4);
            if (*(char **)(iVar6 + 8) == pcVar5) {
              *(int *)(iVar6 + 8) = iVar4;
            }
            else {
              *(int *)(iVar6 + 0xc) = iVar4;
            }
          }
          *(char **)(iVar4 + 8) = pcVar5;
          *(int *)(pcVar5 + 4) = iVar4;
          pcVar2 = pcVar5;
        }
        **(undefined **)(pcVar2 + 4) = 1;
        **(undefined **)(*(int *)(pcVar2 + 4) + 4) = 0;
        iVar4 = *(int *)(*(int *)(pcVar2 + 4) + 4);
        iVar6 = *(int *)(iVar4 + 8);
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar6 + 0xc);
        if (*(int *)(iVar6 + 0xc) != 0) {
          *(int *)(*(int *)(iVar6 + 0xc) + 4) = iVar4;
        }
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar4 + 4);
        if (*(int *)(*(int *)(param_2 + 0x14) + 4) == iVar4) {
          *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar6;
        }
        else {
          iVar8 = *(int *)(iVar4 + 4);
          if (*(int *)(iVar8 + 0xc) == iVar4) {
            *(int *)(iVar8 + 0xc) = iVar6;
          }
          else {
            *(int *)(iVar8 + 8) = iVar6;
          }
        }
        *(int *)(iVar6 + 0xc) = iVar4;
        goto LAB_004bb8d4;
      }
LAB_004bb7ec:
      *pcVar5 = '\x01';
      *pcVar7 = '\x01';
      **(undefined **)(*(int *)(pcVar2 + 4) + 4) = 0;
      pcVar2 = *(char **)(*(int *)(pcVar2 + 4) + 4);
    }
    else {
      if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\0')) goto LAB_004bb7ec;
      if (*(char **)(pcVar5 + 8) == pcVar2) {
        iVar4 = *(int *)(pcVar5 + 8);
        *(int *)(pcVar5 + 8) = *(int *)(iVar4 + 0xc);
        if (*(int *)(iVar4 + 0xc) != 0) {
          *(char **)(*(int *)(iVar4 + 0xc) + 4) = pcVar5;
        }
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(pcVar5 + 4);
        if (*(char **)(*(int *)(param_2 + 0x14) + 4) == pcVar5) {
          *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar4;
        }
        else {
          iVar6 = *(int *)(pcVar5 + 4);
          if (*(char **)(iVar6 + 0xc) == pcVar5) {
            *(int *)(iVar6 + 0xc) = iVar4;
          }
          else {
            *(int *)(iVar6 + 8) = iVar4;
          }
        }
        *(char **)(iVar4 + 0xc) = pcVar5;
        *(int *)(pcVar5 + 4) = iVar4;
        pcVar2 = pcVar5;
      }
      **(undefined **)(pcVar2 + 4) = 1;
      **(undefined **)(*(int *)(pcVar2 + 4) + 4) = 0;
      iVar4 = *(int *)(*(int *)(pcVar2 + 4) + 4);
      iVar6 = *(int *)(iVar4 + 0xc);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar6 + 8);
      if (*(int *)(iVar6 + 8) != 0) {
        *(int *)(*(int *)(iVar6 + 8) + 4) = iVar4;
      }
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar4 + 4);
      if (*(int *)(*(int *)(param_2 + 0x14) + 4) == iVar4) {
        *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar6;
      }
      else {
        iVar8 = *(int *)(iVar4 + 4);
        if (*(int *)(iVar8 + 8) == iVar4) {
          *(int *)(iVar8 + 8) = iVar6;
        }
        else {
          *(int *)(iVar8 + 0xc) = iVar6;
        }
      }
      *(int *)(iVar6 + 8) = iVar4;
LAB_004bb8d4:
      *(int *)(iVar4 + 4) = iVar6;
    }
  }
  **(undefined **)(*(int *)(param_2 + 0x14) + 4) = 1;
  *param_1 = pcVar1;
  return;
}


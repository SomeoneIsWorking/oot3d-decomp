// OoT3D decomp @ 002e4514  name=FUN_002e4514  size=252

void FUN_002e4514(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  puVar2 = DAT_002e4614;
  puVar1 = DAT_002e4610;
  if (*(char *)(param_1 + 0x5407) != '\0') {
    if (*(char *)(param_1 + 0x5405) == '\0') {
      iVar7 = 0;
      if (*(char *)(param_1 + 0x5407) != '\0') {
        do {
          iVar5 = 0;
          iVar3 = param_1 + 0x4c30 + iVar7 * 0x3c;
          piVar6 = (int *)(iVar3 + 0x7d8);
          do {
            if (piVar6[iVar5 * 2 + 4] != 0) {
              uVar4 = FUN_00377d28(piVar6[iVar5 * 2 + 4],DAT_002e4618);
              (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,uVar4);
              piVar6[iVar5 * 2 + 4] = 0;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 6);
          if (*(int **)(iVar3 + 0x7dc) != (int *)0x0) {
            (**(code **)(**(int **)(iVar3 + 0x7dc) + 4))();
          }
          if (*piVar6 != 0) {
            uVar4 = FUN_002da0e4();
            (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar4);
          }
          *(undefined4 *)(iVar3 + 0x7dc) = 0;
          *piVar6 = 0;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*(byte *)(param_1 + 0x5407));
      }
      *(undefined1 *)(param_1 + 0x5407) = 0;
      *(undefined1 *)((uint)*(byte *)(param_1 + 0x5406) + param_1 + 0x5402) = 0;
    }
    else {
      *(char *)(param_1 + 0x5405) = *(char *)(param_1 + 0x5405) + -1;
    }
  }
  return;
}


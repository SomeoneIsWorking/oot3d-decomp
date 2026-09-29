// OoT3D decomp @ 004c3668  name=FUN_004c3668  size=452

void FUN_004c3668(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = param_4;
  piVar3 = *(int **)(param_4 + 8);
  *(int **)(param_4 + 8) = piVar3 + 10;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar3[9] = 0;
  }
  param_1[2] = (int)piVar3;
  iVar7 = *(int *)(*param_1 + 0xc) + *param_1;
  piVar4 = *(int **)(param_1[1] + 0xc);
  *piVar3 = iVar7;
  piVar3[9] = (int)piVar4;
  piVar3[1] = iVar7 + 0x10;
  iVar7 = *(int *)(*piVar4 + 0xc);
  piVar3[2] = iVar7;
  iVar7 = iVar7 + *(int *)(*piVar4 + 0x14);
  piVar3[3] = iVar7;
  iVar7 = iVar7 + *(int *)(*piVar4 + 0x1c);
  piVar3[4] = iVar7;
  iVar7 = iVar7 + *(int *)(*piVar4 + 0x24);
  piVar3[5] = iVar7;
  iVar7 = iVar7 + *(int *)(*piVar4 + 0x2c);
  piVar3[6] = iVar7;
  iVar7 = iVar7 + *(int *)(*piVar4 + 0x34);
  piVar3[7] = iVar7;
  piVar3[8] = *(int *)(*piVar4 + 0x3c) + iVar7;
  piVar3 = *(int **)(param_1[4] + 8);
  *(int **)(param_1[4] + 8) = piVar3 + 6;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
  }
  param_1[3] = (int)piVar3;
  iVar8 = *(int *)(*param_1 + 8) + *param_1;
  iVar5 = param_1[2];
  iVar6 = *(int *)(param_1[1] + 8);
  iVar7 = param_1[4];
  *piVar3 = iVar8;
  piVar3[1] = iVar8 + 0x10;
  piVar3[2] = iVar5;
  piVar3[3] = iVar6;
  piVar3[5] = iVar7;
  puVar1 = *(undefined4 **)(iVar7 + 8);
  *(undefined4 **)(iVar7 + 8) = puVar1 + *(int *)(iVar8 + 8) * 3;
  iVar7 = 0;
  puVar2 = puVar1;
  if (0 < *(int *)(*piVar3 + 8)) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      iVar7 = iVar7 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar7 < *(int *)(*piVar3 + 8));
  }
  piVar3[4] = (int)puVar1;
  iVar7 = 0;
  if (0 < *(int *)(*piVar3 + 8)) {
    do {
      iVar5 = piVar3[2];
      piVar4 = (int *)(piVar3[4] + iVar7 * 0xc);
      iVar6 = piVar3[3];
      *piVar4 = piVar3[1] + iVar7 * 4;
      iVar7 = iVar7 + 1;
      piVar4[1] = iVar5;
      piVar4[2] = iVar6;
    } while (iVar7 < *(int *)(*piVar3 + 8));
  }
  return;
}

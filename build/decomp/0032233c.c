// OoT3D decomp @ 0032233c  name=FUN_0032233c  size=648

uint FUN_0032233c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;

  param_2 = param_2 + param_3;
  piVar3 = (int *)(param_1 + 0xc);
  piVar4 = piVar3;
  if (param_4 == 0) {
    do {
      if (0 < piVar4[3]) {
        iVar7 = piVar4[3] - param_2;
        piVar3 = piVar4;
        if (iVar7 == 0) goto LAB_00322400;
        if (0 < iVar7) {
          piVar3 = (int *)FUN_00313ce0(0x10);
          piVar3[2] = piVar4[2] + iVar7;
          piVar3[3] = -param_2;
          *piVar3 = (int)piVar4;
          piVar4[3] = iVar7;
          *(int **)piVar4[1] = piVar3;
          piVar3[1] = piVar4[1];
          piVar4[1] = (int)piVar3;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_2;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          goto LAB_00322488;
        }
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)(param_1 + 0xc));
  }
  else {
    do {
      if (0 < piVar3[3]) {
        iVar7 = piVar3[3] - param_2;
        if (iVar7 == 0) goto LAB_00322400;
        if (0 < iVar7) {
          piVar3[3] = -param_2;
          puVar1 = (undefined4 *)FUN_00313ce0(0x10);
          puVar1[2] = piVar3[2] + param_2;
          puVar1[3] = iVar7;
          *puVar1 = piVar3;
          *(undefined4 **)piVar3[1] = puVar1;
          puVar1[1] = piVar3[1];
          piVar3[1] = (int)puVar1;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_2;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          goto LAB_00322488;
        }
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)(param_1 + 0xc));
  }
  piVar3 = (int *)0x0;
LAB_00322488:
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar5 = piVar3[2];
  if ((param_3 - 1U & uVar5) == 0) {
    return uVar5;
  }
  uVar8 = (uVar5 + param_3) - 1 & -param_3;
  piVar4 = (int *)FUN_00313ce0(0x10);
  iVar7 = piVar3[3];
  iVar6 = uVar8 - uVar5;
  *piVar4 = (int)piVar3;
  iVar2 = piVar3[1];
  piVar4[3] = iVar7 + iVar6;
  piVar4[1] = iVar2;
  piVar4[2] = uVar8;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  *(int **)piVar3[1] = piVar4;
  piVar3[1] = (int)piVar4;
  piVar3[3] = iVar6;
  if ((0 < piVar4[3]) && (piVar3[2] + iVar6 == piVar4[2])) {
    piVar3[3] = iVar6 + piVar4[3];
    *(int *)(*piVar4 + 4) = piVar4[1];
    *(int *)piVar4[1] = *piVar4;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    FUN_003525d4();
  }
  iVar7 = *piVar3;
  iVar2 = *(int *)(iVar7 + 0xc);
  if ((0 < iVar2) && (piVar3[2] - iVar2 == *(int *)(iVar7 + 8))) {
    *(int *)(iVar7 + 0xc) = iVar2 + piVar3[3];
    *(int *)(*piVar3 + 4) = piVar3[1];
    *(int *)piVar3[1] = *piVar3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    FUN_003525d4(piVar3);
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar6;
  return uVar8;
LAB_00322400:
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_2;
  piVar3[3] = -piVar3[3];
  goto LAB_00322488;
}

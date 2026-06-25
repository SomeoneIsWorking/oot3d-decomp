// OoT3D decomp @ 002beafc  name=FUN_002beafc  size=664

void FUN_002beafc(int **param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;
  
  piVar2 = (int *)(**(code **)**param_1)(*param_1,0x180);
  if (piVar2 == (int *)0x0) {
    (**(code **)(**param_1 + 8))(*param_1,s_MoLiveAllocator__not_enough_memo_002bed94,0x180);
  }
  if (param_1[9] == (int *)0x0) {
    param_1[0xb] = (int *)&Reserved2;
    piVar3 = *param_1;
    piVar4 = (int *)(**(code **)*piVar3)(piVar3,0x80);
    if (piVar4 == (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3,s_MoLiveAllocator__not_enough_memo_002bed94,0x80);
    }
    param_1[10] = piVar4;
    piVar4[(uint)param_1[0xb] >> 1] = (int)piVar2;
    param_1[1] = piVar2 + 0x30;
    ppiVar7 = (int **)(param_1[10] + ((uint)param_1[0xb] >> 1));
    if (ppiVar7 != (int **)0x0) {
      piVar2 = *ppiVar7;
    }
    else {
      piVar2 = (int *)0x0;
    }
    param_1[2] = piVar2;
    if (ppiVar7 != (int **)0x0) {
      piVar2 = *ppiVar7 + 0x60;
    }
    else {
      piVar2 = (int *)0x0;
    }
    param_1[3] = piVar2;
    param_1[4] = (int *)ppiVar7;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[7] = param_1[3];
    param_1[8] = param_1[4];
    return;
  }
  piVar3 = param_1[8];
  if (param_1[10] + (int)param_1[0xb] + -1 == piVar3) {
    piVar4 = *param_1;
    iVar1 = (int)piVar3 - (int)param_1[4] >> 2;
    piVar11 = (int *)(iVar1 * 2 + 2);
    piVar3 = (int *)(**(code **)*piVar4)();
    if (piVar3 == (int *)0x0) {
      (**(code **)(*piVar4 + 8))
                (piVar4,s_MoLiveAllocator__not_enough_memo_002bed94,(int)piVar11 * 4);
    }
    piVar8 = param_1[4];
    uVar12 = (uint)piVar11 & 0xfffffffc;
    iVar10 = (int)param_1[8] + (4 - (int)piVar8);
    piVar5 = (int *)(uVar12 + (int)piVar3);
    if (0 < iVar10 >> 2) {
      piVar6 = piVar5;
      piVar9 = piVar8;
      if (iVar10 * 0x20000000 < 0) {
        piVar9 = piVar8 + 1;
        piVar6 = piVar5 + 1;
        *piVar5 = *piVar8;
      }
      for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
        piVar5 = piVar9 + 1;
        *piVar6 = *piVar9;
        piVar9 = piVar9 + 2;
        piVar6[1] = *piVar5;
        piVar6 = piVar6 + 2;
      }
    }
    (**(code **)(*piVar4 + 4))(piVar4,param_1[10]);
    param_1[10] = piVar3;
    piVar3[iVar1 + ((uint)piVar11 >> 2) + 1] = (int)piVar2;
    ppiVar7 = (int **)((int)param_1[10] + uVar12);
    if (ppiVar7 != (int **)0x0) {
      piVar3 = *ppiVar7;
    }
    else {
      piVar3 = (int *)0x0;
    }
    param_1[2] = piVar3;
    if (ppiVar7 != (int **)0x0) {
      piVar3 = *ppiVar7 + 0x60;
    }
    else {
      piVar3 = (int *)0x0;
    }
    param_1[3] = piVar3;
    param_1[4] = (int *)ppiVar7;
    param_1[5] = piVar2;
    ppiVar7 = (int **)((int)param_1[10] + iVar1 * 4 + 4 + uVar12);
    if (ppiVar7 != (int **)0x0) {
      piVar2 = *ppiVar7;
    }
    else {
      piVar2 = (int *)0x0;
    }
    param_1[6] = piVar2;
    if (ppiVar7 != (int **)0x0) {
      piVar2 = *ppiVar7 + 0x60;
    }
    else {
      piVar2 = (int *)0x0;
    }
    param_1[7] = piVar2;
    param_1[8] = (int *)ppiVar7;
    param_1[0xb] = piVar11;
    return;
  }
  param_1[8] = piVar3 + 1;
  piVar3[1] = (int)piVar2;
  ppiVar7 = (int **)param_1[8];
  param_1[5] = piVar2;
  bVar13 = ppiVar7 != (int **)0x0;
  if (bVar13) {
    piVar2 = *ppiVar7;
  }
  else {
    piVar2 = (int *)0x0;
    ppiVar7 = (int **)0x0;
  }
  param_1[6] = piVar2;
  if (bVar13) {
    ppiVar7 = (int **)(*ppiVar7 + 0x60);
  }
  param_1[7] = (int *)ppiVar7;
  return;
}


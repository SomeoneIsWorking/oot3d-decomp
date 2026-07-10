// OoT3D decomp @ 00310698  name=FUN_00310698  size=420

void FUN_00310698(uint param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = iRam0031083c;
  iVar9 = *(int *)(iRam0031083c + 8);
  piVar6 = *(int **)(iVar9 + (param_1 & 0x1ff) * 4 + 8);
  if (piVar6 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar6 + 1);
      if (*puVar1 != param_1) {
        piVar6 = (int *)*piVar6;
      }
    } while (*puVar1 != param_1 && piVar6 != (int *)0x0);
  }
  *(undefined1 *)(piVar6 + 5) = 1;
  if (param_2 == 0xffffffff) {
    piVar6[2] = 0;
    return;
  }
  uVar8 = 0;
  iVar3 = *(int *)(iVar9 + (param_2 & 0x1ff) * 4 + 0x808);
  if (iVar3 != 0) {
    do {
      bVar10 = *(uint *)(iVar3 + 8) != param_2;
      if (bVar10) {
        iVar3 = *(int *)(iVar3 + 0x18);
      }
    } while (bVar10 && iVar3 != 0);
  }
  if (*(int *)(iVar3 + 0xc) == 0x8b31) {
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + -1;
    piVar6[3] = 0;
    if (*(int *)(iVar3 + 0x10) == 0) {
      cVar2 = *(char *)(iVar3 + 0x14);
joined_r0x00310788:
      if (cVar2 != '\0') {
        uVar8 = param_2;
      }
    }
  }
  else if (*(int *)(iVar3 + 0xc) == 0x6001) {
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + -1;
    piVar6[4] = 0;
    if (*(int *)(iVar3 + 0x10) == 0) {
      cVar2 = *(char *)(iVar3 + 0x14);
      goto joined_r0x00310788;
    }
  }
  if (uVar8 == 0) {
    return;
  }
  piVar5 = (int *)0x0;
  iVar9 = iVar9 + (uVar8 & 0x1ff) * 4;
  piVar7 = *(int **)(iVar9 + 0x808);
  piVar6 = piVar7;
  if (piVar7 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar6 + 2);
      if (*puVar1 != uVar8) {
        piVar6 = (int *)piVar6[6];
        piVar5 = piVar6;
      }
    } while (*puVar1 != uVar8 && piVar6 != (int *)0x0);
    if (piVar5 != (int *)0x0) {
      piVar5[6] = piVar6[6];
      goto code_r0x003107e8;
    }
  }
  *(int *)(iVar9 + 0x808) = piVar7[6];
code_r0x003107e8:
  if (uVar8 < *(uint *)(iVar4 + 4)) {
    *(uint *)(iVar4 + 4) = uVar8;
  }
  iVar4 = *piVar6;
  if (iVar4 != 0) {
    iVar9 = *(int *)(iVar4 + 0x18) + -1;
    *(int *)(iVar4 + 0x18) = iVar9;
    if (iVar9 == 0) {
      FUN_003030cc(*piVar6);
    }
  }
  if ((code *)*puRam00310840 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00310838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00310840)(0x10000,0x100,0,piVar6);
  return;
}


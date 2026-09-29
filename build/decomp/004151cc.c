// OoT3D decomp @ 004151cc  name=FUN_004151cc  size=228

void FUN_004151cc(uint param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;

  iVar2 = DAT_004152b0;
  iVar5 = *(int *)(DAT_004152b0 + 8) + (param_1 & 0x1ff) * 4;
  piVar3 = *(int **)(iVar5 + 0x808);
  piVar4 = piVar3;
  if (piVar3 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar4 + 2);
      if (*puVar1 != param_1) {
        piVar4 = (int *)piVar4[6];
      }
    } while (*puVar1 != param_1 && piVar4 != (int *)0x0);
  }
  if (piVar4[4] != 0) {
    *(undefined1 *)(piVar4 + 5) = 1;
    return;
  }
  piVar6 = (int *)0x0;
  piVar4 = piVar3;
  if (piVar3 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar4 + 2);
      if (*puVar1 != param_1) {
        piVar4 = (int *)piVar4[6];
        piVar6 = piVar4;
      }
    } while (*puVar1 != param_1 && piVar4 != (int *)0x0);
    if (piVar6 != (int *)0x0) {
      piVar6[6] = piVar4[6];
      goto LAB_00415258;
    }
  }
  *(int *)(iVar5 + 0x808) = piVar3[6];
LAB_00415258:
  if (param_1 < *(uint *)(iVar2 + 4)) {
    *(uint *)(iVar2 + 4) = param_1;
  }
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 0x18) + -1;
    *(int *)(iVar2 + 0x18) = iVar5;
    if (iVar5 == 0) {
      FUN_003030cc(*piVar4);
    }
  }
  if ((code *)*DAT_004152b4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004152a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_004152b4)(0x10000,0x100,0,piVar4);
  return;
}

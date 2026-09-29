// OoT3D decomp @ 00303280  name=FUN_00303280  size=396

void FUN_00303280(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  code *in_r12;
  code *extraout_r12;
  code *extraout_r12_00;
  code *extraout_r12_01;
  code *extraout_r12_02;

  puVar3 = DAT_0030340c;
  piVar9 = (int *)0x0;
  piVar7 = *(int **)(DAT_0030340c[2] + (param_1 & 0x1ff) * 4 + 8);
  if (piVar7 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar7 + 1);
      piVar5 = piVar7;
      if (*puVar1 != param_1) {
        piVar5 = (int *)*piVar7;
        piVar9 = piVar7;
      }
      piVar7 = piVar5;
    } while (*puVar1 != param_1 && piVar7 != (int *)0x0);
  }
  if (piVar7[3] != 0) {
    FUN_00310698(param_1,*(undefined4 *)(piVar7[3] + 8));
    in_r12 = extraout_r12;
  }
  if (piVar7[4] != 0) {
    FUN_00310698(param_1,*(undefined4 *)(piVar7[4] + 8));
    in_r12 = extraout_r12_00;
  }
  if (piVar9 == (int *)0x0) {
    iVar6 = puVar3[2] + (param_1 & 0x1ff) * 4;
    *(undefined4 *)(iVar6 + 8) = **(undefined4 **)(iVar6 + 8);
  }
  else {
    *piVar9 = *piVar7;
  }
  if (param_1 < *puVar3) {
    *puVar3 = param_1;
  }
  puVar4 = DAT_00303410;
  if (piVar7[0xb] != 0) {
    in_r12 = (code *)*DAT_00303410;
  }
  if (piVar7[0xb] != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
    in_r12 = extraout_r12_01;
  }
  if (piVar7[0x70] != 0) {
    in_r12 = (code *)*puVar4;
  }
  if (piVar7[0x70] != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
    in_r12 = extraout_r12_02;
  }
  if (piVar7[7] != 0) {
    in_r12 = (code *)*puVar4;
  }
  if (piVar7[7] != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
  }
  puVar8 = (undefined4 *)piVar7[6];
  while (puVar2 = puVar8, puVar2 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar2[2];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(0x10000,0x100,0,*puVar2);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(0x10000,0x100,0,puVar2);
      }
    }
  }
  if ((code *)*puVar4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00303404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(0x10000,0x100,0,piVar7);
  return;
}

// OoT3D decomp @ 003030cc  name=FUN_003030cc  size=428

void FUN_003030cc(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *in_r12;
  code *extraout_r12;
  code *extraout_r12_00;
  code *extraout_r12_01;
  code *extraout_r12_02;
  code *extraout_r12_03;
  bool bVar5;

  iVar2 = param_1[8];
  if (*(int **)(*(int *)(DAT_00303278 + 8) + 0x1008) == param_1) {
    *(int *)(*(int *)(DAT_00303278 + 8) + 0x1008) = iVar2;
    if (iVar2 == 0) goto LAB_00303120;
    iVar3 = 0;
  }
  else {
    *(int *)(param_1[7] + 0x20) = iVar2;
    iVar2 = param_1[8];
    if (iVar2 == 0) goto LAB_00303120;
    iVar3 = param_1[7];
  }
  *(int *)(iVar2 + 0x1c) = iVar3;
LAB_00303120:
  puVar1 = DAT_0030327c;
  if (*param_1 != 0) {
    in_r12 = (code *)*DAT_0030327c;
  }
  if (*param_1 != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
    in_r12 = extraout_r12;
  }
  if (param_1[2] != 0) {
    in_r12 = (code *)*puVar1;
  }
  if (param_1[2] != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
    in_r12 = extraout_r12_00;
  }
  if (param_1[4] != 0) {
    uVar4 = 0;
    if (param_1[5] != 0) {
      do {
        bVar5 = *(int *)(param_1[4] + uVar4 * 0xe8 + 0x30) != 0;
        if (bVar5) {
          in_r12 = (code *)*puVar1;
        }
        if (bVar5 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
          in_r12 = extraout_r12_01;
        }
        bVar5 = *(int *)(param_1[4] + uVar4 * 0xe8 + 0x58) != 0;
        if (bVar5) {
          in_r12 = (code *)*puVar1;
        }
        if (bVar5 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
          in_r12 = extraout_r12_02;
        }
        bVar5 = *(int *)(param_1[4] + uVar4 * 0xe8 + 0xe0) != 0;
        if (bVar5) {
          in_r12 = (code *)*puVar1;
        }
        if (bVar5 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
          in_r12 = extraout_r12_03;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_1[5]);
    }
    if ((code *)*puVar1 == (code *)0x0) {
      return;
    }
    (*(code *)*puVar1)(0x10000,0x100,0,param_1[4]);
  }
  if ((code *)*puVar1 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00303270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(0x10000,0x100,0,param_1);
  return;
}

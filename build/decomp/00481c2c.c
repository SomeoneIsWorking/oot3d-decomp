// OoT3D decomp @ 00481c2c  name=FUN_00481c2c  size=788

void FUN_00481c2c(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  code *in_r12;
  code *extraout_r12;
  code *extraout_r12_00;
  code *extraout_r12_01;
  code *extraout_r12_02;
  code *extraout_r12_03;
  code *extraout_r12_04;
  code *extraout_r12_05;
  code *extraout_r12_06;
  code *extraout_r12_07;
  code *extraout_r12_08;
  bool bVar9;

  puVar4 = DAT_00481f44;
  if (*(int *)(DAT_00481f40 + 8) == 0) {
    return;
  }
  piVar8 = *(int **)(*(int *)(DAT_00481f40 + 8) + 0x1008);
  iVar3 = DAT_00481f40;
joined_r0x00481c50:
  piVar1 = piVar8;
  DAT_00481f40 = iVar3;
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
    do {
      iVar5 = *(int *)(*(int *)(iVar3 + 8) + uVar6 * 4 + 0x808);
      while (iVar5 != 0) {
        iVar5 = *(int *)(iVar5 + 0x18);
        in_r12 = (code *)0x0;
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(0x10000,0x100,0);
          in_r12 = extraout_r12_05;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x200);
    uVar6 = 0;
    do {
      piVar8 = (int *)*(int *)(*(int *)(iVar3 + 8) + uVar6 * 4 + 8);
      while (piVar1 = piVar8, piVar1 != (int *)0x0) {
        piVar8 = (int *)*piVar1;
        if (piVar1[0xb] != 0) {
          in_r12 = (code *)*puVar4;
        }
        if (piVar1[0xb] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
          in_r12 = extraout_r12_06;
        }
        if (piVar1[0x70] != 0) {
          in_r12 = (code *)*puVar4;
        }
        if (piVar1[0x70] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
          in_r12 = extraout_r12_07;
        }
        if (piVar1[7] != 0) {
          in_r12 = (code *)*puVar4;
        }
        if (piVar1[7] != 0 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        piVar7 = (int *)piVar1[6];
joined_r0x00481e88:
        piVar2 = piVar7;
        if (piVar2 != (int *)0x0) {
          piVar7 = (int *)piVar2[2];
          if (*piVar2 != 0) goto code_r0x00481e9c;
          goto LAB_00481eb8;
        }
        in_r12 = (code *)0x0;
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(0x10000,0x100,0,piVar1);
          in_r12 = extraout_r12_08;
        }
      }
      uVar6 = uVar6 + 1;
      if (0x1ff < uVar6) {
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(0x10000,0x100,0,*(undefined4 *)(iVar3 + 8));
        }
        *(undefined4 *)(iVar3 + 8) = 0;
        return;
      }
    } while( true );
  }
  piVar8 = (int *)piVar1[8];
  if (*piVar1 != 0) {
    in_r12 = (code *)*puVar4;
  }
  if (*piVar1 != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
    in_r12 = extraout_r12;
  }
  if (piVar1[2] != 0) {
    in_r12 = (code *)*puVar4;
  }
  if (piVar1[2] != 0 && in_r12 != (code *)0x0) {
    (*in_r12)(0x10000,0x100,0);
    in_r12 = extraout_r12_00;
  }
  uVar6 = 0;
  if (piVar1[5] != 0) {
    do {
      bVar9 = *(int *)(piVar1[4] + uVar6 * 0xe8 + 0x30) != 0;
      if (bVar9) {
        in_r12 = (code *)*puVar4;
      }
      if (bVar9 && in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0);
        in_r12 = extraout_r12_01;
      }
      bVar9 = *(int *)(piVar1[4] + uVar6 * 0xe8 + 0xe0) != 0;
      if (bVar9) {
        in_r12 = (code *)*puVar4;
      }
      if (bVar9 && in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0);
        in_r12 = extraout_r12_02;
      }
      bVar9 = *(int *)(piVar1[4] + uVar6 * 0xe8 + 0x58) != 0;
      if (bVar9) {
        in_r12 = (code *)*puVar4;
      }
      if (bVar9 && in_r12 != (code *)0x0) {
        (*in_r12)(0x10000,0x100,0);
        in_r12 = extraout_r12_03;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)piVar1[5]);
  }
  if (piVar1[4] != 0) goto code_r0x00481d64;
  goto LAB_00481d80;
code_r0x00481e9c:
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(0x10000,0x100,0);
LAB_00481eb8:
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(0x10000,0x100,0,piVar2);
    }
  }
  goto joined_r0x00481e88;
code_r0x00481d64:
  in_r12 = (code *)0x0;
  iVar3 = DAT_00481f40;
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(0x10000,0x100,0);
LAB_00481d80:
    in_r12 = (code *)0x0;
    iVar3 = DAT_00481f40;
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(0x10000,0x100,0,piVar1);
      in_r12 = extraout_r12_04;
      iVar3 = DAT_00481f40;
    }
  }
  goto joined_r0x00481c50;
}

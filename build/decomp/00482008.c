// OoT3D decomp @ 00482008  name=FUN_00482008  size=852

void FUN_00482008(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  code *in_r12;
  code *extraout_r12;
  code *extraout_r12_00;
  code *extraout_r12_01;
  code *extraout_r12_02;
  code *pcVar10;
  code *extraout_r12_03;
  bool bVar11;

  puVar2 = DAT_00482364;
  if (*DAT_0048235c == 0) {
    return;
  }
  iVar9 = 0;
  iVar5 = *DAT_00482360;
  do {
    piVar8 = *(int **)(*DAT_0048235c + iVar9 * 4 + 0x10);
    while (piVar1 = piVar8, piVar1 != (int *)0x0) {
      iVar6 = *piVar1;
      piVar8 = (int *)piVar1[3];
      if (iVar6 != 0) {
        iVar3 = piVar1[1];
        if (iVar3 == 0) {
          FUN_00303820(iVar6 + 0x34);
          FUN_00303738(*(undefined4 *)(iVar6 + 0x2c),iVar6 + 0x34);
          pcVar10 = (code *)*puVar2;
joined_r0x0048218c:
          if (pcVar10 != (code *)0x0) {
            (*pcVar10)(0x10000,0x100,0,iVar6);
          }
        }
        else {
          if (iVar3 == 1) {
            iVar3 = 0;
            do {
              iVar7 = iVar6 + iVar3 * 0x44;
              FUN_00303820(iVar7 + 0x34);
              FUN_00303738(*(undefined4 *)(iVar6 + 0x2c),iVar7 + 0x34);
              iVar3 = iVar3 + 1;
            } while (iVar3 < 6);
            pcVar10 = (code *)*puVar2;
            goto joined_r0x0048218c;
          }
          if (iVar3 == 2) {
            pcVar10 = (code *)*puVar2;
            goto joined_r0x0048218c;
          }
          if (iVar3 != 3) goto LAB_004821f4;
          bVar11 = *(int *)(iVar6 + 0x804) != 0;
          if (bVar11) {
            in_r12 = (code *)*puVar2;
          }
          if (bVar11 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
            in_r12 = extraout_r12;
          }
          bVar11 = *(int *)(iVar6 + 0x808) != 0;
          if (bVar11) {
            in_r12 = (code *)*puVar2;
          }
          if (bVar11 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
            in_r12 = extraout_r12_00;
          }
          bVar11 = *(int *)(iVar6 + 0x80c) != 0;
          if (bVar11) {
            in_r12 = (code *)*puVar2;
          }
          if (bVar11 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
            in_r12 = extraout_r12_01;
          }
          bVar11 = *(int *)(iVar6 + 0x810) != 0;
          if (bVar11) {
            in_r12 = (code *)*puVar2;
          }
          if (bVar11 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
            in_r12 = extraout_r12_02;
          }
          bVar11 = *(int *)(iVar6 + 0x814) != 0;
          if (bVar11) {
            in_r12 = (code *)*puVar2;
          }
          if (bVar11 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          if (*(int *)(iVar6 + 0x818) == 0) {
LAB_0048215c:
            pcVar10 = (code *)*puVar2;
            goto joined_r0x0048218c;
          }
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)(0x10000,0x100,0);
            goto LAB_0048215c;
          }
        }
        *piVar1 = 0;
      }
LAB_004821f4:
      in_r12 = (code *)0x0;
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(0x10000,0x100,0,piVar1);
        in_r12 = extraout_r12_03;
      }
    }
    iVar9 = iVar9 + 1;
    if (0x1ff < iVar9) {
      iVar9 = 0x10;
      *(undefined4 *)(iVar5 + 0x5c) = 0;
      *(undefined4 *)(iVar5 + 0x68) = 0;
      *(undefined4 *)(iVar5 + 0x60) = 0;
      *(undefined4 *)(iVar5 + 0x6c) = 0;
      *(undefined4 *)(iVar5 + 100) = 0;
      *(undefined4 *)(iVar5 + 0x70) = 0;
      puVar4 = (undefined4 *)(iVar5 + 0x70);
      do {
        iVar9 = iVar9 + -1;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
        *puVar4 = 0;
        piVar8 = DAT_0048235c;
      } while (iVar9 != 0);
      *(undefined4 *)(iVar5 + 0xf4) = 0;
      iVar5 = *(int *)*piVar8;
      FUN_00303820(iVar5 + 0x34);
      FUN_00303738(*(undefined4 *)(iVar5 + 0x2c),iVar5 + 0x34);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(0x10000,0x100,0,iVar5);
      }
      iVar5 = 0;
      iVar9 = *(int *)(*piVar8 + 4);
      do {
        iVar6 = iVar9 + iVar5 * 0x44;
        FUN_00303820(iVar6 + 0x34);
        FUN_00303738(*(undefined4 *)(iVar9 + 0x2c),iVar6 + 0x34);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 6);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(0x10000,0x100,0,iVar9);
      }
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(0x10000,0x100,0,*(undefined4 *)(*piVar8 + 8));
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(0x10000,0x100,0,*piVar8);
        }
      }
      *piVar8 = 0;
      return;
    }
  } while( true );
}

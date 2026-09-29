// OoT3D decomp @ 00481ac4  name=FUN_00481ac4  size=344

void FUN_00481ac4(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  code *in_r12;
  code *extraout_r12;
  code *extraout_r12_00;
  bool bVar11;

  uVar5 = DAT_00481c28;
  puVar4 = DAT_00481c24;
  puVar3 = DAT_00481c20;
  piVar2 = DAT_00481c1c;
  if (*DAT_00481c1c == 0) {
    return;
  }
  piVar9 = *(int **)(*DAT_00481c1c + 4);
joined_r0x00481ae8:
  do {
    piVar1 = piVar9;
    if (piVar1 == (int *)0x0) {
      iVar8 = *(int *)*piVar2;
      while (iVar8 != 0) {
        bVar11 = iVar8 != 0;
        if (bVar11) {
          in_r12 = (code *)*puVar3;
        }
        iVar8 = *(int *)(iVar8 + 0x24);
        if (bVar11 && in_r12 != (code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
          in_r12 = extraout_r12_00;
        }
      }
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(0x10000,0x100,0,*piVar2);
      }
      *piVar2 = 0;
      return;
    }
    piVar9 = (int *)piVar1[0x11];
  } while (piVar1 == (int *)0x0);
  piVar10 = (int *)*piVar2;
  for (iVar8 = *piVar10; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x24)) {
    iVar7 = 0;
    do {
      puVar6 = (undefined4 *)(iVar8 + iVar7 * 0x10);
      if ((int *)puVar6[3] == piVar1) {
        if (piVar10[2] == iVar8) {
          *(uint *)*puVar4 = *(uint *)*puVar4 | 1;
        }
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  if (*piVar1 != 0) goto code_r0x00481b74;
  goto LAB_00481b90;
code_r0x00481b74:
  in_r12 = (code *)0x0;
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(piVar1[0xf],uVar5,piVar1[0x10]);
LAB_00481b90:
    in_r12 = (code *)0x0;
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(0x10000,0x100,0,piVar1);
      in_r12 = extraout_r12;
    }
  }
  goto joined_r0x00481ae8;
}

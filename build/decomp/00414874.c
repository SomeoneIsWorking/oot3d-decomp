// OoT3D decomp @ 00414874  name=FUN_00414874  size=472

undefined4 FUN_00414874(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;

  uVar4 = DAT_00414a50;
  puVar5 = DAT_00414a4c;
  uVar9 = 0xffffffff;
  if ((code *)*DAT_00414a4c == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(code *)*DAT_00414a4c)(0x10000,0x100,0,DAT_00414a50);
  }
  piVar1 = DAT_00414a54;
  *DAT_00414a54 = iVar3;
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  FUN_00343280(iVar3,uVar4);
  uVar4 = FUN_00303960(0);
  *(undefined4 *)*piVar1 = uVar4;
  uVar4 = FUN_003038b0(0);
  *(undefined4 *)(*piVar1 + 4) = uVar4;
  if ((code *)*puVar5 == (code *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)(*(code *)*puVar5)(0x10000,0x100,0,0x9c);
  }
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00343280(puVar5,0x9c);
    *puVar5 = 0;
  }
  puVar2 = DAT_00414a58;
  piVar6 = (int *)*piVar1;
  piVar6[2] = (int)puVar5;
  iVar3 = *piVar6;
  if (iVar3 != 0) {
    if (piVar6[1] != 0 && puVar5 != (undefined4 *)0x0) {
      uVar9 = 0;
      goto LAB_00414a2c;
    }
    FUN_00303820(iVar3 + 0x34);
    FUN_00303738(*(undefined4 *)(iVar3 + 0x2c),iVar3 + 0x34);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(0x10000,0x100,0,iVar3);
    }
  }
  iVar3 = *(int *)(*piVar1 + 4);
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      iVar8 = iVar3 + iVar7 * 0x44;
      FUN_00303820(iVar8 + 0x34);
      FUN_00303738(*(undefined4 *)(iVar3 + 0x2c),iVar8 + 0x34);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(0x10000,0x100,0,iVar3);
    }
  }
  if (*(int *)(*piVar1 + 8) != 0) {
    if ((code *)*puVar2 == (code *)0x0) goto LAB_00414a2c;
    (*(code *)*puVar2)(0x10000,0x100,0);
  }
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(0x10000,0x100,0,*piVar1);
  }
LAB_00414a2c:
  piVar1[1] = 1;
  FUN_00343280(*(undefined4 *)(*piVar1 + 8),0x9c);
  return uVar9;
}

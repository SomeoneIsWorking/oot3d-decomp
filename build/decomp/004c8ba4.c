// OoT3D decomp @ 004c8ba4  name=FUN_004c8ba4  size=376

undefined4 FUN_004c8ba4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_2c;
  byte local_28;

  iVar7 = *(int *)(param_1 + 0x2b4);
  uVar9 = *(undefined4 *)(param_1 + 0x2ac);
  iVar6 = *(int *)(*(int *)(param_1 + 0x2b0) + 0xc);
  iVar2 = FUN_00368d94(iVar7 * iVar6,uVar9);
  iVar6 = FUN_00368d94((iVar7 + 1) * iVar6,uVar9);
  iVar7 = 0;
  if (0 < iVar6 - iVar2) {
    do {
      iVar3 = param_1 + (iVar2 + iVar7) * 8;
      iVar8 = 0;
      uVar9 = *(undefined4 *)(iVar3 + 0x1ac);
      iVar3 = *(int *)(iVar3 + 0x1b0);
      if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x1a8)) {
        return 0;
      }
      uVar10 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(param_1 + 700) != 0) {
        iVar8 = 0x20;
      }
      iVar4 = FUN_002d2674(uVar10,uVar9,&local_2c);
      if (iVar4 == 0) {
        uVar5 = FUN_002d2664(uVar10);
        iVar4 = FUN_002d2674(uVar10,uVar5,&local_2c);
        if (iVar4 == 0) {
          return 0;
        }
        if (local_2c == 0) goto LAB_004c8c88;
LAB_004c8c80:
        bVar1 = true;
      }
      else {
        if (local_2c != 0) goto LAB_004c8c80;
LAB_004c8c88:
        bVar1 = false;
      }
      if ((!bVar1) ||
         (iVar3 = FUN_002b7498(*(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x1a4),param_1,
                               uVar9,&local_2c,
                               (*(int *)(param_1 + 0x100) + iVar3 + iVar8) - (uint)local_28,
                               *(int *)(param_1 + 0x104) + *(int *)(param_1 + 0x1a0),
                               *(char *)(param_1 + 0x19) == '\x02',1), iVar3 == 0)) {
        return 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6 - iVar2);
  }
  return 1;
}

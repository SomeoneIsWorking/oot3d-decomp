// OoT3D decomp @ 004a0318  name=FUN_004a0318  size=572

void FUN_004a0318(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int local_38 [5];

  if (*(char *)(param_1 + 0x100) != '\0') {
    iVar17 = 0;
    local_38[0] = *param_2;
    local_38[1] = param_2[1];
    do {
      uVar6 = *(uint *)(param_1 + 0x9c);
      uVar7 = *(uint *)(param_1 + 0xb0);
      uVar8 = *(uint *)(param_1 + 0xb4);
      iVar16 = param_1 + iVar17 * 4;
      uVar9 = *(uint *)(param_1 + 0xc4);
      iVar2 = *(int *)(iVar16 + 0x38);
      uVar19 = *(uint *)(param_1 + 0xa4);
      iVar10 = *(int *)(iVar16 + 0x48);
      iVar3 = param_1 + iVar17 * 8;
      iVar1 = 0;
      do {
        iVar18 = *(int *)(param_1 + 0xdc);
        iVar12 = *(int *)(iVar2 + uVar6 * 4);
        uVar4 = *(undefined4 *)(local_38[iVar17] + iVar1 * 4);
        *(undefined4 *)(iVar2 + uVar6 * 4) = uVar4;
        iVar11 = *(int *)(iVar10 + uVar19 * 4);
        *(undefined4 *)(iVar10 + uVar19 * 4) = uVar4;
        iVar13 = *(int *)(iVar3 + 0x58);
        iVar5 = *(int *)(iVar13 + uVar7 * 4);
        if (iVar5 < 0) {
          iVar14 = -(*(int *)(param_1 + 0xb8) * -iVar5 >> 7);
        }
        else {
          iVar14 = *(int *)(param_1 + 0xb8) * iVar5 >> 7;
        }
        *(int *)(iVar13 + uVar7 * 4) = iVar14 + iVar11;
        iVar14 = *(int *)(iVar3 + 0x5c);
        iVar13 = *(int *)(iVar14 + uVar8 * 4);
        if (iVar13 < 0) {
          iVar15 = -(*(int *)(param_1 + 0xbc) * -iVar13 >> 7);
        }
        else {
          iVar15 = *(int *)(param_1 + 0xbc) * iVar13 >> 7;
        }
        *(int *)(iVar14 + uVar8 * 4) = iVar11 + iVar15;
        iVar11 = *(int *)(param_1 + 200);
        iVar14 = *(int *)(*(int *)(iVar16 + 0x78) + uVar9 * 4);
        if (iVar14 < 0) {
          iVar15 = -(-iVar14 * iVar11 >> 7);
        }
        else {
          iVar15 = iVar14 * iVar11 >> 7;
        }
        iVar15 = (iVar5 - iVar13) + iVar15;
        *(int *)(*(int *)(iVar16 + 0x78) + uVar9 * 4) = iVar15;
        if (iVar15 < 0) {
          iVar5 = -(-iVar15 * iVar11 >> 7);
        }
        else {
          iVar5 = iVar15 * iVar11 >> 7;
        }
        uVar6 = uVar6 + 1;
        uVar19 = uVar19 + 1;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 + 1;
        iVar5 = (iVar14 - iVar5) -
                (*(int *)(param_1 + 0xe8) * (*(int *)(iVar16 + 0xcc) + (iVar14 - iVar5)) >> 7);
        *(int *)(iVar16 + 0xcc) = iVar5;
        *(int *)(local_38[iVar17] + iVar1 * 4) =
             iVar5 * *(int *)(param_1 + 0xe0) + iVar12 * iVar18 >> 7;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0xa0);
      iVar17 = iVar17 + 1;
    } while (iVar17 < 2);
    if (uVar6 < *(uint *)(param_1 + 0x98)) {
      *(uint *)(param_1 + 0x9c) = uVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    if (uVar19 < *(uint *)(param_1 + 0xa0)) {
      *(uint *)(param_1 + 0xa4) = uVar19;
    }
    else {
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    if (uVar7 < *(uint *)(param_1 + 0xa8)) {
      *(uint *)(param_1 + 0xb0) = uVar7;
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (uVar8 < *(uint *)(param_1 + 0xac)) {
      *(uint *)(param_1 + 0xb4) = uVar8;
    }
    else {
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    if (uVar9 < *(uint *)(param_1 + 0xc0)) {
      *(uint *)(param_1 + 0xc4) = uVar9;
    }
    else {
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    return;
  }
  return;
}

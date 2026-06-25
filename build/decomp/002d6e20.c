// OoT3D decomp @ 002d6e20  name=FUN_002d6e20  size=1320

void FUN_002d6e20(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  
  iVar8 = 0;
  puVar5 = *DAT_002d7348;
  iVar12 = param_2;
  if (0 < param_1) {
    do {
      uVar1 = *(uint *)(param_2 + iVar8 * 4);
      if (uVar1 != 0) {
        iVar2 = *DAT_002d734c;
        piVar6 = *(int **)(iVar2 + (uVar1 & 0x1ff) * 4 + 0x10);
        piVar9 = (int *)0x0;
        if (piVar6 != (int *)0x0) {
LAB_002d6e70:
          piVar7 = piVar6;
          if ((uint)piVar7[2] < uVar1) goto code_r0x002d6e7c;
          if ((piVar7 != (int *)0x0) && (piVar7[2] == uVar1)) {
            iVar4 = *piVar7;
            if (iVar4 == 0) goto LAB_002d72cc;
            iVar3 = piVar7[1];
            if (iVar3 == 0) {
              if (puVar5[0x17] == uVar1) {
                puVar5[0x17] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 4) = 0;
                *(undefined4 *)(iVar2 + 0x810) = 0;
                if (*(char *)(puVar5 + 0x41) != '\0') {
                  *puVar5 = *puVar5 | 0x400;
                }
              }
              if (puVar5[0x18] == *(uint *)(param_2 + iVar8 * 4)) {
                puVar5[0x18] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 8) = 0;
                *(undefined4 *)(iVar2 + 0x814) = 0;
                if (*(char *)((int)puVar5 + 0x105) != '\0') {
                  *puVar5 = *puVar5 | 0x800;
                }
              }
              if (puVar5[0x19] == *(uint *)(param_2 + iVar8 * 4)) {
                puVar5[0x19] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 0xc) = 0;
                *(undefined4 *)(iVar2 + 0x818) = 0;
                if (*(char *)((int)puVar5 + 0x106) != '\0') {
                  *puVar5 = *puVar5 | 0x1000;
                }
              }
              iVar4 = *piVar7;
              FUN_00303820(iVar4 + 0x34);
              FUN_00303738(*(undefined4 *)(iVar4 + 0x2c),iVar4 + 0x34);
              pcVar10 = *DAT_002d7350;
joined_r0x002d6fcc:
              if (pcVar10 == (code *)0x0) goto LAB_002d7118;
              goto LAB_002d7108;
            }
            if (iVar3 == 1) {
              if (puVar5[0x1a] == uVar1) {
                puVar5[0x1a] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 0x10) = 0;
                *(undefined4 *)(iVar2 + 0x81c) = 0;
                if (*(char *)((int)puVar5 + 0x107) != '\0') {
                  *puVar5 = *puVar5 | 0x400;
                }
              }
              if (puVar5[0x1b] == *(uint *)(param_2 + iVar8 * 4)) {
                puVar5[0x1b] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 0x14) = 0;
                *(undefined4 *)(iVar2 + 0x820) = 0;
                if (*(char *)(puVar5 + 0x42) != '\0') {
                  *puVar5 = *puVar5 | 0x800;
                }
              }
              if (puVar5[0x1c] == *(uint *)(param_2 + iVar8 * 4)) {
                puVar5[0x1c] = 0;
                if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = **(int **)(iVar2 + 0x8a8);
                }
                *(undefined4 *)(iVar4 + 0x18) = 0;
                *(undefined4 *)(iVar2 + 0x824) = 0;
                if (*(char *)((int)puVar5 + 0x109) != '\0') {
                  *puVar5 = *puVar5 | 0x1000;
                }
              }
              iVar4 = *piVar7;
              iVar2 = 0;
              do {
                iVar3 = iVar4 + iVar2 * 0x44;
                FUN_00303820(iVar3 + 0x34);
                FUN_00303738(*(undefined4 *)(iVar4 + 0x2c),iVar3 + 0x34);
                iVar2 = iVar2 + 1;
              } while (iVar2 < 6);
              pcVar10 = *DAT_002d7350;
              if (pcVar10 != (code *)0x0) {
LAB_002d7108:
                (*pcVar10)(0x10000,0x100,0,iVar4,param_1,iVar12);
              }
LAB_002d7118:
              *piVar7 = 0;
LAB_002d72cc:
              piVar6 = DAT_002d734c;
              uVar1 = *(uint *)(param_2 + iVar8 * 4);
              if (uVar1 < (uint)DAT_002d734c[1]) {
                DAT_002d734c[1] = uVar1;
              }
              if (piVar9 == (int *)0x0) {
                iVar2 = *piVar6 + (uVar1 & 0x1ff) * 4;
                *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc);
              }
              else {
                piVar9[3] = piVar7[3];
              }
              if (*DAT_002d7350 != (code *)0x0) {
                (**DAT_002d7350)(0x10000,0x100,0,piVar7);
              }
              goto LAB_002d7330;
            }
            if (iVar3 != 2) {
              if (iVar3 == 3) {
                iVar4 = 0;
                do {
                  pcVar10 = (code *)puVar5[iVar4 + 0x1d];
                  if (pcVar10 == *(code **)(param_2 + iVar8 * 4)) {
                    puVar5[iVar4 + 0x1d] = 0;
                    if (*(int **)(iVar2 + 0x8a8) == (int *)0x0) {
                      pcVar10 = (code *)(iVar4 * 4 + 0x1c);
                      *(undefined4 *)(pcVar10 + *(int *)(iVar2 + 8)) = 0;
                    }
                    else {
                      pcVar10 = (code *)(iVar4 * 4 + 0x1c);
                      *(undefined4 *)(pcVar10 + **(int **)(iVar2 + 0x8a8)) = 0;
                    }
                    *(undefined4 *)(iVar2 + iVar4 * 4 + 0x828) = 0;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 0x20);
                iVar2 = 0;
                do {
                  if (puVar5[iVar2 + 0x43] == *(uint *)(param_2 + iVar8 * 4)) {
                    puVar5[iVar2 + 0x43] = 0;
                    puVar5[iVar2 + 100] = 0;
                    *puVar5 = *puVar5 | 0x4000;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < 0x21);
                iVar2 = *piVar7;
                bVar11 = *(int *)(iVar2 + 0x804) != 0;
                if (bVar11) {
                  pcVar10 = *DAT_002d7350;
                }
                if (bVar11 && pcVar10 != (code *)0x0) {
                  (*pcVar10)(0x10000,0x100,0);
                }
                bVar11 = *(int *)(iVar2 + 0x808) != 0;
                if (bVar11) {
                  pcVar10 = *DAT_002d7350;
                }
                if (bVar11 && pcVar10 != (code *)0x0) {
                  (*pcVar10)(0x10000,0x100,0);
                }
                bVar11 = *(int *)(iVar2 + 0x80c) != 0;
                if (bVar11) {
                  pcVar10 = *DAT_002d7350;
                }
                if (bVar11 && pcVar10 != (code *)0x0) {
                  (*pcVar10)(0x10000,0x100,0);
                }
                bVar11 = *(int *)(iVar2 + 0x810) != 0;
                if (bVar11) {
                  pcVar10 = *DAT_002d7350;
                }
                if (bVar11 && pcVar10 != (code *)0x0) {
                  (*pcVar10)(0x10000,0x100,0);
                }
                bVar11 = *(int *)(iVar2 + 0x814) != 0;
                if (bVar11) {
                  pcVar10 = *DAT_002d7350;
                }
                if (bVar11 && pcVar10 != (code *)0x0) {
                  (*pcVar10)(0x10000,0x100,0);
                }
                if (*(int *)(iVar2 + 0x818) == 0) {
LAB_002d72a4:
                  if (*DAT_002d7350 != (code *)0x0) {
                    (**DAT_002d7350)(0x10000,0x100,0,iVar2);
                  }
                }
                else if (*DAT_002d7350 != (code *)0x0) {
                  (**DAT_002d7350)(0x10000,0x100,0);
                  goto LAB_002d72a4;
                }
                *piVar7 = 0;
              }
              goto LAB_002d72cc;
            }
            if (puVar5[0x3d] != uVar1) {
              pcVar10 = *DAT_002d7350;
              goto joined_r0x002d6fcc;
            }
            *(uint *)(iVar2 + 0xc) = uVar1;
          }
        }
      }
LAB_002d7330:
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  return;
code_r0x002d6e7c:
  piVar6 = (int *)piVar7[3];
  piVar9 = piVar7;
  if ((int *)piVar7[3] == (int *)0x0) goto LAB_002d7330;
  goto LAB_002d6e70;
}


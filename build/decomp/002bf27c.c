// OoT3D decomp @ 002bf27c  name=FUN_002bf27c  size=516

void FUN_002bf27c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  code *pcVar11;
  int iVar12;

  puVar2 = DAT_002bf488;
  piVar1 = DAT_002bf484;
  iVar8 = 0;
  puVar9 = (uint *)*DAT_002bf480;
  iVar12 = param_2;
  if (0 < param_1) {
    do {
      uVar3 = *(uint *)(param_2 + iVar8 * 4);
      if (uVar3 != 0) {
        iVar5 = *piVar1;
        puVar6 = *(uint **)(iVar5 + (uVar3 & 0x1ff) * 4);
        puVar10 = (uint *)0x0;
        if (puVar6 != (uint *)0x0) {
LAB_002bf2d0:
          puVar7 = puVar6;
          if (*puVar7 < uVar3) goto code_r0x002bf2dc;
          if ((puVar7 != (uint *)0x0) && (*puVar7 == uVar3)) {
            if (puVar9[0x144] == uVar3) {
              *(uint *)(iVar5 + 0x804) = uVar3;
            }
            else {
              if (puVar9[0x143] == uVar3) {
                *puVar9 = *puVar9 | 2;
                puVar9[0x143] = 0;
                *(undefined4 *)(iVar5 + 0x808) = 0;
              }
              if (puVar9[0x142] == *(uint *)(param_2 + iVar8 * 4)) {
                *puVar9 = *puVar9 | 2;
                puVar9[0x142] = 0;
                *(undefined4 *)(iVar5 + 0x80c) = 0;
              }
              iVar4 = 0;
              do {
                if (puVar9[iVar4 * 6 + 0xfe] == *(uint *)(param_2 + iVar8 * 4)) {
                  *(undefined4 *)(iVar5 + iVar4 * 4 + 0x810) = 0;
                }
                if (puVar9[iVar4 * 6 + 0x104] == *(uint *)(param_2 + iVar8 * 4)) {
                  *(undefined4 *)(iVar5 + iVar4 * 4 + 0x814) = 0;
                }
                iVar4 = iVar4 + 2;
              } while (iVar4 < 0xc);
              uVar3 = *(uint *)(param_2 + iVar8 * 4);
              if (uVar3 < (uint)piVar1[1]) {
                piVar1[1] = uVar3;
              }
              if (puVar10 == (uint *)0x0) {
                *(undefined4 *)(iVar5 + (uVar3 & 0x1ff) * 4) =
                     *(undefined4 *)(*(int *)(iVar5 + (uVar3 & 0x1ff) * 4) + 0xc);
              }
              else {
                puVar10[3] = puVar7[3];
              }
              if (puVar7[1] == 0) {
                if (puVar7[2] != 0) {
                  FUN_002cce18(puVar7);
                  if ((code *)*puVar2 == (code *)0x0) goto LAB_002bf424;
                  (*(code *)*puVar2)(0x10000,0x100,0,puVar7[2]);
                }
                pcVar11 = (code *)*puVar2;
joined_r0x002bf478:
                if (pcVar11 != (code *)0x0) {
                  (*pcVar11)(0x10000,0x100,0,puVar7);
                }
              }
              else if (puVar7[1] == 1) {
                if (puVar7[2] != 0) {
                  if ((code *)*puVar2 == (code *)0x0) goto LAB_002bf424;
                  (*(code *)*puVar2)(0x10000,0x100,0,puVar7[2],param_1,iVar12);
                }
                pcVar11 = (code *)*puVar2;
                goto joined_r0x002bf478;
              }
            }
          }
        }
      }
LAB_002bf424:
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  return;
code_r0x002bf2dc:
  puVar6 = (uint *)puVar7[3];
  puVar10 = puVar7;
  if ((uint *)puVar7[3] == (uint *)0x0) goto LAB_002bf424;
  goto LAB_002bf2d0;
}

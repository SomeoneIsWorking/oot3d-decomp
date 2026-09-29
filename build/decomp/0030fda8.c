// OoT3D decomp @ 0030fda8  name=FUN_0030fda8  size=204

void FUN_0030fda8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;

  iVar8 = param_1 + param_2 * 4;
  param_1 = param_1 + param_2 * 0x60;
  iVar5 = *(int *)(iVar8 + 0x14);
  iVar6 = param_1 + 0x4b4;
  iVar10 = iVar6 + iVar5 * 4;
  iVar7 = *(int *)(iVar10 + -4);
  param_1 = param_1 + 0x214;
  iVar11 = iVar5 + -1;
  if (0 < iVar5 + -1) {
    iVar3 = 0;
    iVar4 = iVar5 + -1;
    piVar1 = (int *)(iVar10 + -8);
    do {
      if (iVar7 < *piVar1) {
        iVar11 = (iVar5 - iVar3) + -2;
      }
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + -1;
    } while (iVar4 != 0);
  }
  if (iVar5 + -1 != iVar11) {
    uVar9 = *(undefined4 *)(param_1 + iVar5 * 4 + -4);
    if (0 < (iVar5 - iVar11) + -1) {
      iVar3 = 0;
      iVar5 = (iVar5 - iVar11) + -1;
      puVar2 = (undefined4 *)(iVar10 + -8);
      do {
        iVar5 = iVar5 + -1;
        iVar10 = *(int *)(iVar8 + 0x14) + iVar3;
        iVar3 = iVar3 + -1;
        iVar10 = param_1 + iVar10 * 4;
        *(undefined4 *)(iVar10 + -4) = *(undefined4 *)(iVar10 + -8);
        puVar2[1] = *puVar2;
        puVar2 = puVar2 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + iVar11 * 4) = uVar9;
    *(int *)(iVar6 + iVar11 * 4) = iVar7;
  }
  return;
}

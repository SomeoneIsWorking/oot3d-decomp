// OoT3D decomp @ 004a020c  name=FUN_004a020c  size=268

void FUN_004a020c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_34 [4];

  if (*(char *)(param_1 + 0x56) == '\0') {
    return;
  }
  uVar8 = 0;
  local_34[0] = *param_2;
  local_34[1] = param_2[1];
  local_34[2] = param_2[2];
  local_34[3] = param_2[3];
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x55) != '\0') {
    do {
      iVar2 = param_1 + uVar8 * 4;
      iVar5 = local_34[uVar8];
      iVar6 = *(int *)(iVar2 + 0x1c);
      piVar7 = (int *)(iVar2 + 0x2c);
      uVar3 = 0;
      iVar2 = iVar1 * 0xa0;
      do {
        iVar4 = *(int *)(iVar6 + iVar2 * 4);
        if (iVar4 < 0) {
          iVar9 = -(*(int *)(param_1 + 0x44) * -iVar4 >> 7);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x44) * iVar4 >> 7;
        }
        iVar9 = *(int *)(param_1 + 0x48) * (*(int *)(iVar5 + uVar3 * 4) - iVar9) +
                *(int *)(param_1 + 0x4c) * *piVar7 >> 7;
        *piVar7 = iVar9;
        *(int *)(iVar6 + iVar2 * 4) = iVar9;
        *(int *)(iVar5 + uVar3 * 4) = iVar4;
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 1;
      } while (uVar3 < 0xa0);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_1 + 0x55));
  }
  uVar8 = *(int *)(param_1 + 0x40) + 1;
  *(uint *)(param_1 + 0x40) = uVar8;
  if (*(uint *)(param_1 + 0x3c) <= uVar8) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

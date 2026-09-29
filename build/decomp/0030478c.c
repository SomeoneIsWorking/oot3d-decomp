// OoT3D decomp @ 0030478c  name=FUN_0030478c  size=236

void FUN_0030478c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;

  uVar1 = DAT_00304878;
  iVar8 = 0;
  if (0 < *(int *)(**(int **)(param_1 + 4) + 8)) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 4) + 4);
      puVar2 = *(undefined4 **)(param_1 + 0x30);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,iVar8,*(int *)(param_1 + 0x10) + iVar8 * 0x30);
      }
      uVar6 = (uint)*(ushort *)(iVar5 + iVar8 * 0x28 + 2);
      if (uVar6 == uVar1) {
        iVar3 = *(int *)(param_1 + 0x14) + iVar8 * 0x30;
        iVar7 = *(int *)(param_1 + 0x10) + iVar8 * 0x30;
        iVar5 = param_2;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x14) + iVar8 * 0x30;
        iVar5 = *(int *)(param_1 + 0x14) + uVar6 * 0x30;
        iVar7 = *(int *)(param_1 + 0x10) + iVar8 * 0x30;
      }
      FUN_0036c174(iVar3,iVar5,iVar7);
      piVar4 = *(int **)(param_1 + 0x30);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4,iVar8,*(int *)(param_1 + 0x14) + iVar8 * 0x30);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(**(int **)(param_1 + 4) + 8));
  }
  return;
}

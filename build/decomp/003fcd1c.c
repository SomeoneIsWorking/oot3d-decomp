// OoT3D decomp @ 003fcd1c  name=FUN_003fcd1c  size=388

void FUN_003fcd1c(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = param_2;
  piVar3 = *(int **)(param_2 + 8);
  iVar1 = (**(code **)(*(int *)*DAT_003fcea0 + 0xc))
                    ((int *)*DAT_003fcea0,*(int *)(*piVar3 + 8) * 0x124,DAT_003fcea4,0x28);
  param_1[1] = iVar1;
  iVar1 = 0;
  if (0 < *(int *)(*piVar3 + 8)) {
    do {
      *(undefined1 *)(param_1[1] + iVar1 * 0x124) = 0;
      iVar5 = iVar1 * 0x124 + 9;
      *(undefined1 *)(param_1[1] + iVar1 * 0x124 + 1) = 0;
      *(undefined1 *)(param_1[1] + iVar1 * 0x124 + 2) = 0;
      *(undefined1 *)(param_1[1] + iVar1 * 0x124 + 3) = 0;
      *(undefined1 *)(param_1[1] + iVar1 * 0x124 + 4) = 0;
      *(undefined1 *)(param_1[1] + iVar1 * 0x124 + 5) = 0;
      *(undefined1 *)(param_1[1] + iVar1 * 0x124 + 6) = 0;
      *(undefined1 *)(param_1[1] + iVar1 * 0x124 + 7) = 0;
      *(undefined1 *)(param_1[1] + iVar1 * 0x124 + 8) = 0;
      iVar4 = 3;
      *(undefined1 *)(param_1[1] + iVar5) = 0;
      puVar2 = (undefined1 *)(param_1[1] + iVar5);
      do {
        iVar4 = iVar4 + -1;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
        *puVar2 = 0;
      } while (iVar4 != 0);
      iVar4 = iVar1 + 1;
      *(undefined4 *)(param_1[1] + iVar1 * 0x124 + 0x80) = 0;
      *(undefined4 *)(param_1[1] + iVar1 * 0x124 + 0xcc) = 0;
      *(undefined4 *)(param_1[1] + iVar1 * 0x124 + 0x118) = 0;
      *(undefined4 *)(param_1[1] + iVar1 * 0x124 + 0x11c) = 0;
      *(undefined4 *)(param_1[1] + iVar1 * 0x124 + 0x120) = 0;
      iVar1 = iVar4;
    } while (iVar4 < *(int *)(*piVar3 + 8));
  }
  FUN_003103a4(param_1);
  return;
}


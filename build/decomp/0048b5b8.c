// OoT3D decomp @ 0048b5b8  name=FUN_0048b5b8  size=552

undefined4 FUN_0048b5b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;

  puVar5 = (uint *)*DAT_0048b7e0;
  if ((*DAT_0048b7e0 & 1) == 0) {
    iVar1 = FUN_003679b4(DAT_0048b7e0);
    piVar2 = DAT_0048b7e4;
    puVar5 = (uint *)0x0;
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_0048b7e4 + 1) = 0x1a;
      *piVar2 = DAT_0048b7e8;
      puVar5 = DAT_0048b7e0;
    }
  }
  uVar6 = 1;
  do {
    iVar1 = param_2;
    if (param_2 < 1) {
      iVar1 = param_3;
    }
    if (iVar1 == 0) {
      puVar5 = (uint *)(uint)*(byte *)(param_1 + 0x1a);
    }
    if (iVar1 == 0 && puVar5 == (uint *)0x0) {
      return uVar6;
    }
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x10))
                              (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0x1c));
    if (piVar2 == (int *)0x0) {
      piVar2 = DAT_0048b7e4;
    }
    iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
    if (iVar1 < 1) {
      iVar1 = FUN_002c2a2c(param_1,piVar2,0);
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 0;
        uVar6 = 1;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
    }
    else {
      iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
      iVar3 = FUN_002c2a2c(param_1,piVar2,*(undefined4 *)(param_1 + 0x20));
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x20) + 1;
        *(int *)(param_1 + 0x20) = iVar3;
        if (iVar1 <= iVar3) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        iVar3 = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x24) = iVar3;
        iVar1 = *(int *)(param_1 + 0x30);
        if ((0 < iVar1) && (*(char *)(param_1 + 0x18) != '\0')) {
          iVar7 = *(int *)(param_1 + 0x2c);
          uVar6 = *(undefined4 *)(param_1 + 0x34);
          iVar4 = FUN_00368d94(iVar7 * iVar1);
          iVar7 = iVar7 + 1;
          iVar1 = FUN_00368d94(iVar7 * iVar1,uVar6);
          *(int *)(param_1 + 0x24) = (iVar1 - iVar4) + iVar3;
          *(int *)(param_1 + 0x2c) = iVar7;
        }
        uVar6 = 1;
      }
      param_2 = param_2 + -1;
    }
    iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x20))();
    }
    iVar1 = (**(code **)(*piVar2 + 0xc))(piVar2);
    puVar5 = (uint *)0x0;
  } while (iVar1 == 0);
  (**(code **)(**(int **)(param_1 + 4) + 0x24))();
  iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x28))();
  }
  return uVar6;
}

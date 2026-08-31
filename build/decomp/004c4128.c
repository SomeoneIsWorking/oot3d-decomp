// OoT3D decomp @ 004c4128  name=FUN_004c4128  size=320

undefined4 FUN_004c4128(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;

  *(undefined4 *)(param_1 + 0x114) = 0;
  func_0x00343280(param_1 + 0x118,0x80);
  uVar6 = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    do {
      piVar7 = *(int **)(*(int *)(param_1 + 0xf0) + uVar6 * 8);
      cVar1 = (char)piVar7[1];
      if (cVar1 == '\0') {
        uVar2 = *(undefined1 *)((int)piVar7 + 5);
        uVar4 = (**(code **)(*piVar7 + 0x14))(piVar7);
        iVar3 = func_0x002b7e30(param_1,*(undefined4 *)(param_1 + 0x10),
                                *(undefined4 *)(param_1 + 0xe0),piVar7[2],uVar4,uVar2);
      }
      else if (cVar1 == '\x02') {
        iVar3 = *(int *)(param_1 + 0xe0) + 0x10;
      }
      else if (cVar1 == '\x04') {
        iVar3 = piVar7[2];
      }
      else {
        iVar3 = 0;
      }
      *(int *)(*(int *)(param_1 + 0xf0) + uVar6 * 8 + 4) = iVar3;
      iVar5 = param_1 + *(int *)(param_1 + 0x114) * 4;
      *(int *)(iVar5 + 0x118) = iVar3 + *(int *)(iVar5 + 0x118);
      iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0xf0) + uVar6 * 8) + 8))();
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
      }
      iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0xf0) + uVar6 * 8) + 0xc))();
      if (iVar3 != 0) {
        return 1;
      }
      if (0x1f < *(int *)(param_1 + 0x114)) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xf4));
  }
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  return 1;
}

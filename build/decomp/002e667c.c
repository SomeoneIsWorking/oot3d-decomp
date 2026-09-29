// OoT3D decomp @ 002e667c  name=FUN_002e667c  size=552

void FUN_002e667c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;

  if (*(int *)(param_1 + 0xf0) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  if (*(int *)(param_1 + 0x3cc) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  if (*(int *)(param_1 + 0x3d0) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  if (*(int *)(param_1 + 0x3d4) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  if (*(int *)(param_1 + 0x3d8) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  if (*(int *)(param_1 + 0x3dc) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar3 = DAT_002e68a4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  puVar4 = (undefined4 *)(param_1 + 0x5c);
  puVar5 = (undefined4 *)(param_1 + 0x60);
  puVar6 = (undefined4 *)(param_1 + 100);
  iVar7 = 8;
  *(undefined1 *)(param_1 + 0x19) = 0;
  puVar8 = (undefined4 *)(param_1 + 0x68);
  do {
    *puVar4 = *puVar3;
    *puVar5 = puVar3[1];
    *puVar6 = puVar3[2];
    puVar1 = puVar3 + 3;
    iVar7 = iVar7 + -1;
    puVar3 = puVar3 + 4;
    puVar4 = puVar4 + 4;
    puVar5 = puVar5 + 4;
    puVar6 = puVar6 + 4;
    *puVar8 = *puVar1;
    puVar8 = puVar8 + 4;
  } while (iVar7 != 0);
  *(undefined4 *)(param_1 + 0xdc) = 1;
  *(undefined4 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  uVar2 = DAT_002e68a8;
  *(undefined1 *)(param_1 + 0xec) = 3;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  FUN_00343280(param_1 + 0x118,0x80);
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  FUN_00343280(param_1 + 0x1ac,0x100);
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  FUN_00343280(param_1 + 0x2c0,0x100);
  *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined1 *)(param_1 + 0x3c8) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

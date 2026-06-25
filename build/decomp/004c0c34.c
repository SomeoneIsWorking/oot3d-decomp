// OoT3D decomp @ 004c0c34  name=FUN_004c0c34  size=256

int FUN_004c0c34(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  uVar1 = DAT_004c0d34;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_00343280(param_1 + 0x1ac,0x100);
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  FUN_00343280(param_1 + 0x2c0,0x100);
  *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined *)(param_1 + 0x3c8) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
    FUN_004c4268(param_1);
  }
  iVar2 = FUN_004c4128(param_1);
  if (iVar2 != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      do {
        iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xf0) + uVar3 * 8) + 8))();
        if (iVar2 != 0) break;
        if (*(char *)(*(int *)(*(int *)(param_1 + 0xf0) + uVar3 * 8) + 4) == '\x18') {
          uVar4 = 1;
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0xf4));
    }
    *(undefined *)(param_1 + 0x3c8) = uVar4;
    iVar2 = FUN_002c27dc(param_1);
    *(int *)(param_1 + 0x1a0) = iVar2 - *(int *)(param_1 + 0x104);
    iVar2 = 1;
  }
  return iVar2;
}


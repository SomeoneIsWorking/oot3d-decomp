// OoT3D decomp @ 002daaf0  name=FUN_002daaf0  size=240

int FUN_002daaf0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5_00,undefined4 param_5,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_2 + 0x104) = param_4;
  *(undefined4 *)(param_2 + 0x100) = param_3;
  *(undefined4 *)(param_2 + 0x110) = param_1;
  *(undefined4 *)(param_2 + 0x10c) = param_5;
  if (*(char *)(param_2 + 9) != '\0') {
    param_7 = 0;
  }
  *(undefined4 *)(param_2 + 0x108) = param_5_00;
  iVar1 = FUN_004c0c34(param_2,param_7);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (*(int *)(param_2 + 0xf4) != 0) {
      do {
        iVar1 = FUN_004c0d38(param_2,uVar2,*(undefined4 *)(*(int *)(param_2 + 0xf0) + uVar2 * 8));
        if (iVar1 == 0) {
          *(undefined4 *)(param_2 + 0x1a8) = 0;
          return 0;
        }
        iVar1 = (**(code **)(**(int **)(*(int *)(param_2 + 0xf0) + uVar2 * 8) + 8))();
        if (iVar1 != 0) {
          *(int *)(param_2 + 0x198) = *(int *)(param_2 + 0x198) + 1;
        }
        iVar1 = (**(code **)(**(int **)(*(int *)(param_2 + 0xf0) + uVar2 * 8) + 0xc))();
        if (iVar1 != 0) goto LAB_002dabd0;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_2 + 0xf4));
    }
    *(int *)(param_2 + 0x198) = *(int *)(param_2 + 0x198) + 1;
LAB_002dabd0:
    *(undefined4 *)(param_2 + 0xf4) = 0;
    iVar1 = 1;
    *(undefined *)(param_2 + 9) = 0;
  }
  return iVar1;
}


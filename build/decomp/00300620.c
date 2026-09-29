// OoT3D decomp @ 00300620  name=FUN_00300620  size=180

void FUN_00300620(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_40 [16];
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  uVar4 = 0;
  iStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  do {
    iVar3 = param_1 + uVar4 * 4;
    uVar2 = 0;
    if (*(int *)(iVar3 + 0x14) != 0) {
      do {
        piVar1 = *(int **)(param_1 + uVar4 * 0x60 + uVar2 * 4 + 0x214);
        (**(code **)(*piVar1 + 8))(piVar1,param_2,param_3,auStack_40);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar3 + 0x14));
    }
    uVar2 = 0;
    if (*(int *)(iVar3 + 0x754) != 0) {
      do {
        (**(code **)(**(int **)(param_1 + uVar4 * 0x60 + uVar2 * 4 + 0x770) + 8))();
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar3 + 0x754));
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 7);
  return;
}

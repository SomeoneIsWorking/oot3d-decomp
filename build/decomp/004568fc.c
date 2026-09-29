// OoT3D decomp @ 004568fc  name=FUN_004568fc  size=120

void FUN_004568fc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar1 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  *(undefined1 *)(param_1 + 9) = 1;
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3e0);
    uVar4 = *(undefined4 *)(param_1 + 0x3e4);
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    *(undefined4 *)(param_1 + 0x3e4) = 0;
    if (*(int *)(param_1 + 0x3dc) != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    *(undefined4 *)(param_1 + 0x3dc) = 0;
    FUN_002da7e8(param_1,*(undefined1 *)(param_1 + 0x19),uVar3,uVar4);
    return;
  }
  return;
}

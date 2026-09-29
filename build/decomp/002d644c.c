// OoT3D decomp @ 002d644c  name=FUN_002d644c  size=164

void FUN_002d644c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;

  if (*(code **)(param_1 + 0x138) != (code *)0x0) {
    (**(code **)(param_1 + 0x138))(param_1);
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    (**(code **)(*(int *)*DAT_002d64f0 + 0x10))((int *)*DAT_002d64f0,*(int *)(param_1 + 0x178));
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  uVar2 = 0;
  do {
    iVar3 = param_1 + uVar2 * 4;
    piVar1 = *(int **)(iVar3 + 0x17c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar3 + 0x17c) = 0;
  } while (uVar2 < 6);
  if (*(int **)(param_1 + 0x194) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x194) + 4))();
  }
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x198) = 2;
  return;
}

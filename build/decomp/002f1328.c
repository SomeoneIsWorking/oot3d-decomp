// OoT3D decomp @ 002f1328  name=FUN_002f1328  size=168

void FUN_002f1328(int param_1)

{
  int iVar1;
  int unaff_r4;
  bool bVar2;

  if (*(int *)(param_1 + 0xd0) != 0) {
    bVar2 = *(int *)(param_1 + 0xd4) != 0;
    iVar1 = 0;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0xd8);
      unaff_r4 = 0;
    }
    if ((bVar2 && iVar1 != 0) && -1 < iVar1) {
      do {
        (**(code **)**(undefined4 **)(*(int *)(param_1 + 0xd4) + unaff_r4 * 4))();
        unaff_r4 = unaff_r4 + 1;
      } while (unaff_r4 < *(int *)(param_1 + 0xd8));
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    (**(code **)(**(int **)(param_1 + 0xd0) + 0x10))
              (*(int **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
    (**(code **)(**(int **)(param_1 + 0xd0) + 0x10))
              (*(int **)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xdc));
  }
  FUN_00343280(param_1 + 4,0xcc);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}

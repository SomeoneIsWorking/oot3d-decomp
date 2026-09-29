// OoT3D decomp @ 0040bb2c  name=FUN_0040bb2c  size=84

void FUN_0040bb2c(int param_1)

{
  int iVar1;
  int unaff_r4;
  bool bVar2;

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
  return;
}

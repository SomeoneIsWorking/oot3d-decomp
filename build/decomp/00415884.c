// OoT3D decomp @ 00415884  name=FUN_00415884  size=68

void FUN_00415884(int param_1)

{
  int iVar1;

  iVar1 = DAT_004158c8;
  if (*(int *)(DAT_004158c8 + 0x164) == param_1) {
    return;
  }
  if (param_1 != 0x700) {
    if (param_1 == 0x701) {
      *(undefined4 *)(DAT_004158c8 + 8) = 800;
      goto LAB_004158c0;
    }
    if (param_1 != 0x702) {
      return;
    }
  }
  *(undefined4 *)(DAT_004158c8 + 8) = 400;
LAB_004158c0:
  *(int *)(iVar1 + 0x164) = param_1;
  return;
}

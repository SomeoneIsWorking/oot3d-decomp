// OoT3D decomp @ 00311b30  name=FUN_00311b30  size=84

void FUN_00311b30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = *(int *)(DAT_00311b84 + *(int *)(DAT_00311b84 + 0x124) * 4 + 0x128);
  if (iVar2 != 0) {
    if (param_1 == 0x600) {
      uVar1 = *(undefined4 *)(iVar2 + 4);
    }
    else if (param_1 == 0x601) {
      uVar1 = *(undefined4 *)(iVar2 + 8);
    }
    else if (param_1 == 0x602) {
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
    }
    else {
      if (param_1 != 0x603) {
        return;
      }
      uVar1 = *(undefined4 *)(iVar2 + 0x10);
    }
    *param_2 = uVar1;
  }
  return;
}

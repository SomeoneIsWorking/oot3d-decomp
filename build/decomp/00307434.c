// OoT3D decomp @ 00307434  name=FUN_00307434  size=84

void FUN_00307434(int param_1)

{
  undefined4 uVar1;

  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_003445a8();
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = FUN_00307674();
      (**(code **)(*(int *)*DAT_00307488 + 0x10))((int *)*DAT_00307488,uVar1);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

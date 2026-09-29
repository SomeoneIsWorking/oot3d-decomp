// OoT3D decomp @ 00270298  name=FUN_00270298  size=52

void FUN_00270298(int param_1)

{
  if (*(code **)(param_1 + 0x1bc) != (code *)0x0) {
    (**(code **)(param_1 + 0x1bc))();
  }
  FUN_0037322c(*(undefined4 *)(DAT_002702cc + (*(ushort *)(param_1 + 0x1c) & 3) * 4),param_1);
  return;
}

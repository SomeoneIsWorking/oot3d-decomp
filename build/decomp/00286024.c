// OoT3D decomp @ 00286024  name=FUN_00286024  size=36

void FUN_00286024(int param_1)

{
  if (*(code **)(param_1 + 0x1bc) != (code *)0x0) {
    (**(code **)(param_1 + 0x1bc))(param_1);
  }
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_1 + 0x1b8);
  return;
}

// OoT3D decomp @ 0037abd4  name=FUN_0037abd4  size=52

void FUN_0037abd4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  (**(code **)(param_1 + 0x1bc))();
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_1 + 0x1b8);
  uVar1 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  *(undefined4 *)(param_1 + 0x1c4) = uVar1;
  return;
}

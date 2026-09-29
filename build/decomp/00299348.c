// OoT3D decomp @ 00299348  name=FUN_00299348  size=40

void FUN_00299348(int param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_00299374;
  *(undefined2 *)(DAT_00299370 + param_1) = 0x15;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = DAT_00299378;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0x4a0) = uVar1;
  return;
}

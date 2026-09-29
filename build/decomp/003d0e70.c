// OoT3D decomp @ 003d0e70  name=FUN_003d0e70  size=92

void FUN_003d0e70(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x3ef) = 0;
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  FUN_00367c7c(param_2,*(undefined2 *)(DAT_003d0ecc + param_1),0);
  FUN_0036e980(param_2,0,8);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x11;
  FUN_00370734(param_1 + 0x360);
  *(undefined4 *)(param_1 + 0x1bc) = DAT_003d0ed0;
  return;
}

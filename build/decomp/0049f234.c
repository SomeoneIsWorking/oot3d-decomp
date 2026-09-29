// OoT3D decomp @ 0049f234  name=FUN_0049f234  size=88

void FUN_0049f234(undefined4 *param_1)

{
  uint uVar1;

  FUN_002bfd74(*param_1);
  if (param_1[1] != 0) {
    uVar1 = 0;
    if (param_1[2] != 0) {
      do {
        FUN_002bfd74(*(undefined4 *)(param_1[1] + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1[2]);
    }
    FUN_002bfd74(param_1[1]);
    return;
  }
  return;
}

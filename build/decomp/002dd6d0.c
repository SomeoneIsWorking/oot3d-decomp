// OoT3D decomp @ 002dd6d0  name=FUN_002dd6d0  size=48

void FUN_002dd6d0(int *param_1)

{
  undefined4 *puVar1;

  puVar1 = *(undefined4 **)(*param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = DAT_002dd700;
  *(undefined4 **)(*param_1 + 8) = puVar1 + 2;
  return;
}

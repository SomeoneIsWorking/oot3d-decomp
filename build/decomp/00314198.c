// OoT3D decomp @ 00314198  name=FUN_00314198  size=48

void FUN_00314198(int *param_1)

{
  undefined4 *puVar1;

  puVar1 = *(undefined4 **)(*param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = DAT_003141c8;
  *(undefined4 **)(*param_1 + 8) = puVar1 + 2;
  return;
}

// OoT3D decomp @ 0045b6dc  name=FUN_0045b6dc  size=24

void FUN_0045b6dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | 2;
  return;
}

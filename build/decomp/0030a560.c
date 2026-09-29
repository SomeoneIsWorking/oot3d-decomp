// OoT3D decomp @ 0030a560  name=FUN_0030a560  size=84

int FUN_0030a560(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;

  if (*(uint *)param_1[1] <= param_2) {
    return 0;
  }
  if (param_1[2] != 0) {
    return *(int *)(param_1[2] + param_2 * 4);
  }
  uVar2 = ((uint *)param_1[1])[param_2 * 3 + 2];
  iVar1 = FUN_004955c4(*param_1);
  return iVar1 + 8 + uVar2;
}

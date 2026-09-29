// OoT3D decomp @ 0048bbb4  name=FUN_0048bbb4  size=52

int FUN_0048bbb4(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;

  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
  if ((param_2 < *puVar1) && ((short)puVar1[param_2 * 2 + 1] == 0x4902)) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

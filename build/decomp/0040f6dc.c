// OoT3D decomp @ 0040f6dc  name=FUN_0040f6dc  size=28

int FUN_0040f6dc(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;

  puVar1 = (uint *)(param_1 + 0x14);
  if (param_2 < *puVar1) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

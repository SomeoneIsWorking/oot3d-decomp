// OoT3D decomp @ 0040f2ec  name=FUN_0040f2ec  size=60

int FUN_0040f2ec(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;

  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
  if (((short)puVar1[param_2 * 2 + 1] == 0x5900) && (param_2 < *puVar1)) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

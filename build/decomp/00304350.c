// OoT3D decomp @ 00304350  name=FUN_00304350  size=48

int FUN_00304350(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;

  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0xc));
  if ((param_2 < *puVar1) && ((short)puVar1[param_2 * 2 + 1] == 0x4900)) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

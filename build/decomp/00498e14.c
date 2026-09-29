// OoT3D decomp @ 00498e14  name=FUN_00498e14  size=36

int FUN_00498e14(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;

  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x34));
  if ((param_2 & 0xffffff) < *puVar1) {
    iVar2 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

// OoT3D decomp @ 002c296c  name=FUN_002c296c  size=52

int FUN_002c296c(int param_1,uint param_2)

{
  uint *puVar1;

  if (param_2 >> 0x18 == 3) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x14));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}

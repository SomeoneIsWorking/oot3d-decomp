// OoT3D decomp @ 003042d4  name=FUN_003042d4  size=52

int FUN_003042d4(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 >> 0x18 == 1) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 4));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}


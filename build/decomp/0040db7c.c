// OoT3D decomp @ 0040db7c  name=FUN_0040db7c  size=52

int FUN_0040db7c(int param_1,uint param_2)

{
  uint *puVar1;

  if (param_2 >> 0x18 == 6) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x24));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}

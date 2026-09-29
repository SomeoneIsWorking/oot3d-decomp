// OoT3D decomp @ 00495740  name=FUN_00495740  size=52

int FUN_00495740(int param_1,uint param_2)

{
  uint *puVar1;

  if (param_2 >> 0x18 == 4) {
    puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x2c));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}

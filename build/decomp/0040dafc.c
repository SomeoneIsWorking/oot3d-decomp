// OoT3D decomp @ 0040dafc  name=FUN_0040dafc  size=32

int FUN_0040dafc(short *param_1)

{
  if (*param_1 != 0x4100) {
    return 0;
  }
  return (int)param_1 + *(int *)(param_1 + 2);
}

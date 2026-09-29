// OoT3D decomp @ 0040dadc  name=FUN_0040dadc  size=32

int FUN_0040dadc(short *param_1)

{
  if (*param_1 == 0x300) {
    return (int)param_1 + *(int *)(param_1 + 2);
  }
  return 0;
}

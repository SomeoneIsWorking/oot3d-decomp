// OoT3D decomp @ 0034cc28  name=FUN_0034cc28  size=80

undefined4 FUN_0034cc28(float param_1,int param_2,int param_3)

{
  int iVar1;

  iVar1 = (int)(short)(*(short *)(param_2 + 0x92) - *(short *)(param_2 + 0xbe));
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if ((iVar1 < param_3) &&
     (SQRT(*(float *)(param_2 + 0x98) * *(float *)(param_2 + 0x98) +
           *(float *)(param_2 + 0x9c) * *(float *)(param_2 + 0x9c)) < param_1)) {
    return 1;
  }
  return 0;
}

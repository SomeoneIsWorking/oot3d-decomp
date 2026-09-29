// OoT3D decomp @ 00315960  name=FUN_00315960  size=152

void FUN_00315960(float param_1,int param_2)

{
  *(float *)(param_2 + 0x22bc) =
       ABS(*(float *)(param_2 + 0x22a4) - *(float *)(param_2 + 0x22d4)) * param_1;
  *(float *)(param_2 + 0x22c0) =
       ABS(*(float *)(param_2 + 0x22a8) - *(float *)(param_2 + 0x22d8)) * param_1;
  *(float *)(param_2 + 0x22c4) =
       ABS(*(float *)(param_2 + 0x22ac) - *(float *)(&DAT_000022dc + param_2)) * param_1;
  *(float *)(param_2 + 0x22c8) =
       ABS(*(float *)(param_2 + 0x22b0) - *(float *)(param_2 + 0x22ec)) * param_1;
  *(float *)(param_2 + 0x22cc) =
       ABS(*(float *)(param_2 + 0x22b4) - *(float *)(param_2 + 0x22f0)) * param_1;
  *(float *)(param_2 + 0x22d0) =
       ABS(*(float *)(param_2 + 0x22b8) - *(float *)(&DAT_000022f4 + param_2)) * param_1;
  return;
}

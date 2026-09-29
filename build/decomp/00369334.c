// OoT3D decomp @ 00369334  name=FUN_00369334  size=128

short * FUN_00369334(float param_1,int param_2,short *param_3,int param_4,int param_5)

{
  short *psVar1;

  psVar1 = *(short **)(param_2 + param_5 * 8 + 0x209c);
  do {
    if (psVar1 == (short *)0x0) {
      return (short *)0x0;
    }
    if (psVar1 != param_3) {
      if (param_4 != -1) {
        param_5 = (int)*psVar1;
      }
      if ((param_4 == -1 || param_5 == param_4) &&
         (SQRT((*(float *)(psVar1 + 0x14) - *(float *)(param_3 + 0x14)) *
               (*(float *)(psVar1 + 0x14) - *(float *)(param_3 + 0x14)) +
               (*(float *)(psVar1 + 0x16) - *(float *)(param_3 + 0x16)) *
               (*(float *)(psVar1 + 0x16) - *(float *)(param_3 + 0x16)) +
               (*(float *)(psVar1 + 0x18) - *(float *)(param_3 + 0x18)) *
               (*(float *)(psVar1 + 0x18) - *(float *)(param_3 + 0x18))) <= param_1)) {
        return psVar1;
      }
    }
    psVar1 = *(short **)(psVar1 + 0x98);
  } while( true );
}

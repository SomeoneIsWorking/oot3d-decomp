// OoT3D decomp @ 00372d64  name=FUN_00372d64  size=48

short * FUN_00372d64(int param_1,int param_2,int param_3)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_1 + param_3 * 8 + 0x10);
  while( true ) {
    if (psVar1 == (short *)0x0) {
      return (short *)0x0;
    }
    if (*psVar1 == param_2) break;
    psVar1 = *(short **)(psVar1 + 0x98);
  }
  return psVar1;
}


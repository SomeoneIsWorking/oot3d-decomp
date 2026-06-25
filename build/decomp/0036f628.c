// OoT3D decomp @ 0036f628  name=FUN_0036f628  size=124

undefined4 FUN_0036f628(uint param_1,int param_2)

{
  short *psVar1;
  uint in_fpscr;
  float fVar2;
  
  psVar1 = (short *)(DAT_0036f6a4 + (param_1 & 3) * 0x24);
  if ((*(char *)(psVar1 + 4) == '\0') || ((int)*psVar1 != param_1)) {
    psVar1 = (short *)0x0;
  }
  if (psVar1 == (short *)0x0) {
    return 0;
  }
  fVar2 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  if (param_2 < 1) {
    fVar2 = fVar2 * DAT_0036f6a8 * DAT_0036f6ac - DAT_0036f6ac;
  }
  else {
    fVar2 = DAT_0036f6ac + fVar2 * DAT_0036f6a8 * DAT_0036f6ac;
  }
  psVar1[0xe] = (short)(int)fVar2;
  psVar1[1] = (short)(int)fVar2;
  return 1;
}


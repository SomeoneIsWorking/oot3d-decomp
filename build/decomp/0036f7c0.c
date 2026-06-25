// OoT3D decomp @ 0036f7c0  name=FUN_0036f7c0  size=120

undefined4 FUN_0036f7c0(uint param_1,int param_2)

{
  short *psVar1;
  uint in_fpscr;
  float fVar2;
  
  psVar1 = (short *)(DAT_0036f838 + (param_1 & 3) * 0x24);
  if ((*(char *)(psVar1 + 4) == '\0') || ((int)*psVar1 != param_1)) {
    psVar1 = (short *)0x0;
  }
  if (psVar1 == (short *)0x0) {
    return 0;
  }
  fVar2 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  if (param_2 < 1) {
    fVar2 = fVar2 * DAT_0036f83c * DAT_0036f840 - DAT_0036f844;
  }
  else {
    fVar2 = DAT_0036f844 + fVar2 * DAT_0036f83c * DAT_0036f840;
  }
  psVar1[0xc] = (short)(int)fVar2;
  return 1;
}


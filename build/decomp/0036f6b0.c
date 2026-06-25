// OoT3D decomp @ 0036f6b0  name=FUN_0036f6b0  size=256

undefined4 FUN_0036f6b0(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  short *psVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fVar4 = DAT_0036f7bc;
  fVar2 = DAT_0036f7b8;
  fVar1 = DAT_0036f7b4;
  psVar3 = (short *)(DAT_0036f7b0 + (param_1 & 3) * 0x24);
  if ((*(char *)(psVar3 + 4) == '\0') || ((int)*psVar3 != param_1)) {
    psVar3 = (short *)0x0;
  }
  if (psVar3 == (short *)0x0) {
    return 0;
  }
  fVar5 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  if (param_2 < 1) {
    fVar5 = fVar5 * DAT_0036f7b4 * DAT_0036f7b8 - DAT_0036f7bc;
  }
  else {
    fVar5 = DAT_0036f7bc + fVar5 * DAT_0036f7b4 * DAT_0036f7b8;
  }
  psVar3[5] = (short)(int)fVar5;
  fVar5 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  if (param_3 < 1) {
    fVar5 = fVar5 * fVar1 * fVar2 - fVar4;
  }
  else {
    fVar5 = fVar4 + fVar5 * fVar1 * fVar2;
  }
  psVar3[6] = (short)(int)fVar5;
  fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  if (param_4 < 1) {
    fVar5 = fVar5 * fVar1 * fVar2 - fVar4;
  }
  else {
    fVar5 = fVar4 + fVar5 * fVar1 * fVar2;
  }
  psVar3[7] = (short)(int)fVar5;
  fVar5 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  if (param_5 < 1) {
    fVar4 = fVar5 * fVar1 * fVar2 - fVar4;
  }
  else {
    fVar4 = fVar4 + fVar5 * fVar1 * fVar2;
  }
  psVar3[8] = (short)(int)fVar4;
  return 1;
}


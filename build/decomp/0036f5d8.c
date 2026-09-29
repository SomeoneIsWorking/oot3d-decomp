// OoT3D decomp @ 0036f5d8  name=FUN_0036f5d8  size=80

undefined4 FUN_0036f5d8(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  short *psVar2;
  uint in_fpscr;
  float fVar3;

  uVar1 = FUN_0036f848(param_1 + 0x364,3,param_3,param_4,param_4);
  FUN_0036f7c0(uVar1,param_4);
  FUN_0036f6b0(uVar1,param_2,0,0,0);
  psVar2 = (short *)(DAT_0036f6a4 + (uVar1 & 3) * 0x24);
  if (((char)psVar2[4] == '\0') || ((int)*psVar2 != uVar1)) {
    psVar2 = (short *)0x0;
  }
  if (psVar2 == (short *)0x0) {
    return 0;
  }
  fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  if (param_3 < 1) {
    fVar3 = fVar3 * DAT_0036f6a8 * DAT_0036f6ac - DAT_0036f6ac;
  }
  else {
    fVar3 = DAT_0036f6ac + fVar3 * DAT_0036f6a8 * DAT_0036f6ac;
  }
  psVar2[0xe] = (short)(int)fVar3;
  psVar2[1] = (short)(int)fVar3;
  return 1;
}

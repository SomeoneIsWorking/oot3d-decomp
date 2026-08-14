// OoT3D decomp @ 0036fca8  name=FUN_0036fca8  size=204

undefined4 FUN_0036fca8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  short *psVar2;
  uint in_fpscr;
  float fVar3;

  uVar1 = func_0x0036f848(param_2 + 0x364,3,param_3,param_4,param_4);
  func_0x0036f7c0(uVar1,uRam0036fcf8);
  func_0x0036f6b0(uVar1,param_3,0,0,0);
  psVar2 = (short *)(iRam0036f6a4 + (uVar1 & 3) * 0x24);
  if (((char)psVar2[4] == '\0') || ((int)*psVar2 != uVar1)) {
    psVar2 = (short *)0x0;
  }
  if (psVar2 == (short *)0x0) {
    return 0;
  }
  fVar3 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  if (param_4 < 1) {
    fVar3 = fVar3 * fRam0036f6a8 * fRam0036f6ac - fRam0036f6ac;
  }
  else {
    fVar3 = fRam0036f6ac + fVar3 * fRam0036f6a8 * fRam0036f6ac;
  }
  psVar2[0xe] = (short)(int)fVar3;
  psVar2[1] = (short)(int)fVar3;
  return 1;
}

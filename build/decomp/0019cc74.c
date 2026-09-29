// OoT3D decomp @ 0019cc74  name=FUN_0019cc74  size=180

void FUN_0019cc74(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;

  iVar5 = FUN_00365444(param_2,param_1);
  if ((iVar5 == 0) &&
     (iVar5 = FUN_003650d0(param_2,param_1,0), fVar4 = DAT_0019ce04, fVar3 = DAT_0019ce00,
     iVar5 == 0)) {
    iVar5 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe));
    fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar5 < 1) {
      sVar1 = (short)(int)(fVar6 * DAT_0019cdf8 - DAT_0019cdfc);
    }
    else {
      sVar1 = (short)(int)(DAT_0019cdfc + fVar6 * DAT_0019cdf8);
    }
    sVar2 = *(short *)(param_1 + 0xbe) + sVar1;
    *(short *)(param_1 + 0xbe) = sVar2;
    *(short *)(param_1 + 0x36) = sVar2;
    fVar6 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 * fVar3;
    if (iVar5 < 1) {
      if ((uint)fRam0019ce08 < (uint)fVar6) {
        fVar6 = fRam0019ce0c;
      }
    }
    else if (0x3f800000 < (int)fVar6) {
      fVar6 = fVar4;
    }
    *(float *)(param_1 + 0x220) = -fVar6;
    FUN_003731e0(param_1 + 0x1e0);
    iVar5 = FUN_0036f18c(param_1,uRam0019ce10);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if ((*(uint *)(iRam0019ce24 + param_2) & 0x5f) == 0) {
      FUN_0037547c(uRam0019ce28,param_1 + 0x28,4,DAT_00375c04,DAT_00375c04,DAT_00375c00);
      return;
    }
  }
  return;
}

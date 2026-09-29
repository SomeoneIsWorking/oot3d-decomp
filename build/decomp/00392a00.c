// OoT3D decomp @ 00392a00  name=FUN_00392a00  size=352

void FUN_00392a00(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  float fVar6;

  iVar3 = FUN_00328e08(param_2,param_1);
  fVar4 = DAT_00392bac;
  if (iVar3 == 0) {
    sVar2 = *(short *)(param_1 + 0xbe);
    iVar3 = (int)(short)(*(short *)(param_1 + 0x92) - sVar2);
    fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar3 < 1) {
      sVar1 = (short)(int)(fVar6 * DAT_00392ba4 - DAT_00392ba8);
      *(short *)(param_1 + 0xbe) = sVar2 + sVar1 * 2;
    }
    else {
      sVar1 = (short)(int)(DAT_00392ba8 + fVar6 * DAT_00392ba4);
      *(short *)(param_1 + 0xbe) = sVar2 + sVar1 * 2;
    }
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    fVar6 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 * fVar4;
    if (iVar3 < 1) {
      if ((uint)DAT_00392bb4 < (uint)fVar6) {
        fVar6 = DAT_00392bb8;
      }
    }
    else if (0x3f800000 < (int)fVar6) {
      fVar6 = DAT_00392bb0;
    }
    *(float *)(param_1 + 0x220) = fVar6;
    fVar4 = *(float *)(param_1 + 0x21c);
    FUN_00370734(param_1 + 0x1e0);
    fVar6 = *(float *)(param_1 + 0x220);
    if (fVar6 < DAT_00392bbc) {
      fVar6 = -fVar6;
    }
    iVar5 = (int)(*(float *)(param_1 + 0x21c) - fVar6);
    iVar3 = (int)fVar6 + (int)fVar4;
    if (((int)*(float *)(param_1 + 0x21c) != (int)fVar4) &&
       (((2 < iVar3 && (iVar5 < 1)) || ((iVar5 < 7 && (8 < iVar3)))))) {
      FUN_00375bcc(param_1,DAT_00392bc0);
    }
    iVar3 = FUN_0036f18c(param_1,DAT_00392bc4);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  return;
}

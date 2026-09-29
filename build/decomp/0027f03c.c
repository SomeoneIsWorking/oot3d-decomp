// OoT3D decomp @ 0027f03c  name=FUN_0027f03c  size=272

void FUN_0027f03c(undefined4 param_1,undefined4 param_2,float *param_3)

{
  short sVar1;
  float fVar2;
  float *pfVar3;

  fVar2 = param_3[0xf];
  sVar1 = *(short *)(param_3 + 0x18);
  pfVar3 = param_3;
  if (fVar2 != 0.0) {
    pfVar3 = *(float **)((int)fVar2 + 0x13c);
  }
  if (fVar2 == 0.0 || pfVar3 == (float *)0x0) {
    if (8 < sVar1) {
      fVar2 = (float)FUN_003738a8(DAT_0027f1f0);
      FUN_002cfca0((int)(short)(int)fVar2);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  else if (8 < sVar1) {
    if ((*(short *)(DAT_0027f1ec + (int)fVar2) != 0) &&
       ((*(uint *)((int)fVar2 + 0x11c) & 0xc00000) == 0)) {
      *param_3 = *(float *)((int)fVar2 + 0x28) + param_3[0xb];
      param_3[1] = *(float *)((int)fVar2 + 0x2c) + param_3[0xc];
      param_3[2] = *(float *)((int)fVar2 + 0x30) + param_3[0xd];
      *(short *)(param_3 + 0x18) = sVar1 + 1;
      return;
    }
    if (sVar1 == 9) {
      FUN_003758b0(param_3[2] - *(float *)((int)fVar2 + 0x30),
                   *param_3 - *(float *)((int)fVar2 + 0x28));
      FUN_002cfca0();
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  return;
}

// OoT3D decomp @ 002479f8  name=FUN_002479f8  size=268

void FUN_002479f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;

  fVar3 = (float)FUN_003727f0(*(undefined4 *)(param_1 + 0x1c8));
  uVar1 = DAT_00247ae8;
  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + fVar3 * *(float *)(param_1 + 0x1b4);
  FUN_0036e168(*(undefined4 *)(param_1 + 0x1bc),DAT_00247aec,*(undefined4 *)(param_1 + 0x1c0),uVar1,
               param_1 + 0x6c);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30);
  if ((*(float *)(param_1 + 0x1c4) < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) ||
     (*(int *)(param_1 + 0x1ac) < 4)) {
    uVar1 = FUN_003758b0();
    FUN_003529d4(param_1 + 0x36,uVar1,(int)*(short *)(param_1 + 0x1d4));
  }
  else {
    fVar3 = (float)FUN_003727f0(*(undefined4 *)(param_1 + 0x1c8));
    *(short *)(param_1 + 0x36) =
         *(short *)(param_1 + 0x36) + (short)(int)(fVar3 * *(float *)(param_1 + 0x1b8));
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  iVar2 = *(int *)(param_1 + 0x1ac) + -1;
  *(int *)(param_1 + 0x1ac) = iVar2;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(5,0x23);
  }
  return;
}

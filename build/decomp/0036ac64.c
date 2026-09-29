// OoT3D decomp @ 0036ac64  name=FUN_0036ac64  size=364

void FUN_0036ac64(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;

  uVar1 = DAT_0036add4;
  fVar4 = DAT_0036add0;
  *(short *)(param_1 + 0x22a) = *(short *)(param_1 + 0x22a) + 0xb6;
  *(short *)(param_1 + 0x22c) = *(short *)(param_1 + 0x22c) + 0xfb;
  *(short *)(param_1 + 0x22e) = *(short *)(param_1 + 0x22e) + 100;
  FUN_003705a0(uVar1,fVar4,param_1 + 600);
  fVar2 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22a) * 3));
  fVar3 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22c) * 3));
  *(float *)(param_1 + 0x25c) = (fVar2 + fVar3) * *(float *)(param_1 + 600);
  fVar2 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x22a) << 2));
  fVar3 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x22c) << 2));
  *(float *)(param_1 + 0x260) = (fVar2 + fVar3) * *(float *)(param_1 + 600);
  fVar2 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22e) * 5));
  fVar2 = fVar2 * DAT_0036add8;
  fVar3 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22c) << 3));
  fVar2 = (fVar2 + fVar3 * DAT_0036addc + DAT_0036ade0) * fVar4;
  *(float *)(param_1 + 0x5c) = fVar2;
  *(float *)(param_1 + 0x54) = fVar2;
  fVar2 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x22e) * 10));
  *(float *)(param_1 + 0x58) = (DAT_0036ade8 + fVar2 * DAT_0036ade4) * fVar4;
  fVar4 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22a) * 3));
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x16),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_0036adec;
  fVar2 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22e) << 1));
  *(short *)(param_1 + 0xbe) = (short)(int)(fVar3 + fVar4 + fVar2 * DAT_0036adf0);
  return;
}

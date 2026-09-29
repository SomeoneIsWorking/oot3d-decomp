// OoT3D decomp @ 0036ac40  name=FUN_0036ac40  size=36

void FUN_0036ac40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;

  iVar2 = FUN_0032d8d8();
  if (iVar2 == 0) {
    FUN_001a23f4(param_1);
  }
  uVar1 = DAT_0036add4;
  fVar5 = DAT_0036add0;
  *(short *)(param_1 + 0x22a) = *(short *)(param_1 + 0x22a) + 0xb6;
  *(short *)(param_1 + 0x22c) = *(short *)(param_1 + 0x22c) + 0xfb;
  *(short *)(param_1 + 0x22e) = *(short *)(param_1 + 0x22e) + 100;
  FUN_003705a0(uVar1,fVar5,param_1 + 600);
  fVar3 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22a) * 3));
  fVar4 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22c) * 3));
  *(float *)(param_1 + 0x25c) = (fVar3 + fVar4) * *(float *)(param_1 + 600);
  fVar3 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x22a) << 2));
  fVar4 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x22c) << 2));
  *(float *)(param_1 + 0x260) = (fVar3 + fVar4) * *(float *)(param_1 + 600);
  fVar3 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22e) * 5));
  fVar3 = fVar3 * DAT_0036add8;
  fVar4 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22c) << 3));
  fVar3 = (fVar3 + fVar4 * DAT_0036addc + DAT_0036ade0) * fVar5;
  *(float *)(param_1 + 0x5c) = fVar3;
  *(float *)(param_1 + 0x54) = fVar3;
  fVar3 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x22e) * 10));
  *(float *)(param_1 + 0x58) = (DAT_0036ade8 + fVar3 * DAT_0036ade4) * fVar5;
  fVar5 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22a) * 3));
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x16),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_0036adec;
  fVar3 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x22e) << 1));
  *(short *)(param_1 + 0xbe) = (short)(int)(fVar4 + fVar5 + fVar3 * DAT_0036adf0);
  return;
}

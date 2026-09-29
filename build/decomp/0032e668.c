// OoT3D decomp @ 0032e668  name=FUN_0032e668  size=256

void FUN_0032e668(float param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar4 = DAT_0032e770;
  if (*(char *)(DAT_0032e768 + param_2) != '\x05') {
    if (param_1 < DAT_0032e76c) {
      param_1 = DAT_0032e76c;
    }
    if (0x3f800000 < (int)param_1) {
      param_1 = DAT_0032e770;
    }
    fVar3 = param_1 - DAT_0032e774;
    if (param_1 - DAT_0032e774 < DAT_0032e76c) {
      fVar3 = DAT_0032e76c;
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(param_1 == DAT_0032e76c) << 0x1e;
    fVar5 = (float)VectorUnsignedToFloat
                             ((uint)*(ushort *)(param_2 + 0x3240),(byte)(uVar1 >> 0x15) & 3);
    *(short *)(param_2 + 0x320e) = (short)(int)((DAT_0032e778 - fVar5) * fVar3);
    if (SUB41(uVar1 >> 0x1e,0)) {
      sVar2 = 0;
      *(undefined2 *)(param_2 + 0x3208) = 0;
      *(undefined2 *)(param_2 + 0x320a) = 0;
    }
    else {
      fVar3 = param_1 * DAT_0032e77c;
      if (0x3f800000 < (int)(param_1 * DAT_0032e77c)) {
        fVar3 = fVar4;
      }
      fVar4 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_2 + 0x3251),(byte)(uVar1 >> 0x15) & 3);
      *(short *)(param_2 + 0x3208) = -(short)(int)(fVar4 * fVar3);
      fVar4 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_2 + 0x3252),(byte)(uVar1 >> 0x15) & 3);
      *(short *)(param_2 + 0x320a) = -(short)(int)(fVar4 * fVar3);
      fVar4 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_2 + 0x3253),(byte)(uVar1 >> 0x15) & 3);
      sVar2 = -(short)(int)(fVar4 * fVar3);
    }
    *(short *)(param_2 + 0x320c) = sVar2;
  }
  return;
}

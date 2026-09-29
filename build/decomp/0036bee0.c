// OoT3D decomp @ 0036bee0  name=FUN_0036bee0  size=640

void FUN_0036bee0(float param_1,float param_2,float param_3,float param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  short sVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  if ((*(char *)(param_5 + 0x4c33) != '\x05') &&
     (iVar5 = FUN_00334370(param_5), fVar4 = DAT_0036c164, fVar10 = DAT_0036c160, iVar5 != 0)) {
    bVar1 = param_1 < DAT_0036c164;
    *(float *)(param_5 + 0x3218) = DAT_0036c160;
    fVar9 = DAT_0036c168;
    if (bVar1) {
      param_1 = fVar4;
    }
    if (0x3f800000 < (int)param_1) {
      param_1 = fVar10;
    }
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar4 <= param_1 - param_3) << 0x1d;
    fVar8 = param_1 - param_3;
    if (!SUB41(uVar7 >> 0x1d,0)) {
      fVar8 = fVar4;
    }
    fVar8 = (float)FUN_0037103c(fVar8 * DAT_0036c168);
    fVar8 = (float)FUN_0037103c(fVar8 * fVar9);
    fVar9 = (float)FUN_0037103c(fVar8 * fVar9);
    fVar8 = (float)VectorSignedToFloat(-(uint)*(ushort *)(param_5 + 0x3240),
                                       (byte)(uVar7 >> 0x15) & 3);
    sVar6 = (short)(int)(fVar8 * fVar9);
    if (*(char *)(DAT_0036c16c + param_5) == '\0') {
      *(short *)(param_5 + 0x320e) = sVar6;
      *(float *)(param_5 + 0x3214) = (param_2 - *(float *)(param_5 + 0x323c)) * fVar9;
    }
    else {
      if (*(short *)(param_5 + 0x320e) < sVar6) {
        sVar6 = *(short *)(param_5 + 0x320e);
      }
      *(short *)(param_5 + 0x320e) = sVar6;
      fVar9 = (param_2 - *(float *)(param_5 + 0x323c)) * fVar9;
      uVar7 = uVar7 & 0xfffffff | (uint)(fVar9 <= *(float *)(param_5 + 0x3214)) << 0x1d;
      if (!SUB41(uVar7 >> 0x1d,0)) {
        fVar9 = *(float *)(param_5 + 0x3214);
      }
      *(float *)(param_5 + 0x3214) = fVar9;
    }
    uVar2 = uVar7 & 0xfffffff | (uint)(param_1 == fVar4) << 0x1e;
    if (SUB41(uVar2 >> 0x1e,0)) {
      sVar6 = 0;
      *(undefined2 *)(param_5 + 0x3208) = 0;
      *(undefined2 *)(param_5 + 0x320a) = 0;
    }
    else {
      fVar9 = param_1 * DAT_0036c170;
      if (0x3f800000 < (int)(param_1 * DAT_0036c170)) {
        fVar9 = fVar10;
      }
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_5 + 0x3251),(byte)(uVar2 >> 0x15) & 3);
      *(short *)(param_5 + 0x3208) = -(short)(int)(fVar10 * fVar9);
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_5 + 0x3252),(byte)(uVar2 >> 0x15) & 3);
      *(short *)(param_5 + 0x320a) = -(short)(int)(fVar10 * fVar9);
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_5 + 0x3253),(byte)(uVar2 >> 0x15) & 3);
      sVar6 = -(short)(int)(fVar10 * fVar9);
    }
    uVar7 = uVar7 & 0xfffffff | (uint)(param_4 == fVar4) << 0x1e | (uint)(fVar4 <= param_4) << 0x1d;
    *(short *)(param_5 + 0x320c) = sVar6;
    bVar3 = (byte)(uVar7 >> 0x18);
    if ((bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)) {
      param_1 = param_1 * param_4;
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_5 + 0x3242),(byte)(uVar7 >> 0x15) & 3);
      *(short *)(param_5 + 0x31fc) = -(short)(int)(fVar10 * param_1);
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_5 + 0x3248),(byte)(uVar7 >> 0x15) & 3);
      *(short *)(param_5 + 0x3202) = -(short)(int)(fVar10 * param_1);
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_5 + 0x3243),(byte)(uVar7 >> 0x15) & 3);
      *(short *)(param_5 + 0x31fe) = -(short)(int)(fVar10 * param_1);
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_5 + 0x3249),(byte)(uVar7 >> 0x15) & 3);
      *(short *)(param_5 + 0x3204) = -(short)(int)(fVar10 * param_1);
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_5 + 0x3244),(byte)(uVar7 >> 0x15) & 3);
      *(short *)(param_5 + 0x3200) = -(short)(int)(fVar10 * param_1);
      fVar10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_5 + 0x324a),(byte)(uVar7 >> 0x15) & 3);
      *(short *)(param_5 + 0x3206) = -(short)(int)(fVar10 * param_1);
    }
  }
  return;
}

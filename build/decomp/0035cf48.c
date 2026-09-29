// OoT3D decomp @ 0035cf48  name=FUN_0035cf48  size=332

int FUN_0035cf48(float param_1,int param_2,short *param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  if (param_5 == 0) {
    if (*param_3 != 0) {
      return 4;
    }
    fVar7 = *(float *)(param_3 + 0xc) - *(float *)(param_2 + 0x28);
    fVar9 = *(float *)(param_3 + 0xe) - *(float *)(param_2 + 0x2c);
    fVar6 = *(float *)(param_3 + 0x10) - *(float *)(param_2 + 0x30);
    fVar6 = SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar6 * fVar6);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < param_1) << 0x1f |
            (uint)(fVar6 == param_1) << 0x1e;
    uVar5 = uVar1 | (uint)(NAN(fVar6) || NAN(param_1)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
      param_3[2] = 0;
      param_3[3] = 0;
      return 1;
    }
    uVar4 = FUN_003758b0();
    fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(uVar5 >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xbe),(byte)(uVar5 >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat(uVar4,(byte)(uVar5 >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xbe),(byte)(uVar5 >> 0x15) & 3);
    sVar3 = (short)(int)(fVar8 - fVar7);
    if ((short)(int)(fVar9 - fVar6) < 0) {
      sVar3 = -sVar3;
    }
    if (param_4 < sVar3) {
      if ((param_3[2] == 0) || (sVar3 = param_3[2] + -1, param_3[2] = sVar3, sVar3 == 0)) {
        sVar3 = param_3[3];
        if (sVar3 != 0) {
          if (sVar3 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_003702c8(10);
          }
          if (sVar3 != 2) {
            return 4;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_003702c8(0x1e);
      }
      param_5 = (int)param_3[1];
    }
    else {
      param_3[2] = 0;
      param_5 = 2;
      param_3[3] = 0;
    }
  }
  return param_5;
}

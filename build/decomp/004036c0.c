// OoT3D decomp @ 004036c0  name=FUN_004036c0  size=224

void FUN_004036c0(int param_1,int param_2,float *param_3,float *param_4,int *param_5)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar3 = DAT_004037a0;
  fVar8 = *param_3 - *(float *)(param_2 + 0x30);
  fVar6 = param_3[1] - *(float *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  fVar7 = param_3[2] - *(float *)(param_2 + 0x38);
  fVar7 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
  fVar8 = *(float *)(param_2 + 0x4c);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar8) << 0x1f | (uint)(fVar7 == fVar8) << 0x1e;
  uVar5 = uVar1 | (uint)(NAN(fVar7) || NAN(fVar8)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  fVar6 = DAT_004037a0;
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
    if (*(char *)(param_3 + 10) == '\x01') {
      fVar6 = (float)FUN_0030b8d8(param_3[9],(fVar7 - fVar8) / *(float *)(param_2 + 0x50));
    }
    else if (*(char *)(param_3 + 10) == '\x02') {
      fVar6 = DAT_004037a0 -
              ((fVar7 - fVar8) / *(float *)(param_2 + 0x50)) * (DAT_004037a0 - param_3[9]);
      uVar5 = in_fpscr & 0xfffffff | (uint)(DAT_004037a4 <= fVar6) << 0x1d;
      if (!SUB41(uVar5 >> 0x1d,0)) {
        fVar6 = DAT_004037a4;
      }
    }
  }
  *param_4 = fVar6;
  fVar7 = (float)VectorSignedToFloat(uVar4,(byte)(uVar5 >> 0x15) & 3);
  *param_5 = -(int)((fVar3 - fVar6) * fVar7);
  return;
}

// OoT3D decomp @ 003375bc  name=FUN_003375bc  size=96

float FUN_003375bc(float param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;

  fVar3 = *(float *)(param_2 + 0x148);
  iVar2 = (int)*(short *)(*DAT_0033761c + 0x1e6);
  fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar4 * DAT_00337620 <= fVar3) << 0x1d;
  if (SUB41(uVar1 >> 0x1d,0)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar3 < param_1) << 0x1f;
    if (SUB41(uVar1 >> 0x1f,0) != (NAN(fVar3) || NAN(param_1))) {
      fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0033761c + 0x1e8),
                                         (byte)(uVar1 >> 0x15) & 3);
      param_1 = fVar3 * fVar4 * DAT_00337620;
    }
  }
  else {
    param_1 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x15) & 3);
    param_1 = param_1 * DAT_00337620;
  }
  return param_1;
}

// OoT3D decomp @ 003380f0  name=FUN_003380f0  size=216

int FUN_003380f0(undefined4 param_1,float param_2,int param_3,short param_4,short param_5)

{
  uint in_fpscr;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  param_5 = param_5 - (param_4 + -0x7fff);
  if (DAT_003381c8 < *(int *)(param_3 + 0x120)) {
    fVar3 = (float)VectorSignedToFloat((int)(short)(param_5 + -0x7fff),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar4 = DAT_003381cc;
  }
  else {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003381d0 + 500),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar4 = DAT_003381d4;
  }
  fVar3 = (float)FUN_0032dab4(param_1,fVar3 * fVar4);
  fVar4 = DAT_003381d8;
  fVar3 = fVar3 + (DAT_003381d8 - fVar3) * param_2;
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_003381dc <= fVar3) << 0x1d;
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar3 = DAT_003381dc;
  }
  fVar2 = (float)FUN_0032dab4(DAT_003381e0,*(undefined4 *)(param_3 + 0x128));
  fVar5 = (float)VectorSignedToFloat((int)param_5,(byte)(uVar1 >> 0x15) & 3);
  return (int)(short)(param_4 +
                     (short)(int)(fVar5 * fVar3 * fVar2 * (fVar4 / *(float *)(param_3 + 0x110))));
}

// OoT3D decomp @ 00301418  name=FUN_00301418  size=124

void FUN_00301418(undefined4 param_1,float *param_2,int param_3,short *param_4)

{
  float fVar1;
  short *psVar2;
  short *psVar3;
  float *pfVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;

  fVar1 = DAT_00301494;
  if (param_3 < 1) {
    return;
  }
  pfVar5 = param_2 + 1;
  psVar2 = param_4 + 1;
  psVar3 = param_4 + 2;
  pfVar4 = param_2 + 2;
  do {
    param_3 = param_3 + -1;
    fVar6 = (float)VectorSignedToFloat((int)*param_4,(byte)(in_fpscr >> 0x15) & 3);
    *param_2 = fVar6 * fVar1;
    param_2 = param_2 + 3;
    fVar6 = (float)VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar5 = fVar6 * fVar1;
    pfVar5 = pfVar5 + 3;
    fVar6 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar4 = fVar6 * fVar1;
    psVar2 = psVar2 + 3;
    param_4 = param_4 + 3;
    psVar3 = psVar3 + 3;
    pfVar4 = pfVar4 + 3;
  } while (param_3 != 0);
  return;
}

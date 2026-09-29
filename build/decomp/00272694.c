// OoT3D decomp @ 00272694  name=FUN_00272694  size=440

void FUN_00272694(int param_1,int param_2,float *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  fVar3 = DAT_00272850;
  fVar4 = DAT_0027284c;
  if (param_2 != 0) {
    if (param_2 == 1) {
      fVar4 = *(float *)(param_4 + 0x1d4);
      *param_3 = *param_3 * fVar4;
      param_3[4] = param_3[4] * fVar4;
      param_3[8] = param_3[8] * fVar4;
      param_3[1] = param_3[1] * fVar4;
      param_3[5] = param_3[5] * fVar4;
      param_3[9] = param_3[9] * fVar4;
      param_3[2] = param_3[2] * fVar4;
      param_3[6] = param_3[6] * fVar4;
      param_3[10] = param_3[10] * fVar4;
      FUN_0036c174(param_3,param_3,param_1 + 0x2fc);
      return;
    }
    if (param_2 == 2) {
      iVar1 = (int)(short)(int)*(float *)(param_4 + 0x1cc);
      iVar2 = (int)(short)(int)*(float *)(param_4 + 0x1d0);
      FUN_00371234(DAT_00272850,param_3,1);
      if (iVar2 != 0) {
        fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = fVar5 * fVar4;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar5 == fVar3) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar3 = (float)FUN_003727f0(fVar5);
          fVar5 = (float)FUN_00372674(fVar5);
          fVar6 = *param_3;
          *param_3 = fVar6 * fVar5 - param_3[2] * fVar3;
          param_3[2] = fVar6 * fVar3 + param_3[2] * fVar5;
          fVar6 = param_3[4];
          param_3[4] = fVar6 * fVar5 - param_3[6] * fVar3;
          param_3[6] = fVar6 * fVar3 + param_3[6] * fVar5;
          fVar6 = param_3[8];
          param_3[8] = fVar6 * fVar5 - param_3[10] * fVar3;
          param_3[10] = fVar6 * fVar3 + param_3[10] * fVar5;
        }
      }
      if (iVar1 != 0) {
        fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00369014(fVar3 * fVar4,param_3,1);
      }
    }
  }
  return;
}

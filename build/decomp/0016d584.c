// OoT3D decomp @ 0016d584  name=FUN_0016d584  size=332

undefined4 FUN_0016d584(undefined4 param_1,int param_2,float *param_3,int param_4)

{
  uint in_fpscr;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  fVar5 = DAT_0016d6d4;
  fVar4 = DAT_0016d6d0;
  if (param_2 == 1) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x7a8),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar2 = fVar2 * DAT_0016d6d0;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar2 == DAT_0016d6d4) << 0x1e;
    if (!SUB41(uVar1 >> 0x1e,0)) {
      fVar3 = (float)FUN_003727f0();
      fVar2 = (float)FUN_00372674(fVar2);
      fVar6 = param_3[1];
      param_3[1] = fVar6 * fVar2 + param_3[2] * fVar3;
      param_3[2] = param_3[2] * fVar2 - fVar6 * fVar3;
      fVar6 = param_3[5];
      param_3[5] = fVar6 * fVar2 + param_3[6] * fVar3;
      param_3[6] = param_3[6] * fVar2 - fVar6 * fVar3;
      fVar6 = param_3[9];
      param_3[9] = fVar6 * fVar2 + param_3[10] * fVar3;
      param_3[10] = param_3[10] * fVar2 - fVar6 * fVar3;
    }
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x7aa),(byte)(uVar1 >> 0x15) & 3);
    fVar2 = fVar2 * fVar4;
    if (fVar2 != fVar5) {
      fVar4 = (float)FUN_003727f0(fVar2);
      fVar5 = (float)FUN_00372674(fVar2);
      fVar2 = *param_3;
      *param_3 = fVar2 * fVar5 - param_3[2] * fVar4;
      param_3[2] = fVar2 * fVar4 + param_3[2] * fVar5;
      fVar2 = param_3[4];
      param_3[4] = fVar2 * fVar5 - param_3[6] * fVar4;
      param_3[6] = fVar2 * fVar4 + param_3[6] * fVar5;
      fVar2 = param_3[8];
      param_3[8] = fVar2 * fVar5 - param_3[10] * fVar4;
      param_3[10] = fVar2 * fVar4 + param_3[10] * fVar5;
    }
  }
  return 0;
}

// OoT3D decomp @ 00394190  name=FUN_00394190  size=240

undefined4 FUN_00394190(undefined4 param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar1 = DAT_00394280;
  if (param_2 != 6) {
    if (param_2 != 9) {
      return 0;
    }
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xc8a),(byte)(in_fpscr >> 0x15) & 3
                                      );
    fVar2 = fVar2 * DAT_00394280;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 == DAT_00394284) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      fVar3 = (float)FUN_003727f0();
      fVar2 = (float)FUN_00372674(fVar2);
      fVar4 = *param_3;
      *param_3 = fVar4 * fVar2 + param_3[1] * fVar3;
      param_3[1] = param_3[1] * fVar2 - fVar4 * fVar3;
      fVar4 = param_3[4];
      param_3[4] = fVar4 * fVar2 + param_3[5] * fVar3;
      param_3[5] = param_3[5] * fVar2 - fVar4 * fVar3;
      fVar4 = param_3[8];
      param_3[8] = fVar4 * fVar2 + param_3[9] * fVar3;
      param_3[9] = param_3[9] * fVar2 - fVar4 * fVar3;
    }
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xc88),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00369014(fVar2 * fVar1,param_3,1);
  return 0;
}

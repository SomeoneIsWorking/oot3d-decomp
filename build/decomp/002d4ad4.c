// OoT3D decomp @ 002d4ad4  name=FUN_002d4ad4  size=348

void FUN_002d4ad4(float param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5,
                 uint param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  float fVar8;

  if (param_7 == 0x1406) {
    param_6 = param_6 >> 2;
    if (param_6 != 0) {
      pfVar2 = param_3 + -1;
      pfVar3 = param_4 + -1;
      pfVar4 = param_5 + -1;
      if ((param_6 & 1) != 0) {
        *param_5 = *param_3 + (*param_4 - *param_3) * param_1;
        pfVar2 = param_3;
        pfVar3 = param_4;
        pfVar4 = param_5;
      }
      for (iVar5 = (int)param_6 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        pfVar1 = pfVar3 + 1;
        pfVar3 = pfVar3 + 2;
        pfVar4[1] = pfVar2[1] + (*pfVar1 - pfVar2[1]) * param_1;
        pfVar1 = pfVar2 + 2;
        pfVar4 = pfVar4 + 2;
        pfVar2 = pfVar2 + 2;
        *pfVar4 = *pfVar1 + (*pfVar3 - *pfVar1) * param_1;
      }
    }
  }
  else if (0 < (int)param_6) {
    pfVar2 = (float *)((int)param_3 + -1);
    pfVar3 = (float *)((int)param_4 + -1);
    pfVar4 = (float *)((int)param_5 + -1);
    if ((param_6 & 1) != 0) {
      fVar8 = (float)VectorSignedToFloat((uint)*(byte *)param_4 - (uint)*(byte *)param_3,
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)param_3,(byte)(in_fpscr >> 0x15) & 3);
      uVar7 = VectorFloatToUnsigned(fVar6 + fVar8 * param_1,3);
      *(char *)param_5 = (char)uVar7;
      pfVar2 = param_3;
      pfVar3 = param_4;
      pfVar4 = param_5;
    }
    iVar5 = (int)param_6 >> 1;
    if (iVar5 != 0) {
      do {
        iVar5 = iVar5 + -1;
        fVar8 = (float)VectorSignedToFloat((uint)*(byte *)((int)pfVar3 + 1) -
                                           (uint)*(byte *)((int)pfVar2 + 1),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar6 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)((int)pfVar2 + 1),(byte)(in_fpscr >> 0x15) & 3);
        uVar7 = VectorFloatToUnsigned(fVar6 + fVar8 * param_1,3);
        *(char *)((int)pfVar4 + 1) = (char)uVar7;
        pfVar3 = (float *)((int)pfVar3 + 2);
        pfVar2 = (float *)((int)pfVar2 + 2);
        fVar8 = (float)VectorSignedToFloat((uint)*(byte *)pfVar3 - (uint)*(byte *)pfVar2,
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)pfVar2,(byte)(in_fpscr >> 0x15) & 3);
        uVar7 = VectorFloatToUnsigned(fVar6 + fVar8 * param_1,3);
        pfVar4 = (float *)((int)pfVar4 + 2);
        *(char *)pfVar4 = (char)uVar7;
      } while (iVar5 != 0);
      return;
    }
  }
  return;
}

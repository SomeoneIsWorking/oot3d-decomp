// OoT3D decomp @ 0032c818  name=FUN_0032c818  size=192

undefined4 FUN_0032c818(float *param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_s3;
  float fVar7;
  float fVar8;

  iVar1 = DAT_0032c8dc;
  fVar5 = param_1[3];
  bVar2 = fVar5 == DAT_0032c8d8;
  bVar3 = DAT_0032c8d8 <= fVar5;
  if (bVar3 && !bVar2) {
    in_s3 = *param_2;
    bVar2 = in_s3 == DAT_0032c8d8;
    bVar3 = DAT_0032c8d8 <= in_s3;
  }
  if (bVar3 && !bVar2) {
    fVar6 = param_1[1];
    *(float *)(DAT_0032c8dc + 4) = fVar6;
    *(float *)(iVar1 + 0xc) = fVar5;
    fVar7 = param_2[4];
    *(float *)(iVar1 + -8) = fVar7;
    fVar8 = param_2[2];
    *(float *)(iVar1 + -0x10) = fVar8;
    fVar7 = fVar7 + fVar8;
    fVar8 = param_2[1];
    *(float *)(iVar1 + -0x14) = fVar8;
    fVar4 = SQRT((*param_1 - param_2[3]) * (*param_1 - param_2[3]) +
                 (param_1[2] - param_2[5]) * (param_1[2] - param_2[5]));
    *param_4 = fVar4;
    if (((fVar4 <= fVar5 + in_s3) && (fVar7 <= fVar6 + fVar5)) && (fVar6 - fVar5 <= fVar7 + fVar8))
    {
      *param_3 = (fVar5 + in_s3) - fVar4;
      return 1;
    }
  }
  return 0;
}

// OoT3D decomp @ 00356dc4  name=FUN_00356dc4  size=228

undefined4
FUN_00356dc4(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *in_r3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;

  fVar2 = DAT_00356eb0;
  pfVar1 = DAT_00356eac;
  if (DAT_00356ea8 <= (int)ABS(param_3)) {
    *DAT_00356eac = param_5;
    pfVar1[1] = param_6;
    pfVar1[2] = param_8;
    fVar7 = param_5 * param_1 + param_2 * param_6;
    fVar8 = fVar7 + param_3 * param_8 + param_4;
    fVar7 = fVar7 + param_3 * param_7 + param_4;
    bVar4 = fVar7 < fVar2;
    bVar5 = fVar7 == fVar2;
    bVar6 = NAN(fVar7) || NAN(fVar2);
    if (!bVar5 && !bVar4) {
      bVar4 = fVar8 < fVar2;
      bVar5 = fVar8 == fVar2;
      bVar6 = NAN(fVar8) || NAN(fVar2);
    }
    if (((bVar5 || bVar4 != bVar6) && (fVar2 <= fVar7 || fVar2 <= fVar8)) &&
       (iVar3 = FUN_00319718(param_5,param_6,DAT_00356eb8,DAT_00356eb4,param_3), iVar3 != 0)) {
      *in_r3 = ((-param_1 * param_5 - param_2 * param_6) - param_4) / param_3;
      return 1;
    }
  }
  return 0;
}

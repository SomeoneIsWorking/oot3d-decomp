// OoT3D decomp @ 00356cc8  name=FUN_00356cc8  size=232

undefined4
FUN_00356cc8(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
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

  fVar2 = DAT_00356db8;
  pfVar1 = DAT_00356db4;
  if (DAT_00356db0 <= (int)ABS(param_1)) {
    DAT_00356db4[1] = param_5;
    pfVar1[2] = param_6;
    *pfVar1 = param_8;
    fVar7 = param_7 * param_1 + param_2 * param_5 + param_3 * param_6 + param_4;
    fVar8 = param_8 * param_1 + param_2 * param_5 + param_3 * param_6 + param_4;
    bVar4 = fVar7 < fVar2;
    bVar5 = fVar7 == fVar2;
    bVar6 = NAN(fVar7) || NAN(fVar2);
    if (!bVar5 && !bVar4) {
      bVar4 = fVar8 < fVar2;
      bVar5 = fVar8 == fVar2;
      bVar6 = NAN(fVar8) || NAN(fVar2);
    }
    if (((bVar5 || bVar4 != bVar6) && (fVar2 <= fVar7 || fVar2 <= fVar8)) &&
       (iVar3 = FUN_0031990c(param_5,param_6,DAT_00356dc0,DAT_00356dbc,param_1), iVar3 != 0)) {
      *in_r3 = ((-param_2 * param_5 - param_3 * param_6) - param_4) / param_1;
      return 1;
    }
  }
  return 0;
}

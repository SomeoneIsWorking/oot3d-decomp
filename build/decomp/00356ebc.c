// OoT3D decomp @ 00356ebc  name=FUN_00356ebc  size=216

undefined4
FUN_00356ebc(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  int iVar1;
  float *in_r3;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;

  if (DAT_00356f94 <= (int)ABS(param_2)) {
    fVar6 = param_6 * param_1 + param_2 * param_8 + param_3 * param_5 + param_4;
    fVar5 = param_6 * param_1 + param_2 * param_7 + param_3 * param_5 + param_4;
    bVar2 = fVar5 < DAT_00356f98;
    bVar3 = fVar5 == DAT_00356f98;
    bVar4 = NAN(fVar5) || NAN(DAT_00356f98);
    if (!bVar3 && !bVar2) {
      bVar2 = fVar6 < DAT_00356f98;
      bVar3 = fVar6 == DAT_00356f98;
      bVar4 = NAN(fVar6) || NAN(DAT_00356f98);
    }
    if (((bVar3 || bVar2 != bVar4) && (DAT_00356f98 <= fVar5 || DAT_00356f98 <= fVar6)) &&
       (iVar1 = FUN_00322618(param_5,param_6,DAT_00356fa0,DAT_00356f9c,param_2), iVar1 != 0)) {
      *in_r3 = ((-param_1 * param_6 - param_3 * param_5) - param_4) / param_2;
      return 1;
    }
  }
  return 0;
}

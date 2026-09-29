// OoT3D decomp @ 00319718  name=FUN_00319718  size=500

undefined4
FUN_00319718(float param_1,float param_2,float param_3,float param_4,float param_5,float *param_6,
            float *param_7,float *param_8)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float extraout_s10;
  float extraout_s10_00;
  float extraout_s10_01;
  float fVar10;
  float local_2c;

  iVar1 = FUN_002bbb14(*param_6,param_6[1],*param_7,param_7[1],*param_8,param_8[1],param_1,param_2,
                       param_4);
  if (iVar1 == 0) {
    return 0;
  }
  param_4 = param_4 * param_4;
  fVar4 = param_1 - *param_6;
  fVar5 = param_2 - param_6[1];
  if (param_4 <= fVar4 * fVar4 + fVar5 * fVar5) {
    fVar4 = param_1 - *param_7;
    fVar5 = param_2 - param_7[1];
    if (param_4 <= fVar4 * fVar4 + fVar5 * fVar5) {
      fVar4 = param_1 - *param_8;
      fVar5 = param_2 - param_8[1];
      if (param_4 <= fVar4 * fVar4 + fVar5 * fVar5) {
        fVar8 = *param_6 - param_1;
        fVar5 = param_7[1] - param_2;
        fVar6 = param_6[1] - param_2;
        fVar4 = *param_7 - param_1;
        fVar9 = param_8[1] - param_2;
        fVar10 = *param_8 - param_1;
        fVar7 = fVar8 * fVar5 - fVar6 * fVar4;
        bVar3 = fVar7 == param_3;
        bVar2 = param_3 <= fVar7;
        fVar4 = fVar4 * fVar9 - fVar5 * fVar10;
        fVar5 = fVar10 * fVar6 - fVar9 * fVar8;
        if (!bVar2 || bVar3) {
          bVar3 = fVar4 == param_3;
          bVar2 = param_3 <= fVar4;
        }
        if (!bVar2 || bVar3) {
          bVar3 = fVar5 == param_3;
          bVar2 = param_3 <= fVar5;
        }
        if (bVar2 && !bVar3) {
          param_3 = -param_3;
          bVar3 = NAN(fVar7) || NAN(param_3);
          if (!NAN(fVar7) && !NAN(param_3)) {
            bVar3 = NAN(fVar4) || NAN(param_3);
          }
          bVar2 = fVar4 < param_3;
          if (bVar2 == bVar3) {
            bVar2 = fVar5 < param_3;
            bVar3 = NAN(fVar5) || NAN(param_3);
          }
          if (bVar2 != bVar3) {
            if ((int)ABS(param_5) < 0x3f000001) {
              return 0;
            }
            iVar1 = FUN_0031d210(param_1,param_2,&local_2c);
            if (((iVar1 == 0 || extraout_s10 <= local_2c) &&
                (iVar1 = FUN_0031d210(param_1,param_2,*param_7,param_7[1],*param_8,param_8[1],
                                      &local_2c), iVar1 == 0 || extraout_s10_00 <= local_2c)) &&
               (iVar1 = FUN_0031d210(param_1,param_2,*param_8,param_8[1],*param_6,param_6[1],
                                     &local_2c), iVar1 == 0 || extraout_s10_01 <= local_2c)) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

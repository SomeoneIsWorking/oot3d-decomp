// OoT3D decomp @ 00318a18  name=FUN_00318a18  size=740

undefined4 FUN_00318a18(float *param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  fVar8 = param_1[10];
  fVar7 = param_1[0xc];
  fVar5 = param_1[0xb];
  fVar6 = param_1[9];
  fVar9 = fVar8 * param_2[1] + fVar5 * param_2[2] + fVar7 + fVar6 * *param_2;
  fVar10 = fVar8 * param_2[4] + fVar5 * param_2[5] + fVar7 + fVar6 * param_2[3];
  bVar2 = fVar9 < DAT_00318cfc;
  bVar3 = fVar9 == DAT_00318cfc;
  bVar4 = NAN(fVar9) || NAN(DAT_00318cfc);
  fVar5 = fVar8 * param_2[7] + fVar5 * param_2[8] + fVar7 + fVar6 * param_2[6];
  if (!bVar3 && !bVar2) {
    bVar2 = fVar10 < DAT_00318cfc;
    bVar3 = fVar10 == DAT_00318cfc;
    bVar4 = NAN(fVar10) || NAN(DAT_00318cfc);
  }
  if (!bVar3 && bVar2 == bVar4) {
    bVar2 = fVar5 < DAT_00318cfc;
    bVar3 = fVar5 == DAT_00318cfc;
    bVar4 = NAN(fVar5) || NAN(DAT_00318cfc);
  }
  if (bVar3 || bVar2 != bVar4) {
    bVar2 = DAT_00318cfc <= fVar9 || DAT_00318cfc <= fVar10;
    if (DAT_00318cfc > fVar9 && DAT_00318cfc > fVar10) {
      bVar2 = DAT_00318cfc <= fVar5;
    }
    if (bVar2) {
      fVar6 = param_2[10];
      fVar8 = param_2[0xc];
      fVar7 = param_2[0xb];
      fVar5 = param_2[9];
      fVar9 = fVar6 * param_1[1] + fVar7 * param_1[2] + fVar8 + fVar5 * *param_1;
      bVar2 = fVar9 < DAT_00318cfc;
      bVar3 = fVar9 == DAT_00318cfc;
      bVar4 = NAN(fVar9) || NAN(DAT_00318cfc);
      fVar10 = fVar6 * param_1[4] + fVar7 * param_1[5] + fVar8 + fVar5 * param_1[3];
      fVar5 = fVar6 * param_1[7] + fVar7 * param_1[8] + fVar8 + fVar5 * param_1[6];
      if (!bVar3 && !bVar2) {
        bVar2 = fVar10 < DAT_00318cfc;
        bVar3 = fVar10 == DAT_00318cfc;
        bVar4 = NAN(fVar10) || NAN(DAT_00318cfc);
      }
      if (!bVar3 && bVar2 == bVar4) {
        bVar2 = fVar5 < DAT_00318cfc;
        bVar3 = fVar5 == DAT_00318cfc;
        bVar4 = NAN(fVar5) || NAN(DAT_00318cfc);
      }
      if (bVar3 || bVar2 != bVar4) {
        bVar2 = DAT_00318cfc <= fVar9 || DAT_00318cfc <= fVar10;
        if (DAT_00318cfc > fVar9 && DAT_00318cfc > fVar10) {
          bVar2 = DAT_00318cfc <= fVar5;
        }
        if ((bVar2) &&
           ((((iVar1 = FUN_003193fc(param_2,param_2 + 3,param_2 + 6,param_1,param_1 + 3,param_3,0),
              iVar1 != 0 ||
              (iVar1 = FUN_003193fc(param_2[9],param_2[10],param_2[0xb],param_2[0xc],param_2,
                                    param_2 + 3,param_2 + 6,param_1 + 3,param_1 + 6,param_3,0),
              iVar1 != 0)) ||
             (iVar1 = FUN_003193fc(param_2[9],param_2[10],param_2[0xb],param_2[0xc],param_2,
                                   param_2 + 3,param_2 + 6,param_1 + 6,param_1,param_3,0),
             iVar1 != 0)) ||
            (((iVar1 = FUN_003193fc(param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1,
                                    param_1 + 3,param_1 + 6,param_2,param_2 + 3,param_3,0),
              iVar1 == 1 ||
              (iVar1 = FUN_003193fc(param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1,
                                    param_1 + 3,param_1 + 6,param_2 + 3,param_2 + 6,param_3,0),
              iVar1 == 1)) ||
             (iVar1 = FUN_003193fc(param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1,
                                   param_1 + 3,param_1 + 6,param_2 + 6,param_2,param_3,0),
             iVar1 == 1)))))) {
          return 1;
        }
      }
    }
  }
  return 0;
}

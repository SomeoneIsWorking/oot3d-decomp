// OoT3D decomp @ 003564a4  name=FUN_003564a4  size=2068

undefined4 FUN_003564a4(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar11 = *param_3;
  fVar13 = *param_2;
  uVar7 = (uint)(fVar11 != fVar13 && fVar11 < fVar13 == (NAN(fVar11) || NAN(fVar13)));
  fVar12 = param_3[1];
  fVar15 = param_2[1];
  if (fVar11 < *param_1) {
    uVar7 = uVar7 | 2;
  }
  if (fVar12 != fVar15 && fVar12 < fVar15 == (NAN(fVar12) || NAN(fVar15))) {
    uVar7 = uVar7 | 4;
  }
  fVar11 = param_3[2];
  fVar14 = param_2[2];
  if (fVar12 < param_1[1]) {
    uVar7 = uVar7 | 8;
  }
  if (fVar11 != fVar14 && fVar11 < fVar14 == (NAN(fVar11) || NAN(fVar14))) {
    uVar7 = uVar7 | 0x10;
  }
  if (fVar11 < param_1[2]) {
    uVar7 = uVar7 | 0x20;
  }
  if (uVar7 != 0) {
    fVar11 = *param_4;
    uVar8 = (uint)(fVar11 != fVar13 && fVar11 < fVar13 == (NAN(fVar11) || NAN(fVar13)));
    fVar12 = param_4[1];
    if (fVar11 < *param_1) {
      uVar8 = uVar8 | 2;
    }
    if (fVar12 != fVar15 && fVar12 < fVar15 == (NAN(fVar12) || NAN(fVar15))) {
      uVar8 = uVar8 | 4;
    }
    fVar11 = param_4[2];
    if (fVar12 < param_1[1]) {
      uVar8 = uVar8 | 8;
    }
    if (fVar11 != fVar14 && fVar11 < fVar14 == (NAN(fVar11) || NAN(fVar14))) {
      uVar8 = uVar8 | 0x10;
    }
    if (fVar11 < param_1[2]) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar8 != 0) {
      if ((uVar7 & uVar8) == 0) {
        iVar5 = FUN_0035708c(param_3,param_1,param_2);
        uVar7 = uVar7 | iVar5 << 8;
        iVar5 = FUN_0035708c(param_4,param_1,param_2);
        uVar8 = uVar8 | iVar5 << 8;
        if ((uVar7 & uVar8) == 0) {
          iVar5 = FUN_00356fa4(param_3,param_1,param_2);
          iVar6 = FUN_00356fa4(param_4,param_1,param_2);
          pfVar1 = DAT_00356a38;
          if (((uVar8 | iVar6 << 0x18) & (uVar7 | iVar5 << 0x18)) == 0) {
            pfVar9 = DAT_00356a38 + 3;
            *DAT_00356a38 = *param_1;
            pfVar10 = pfVar1 + 6;
            pfVar1[1] = param_1[1];
            pfVar1[2] = param_1[2];
            *pfVar9 = *param_1;
            pfVar1[4] = param_1[1];
            pfVar1[5] = param_2[2];
            *pfVar10 = *param_1;
            pfVar1[7] = param_2[1];
            pfVar1[8] = param_2[2];
            uVar3 = DAT_00356a40;
            uVar2 = DAT_00356a3c;
            iVar5 = FUN_003193fc(DAT_00356a40,DAT_00356a3c,DAT_00356a3c,*param_1,pfVar1,pfVar9,
                                 pfVar10,param_3,param_4,pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_1;
            pfVar1[1] = param_1[1];
            pfVar1[2] = param_1[2];
            *pfVar9 = *param_1;
            pfVar1[4] = param_2[1];
            pfVar1[5] = param_2[2];
            *pfVar10 = *param_1;
            pfVar1[7] = param_2[1];
            pfVar1[8] = param_1[2];
            iVar5 = FUN_003193fc(uVar3,uVar2,uVar2,*param_1,pfVar1,pfVar9,pfVar10,param_3,param_4,
                                 pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_1;
            pfVar1[1] = param_2[1];
            uVar4 = DAT_00356a44;
            pfVar1[2] = param_2[2];
            *pfVar9 = *param_1;
            pfVar1[4] = param_1[1];
            pfVar1[5] = param_2[2];
            *pfVar10 = *param_2;
            pfVar1[7] = param_2[1];
            pfVar1[8] = param_2[2];
            iVar5 = FUN_003193fc(uVar2,uVar2,uVar4,-param_2[2],pfVar1,pfVar9,pfVar10,param_3,param_4
                                 ,pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_2;
            pfVar1[1] = param_2[1];
            pfVar1[2] = param_2[2];
            *pfVar9 = *param_1;
            pfVar1[4] = param_1[1];
            pfVar1[5] = param_2[2];
            *pfVar10 = *param_2;
            pfVar1[4] = param_1[1];
            pfVar1[8] = param_2[2];
            iVar5 = FUN_003193fc(uVar2,uVar2,uVar4,-param_2[2],pfVar1,pfVar9,pfVar10,param_3,param_4
                                 ,pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_2;
            pfVar1[1] = param_2[1];
            pfVar1[2] = param_2[2];
            *pfVar9 = *param_1;
            pfVar1[4] = param_2[1];
            pfVar1[5] = param_1[2];
            *pfVar10 = *param_1;
            pfVar1[7] = param_2[1];
            pfVar1[8] = param_2[2];
            iVar5 = FUN_003193fc(uVar2,uVar4,uVar2,-param_2[1],pfVar1,pfVar9,pfVar10,param_3,param_4
                                 ,pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_2;
            pfVar1[1] = param_2[1];
            pfVar1[2] = param_2[2];
            *pfVar9 = *param_2;
            pfVar1[4] = param_2[1];
            pfVar1[5] = param_1[2];
            *pfVar10 = *param_1;
            pfVar1[7] = param_2[1];
            pfVar1[8] = param_1[2];
            iVar5 = FUN_003193fc(uVar2,uVar4,uVar2,-param_2[1],pfVar1,pfVar9,pfVar10,param_3,param_4
                                 ,pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_1;
            pfVar1[1] = param_1[1];
            pfVar1[2] = param_1[2];
            *pfVar9 = *param_1;
            pfVar1[4] = param_2[1];
            pfVar1[5] = param_1[2];
            *pfVar10 = *param_2;
            pfVar1[7] = param_2[1];
            pfVar1[8] = param_1[2];
            iVar5 = FUN_003193fc(uVar2,uVar2,uVar3,param_1[2],pfVar1,pfVar9,pfVar10,param_3,param_4,
                                 pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_1;
            pfVar1[1] = param_1[1];
            pfVar1[2] = param_1[2];
            *pfVar9 = *param_2;
            pfVar1[4] = param_2[1];
            pfVar1[5] = param_1[2];
            *pfVar10 = *param_2;
            pfVar1[7] = param_1[1];
            pfVar1[8] = param_1[2];
            iVar5 = FUN_003193fc(uVar2,uVar2,uVar3,param_1[2],pfVar1,pfVar9,pfVar10,param_3,param_4,
                                 pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_1;
            pfVar1[1] = param_1[1];
            pfVar1[2] = param_1[2];
            *pfVar9 = *param_2;
            pfVar1[4] = param_1[1];
            pfVar1[5] = param_1[2];
            *pfVar10 = *param_2;
            pfVar1[7] = param_1[1];
            pfVar1[8] = param_2[2];
            iVar5 = FUN_003193fc(uVar2,uVar3,uVar2,param_1[1],pfVar1,pfVar9,pfVar10,param_3,param_4,
                                 pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_1;
            pfVar1[1] = param_1[1];
            pfVar1[2] = param_1[2];
            *pfVar9 = *param_2;
            pfVar1[4] = param_1[1];
            pfVar1[5] = param_2[2];
            *pfVar10 = *param_1;
            pfVar1[7] = param_1[1];
            pfVar1[8] = param_2[2];
            iVar5 = FUN_003193fc(uVar2,uVar3,uVar2,param_1[1],pfVar1,pfVar9,pfVar10,param_3,param_4,
                                 pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_2;
            pfVar1[1] = param_2[1];
            pfVar1[2] = param_2[2];
            *pfVar9 = *param_2;
            pfVar1[4] = param_1[1];
            pfVar1[5] = param_1[2];
            *pfVar10 = *param_2;
            pfVar1[7] = param_2[1];
            pfVar1[8] = param_1[2];
            iVar5 = FUN_003193fc(uVar4,uVar2,uVar2,-*param_2,pfVar1,pfVar9,pfVar10,param_3,param_4,
                                 pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            *pfVar1 = *param_2;
            pfVar1[1] = param_2[1];
            pfVar1[2] = param_2[2];
            *pfVar9 = *param_2;
            pfVar1[4] = param_1[1];
            pfVar1[5] = param_2[2];
            *pfVar10 = *param_2;
            pfVar1[7] = param_1[1];
            pfVar1[8] = param_1[2];
            iVar5 = FUN_003193fc(uVar4,uVar2,uVar2,-*param_2,pfVar1,pfVar9,pfVar10,param_3,param_4,
                                 pfVar1 + 9,0);
            if (iVar5 != 0) {
              return 1;
            }
            return 0;
          }
        }
      }
      return 0;
    }
  }
  return 1;
}


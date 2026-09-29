// OoT3D decomp @ 002ce904  name=FUN_002ce904  size=680

void FUN_002ce904(float param_1,int param_2,float *param_3,float *param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  if (DAT_002cebac < param_1) {
    if (((*DAT_002cebb0 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_002cebb0), iVar4 != 0)) {
      FUN_0036788c(DAT_002cebb4);
    }
    fVar3 = DAT_002cebcc;
    pfVar2 = DAT_002cebc4;
    uVar1 = DAT_002cebc0;
    fVar7 = *DAT_002cebc4;
    fVar13 = *param_3 + *param_4 * fVar7;
    fVar14 = param_3[1] + param_4[1] * fVar7;
    fVar12 = param_3[2] + param_4[2] * fVar7;
    fVar8 = DAT_002cebc4[1];
    fVar9 = fVar8 * DAT_002cebc8;
    fVar7 = *param_4;
    fVar5 = param_4[1];
    fVar6 = param_4[2];
    param_2 = param_2 + param_5 * 4;
    fVar11 = DAT_002cebcc / SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    iVar4 = *(int *)(param_2 + 0xd0);
    if (iVar4 != 0) {
      fVar10 = DAT_002cebc4[2];
      *(float *)(iVar4 + 0x3c) = fVar13 + fVar7 * fVar11 * fVar10;
      *(float *)(iVar4 + 0x40) = fVar14 + fVar5 * fVar11 * fVar10;
      *(float *)(iVar4 + 0x44) = fVar12 + fVar6 * fVar11 * fVar10;
      iVar4 = *(int *)(param_2 + 0xd0);
      *(float *)(iVar4 + 0x48) = fVar9;
      *(float *)(iVar4 + 0x4c) = fVar9;
      *(float *)(iVar4 + 0x50) = fVar9;
      iVar4 = *(int *)(param_2 + 0xd0);
      *(float *)(iVar4 + 0xf0) = fVar3;
      *(float *)(iVar4 + 0xf4) = fVar3;
      *(float *)(iVar4 + 0xf8) = fVar3;
      *(float *)(iVar4 + 0xfc) = param_1;
      FUN_002c517c(uVar1,*(undefined4 *)(param_2 + 0xd0),param_6 + 4);
    }
    iVar4 = *(int *)(param_2 + 0xc0);
    if (iVar4 != 0) {
      *(float *)(iVar4 + 0x3c) = fVar13;
      *(float *)(iVar4 + 0x40) = fVar14;
      *(float *)(iVar4 + 0x44) = fVar12;
      iVar4 = *(int *)(param_2 + 0xc0);
      *(float *)(iVar4 + 0x48) = fVar8;
      *(float *)(iVar4 + 0x4c) = fVar8;
      *(float *)(iVar4 + 0x50) = fVar8;
      iVar4 = *(int *)(param_2 + 0xc0);
      *(float *)(iVar4 + 0xf0) = fVar3;
      *(float *)(iVar4 + 0xf4) = fVar3;
      *(float *)(iVar4 + 0xf8) = fVar3;
      *(float *)(iVar4 + 0xfc) = param_1;
      FUN_002c517c(uVar1,*(undefined4 *)(param_2 + 0xc0),param_6 + 6);
    }
    iVar4 = *(int *)(param_2 + 0xe0);
    if (iVar4 != 0) {
      fVar8 = pfVar2[2];
      *(float *)(iVar4 + 0x3c) = fVar13 - fVar7 * fVar11 * fVar8;
      *(float *)(iVar4 + 0x40) = fVar14 - fVar5 * fVar11 * fVar8;
      *(float *)(iVar4 + 0x44) = fVar12 - fVar6 * fVar11 * fVar8;
      iVar4 = *(int *)(param_2 + 0xe0);
      *(float *)(iVar4 + 0x48) = fVar9;
      *(float *)(iVar4 + 0x4c) = fVar9;
      *(float *)(iVar4 + 0x50) = fVar9;
      iVar4 = *(int *)(param_2 + 0xe0);
      *(float *)(iVar4 + 0xf0) = fVar3;
      *(float *)(iVar4 + 0xf4) = fVar3;
      *(float *)(iVar4 + 0xf8) = fVar3;
      *(float *)(iVar4 + 0xfc) = param_1;
      FUN_002c517c(uVar1,*(undefined4 *)(param_2 + 0xe0),param_6 + 8);
    }
  }
  return;
}

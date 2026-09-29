// OoT3D decomp @ 002f57f0  name=FUN_002f57f0  size=1160

int FUN_002f57f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_194 [9];
  float local_170 [9];
  undefined1 auStack_14c [280];

  *(undefined4 *)(param_1 + 0x38) = DAT_002f5c18;
  iVar4 = FUN_00313ce0(0x1c4);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_002e77e8();
  }
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  FUN_002e76b8(uVar5,param_1 + 0x38,0x100,0x100,0x100);
  uVar7 = DAT_002f5c30;
  fVar2 = DAT_002f5c2c;
  fVar1 = DAT_002f5c28;
  iVar4 = DAT_002f5c24;
  uVar5 = DAT_002f5c20;
  puVar9 = DAT_002f5c1c;
  if (param_5 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    fVar12 = DAT_002f5c38;
    *(undefined4 *)(param_1 + 0x48) = DAT_002f5c34;
    iVar10 = 0;
    fVar14 = fVar2;
    do {
      fVar15 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
      if (param_2 == 0x94f) {
        fVar13 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
        FUN_003446e8(fVar2,*(undefined4 *)(param_1 + 0x34),0x94f,(int)(fVar13 + fVar14),
                     (int)(fVar15 + fVar14),0x100,0x10,auStack_14c,0);
      }
      else {
        FUN_003446e8(fVar2,*(undefined4 *)(param_1 + 0x34),param_2,(int)(fVar14 + fVar12),
                     (int)(fVar15 + fVar14),0x100,0x10,auStack_14c,0);
      }
      iVar6 = (**(code **)(*(int *)*DAT_002f5c3c + 8))((int *)*DAT_002f5c3c,0x1b8);
      uVar7 = 0;
      if (iVar6 != 0) {
        uVar7 = FUN_00348f34(iVar6,auStack_14c);
      }
      iVar11 = param_1 + iVar10 * 4;
      *(undefined4 *)(iVar11 + 8) = uVar7;
      iVar6 = (**(code **)(*(int *)*DAT_002f5c1c + 8))((int *)*DAT_002f5c1c,0x54);
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_002ffa20();
      }
      *(undefined4 *)(param_1 + iVar10 * 4) = uVar7;
      FUN_002ccf04(*(undefined4 *)(param_1 + 0x34),uVar7,0);
      FUN_00348a64(*(undefined4 *)(iVar11 + 8),0,*(undefined4 *)(param_1 + iVar10 * 4),DAT_002f5c40,
                   DAT_002f5c40,uVar5,uVar5);
      if (((*DAT_002f5c44 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_002f5c44), iVar6 != 0)) {
        FUN_0036788c(DAT_002f5c48);
      }
      uVar7 = BoardModelFactory_0034897c
                        (*(undefined4 *)(iVar4 + 0x47c),*(undefined4 *)(iVar11 + 8),0);
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar11 + 0x10) = uVar7;
      fVar14 = fVar1;
    } while (iVar10 < 2);
    iVar4 = FUN_002df594(*(undefined4 *)(param_1 + 8),0);
    uVar5 = DAT_002f5c54;
    uVar8 = 0;
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x34) + 0xf0) + 0x1a8) & 0x3fffffff) != 0) {
      do {
        puVar9 = (undefined4 *)(iVar4 + uVar8 * 0x10);
        uVar8 = uVar8 + 1;
        *puVar9 = uVar5;
        puVar9[1] = uVar5;
        puVar9[2] = uVar5;
      } while (uVar8 < (uint)(*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xf0) + 0x1a8) * 4));
    }
  }
  else {
    iVar10 = 0;
    *(undefined4 *)(param_1 + 0x40) = 2;
    do {
      FUN_003446e8(fVar2,*(undefined4 *)(param_1 + 0x34),param_2,param_3,param_4,0x100,0x10,
                   auStack_14c,0);
      iVar6 = (**(code **)(*(int *)*DAT_002f5c3c + 8))((int *)*DAT_002f5c3c,0x1b8);
      uVar5 = 0;
      if (iVar6 != 0) {
        uVar5 = FUN_00348f34(iVar6,auStack_14c);
      }
      iVar11 = param_1 + iVar10 * 4;
      *(undefined4 *)(iVar11 + 8) = uVar5;
      iVar6 = (**(code **)(*(int *)*puVar9 + 8))((int *)*puVar9,0x54);
      if (iVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_002ffa20();
      }
      *(undefined4 *)(param_1 + iVar10 * 4) = uVar5;
      FUN_002ccf04(*(undefined4 *)(param_1 + 0x34),uVar5,0);
      FUN_00348a64(*(undefined4 *)(iVar11 + 8),0,*(undefined4 *)(param_1 + iVar10 * 4),DAT_002f5c40,
                   DAT_002f5c40,DAT_002f5c20,DAT_002f5c20);
      uVar5 = DAT_002f5c60;
      puVar3 = DAT_002f5c44;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 2);
    local_170[0] = *DAT_002f5c58;
    local_170[1] = DAT_002f5c58[1];
    local_170[2] = DAT_002f5c58[2];
    local_170[3] = DAT_002f5c58[3];
    local_170[4] = DAT_002f5c58[4];
    local_170[5] = DAT_002f5c58[5];
    local_170[6] = DAT_002f5c58[6];
    local_170[7] = DAT_002f5c58[7];
    local_170[8] = DAT_002f5c58[8];
    local_194[0] = *DAT_002f5c5c;
    local_194[1] = DAT_002f5c5c[1];
    local_194[2] = DAT_002f5c5c[2];
    local_194[3] = DAT_002f5c5c[3];
    local_194[4] = DAT_002f5c5c[4];
    local_194[5] = DAT_002f5c5c[5];
    local_194[6] = DAT_002f5c5c[6];
    iVar10 = 0;
    local_194[7] = DAT_002f5c5c[7];
    local_194[8] = DAT_002f5c5c[8];
    do {
      if (((*puVar3 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_002f5c44), iVar6 != 0)) {
        FUN_0036788c(DAT_002f5c48);
      }
      iVar6 = BoardModelFactory_0034897c
                        (*(undefined4 *)(iVar4 + 0x47c),*(undefined4 *)(param_1 + 8),0);
      iVar11 = param_1 + iVar10 * 4;
      *(int *)(iVar11 + 0x10) = iVar6;
      fVar12 = local_170[iVar10];
      fVar14 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
      fVar15 = local_194[iVar10];
      *(float *)(iVar6 + 0x44) = fVar1;
      *(float *)(iVar6 + 0x40) = fVar15 + fVar13;
      *(float *)(iVar6 + 0x3c) = fVar12 + fVar14;
      if (iVar10 == 8) {
        iVar6 = *(int *)(param_1 + 0x30);
        *(float *)(iVar6 + 0xf0) = fVar2;
        *(float *)(iVar6 + 0xf4) = fVar2;
        *(float *)(iVar6 + 0xf8) = fVar2;
        *(float *)(iVar6 + 0xfc) = fVar2;
      }
      else {
        iVar6 = *(int *)(iVar11 + 0x10);
        *(undefined4 *)(iVar6 + 0xf0) = uVar5;
        *(undefined4 *)(iVar6 + 0xf4) = uVar5;
        *(undefined4 *)(iVar6 + 0xf8) = uVar5;
        *(float *)(iVar6 + 0xfc) = fVar2;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 9);
  }
  return param_1;
}

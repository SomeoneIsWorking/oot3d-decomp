// OoT3D decomp @ 0044cbb8  name=FUN_0044cbb8  size=636

int FUN_0044cbb8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_1a4 [9];
  float local_180 [9];
  undefined1 auStack_15c [280];

  *(undefined4 *)(param_1 + 0x38) = DAT_0044ce34;
  iVar5 = FUN_00313ce0(0x1c4);
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = FUN_002e77e8();
  }
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  FUN_002e76b8(uVar6,param_1 + 0x38,0x100,0x100,0x100);
  *(undefined4 *)(param_1 + 0x40) = 2;
  uVar2 = DAT_0044ce44;
  uVar1 = DAT_0044ce40;
  uVar6 = DAT_0044ce3c;
  iVar5 = 0;
  uVar10 = VectorSignedToFloat(param_3 << 4,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 0x48) = DAT_0044ce38;
  do {
    FUN_002df6ac(uVar2,*(undefined4 *)(param_1 + 0x34),param_2,param_3,param_4,param_5,param_3 << 4,
                 0x10,auStack_15c,0);
    iVar7 = (**(code **)(*(int *)*DAT_0044ce48 + 8))((int *)*DAT_0044ce48,0x1b8);
    uVar10 = 0;
    if (iVar7 != 0) {
      uVar10 = FUN_00348f34(iVar7,auStack_15c);
    }
    iVar9 = param_1 + iVar5 * 4;
    *(undefined4 *)(iVar9 + 8) = uVar10;
    iVar7 = (**(code **)(*(int *)*DAT_0044ce4c + 8))((int *)*DAT_0044ce4c,0x54);
    uVar10 = 0;
    if (iVar7 != 0) {
      uVar10 = FUN_002ffa20();
    }
    *(undefined4 *)(param_1 + iVar5 * 4) = uVar10;
    FUN_002ccf04(*(undefined4 *)(param_1 + 0x34),uVar10,0);
    FUN_00348a64(*(undefined4 *)(iVar9 + 8),0,*(undefined4 *)(param_1 + iVar5 * 4),uVar1,uVar1,uVar6
                 ,uVar6);
    uVar4 = DAT_0044ce60;
    uVar10 = DAT_0044ce5c;
    iVar7 = DAT_0044ce58;
    puVar3 = DAT_0044ce54;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  local_180[0] = *DAT_0044ce50;
  local_180[1] = DAT_0044ce50[1];
  local_180[2] = DAT_0044ce50[2];
  local_180[3] = DAT_0044ce50[3];
  local_180[4] = DAT_0044ce50[4];
  local_180[5] = DAT_0044ce50[5];
  local_180[6] = DAT_0044ce50[6];
  local_180[7] = DAT_0044ce50[7];
  local_180[8] = DAT_0044ce50[8];
  local_1a4[0] = DAT_0044ce50[9];
  local_1a4[1] = DAT_0044ce50[10];
  local_1a4[2] = DAT_0044ce50[0xb];
  local_1a4[3] = DAT_0044ce50[0xc];
  local_1a4[4] = DAT_0044ce50[0xd];
  local_1a4[5] = DAT_0044ce50[0xe];
  local_1a4[6] = DAT_0044ce50[0xf];
  local_1a4[7] = DAT_0044ce50[0x10];
  local_1a4[8] = DAT_0044ce50[0x11];
  iVar5 = 0;
  do {
    if (((*puVar3 & 1) == 0) && (iVar9 = FUN_003679b4(DAT_0044ce54), iVar9 != 0)) {
      FUN_0036788c(DAT_0044ce64);
    }
    iVar9 = BoardModelFactory_0034897c
                      (*(undefined4 *)(iVar7 + 0x47c),*(undefined4 *)(param_1 + 8),0);
    iVar8 = param_1 + iVar5 * 4;
    *(int *)(iVar8 + 0x10) = iVar9;
    fVar11 = local_180[iVar5];
    fVar13 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = local_1a4[iVar5];
    *(undefined4 *)(iVar9 + 0x44) = uVar10;
    *(float *)(iVar9 + 0x40) = fVar12 + fVar14;
    *(float *)(iVar9 + 0x3c) = fVar11 + fVar13;
    if (iVar5 == 8) {
      iVar9 = *(int *)(param_1 + 0x30);
      *(undefined4 *)(iVar9 + 0xf0) = uVar2;
      *(undefined4 *)(iVar9 + 0xf4) = uVar2;
      *(undefined4 *)(iVar9 + 0xf8) = uVar2;
      *(undefined4 *)(iVar9 + 0xfc) = uVar2;
    }
    else {
      iVar9 = *(int *)(iVar8 + 0x10);
      *(undefined4 *)(iVar9 + 0xf0) = uVar4;
      *(undefined4 *)(iVar9 + 0xf4) = uVar4;
      *(undefined4 *)(iVar9 + 0xf8) = uVar4;
      *(undefined4 *)(iVar9 + 0xfc) = uVar2;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 9);
  return param_1;
}

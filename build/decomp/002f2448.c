// OoT3D decomp @ 002f2448  name=FUN_002f2448  size=1660

undefined4 * FUN_002f2448(undefined4 *param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  short sVar14;
  float *pfVar15;
  undefined4 *puVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  ushort *puVar20;
  float fVar21;
  float fVar22;
  float local_388;
  float local_384 [4];
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  float local_364 [4];
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 local_344 [4];
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  int local_318;
  ushort *local_314;
  int local_310;
  undefined4 local_20c;
  undefined4 local_208;
  float local_204 [6];
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined1 auStack_1c4 [96];
  float local_164 [5];
  float local_150;
  float local_14c;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined1 auStack_124 [96];
  undefined4 local_c4 [40];
  
  pfVar9 = &local_388;
  pfVar15 = &local_388;
  FUN_00343280(local_c4,0xa0);
  FUN_00343280(auStack_124,0x60);
  local_164[0] = *DAT_002f2860;
  local_164[1] = DAT_002f2860[1];
  local_164[2] = DAT_002f2860[2];
  local_164[3] = DAT_002f2860[3];
  local_164[4] = DAT_002f2860[4];
  local_150 = DAT_002f2860[5];
  local_14c = DAT_002f2860[6];
  local_148 = DAT_002f2860[7];
  fStack_144 = DAT_002f2860[8];
  local_140 = DAT_002f2860[9];
  fStack_13c = DAT_002f2860[10];
  fStack_138 = DAT_002f2860[0xb];
  fStack_134 = DAT_002f2860[0xc];
  fStack_130 = DAT_002f2860[0xd];
  fStack_12c = DAT_002f2860[0xe];
  fStack_128 = DAT_002f2860[0xf];
  FUN_00343280(auStack_1c4,0x60);
  fVar6 = DAT_002f2880;
  fVar5 = DAT_002f287c;
  fVar3 = DAT_002f2874;
  fVar22 = DAT_002f2870;
  fVar21 = DAT_002f286c;
  uVar11 = DAT_002f2868;
  local_204[0] = *DAT_002f2864;
  local_204[1] = DAT_002f2864[1];
  local_204[2] = DAT_002f2864[2];
  local_204[3] = DAT_002f2864[3];
  local_204[4] = DAT_002f2864[4];
  local_204[5] = DAT_002f2864[5];
  local_1ec = DAT_002f2864[6];
  local_1e8 = DAT_002f2864[7];
  local_1e4 = DAT_002f2864[8];
  local_1e0 = DAT_002f2864[9];
  local_1dc = DAT_002f2864[10];
  local_1d8 = DAT_002f2864[0xb];
  local_1d4 = DAT_002f2864[0xc];
  local_1d0 = DAT_002f2864[0xd];
  local_1cc = DAT_002f2864[0xe];
  local_1c8 = DAT_002f2864[0xf];
  param_1[4] = 0;
  param_1[8] = param_3;
  param_1[9] = param_2;
  param_1[5] = 0;
  param_1[0xd] = uVar11;
  fVar7 = DAT_002f2884;
  fVar4 = DAT_002f2878;
  if (0x14 < param_3) {
    param_3 = 0x14;
  }
  param_1[8] = param_3;
  puVar16 = DAT_002f28a0;
  puVar12 = DAT_002f289c;
  uVar8 = DAT_002f2898;
  uVar11 = DAT_002f2894;
  switch(param_2) {
  case 0:
    param_1[3] = 8;
    break;
  case 1:
    param_1[3] = 4;
    iVar10 = 2;
    puVar12 = &local_20c;
    do {
      iVar10 = iVar10 + -1;
      puVar12[2] = (float)puVar12[2] + fVar3;
      puVar12[4] = (float)puVar12[4] + fVar3;
      puVar12 = puVar12 + 4;
    } while (iVar10 != 0);
    local_1e4 = DAT_002f2888;
    local_1e0 = fVar22;
    local_1dc = fVar21;
    local_1d8 = fVar22;
    local_1d4 = DAT_002f2888;
    local_1d0 = fVar6;
    local_1cc = fVar21;
    local_1c8 = fVar6;
    break;
  case 2:
    if (0 < param_3) {
      pfVar9 = local_164;
      pfVar15 = local_204;
      do {
        *pfVar9 = fVar4;
        pfVar9[1] = fVar4;
        *pfVar15 = fVar22;
        pfVar15[1] = fVar5;
        param_3 = param_3 + -1;
        pfVar9 = pfVar9 + 2;
        pfVar15 = pfVar15 + 2;
      } while (param_3 != 0);
    }
    goto LAB_002f25c8;
  case 3:
    if (0 < param_3) {
      pfVar9 = local_164;
      pfVar15 = local_204;
      do {
        *pfVar9 = fVar6;
        pfVar9[1] = fVar6;
        *pfVar15 = fVar3;
        pfVar15[1] = fVar7;
        param_3 = param_3 + -1;
        pfVar9 = pfVar9 + 2;
        pfVar15 = pfVar15 + 2;
      } while (param_3 != 0);
    }
    goto LAB_002f25c8;
  case 4:
    if (0 < param_3) {
      pfVar9 = local_164;
      pfVar15 = local_204;
      do {
        *pfVar9 = fVar4;
        pfVar9[1] = fVar4;
        *pfVar15 = fVar4;
        pfVar15[1] = fVar5;
        param_3 = param_3 + -1;
        pfVar9 = pfVar9 + 2;
        pfVar15 = pfVar15 + 2;
      } while (param_3 != 0);
    }
    goto LAB_002f25c8;
  case 5:
    if (0 < param_3) {
      pfVar9 = local_164;
      pfVar15 = local_204;
      do {
        *pfVar9 = fVar6;
        pfVar9[1] = fVar6;
        *pfVar15 = fVar7;
        pfVar15[1] = fVar7;
        param_3 = param_3 + -1;
        pfVar9 = pfVar9 + 2;
        pfVar15 = pfVar15 + 2;
      } while (param_3 != 0);
    }
LAB_002f25c8:
    param_1[3] = param_1[8];
    break;
  case 6:
    local_164[0] = DAT_002f288c;
    local_164[1] = DAT_002f288c;
    local_148 = DAT_002f2890;
    local_14c = DAT_002f2890;
    local_150 = DAT_002f2890;
    local_164[4] = DAT_002f2890;
    local_164[3] = DAT_002f2890;
    local_164[2] = DAT_002f2890;
    local_204[2] = fVar22;
    local_204[3] = fVar21;
    local_204[4] = fVar6;
    local_204[5] = fVar21;
    local_1ec = fVar3;
    local_1e8 = fVar21;
    param_1[3] = 4;
    param_1[6] = uVar11;
    param_1[7] = uVar8;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    break;
  case 7:
    param_1[3] = 4;
    local_344[0] = *puVar12;
    local_344[1] = puVar12[1];
    local_344[2] = puVar12[2];
    local_344[3] = puVar12[3];
    uStack_334 = puVar12[4];
    uStack_330 = puVar12[5];
    uStack_32c = puVar12[6];
    uStack_328 = puVar12[7];
    local_364[0] = (float)puVar12[8];
    local_364[1] = (float)puVar12[9];
    local_364[2] = (float)puVar12[10];
    local_364[3] = (float)puVar12[0xb];
    uStack_354 = puVar12[0xc];
    uStack_350 = puVar12[0xd];
    uStack_34c = puVar12[0xe];
    uStack_348 = puVar12[0xf];
    local_384[0] = (float)puVar12[0x10];
    local_384[1] = (float)puVar12[0x11];
    local_384[2] = (float)puVar12[0x12];
    local_384[3] = (float)puVar12[0x13];
    uStack_374 = puVar12[0x14];
    uStack_370 = puVar12[0x15];
    uStack_36c = puVar12[0x16];
    uStack_368 = puVar12[0x17];
    iVar10 = param_1[3] * 2;
    if (0 < iVar10) {
      puVar12 = local_344;
      puVar16 = local_c4;
      pfVar18 = local_364;
      pfVar19 = local_164;
      pfVar15 = local_204;
      do {
        pfVar9 = pfVar9 + 1;
        fVar22 = *pfVar9;
        fVar21 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        *puVar16 = *puVar12;
        *pfVar19 = fVar21;
        iVar10 = iVar10 + -1;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
        pfVar19 = pfVar19 + 1;
        *pfVar15 = fVar22;
        pfVar15 = pfVar15 + 1;
      } while (iVar10 != 0);
    }
    break;
  case 8:
    param_1[3] = 4;
    local_344[0] = *puVar16;
    local_344[1] = puVar16[1];
    local_344[2] = puVar16[2];
    local_344[3] = puVar16[3];
    uStack_334 = puVar16[4];
    uStack_330 = puVar16[5];
    uStack_32c = puVar16[6];
    uStack_328 = puVar16[7];
    local_364[0] = (float)puVar16[8];
    local_364[1] = (float)puVar16[9];
    local_364[2] = (float)puVar16[10];
    local_364[3] = (float)puVar16[0xb];
    uStack_354 = puVar16[0xc];
    uStack_350 = puVar16[0xd];
    uStack_34c = puVar16[0xe];
    uStack_348 = puVar16[0xf];
    local_384[0] = (float)puVar16[0x10];
    local_384[1] = (float)puVar16[0x11];
    local_384[2] = (float)puVar16[0x12];
    local_384[3] = (float)puVar16[0x13];
    uStack_374 = puVar16[0x14];
    uStack_370 = puVar16[0x15];
    uStack_36c = puVar16[0x16];
    uStack_368 = puVar16[0x17];
    iVar10 = param_1[3] * 2;
    if (0 < iVar10) {
      puVar12 = local_344;
      puVar16 = local_c4;
      pfVar18 = local_364;
      pfVar19 = local_164;
      pfVar9 = local_204;
      do {
        pfVar15 = pfVar15 + 1;
        fVar22 = *pfVar15;
        fVar21 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        *puVar16 = *puVar12;
        *pfVar19 = fVar21;
        iVar10 = iVar10 + -1;
        puVar12 = puVar12 + 1;
        puVar16 = puVar16 + 1;
        pfVar19 = pfVar19 + 1;
        *pfVar9 = fVar22;
        pfVar9 = pfVar9 + 1;
      } while (iVar10 != 0);
    }
  }
  iVar10 = FUN_00313ce0(0x20,param_1);
  uVar11 = 0;
  if (iVar10 != 0) {
    uVar11 = FUN_002fc694(DAT_002f28a4,DAT_002f28a4,iVar10,param_1[3]);
  }
  param_1[2] = uVar11;
  local_388 = 0.0;
  FUN_002fc534(uVar11,local_c4,local_164,param_1[3]);
  local_388 = 0.0;
  FUN_002fc40c(param_1[2],local_204,local_164,param_1[3]);
  puVar12 = (undefined4 *)FUN_0033de14(param_1[3] << 2);
  uVar11 = DAT_002f2b30;
  if (0 < (int)param_1[3]) {
    puVar16 = puVar12 + -1;
    if ((param_1[3] & 1) != 0) {
      *puVar12 = DAT_002f2b30;
      puVar16 = puVar12;
    }
    for (iVar10 = (int)param_1[3] >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar16[1] = uVar11;
      puVar16 = puVar16 + 2;
      *puVar16 = uVar11;
    }
  }
  FUN_002fcdec(param_1[2],puVar12,param_1[3],0);
  puVar13 = (ushort *)FUN_0033de14(param_1[3] * 0xc);
  uVar11 = DAT_002f2b34;
  iVar10 = param_1[3];
  if (0 < iVar10) {
    sVar14 = 0;
    puVar20 = puVar13;
    do {
      *puVar20 = (ushort)uVar11 & sVar14 << 2;
      uVar1 = sVar14 * 4 + 2;
      uVar2 = sVar14 * 4 + 1;
      puVar20[1] = uVar1;
      puVar20[2] = uVar2;
      puVar20[3] = uVar2;
      puVar20[4] = uVar1;
      puVar20[5] = sVar14 * 4 + 3;
      iVar10 = iVar10 + -1;
      puVar20 = puVar20 + 6;
      sVar14 = sVar14 + 1;
    } while (iVar10 != 0);
  }
  iVar10 = 0;
  local_20c = *DAT_002f2b38;
  local_208 = DAT_002f2b38[1];
  if (0 < (int)param_1[3]) {
    do {
      FUN_002f9430(param_1[2],&local_20c,1,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)param_1[3]);
  }
  FUN_00371738(&local_324,DAT_002f2b3c,0x118);
  local_324 = FUN_002fc3fc(param_1[2],0);
  local_320 = FUN_002fc3f0(param_1[2],0);
  local_31c = FUN_002fc3e4(param_1[2],0);
  local_318 = param_1[3] << 2;
  local_310 = param_1[3] * 6;
  local_314 = puVar13;
  iVar10 = (**(code **)(*(int *)*DAT_002f2b40 + 8))((int *)*DAT_002f2b40,0x1b8);
  uVar11 = 0;
  if (iVar10 != 0) {
    uVar11 = FUN_00348f34(iVar10,&local_324);
  }
  *param_1 = uVar11;
  uVar11 = FUN_002e11d0(0xd);
  local_388 = DAT_002f2b48;
  local_384[0] = (float)DAT_002f2b44;
  local_384[1] = (float)DAT_002f2b44;
  FUN_00348a64(*param_1,0,uVar11,DAT_002f2b48);
  if (((*DAT_002f2b4c & 1) == 0) && (iVar10 = FUN_003679b4(DAT_002f2b4c), iVar10 != 0)) {
    FUN_0036788c(DAT_002f2b50);
  }
  iVar10 = FUN_0034897c(*(undefined4 *)(DAT_002f2b5c + 0x47c),*param_1,0);
  param_1[1] = iVar10;
  uVar17 = *(uint *)(iVar10 + 0x178);
  *(uint *)(iVar10 + 0x178) = uVar17 | 0x10;
  *(uint *)(param_1[1] + 0x178) = uVar17 | 0x12;
  FUN_0033ddd4(puVar13);
  FUN_0033ddd4(puVar12);
  return param_1;
}


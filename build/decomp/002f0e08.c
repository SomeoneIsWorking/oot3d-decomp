// OoT3D decomp @ 002f0e08  name=FUN_002f0e08  size=1064

void FUN_002f0e08(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 auStack_15c [48];
  float local_12c [16];
  float local_ec [16];
  float local_ac [16];
  float local_6c [16];
  undefined4 local_2c;
  undefined4 uStack_28;

  iVar14 = 0;
  local_2c = 0;
  uStack_28 = 0;
  do {
    FUN_002f9430(param_1[2],&local_2c,1,iVar14);
    uVar4 = DAT_002f1218;
    uVar9 = DAT_002f1214;
    iVar3 = DAT_002f1210;
    iVar2 = DAT_002f120c;
    iVar1 = DAT_002f1208;
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0x10);
  iVar14 = 0;
  iVar15 = DAT_002f120c + -0x20;
  do {
    if ((*(uint *)(iVar1 + 0xf50) &
        *(uint *)(iVar3 + (uint)*(ushort *)(iVar15 + (uint)*(ushort *)(iVar2 + iVar14 * 2) * 2) * 4)
        ) == 0) {
      local_2c = uVar4;
    }
    else {
      local_2c = uVar9;
    }
    FUN_002f9430(param_1[2],&local_2c,1,iVar14);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0x10);
  local_6c[0] = *DAT_002f121c;
  local_6c[1] = DAT_002f121c[1];
  local_6c[2] = DAT_002f121c[2];
  local_6c[3] = DAT_002f121c[3];
  local_6c[4] = DAT_002f121c[4];
  local_6c[5] = DAT_002f121c[5];
  local_6c[6] = DAT_002f121c[6];
  local_6c[7] = DAT_002f121c[7];
  local_6c[8] = DAT_002f121c[8];
  local_6c[9] = DAT_002f121c[9];
  local_6c[10] = DAT_002f121c[10];
  local_6c[0xb] = DAT_002f121c[0xb];
  local_6c[0xc] = DAT_002f121c[0xc];
  local_6c[0xd] = DAT_002f121c[0xd];
  local_6c[0xe] = DAT_002f121c[0xe];
  local_6c[0xf] = DAT_002f121c[0xf];
  local_ac[0] = *DAT_002f1220;
  local_ac[1] = DAT_002f1220[1];
  local_ac[2] = DAT_002f1220[2];
  local_ac[3] = DAT_002f1220[3];
  local_ac[4] = DAT_002f1220[4];
  local_ac[5] = DAT_002f1220[5];
  local_ac[6] = DAT_002f1220[6];
  local_ac[7] = DAT_002f1220[7];
  local_ac[8] = DAT_002f1220[8];
  local_ac[9] = DAT_002f1220[9];
  local_ac[10] = DAT_002f1220[10];
  local_ac[0xb] = DAT_002f1220[0xb];
  local_ac[0xc] = DAT_002f1220[0xc];
  local_ac[0xd] = DAT_002f1220[0xd];
  local_ac[0xe] = DAT_002f1220[0xe];
  local_ac[0xf] = DAT_002f1220[0xf];
  local_ec[0] = *DAT_002f1224;
  local_ec[1] = DAT_002f1224[1];
  local_ec[2] = DAT_002f1224[2];
  local_ec[3] = DAT_002f1224[3];
  local_ec[4] = DAT_002f1224[4];
  local_ec[5] = DAT_002f1224[5];
  local_ec[6] = DAT_002f1224[6];
  local_ec[7] = DAT_002f1224[7];
  local_ec[8] = DAT_002f1224[8];
  local_ec[9] = DAT_002f1224[9];
  local_ec[10] = DAT_002f1224[10];
  local_ec[0xb] = DAT_002f1224[0xb];
  local_ec[0xc] = DAT_002f1224[0xc];
  local_ec[0xd] = DAT_002f1224[0xd];
  local_ec[0xe] = DAT_002f1224[0xe];
  local_ec[0xf] = DAT_002f1224[0xf];
  local_12c[0] = *DAT_002f1228;
  local_12c[1] = DAT_002f1228[1];
  local_12c[2] = DAT_002f1228[2];
  local_12c[3] = DAT_002f1228[3];
  local_12c[4] = DAT_002f1228[4];
  local_12c[5] = DAT_002f1228[5];
  local_12c[6] = DAT_002f1228[6];
  local_12c[7] = DAT_002f1228[7];
  local_12c[8] = DAT_002f1228[8];
  local_12c[9] = DAT_002f1228[9];
  local_12c[10] = DAT_002f1228[10];
  local_12c[0xb] = DAT_002f1228[0xb];
  local_12c[0xc] = DAT_002f1228[0xc];
  local_12c[0xd] = DAT_002f1228[0xd];
  local_12c[0xe] = DAT_002f1228[0xe];
  local_12c[0xf] = DAT_002f1228[0xf];
  pfVar8 = (float *)FUN_002fc3fc(param_1[2],0);
  fVar6 = DAT_002f1230;
  fVar5 = DAT_002f122c;
  if (*(char *)(iVar1 + 0xe) == '\x01') {
    iVar14 = 0;
    do {
      if (param_1[3] == 0) {
        fVar18 = local_6c[iVar14];
        fVar17 = (fVar5 - fVar18) * fVar6;
        pfVar8[iVar14 * 0xc] = fVar18 + fVar17;
        (pfVar8 + iVar14 * 0xc)[6] = local_6c[iVar14] + fVar17;
      }
      else {
        fVar18 = local_ac[iVar14];
        fVar17 = (fVar5 - fVar18) * fVar6;
        pfVar8[iVar14 * 0xc] = fVar18 + fVar17;
        (pfVar8 + iVar14 * 0xc)[6] = local_ac[iVar14] + fVar17;
      }
      if (param_1[3] == 0) {
        fVar18 = local_6c[iVar14];
        fVar17 = (fVar5 - fVar18) * fVar6 - local_ec[iVar14];
        pfVar8[iVar14 * 0xc + 3] = fVar18 + fVar17;
        pfVar8[iVar14 * 0xc + 9] = local_6c[iVar14] + fVar17;
      }
      else {
        fVar18 = local_ac[iVar14];
        fVar17 = (fVar5 - fVar18) * fVar6 - local_12c[iVar14];
        pfVar8[iVar14 * 0xc + 3] = fVar18 + fVar17;
        pfVar8[iVar14 * 0xc + 9] = local_ac[iVar14] + fVar17;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x10);
  }
  else {
    pfVar11 = local_6c;
    pfVar13 = local_ec;
    pfVar12 = local_ac;
    pfVar16 = local_12c;
    iVar14 = 0x10;
    do {
      if (param_1[3] == 0) {
        *pfVar8 = *pfVar11;
        pfVar8[6] = *pfVar11;
        pfVar8[3] = *pfVar11 + *pfVar13;
        pfVar8[9] = *pfVar11 + *pfVar13;
      }
      else {
        *pfVar8 = *pfVar12;
        pfVar8[6] = *pfVar12;
        pfVar8[3] = *pfVar12 + *pfVar16;
        pfVar8[9] = *pfVar12 + *pfVar16;
      }
      iVar14 = iVar14 + -1;
      pfVar11 = pfVar11 + 1;
      pfVar8 = pfVar8 + 0xc;
      pfVar13 = pfVar13 + 1;
      pfVar12 = pfVar12 + 1;
      pfVar16 = pfVar16 + 1;
    } while (iVar14 != 0);
  }
  FUN_002f9a1c(param_1[2]);
  uVar9 = *(undefined4 *)(param_1[2] + 0x10);
  uVar10 = FUN_002f9a0c(param_1[2]);
  FUN_0036759c(*param_1,uVar10,uVar9);
  uVar9 = FUN_002fc3f0(param_1[2],0);
  uVar10 = FUN_002f9a00(param_1[2]);
  FUN_00317d1c(*param_1,uVar10,uVar9);
  if (((*DAT_002f1234 & 1) == 0) &&
     (iVar14 = FUN_003679b4(DAT_002f1234), puVar7 = DAT_002f123c, uVar9 = DAT_002f1238, iVar14 != 0)
     ) {
    *DAT_002f123c = DAT_002f1238;
    puVar7[1] = uVar4;
    puVar7[2] = uVar4;
    puVar7[3] = uVar4;
    puVar7[4] = uVar4;
    puVar7[5] = uVar9;
    puVar7[6] = uVar4;
    puVar7[7] = uVar4;
    puVar7[8] = uVar4;
    puVar7[9] = uVar4;
    puVar7[10] = uVar9;
    puVar7[0xb] = uVar4;
  }
  FUN_00372224(auStack_15c,DAT_002f123c);
  local_168 = uVar4;
  local_164 = uVar4;
  local_160 = uVar4;
  (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],auStack_15c,auStack_15c,&local_168);
  return;
}

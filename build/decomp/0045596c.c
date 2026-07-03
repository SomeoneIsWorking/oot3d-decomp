// OoT3D decomp @ 0045596c  name=FUN_0045596c  size=972

void FUN_0045596c(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float *local_234;
  float *pfStack_230;
  undefined2 *local_224;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_116;
  undefined2 local_114;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  undefined2 local_106;
  float local_104 [16];
  float local_c4 [27];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_0046b0e4();
  local_2c = *DAT_00455d38;
  local_28 = DAT_00455d38[1];
  local_34 = 0;
  uStack_30 = 0;
  local_3c = DAT_00455d38[2];
  local_38 = DAT_00455d38[3];
  local_44 = DAT_00455d38[4];
  local_40 = DAT_00455d38[5];
  local_4c = DAT_00455d38[6];
  local_48 = DAT_00455d38[7];
  local_54 = DAT_00455d38[8];
  local_50 = DAT_00455d38[9];
  local_c4[0x1a] = (float)DAT_00455d38[10];
  local_58 = DAT_00455d38[0xb];
  local_c4[0x18] = 0.0;
  local_c4[0x19] = 0.0;
  iVar3 = 0;
  do {
    fVar8 = local_c4[iVar3 + 0x26];
    local_c4[iVar3 * 0xc] = fVar8;
    fVar9 = local_c4[iVar3 + 0x24];
    local_c4[iVar3 * 0xc + 1] = fVar9;
    local_c4[iVar3 * 0xc + 2] = DAT_00455d3c;
    fVar14 = local_c4[iVar3 + 0x1a];
    fVar10 = fVar14 * DAT_00455d40;
    local_104[iVar3 * 8] = fVar10;
    fVar11 = local_c4[iVar3 + 0x18];
    fVar12 = (DAT_00455d44 - fVar11) * DAT_00455d40;
    local_104[iVar3 * 8 + 1] = fVar12;
    fVar13 = local_c4[iVar3 + 0x22];
    local_c4[iVar3 * 0xc + 3] = fVar8 + fVar13;
    local_c4[iVar3 * 0xc + 4] = fVar9;
    local_c4[iVar3 * 0xc + 5] = DAT_00455d3c;
    fVar14 = (fVar14 + local_c4[iVar3 + 0x1e]) * DAT_00455d40;
    local_104[iVar3 * 8 + 2] = fVar14;
    local_104[iVar3 * 8 + 3] = fVar12;
    local_c4[iVar3 * 0xc + 6] = fVar8;
    fVar12 = local_c4[iVar3 + 0x20];
    iVar2 = iVar3 + 1;
    local_c4[iVar3 * 0xc + 7] = fVar9 + fVar12;
    local_c4[iVar3 * 0xc + 8] = DAT_00455d3c;
    local_104[iVar3 * 8 + 4] = fVar10;
    fVar10 = (DAT_00455d44 - (fVar11 + local_c4[iVar3 + 0x1c])) * DAT_00455d40;
    local_104[iVar3 * 8 + 5] = fVar10;
    local_c4[iVar3 * 0xc + 9] = fVar8 + fVar13;
    local_c4[iVar3 * 0xc + 10] = fVar9 + fVar12;
    local_c4[iVar3 * 0xc + 0xb] = DAT_00455d3c;
    local_104[iVar3 * 8 + 6] = fVar14;
    local_104[iVar3 * 8 + 7] = fVar10;
    iVar3 = iVar2;
  } while (iVar2 < 2);
  local_11c = 0;
  local_11a = 2;
  local_118 = 1;
  local_116 = 1;
  local_114 = 2;
  local_112 = 3;
  local_110 = 4;
  local_10e = 6;
  local_10c = 5;
  local_10a = 5;
  local_108 = 6;
  local_106 = 7;
  FUN_00371738(&local_234,DAT_00455d48,0x118);
  local_224 = &local_11c;
  local_234 = local_c4;
  pfStack_230 = local_104;
  iVar3 = (**(code **)(*(int *)*DAT_00455d4c + 8))((int *)*DAT_00455d4c,0x1b8);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_00348f34(iVar3,&local_234);
  }
  iVar3 = DAT_00455d50;
  *(undefined4 *)(DAT_00455d50 + 8) = uVar4;
  uVar4 = FUN_002e11d0(0);
  FUN_00348a64(*(undefined4 *)(iVar3 + 8),0,uVar4,DAT_00455d58,DAT_00455d58,DAT_00455d54,
               DAT_00455d54);
  puVar1 = DAT_00455d5c;
  if (((*DAT_00455d5c & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00455d5c), iVar2 != 0)) {
    FUN_0036788c(DAT_00455d60);
  }
  iVar2 = DAT_00455d6c;
  iVar5 = FUN_0034897c(*(undefined4 *)(DAT_00455d6c + 0x47c),*(undefined4 *)(iVar3 + 8),0);
  *(int *)(iVar3 + 0x10) = iVar5;
  *(uint *)(iVar5 + 0x178) = *(uint *)(iVar5 + 0x178) | 2;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 1;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  FUN_0046ac98();
  FUN_0046b534();
  FUN_004670e4();
  FUN_004673c0();
  FUN_0046ac10();
  FUN_00467ce0();
  FUN_00467684();
  FUN_0046837c();
  FUN_00467fa8();
  uVar4 = extraout_r1;
  if (((*puVar1 & 1) == 0) &&
     (uVar15 = FUN_003679b4(DAT_00455d5c), uVar4 = (int)((ulonglong)uVar15 >> 0x20),
     (int)uVar15 != 0)) {
    FUN_0036788c(iVar2 + -0x2000);
    uVar4 = DAT_00455d68;
  }
  uVar7 = *(undefined4 *)(DAT_00455d60 + 0x174);
  if (((*puVar1 & 1) == 0) &&
     (uVar15 = FUN_003679b4(DAT_00455d5c,uVar4), uVar4 = (int)((ulonglong)uVar15 >> 0x20),
     (int)uVar15 != 0)) {
    FUN_0036788c(DAT_00455d60);
    uVar4 = DAT_00455d68;
  }
  puVar6 = *(undefined4 **)(iVar2 + 0x47c);
  *puVar6 = uVar7;
  FUN_0046ac60(puVar6,uVar4);
  *(undefined4 *)(iVar3 + 0x24) = 1;
  return;
}


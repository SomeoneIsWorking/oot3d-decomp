// OoT3D decomp @ 00467fa8  name=FUN_00467fa8  size=664

void FUN_00467fa8(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *local_468;
  float *local_464;
  ushort *local_458;
  ushort local_350 [42];
  float local_2fc [147];
  float local_b0 [7];
  float local_94 [7];
  float local_78 [7];
  float local_5c [7];
  float local_40 [7];
  
  local_40[0] = *DAT_00468240;
  local_40[1] = DAT_00468240[1];
  local_40[2] = DAT_00468240[2];
  local_40[3] = DAT_00468240[3];
  local_40[4] = DAT_00468240[4];
  local_40[5] = DAT_00468240[5];
  local_40[6] = DAT_00468240[6];
  local_5c[0] = DAT_00468240[7];
  local_5c[1] = DAT_00468240[8];
  local_5c[2] = DAT_00468240[9];
  local_5c[3] = DAT_00468240[10];
  local_5c[4] = DAT_00468240[0xb];
  local_5c[5] = DAT_00468240[0xc];
  local_5c[6] = DAT_00468240[0xd];
  local_78[0] = DAT_00468240[0xe];
  local_78[1] = DAT_00468240[0xf];
  local_78[2] = DAT_00468240[0x10];
  local_78[3] = DAT_00468240[0x11];
  local_78[4] = DAT_00468240[0x12];
  local_78[5] = DAT_00468240[0x13];
  local_78[6] = DAT_00468240[0x14];
  local_94[0] = DAT_00468240[0x15];
  local_94[1] = DAT_00468240[0x16];
  local_94[2] = DAT_00468240[0x17];
  local_94[3] = DAT_00468240[0x18];
  local_94[4] = DAT_00468240[0x19];
  local_94[5] = DAT_00468240[0x1a];
  local_94[6] = DAT_00468240[0x1b];
  local_b0[0] = DAT_00468240[0x1c];
  local_b0[1] = DAT_00468240[0x1d];
  local_b0[2] = DAT_00468240[0x1e];
  local_b0[3] = DAT_00468240[0x1f];
  local_b0[4] = DAT_00468240[0x20];
  local_b0[5] = DAT_00468240[0x21];
  local_b0[6] = DAT_00468240[0x22];
  local_2fc[0x8c] = DAT_00468240[0x23];
  local_2fc[0x8d] = DAT_00468240[0x24];
  local_2fc[0x8e] = DAT_00468240[0x25];
  local_2fc[0x8f] = DAT_00468240[0x26];
  local_2fc[0x90] = DAT_00468240[0x27];
  local_2fc[0x91] = DAT_00468240[0x28];
  local_2fc[0x92] = DAT_00468240[0x29];
  iVar6 = 0;
  do {
    fVar9 = local_40[iVar6];
    (local_2fc + 0x38)[iVar6 * 0xc] = fVar9;
    fVar10 = local_5c[iVar6];
    local_2fc[iVar6 * 0xc + 0x39] = fVar10;
    local_2fc[iVar6 * 0xc + 0x3a] = DAT_00468244;
    fVar14 = local_b0[iVar6];
    fVar11 = fVar14 * DAT_00468248;
    local_2fc[iVar6 * 8] = fVar11;
    fVar12 = local_2fc[iVar6 + 0x8c];
    fVar15 = (DAT_0046824c - fVar12) * DAT_00468250;
    local_2fc[iVar6 * 8 + 1] = fVar15;
    iVar5 = iVar6 + 1;
    fVar13 = fVar9 + local_78[iVar6];
    fVar14 = (fVar14 + local_78[iVar6]) * DAT_00468248;
    local_2fc[iVar6 * 0xc + 0x3b] = fVar13;
    local_2fc[iVar6 * 0xc + 0x3c] = fVar10;
    local_2fc[iVar6 * 0xc + 0x3d] = DAT_00468244;
    local_2fc[iVar6 * 8 + 2] = fVar14;
    local_2fc[iVar6 * 8 + 3] = fVar15;
    local_2fc[iVar6 * 0xc + 0x3e] = fVar9;
    fVar9 = local_94[iVar6];
    fVar10 = fVar10 + fVar9;
    local_2fc[iVar6 * 0xc + 0x3f] = fVar10;
    local_2fc[iVar6 * 0xc + 0x40] = DAT_00468244;
    local_2fc[iVar6 * 8 + 4] = fVar11;
    fVar9 = (DAT_0046824c - (fVar12 + fVar9)) * DAT_00468250;
    local_2fc[iVar6 * 8 + 5] = fVar9;
    local_2fc[iVar6 * 0xc + 0x41] = fVar13;
    local_2fc[iVar6 * 0xc + 0x42] = fVar10;
    local_2fc[iVar6 * 0xc + 0x43] = DAT_00468244;
    local_2fc[iVar6 * 8 + 6] = fVar14;
    local_2fc[iVar6 * 8 + 7] = fVar9;
    iVar6 = iVar5;
  } while (iVar5 < 7);
  local_458 = local_350;
  sVar3 = 0;
  iVar6 = 7;
  puVar8 = local_458;
  do {
    *puVar8 = (ushort)DAT_00468254 & sVar3 << 2;
    uVar1 = sVar3 * 4 + 2;
    uVar7 = sVar3 * 4 + 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar7;
    puVar8[3] = uVar7;
    puVar8[4] = uVar1;
    puVar8[5] = sVar3 * 4 + 3;
    iVar6 = iVar6 + -1;
    puVar8 = puVar8 + 6;
    sVar3 = sVar3 + 1;
  } while (iVar6 != 0);
  FUN_00371738(&local_468,DAT_00468258,0x118);
  local_468 = local_2fc + 0x38;
  local_464 = local_2fc;
  iVar6 = (**(code **)(*(int *)*DAT_0046825c + 8))((int *)*DAT_0046825c,0x1b8);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = FUN_00348f34(iVar6,&local_468);
  }
  puVar2 = DAT_00468260;
  *DAT_00468260 = uVar4;
  uVar4 = FUN_002e11d0(0xf);
  FUN_00348a64(*puVar2,0,uVar4,DAT_00468268,DAT_00468268,DAT_00468264,DAT_00468264);
  if (((*DAT_0046826c & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0046826c), iVar6 != 0)) {
    FUN_0036788c(DAT_00468270);
  }
  uVar4 = FUN_0034897c(*(undefined4 *)(DAT_0046827c + 0x47c),*puVar2,0);
  puVar2[1] = uVar4;
  puVar2[5] = 0;
  return;
}


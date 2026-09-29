// OoT3D decomp @ 002eef74  name=FUN_002eef74  size=780

void FUN_002eef74(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a0 [12];
  float local_70 [12];
  float local_40;
  float local_3c;

  uVar7 = DAT_002ef2a4;
  fVar6 = DAT_002ef2a0;
  fVar5 = DAT_002ef29c;
  fVar14 = DAT_002ef298;
  iVar4 = DAT_002ef294;
  fVar13 = DAT_002ef290;
  fVar3 = DAT_002ef28c;
  fVar2 = DAT_002ef288;
  local_40 = 0.0;
  local_3c = 0.0;
  local_70[0] = *DAT_002ef280;
  local_70[1] = DAT_002ef280[1];
  local_70[2] = DAT_002ef280[2];
  local_70[3] = DAT_002ef280[3];
  local_70[4] = DAT_002ef280[4];
  local_70[5] = DAT_002ef280[5];
  local_70[6] = DAT_002ef280[6];
  local_70[7] = DAT_002ef280[7];
  local_70[8] = DAT_002ef280[8];
  local_70[9] = DAT_002ef280[9];
  local_70[10] = DAT_002ef280[10];
  local_70[0xb] = DAT_002ef280[0xb];
  local_a0[0] = *DAT_002ef284;
  local_a0[1] = DAT_002ef284[1];
  local_a0[2] = DAT_002ef284[2];
  local_a0[3] = DAT_002ef284[3];
  local_a0[4] = DAT_002ef284[4];
  local_a0[5] = DAT_002ef284[5];
  local_a0[6] = DAT_002ef284[6];
  local_a0[7] = DAT_002ef284[7];
  local_a0[8] = DAT_002ef284[8];
  local_a0[9] = DAT_002ef284[9];
  local_a0[10] = DAT_002ef284[10];
  local_a0[0xb] = DAT_002ef284[0xb];
  iVar11 = 0;
  do {
    fVar12 = local_a0[iVar11] + fVar2;
    local_a0[iVar11] = fVar12;
    iVar8 = *(int *)(param_1 + iVar11 * 4 + 0x18);
    if (iVar8 == 0) {
      local_40 = fVar3;
      FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_40,1,iVar11);
      FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_40,1,iVar11 + 0xc);
    }
    else if (iVar8 == 1) {
      if (*(int *)(param_1 + 0xc) == 0) {
        local_40 = fVar13;
        if (*(char *)(iVar4 + 0xe) == '\x01') {
          local_40 = (fVar14 - local_70[iVar11]) * fVar5 - fVar6;
        }
      }
      else {
        local_40 = fVar3;
      }
      FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_40,1,iVar11);
      local_40 = fVar3;
      FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_40,1,iVar11 + 0xc);
    }
    else if (iVar8 == 2) {
      local_40 = fVar13;
      if (*(char *)(iVar4 + 0xe) == '\x01') {
        if (*(int *)(param_1 + 0xc) == 0) {
          fVar12 = local_70[iVar11];
        }
        local_40 = (fVar14 - fVar12) * fVar5 - fVar6;
      }
      FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_40,1,iVar11);
      FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_40,1,iVar11 + 0xc);
      FUN_002f8b80(*(undefined4 *)(param_1 + 0x10),uVar7,*(undefined4 *)(param_1 + 8),1,iVar11 + 0xc
                  );
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0xc);
  iVar11 = FUN_002e70d4();
  if (iVar11 == 0) {
    if (*(uint *)(param_1 + 0x14) == 0) {
      fVar13 = *(float *)(param_1 + 0x10) + DAT_002ef2a8;
      *(float *)(param_1 + 0x10) = fVar13;
      if ((int)fVar13 < 0x3f800000) goto LAB_002ef1a0;
      uVar9 = 1;
    }
    else {
      fVar14 = *(float *)(param_1 + 0x10) - DAT_002ef2a8;
      *(float *)(param_1 + 0x10) = fVar14;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar14 == fVar13) << 0x1e |
                 (uint)(fVar13 <= fVar14) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) goto LAB_002ef1a0;
      uVar9 = *(uint *)(param_1 + 0x14) ^ 1;
    }
    *(uint *)(param_1 + 0x14) = uVar9;
  }
LAB_002ef1a0:
  iVar11 = *(int *)(param_1 + 0x48);
  if (iVar11 == 0xff) {
    local_40 = fVar3;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    pfVar10 = (float *)(DAT_002ef2b4 + iVar11 * 8);
    if (*(char *)(iVar4 + 0xe) == '\x01') {
      local_40 = (DAT_002ef2ac - *pfVar10) - fVar6;
    }
    else {
      local_40 = *pfVar10;
    }
    local_3c = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x4c),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_3c = (*(float *)(DAT_002ef2b4 + iVar11 * 8 + 4) - DAT_002ef2b0) + local_3c;
  }
  else {
    pfVar10 = (float *)(DAT_002ef2b8 + iVar11 * 8);
    if (*(char *)(iVar4 + 0xe) == '\x01') {
      local_40 = (DAT_002ef2ac - (*pfVar10 + fVar2)) - fVar6;
    }
    else {
      local_40 = *pfVar10 + fVar2;
    }
    local_3c = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x4c),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_3c = ((*(float *)(DAT_002ef2b8 + iVar11 * 8 + 4) + DAT_002ef2bc) - DAT_002ef2b0) +
               local_3c;
  }
  FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_40,1,0x18);
  return;
}

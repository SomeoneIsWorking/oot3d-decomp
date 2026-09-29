// OoT3D decomp @ 002b7770  name=FUN_002b7770  size=1260

void FUN_002b7770(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int param_8)

{
  char *pcVar1;
  float *pfVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint in_fpscr;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_144 [48];
  short local_114;
  short local_112;
  short local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  undefined1 auStack_f4 [12];
  float local_e8;
  float local_d8;
  float local_c8;
  undefined1 auStack_c4 [12];
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_98;
  undefined1 auStack_94 [12];
  float local_88;
  float local_78;
  float local_68;
  undefined1 auStack_64 [4];
  float local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;

  fVar13 = DAT_002b7b74;
  local_54 = 0;
  local_58 = 0x32;
  uVar9 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_2 + 0x58) < DAT_002b7b74) << 0x1f;
  uVar8 = uVar9 | (uint)(NAN(*(float *)(param_2 + 0x58)) || NAN(DAT_002b7b74)) << 0x1c;
  if (((((byte)(uVar9 >> 0x1f) == ((byte)(uVar8 >> 0x1c) & 1)) &&
       ((*(uint *)(DAT_002b7b78 + param_2) & 0x80) == 0)) &&
      ((iVar5 = *(char *)(param_2 + 0x1ac) + -0x15, iVar5 < 0 || ((5 < iVar5 || (iVar5 < 0)))))) &&
     ((*(uint *)(param_2 + 0x29b8) & 0x400000) == 0)) {
    if (((*(uint *)(DAT_002b7b7c + 8) & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_002b7b80), pfVar2 = DAT_002b7b88, fVar12 = DAT_002b7b84, iVar5 != 0
       )) {
      *DAT_002b7b88 = fVar13;
      pfVar2[1] = fVar12;
      pfVar2[2] = fVar13;
    }
    iVar5 = DAT_002b7b8c;
    iVar6 = *(int *)(DAT_002b7b8c + 4);
    fVar15 = *(float *)(DAT_002b7b90 + iVar6 * 4);
    fVar16 = *(float *)(DAT_002b7b94 + iVar6 * 4);
    fVar10 = *(float *)(DAT_002b7b98 + iVar6 * 4);
    fVar14 = *(float *)(param_2 + 0x1760);
    FUN_0036c174(auStack_94,param_4,param_5);
    FUN_00372224(auStack_c4,*(int *)(param_3 + 0x78) + param_7 * 0x34);
    puVar7 = (undefined4 *)(DAT_002b7b9c + *(int *)(iVar5 + 4) * 0xc);
    local_b8 = *puVar7;
    local_a8 = puVar7[1];
    local_98 = puVar7[2];
    FUN_0036c174(auStack_f4,auStack_94,auStack_c4);
    local_100 = *(undefined4 *)(DAT_002b7ba0 + *(int *)(iVar5 + 4) * 4);
    local_fc = fVar13;
    local_f8 = fVar13;
    FUN_00372070(auStack_f4,auStack_f4,&local_100);
    FUN_003735ac(auStack_64,auStack_f4,DAT_002b7b88);
    local_60 = local_60 + DAT_002b7ba4;
    local_50 = param_1 + 0xa98;
    fVar11 = (float)FUN_0036e81c(local_50,&local_54,&local_58,param_2,auStack_64);
    fVar12 = DAT_002b7ba8;
    fVar11 = fVar11 + (fVar10 - fVar14);
    if (local_d8 < fVar11) {
      fVar17 = local_c8 - local_68;
      fVar18 = (local_e8 - local_88) * (local_e8 - local_88);
      fVar10 = SQRT(fVar18 + (local_d8 - local_78) * (local_d8 - local_78) + fVar17 * fVar17);
      fVar10 = (fVar16 + fVar10 * fVar10) / (fVar10 * DAT_002b7ba8);
      fVar14 = fVar15 - fVar10 * fVar10;
      uVar9 = uVar8 & 0xfffffff | (uint)(fVar13 <= fVar14) << 0x1d;
      fVar10 = fVar13;
      if (SUB41(uVar9 >> 0x1d,0)) {
        fVar10 = SQRT(fVar14);
      }
      fVar10 = (float)FUN_003696ec(fVar10);
      fVar14 = SQRT(fVar18 + (fVar11 - local_78) * (fVar11 - local_78) + fVar17 * fVar17);
      fVar16 = (fVar16 + fVar14 * fVar14) / (fVar14 * fVar12);
      fVar15 = fVar15 - fVar16 * fVar16;
      uVar9 = uVar9 & 0xfffffff | (uint)(fVar13 <= fVar15) << 0x1d;
      fVar12 = fVar13;
      if (SUB41(uVar9 >> 0x1d,0)) {
        fVar12 = SQRT(fVar15);
      }
      fVar15 = (float)FUN_003696ec(fVar12);
      fVar12 = (float)FUN_003696ec(fVar14 - fVar16,fVar12);
      fVar12 = DAT_002b7bb0 - (fVar12 + (DAT_002b7bac - fVar15));
      FUN_003624c8(*(int *)(param_3 + 0x78) + param_7 * 0x34,&local_114,0);
      uVar3 = DAT_002b7bb8;
      iVar5 = (int)(short)(int)((fVar15 - fVar10) * DAT_002b7bb4);
      local_110 = (short)(int)(fVar12 * DAT_002b7bb4) - local_110;
      local_10c = fVar13;
      local_108 = fVar13;
      if (local_114 < 0) {
        local_114 = -local_114;
      }
      local_104 = DAT_002b7bb8;
      fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(uVar9 >> 0x15) & 3);
      if (local_112 < 0) {
        local_112 = -local_112;
      }
      if ((short)(local_114 + local_112) < 0) {
        local_110 = local_110 + -0x8000;
      }
      FUN_003625f8(fVar12 * DAT_002b7bbc,auStack_144,&local_10c);
      FUN_0036c174(param_5,param_5,auStack_144);
      fVar12 = DAT_002b7bc0;
      local_10c = fVar13;
      local_108 = fVar13;
      local_104 = uVar3;
      fVar10 = (float)VectorSignedToFloat((int)local_110,(byte)(uVar9 >> 0x15) & 3);
      FUN_003625f8(fVar10 * DAT_002b7bc0,auStack_144,&local_10c);
      iVar6 = *(int *)(param_3 + 0x78) + param_7 * 0x34;
      FUN_0036c174(iVar6,iVar6,auStack_144);
      local_10c = fVar13;
      local_108 = fVar13;
      local_104 = uVar3;
      fVar13 = (float)VectorSignedToFloat(iVar5 - local_110,(byte)(uVar9 >> 0x15) & 3);
      FUN_003625f8(fVar13 * fVar12,auStack_144,&local_10c);
      iVar5 = *(int *)(param_3 + 0x78) + param_8 * 0x34;
      FUN_0036c174(iVar5,iVar5,auStack_144);
    }
    pcVar1 = DAT_002b7b7c;
    if (local_d8 - *(float *)(DAT_002b7b7c + 0xc) < fVar11) {
      iVar5 = FUN_0035ea34(local_50,local_54,local_58);
      *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) | 0x4000000;
      if (((iVar5 - 2U < 2) && (iVar5 = FUN_0035d178(local_50,local_54,local_58), iVar5 == 0)) &&
         (-1 < *(char *)(DAT_002b7cac + param_2))) {
        param_2 = param_2 + (uint)(param_8 == 8);
        cVar4 = *(char *)(param_2 + 0x2480);
        if (cVar4 == '\0') {
          local_60 = fVar11;
          FUN_004c8994(param_1,auStack_64);
          cVar4 = *pcVar1;
        }
        else {
          cVar4 = cVar4 + -1;
        }
        *(char *)(param_2 + 0x2480) = cVar4;
        return;
      }
    }
    *(undefined1 *)(param_2 + (uint)(param_8 == 8) + 0x2480) = 0;
    return;
  }
  return;
}

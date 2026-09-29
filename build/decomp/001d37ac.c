// OoT3D decomp @ 001d37ac  name=FUN_001d37ac  size=1544

/* WARNING: Removing unreachable block (ram,0x001d3b80) */
/* WARNING: Removing unreachable block (ram,0x001d39bc) */
/* WARNING: Removing unreachable block (ram,0x001d39d8) */
/* WARNING: Removing unreachable block (ram,0x001d3b8c) */

void FUN_001d37ac(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e0 [48];
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;

  fVar5 = DAT_001d3ba4;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x4a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_001d3b9c;
  if (*(short *)(param_3 + 0x13) == -1) {
    iVar4 = (int)((ulonglong)
                  ((longlong)DAT_001d3bac * (longlong)((int)*(short *)(param_3 + 0x18) / 2)) >> 0x20
                 );
    iVar4 = (int)*(short *)(param_3 + 0x18) / 2 + (iVar4 - (iVar4 >> 0x1f)) * -3;
    local_28 = (float)VectorSignedToFloat(iVar4 % 2,(byte)(in_fpscr >> 0x15) & 3);
    local_28 = local_28 * DAT_001d3bb0;
    local_24 = (float)VectorSignedToFloat(iVar4 / 2,(byte)(in_fpscr >> 0x15) & 3);
    local_24 = local_24 * DAT_001d3bb4;
    local_38 = DAT_001d3ba0;
    local_34 = DAT_001d3ba0;
    local_30 = DAT_001d3ba0;
    local_2c = DAT_001d3ba0;
    local_44 = *param_3;
    local_40 = (float)param_3[1];
    local_3c = (float)param_3[2];
    local_50 = fVar6 * DAT_001d3bb8;
    fVar5 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x46),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * DAT_001d3ba4 * DAT_001d3bbc;
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_001d3ba8 <= fVar5) << 0x1d;
    for (fVar5 = ABS(fVar5); fVar6 = DAT_001d3ba8, DAT_001d3bc0 <= (int)fVar5;
        fVar5 = fVar5 - DAT_001d3bc4) {
    }
    for (; DAT_001d3bc0 <= (int)fVar6; fVar6 = fVar6 - DAT_001d3bc4) {
    }
    uVar8 = VectorFloatToUnsigned(DAT_001d3ba8,3);
    uVar9 = VectorFloatToUnsigned(fVar5,3);
    uVar10 = VectorFloatToUnsigned(fVar6,3);
    fVar13 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    pfVar2 = (float *)(DAT_001d3bc8 + (uVar8 & 0xff) * 0x10);
    fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    pfVar3 = (float *)(DAT_001d3bc8 + (uVar9 & 0xff) * 0x10);
    fVar12 = *pfVar2 + (DAT_001d3ba8 - fVar11) * pfVar2[2];
    fVar11 = pfVar2[1] + (DAT_001d3ba8 - fVar11) * pfVar2[3];
    pfVar2 = (float *)(DAT_001d3bc8 + (uVar10 & 0xff) * 0x10);
    local_60 = *pfVar3 + (fVar5 - fVar13) * pfVar3[2];
    local_70 = pfVar3[1] + (fVar5 - fVar13) * pfVar3[3];
    fVar5 = *pfVar2 + (fVar6 - fVar14) * pfVar2[2];
    fVar6 = pfVar2[1] + (fVar6 - fVar14) * pfVar2[3];
    if (!SUB41(uVar1 >> 0x1d,0)) {
      local_60 = -local_60;
    }
    local_58 = fVar11 * local_70;
    local_5c = fVar12 * local_70;
    local_80 = fVar6 * local_70;
    local_70 = fVar5 * local_70;
    local_7c = fVar12 * fVar6 * local_60 - fVar11 * fVar5;
    local_68 = fVar11 * fVar5 * local_60 - fVar12 * fVar6;
    local_78 = fVar12 * fVar5 + fVar11 * fVar6 * local_60;
    local_6c = fVar11 * fVar6 + fVar12 * fVar5 * local_60;
    local_60 = -local_60;
    local_74 = 0;
    local_64 = 0;
    local_54 = 0;
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x11),(byte)(uVar1 >> 0x15) & 3);
    fVar5 = fVar5 * DAT_001d3ba4 * DAT_001d3bbc;
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_001d3ba8 <= fVar5) << 0x1d;
    for (fVar5 = ABS(fVar5); fVar6 = DAT_001d3ba8, DAT_001d3bc0 <= (int)fVar5;
        fVar5 = fVar5 - DAT_001d3bc4) {
    }
    for (; fVar11 = DAT_001d3ba8, DAT_001d3bc0 <= (int)fVar6; fVar6 = fVar6 - DAT_001d3bc4) {
    }
    for (; DAT_001d3bc0 <= (int)fVar11; fVar11 = fVar11 - DAT_001d3bc4) {
    }
    uVar8 = VectorFloatToUnsigned(fVar5,3);
    uVar9 = VectorFloatToUnsigned(fVar6,3);
    uVar10 = VectorFloatToUnsigned(fVar11,3);
    fVar14 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    pfVar2 = (float *)(DAT_001d3bc8 + (uVar8 & 0xff) * 0x10);
    fVar7 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    fVar13 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    pfVar3 = (float *)(DAT_001d3bc8 + (uVar9 & 0xff) * 0x10);
    fVar12 = pfVar2[1] + (fVar5 - fVar14) * pfVar2[3];
    fVar5 = *pfVar2 + (fVar5 - fVar14) * pfVar2[2];
    pfVar2 = (float *)(DAT_001d3bc8 + (uVar10 & 0xff) * 0x10);
    local_90 = *pfVar3 + (fVar6 - fVar13) * pfVar3[2];
    local_88 = pfVar3[1] + (fVar6 - fVar13) * pfVar3[3];
    fVar6 = *pfVar2 + (fVar11 - fVar7) * pfVar2[2];
    if (!SUB41(uVar1 >> 0x1d,0)) {
      fVar5 = -fVar5;
    }
    fVar11 = pfVar2[1] + (fVar11 - fVar7) * pfVar2[3];
    local_8c = fVar5 * local_88;
    local_b0 = fVar11 * local_88;
    local_a0 = fVar6 * local_88;
    local_88 = fVar12 * local_88;
    local_ac = fVar5 * fVar11 * local_90 - fVar12 * fVar6;
    local_98 = fVar12 * fVar6 * local_90 - fVar5 * fVar11;
    local_a8 = fVar5 * fVar6 + fVar12 * fVar11 * local_90;
    local_9c = fVar12 * fVar11 + fVar5 * fVar6 * local_90;
    local_90 = -local_90;
    local_a4 = 0;
    local_94 = 0;
    local_84 = 0;
    local_4c = local_50;
    local_48 = local_50;
    FUN_0036c174(auStack_e0,&local_80,&local_b0);
    iVar4 = FUN_00371f1c(*(undefined4 *)param_3[0x1a],&local_44,auStack_e0,&local_50,&local_38,
                         &local_28);
    if (iVar4 == 0) {
      FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + 4),&local_44,auStack_e0,&local_50,&local_38,
                   &local_28);
    }
    return;
  }
  local_5c = (float)*param_3;
  local_58 = (float)param_3[1];
  local_54 = param_3[2];
  local_48 = 0.0;
  local_4c = 0.0;
  local_50 = 1.0;
  local_40 = 0.0;
  local_3c = 1.0;
  local_38 = 0.0;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 1.0;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x46),
                                      (byte)(in_fpscr >> 0x15) & 3);
  local_44 = local_5c;
  local_34 = local_58;
  local_24 = (float)local_54;
  FUN_003735e8(fVar11 * DAT_001d3ba4,&local_50,1);
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x11),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00369014(fVar11 * fVar5,&local_50,1);
  local_50 = local_50 * fVar6;
  local_40 = local_40 * fVar6;
  local_30 = local_30 * fVar6;
  local_4c = local_4c * fVar6;
  local_3c = local_3c * fVar6;
  local_2c = local_2c * fVar6;
  local_48 = local_48 * fVar6;
  local_38 = local_38 * fVar6;
  local_28 = local_28 * fVar6;
  *(undefined1 *)(param_3[0x1b] + 0xac) = 1;
  FUN_003721e0(param_3[0x1b],&local_50);
  *(undefined1 *)(param_3[0x1b] + 0xad) = 1;
  FUN_00372170(param_3[0x1b],0);
  return;
}

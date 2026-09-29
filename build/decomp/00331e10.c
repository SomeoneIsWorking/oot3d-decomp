// OoT3D decomp @ 00331e10  name=FUN_00331e10  size=1104

undefined4
FUN_00331e10(float param_1,float param_2,int param_3,int param_4,undefined4 param_5,float *param_6,
            float *param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float extraout_s0;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float extraout_s1;
  float fVar15;
  float extraout_s2;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;

  local_58 = param_3 + 0x80;
  fVar8 = (float)FUN_00367ef0(*(undefined4 *)(param_3 + 0xd8));
  piVar3 = DAT_0033216c;
  local_64 = DAT_00332168;
  local_5c = DAT_00332168;
  local_60 = fVar8 + param_1;
  if (*(short *)(*DAT_0033216c + 0x2ec) != 0 && (param_8 & 1) != 0) {
    uVar9 = VectorSignedToFloat((int)*(short *)(*DAT_0033216c + 0x1a6),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)FUN_00367e88(uVar9,param_3 + 0x150,(int)*(short *)(param_3 + 0xea),
                                 (int)*(short *)(param_4 + 6));
    local_60 = local_60 - fVar10;
  }
  local_70 = *(float *)(param_3 + 0xdc);
  local_68 = *(float *)(param_3 + 0xe4);
  local_6c = *(float *)(param_3 + 0xe0) + fVar8;
  FUN_00372474(param_7,&local_70,param_5);
  fVar4 = DAT_00332174;
  fVar10 = DAT_00332170;
  local_78 = *param_7;
  fStack_74 = param_7[1];
  uVar7 = in_fpscr & 0xfffffff | (uint)(local_78 < param_2) << 0x1f |
          (uint)(local_78 == param_2) << 0x1e;
  uVar6 = uVar7 | (uint)(NAN(local_78) || NAN(param_2)) << 0x1c;
  bVar2 = (byte)(uVar7 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) {
    fVar8 = (float)FUN_00355804((*(float *)(param_3 + 0xe0) - *(float *)(param_3 + 0x14c)) / fVar8,
                                DAT_00332170);
    iVar5 = (int)*(short *)(*piVar3 + 0x1e2);
    fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1e0),(byte)(uVar6 >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
    local_78 = local_78 * fVar11 * fVar4 -
               local_78 * (local_78 / param_2) * (fVar12 * fVar4 - fVar14 * fVar4);
    local_78 = local_78 - local_78 * fVar8 * fVar8;
  }
  else {
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1e0),(byte)(uVar6 >> 0x15) & 3);
    local_78 = local_78 * fVar8 * DAT_00332174;
  }
  fVar8 = DAT_00332178;
  if ((param_8 & 0x80) != 0) {
    local_78 = local_78 * DAT_00332178;
    *(float *)(param_3 + 0x114) = fVar4;
    *(float *)(param_3 + 0x118) = fVar4;
  }
  FUN_0035579c(&local_78);
  fVar12 = DAT_00332184;
  uVar9 = DAT_0033217c;
  local_64 = local_64 + extraout_s0;
  local_60 = local_60 + extraout_s1;
  local_5c = local_5c + extraout_s2;
  fVar11 = *(float *)(param_3 + 0xe0);
  uVar7 = uVar6 & 0xfffffff | (uint)(*(float *)(param_3 + 0x14c) == fVar11) << 0x1e;
  if (((SUB41(uVar7 >> 0x1e,0)) || (*(uint *)(*(int *)(param_3 + 0xd8) + 0x70) < DAT_00332180)) ||
     ((*(uint *)(*(int *)(param_3 + 0xd8) + 0x1710) & 0x200000) != 0)) {
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1ea),(byte)(uVar7 >> 0x15) & 3);
    fVar10 = (float)FUN_00355780(fVar11,*param_6,fVar10 * fVar4,DAT_0033217c);
    *param_6 = fVar10;
    local_60 = local_60 - (*(float *)(param_3 + 0xe0) - fVar10);
    FUN_00367df4(*(undefined4 *)(param_3 + 0x118),*(undefined4 *)(param_3 + 0x114),uVar9,&local_64,
                 param_3 + 300);
  }
  else {
    fVar11 = fVar11 - *param_6;
    if ((param_8 & 0x80) == 0) {
      fVar10 = (float)FUN_00367e60(local_58,param_3 + 0x8c);
      FUN_003696ec(fVar11,fVar10);
      fVar12 = (float)FUN_003555d8(*(float *)(param_3 + 0x144) * DAT_00332188);
      fVar12 = fVar12 * fVar10;
      uVar1 = uVar7 & 0xfffffff | (uint)(fVar11 < fVar12) << 0x1f | (uint)(fVar11 == fVar12) << 0x1e
      ;
      uVar6 = uVar1 | (uint)(NAN(fVar11) || NAN(fVar12)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) {
        uVar6 = uVar7 & 0xfffffff | (uint)(-fVar12 <= fVar11) << 0x1d;
        if (!SUB41(uVar6 >> 0x1d,0)) {
          *param_6 = *param_6 + fVar11 + fVar12;
          fVar11 = -fVar12;
        }
      }
      else {
        *param_6 = *param_6 + (fVar11 - fVar12);
        fVar11 = fVar12;
      }
      local_60 = local_60 - fVar11;
    }
    else {
      uVar13 = FUN_00367e60(local_58,param_3 + 0x8c);
      fVar14 = (float)FUN_003696ec(fVar11,uVar13);
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1d4),(byte)(uVar7 >> 0x15) & 3
                                         );
      fVar15 = fVar15 * fVar12;
      uVar6 = uVar7 & 0xfffffff | (uint)(fVar14 <= fVar15) << 0x1d;
      if (SUB41(uVar6 >> 0x1d,0)) {
        fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1d6),
                                            (byte)(uVar6 >> 0x15) & 3);
        fVar15 = fVar15 * fVar12;
        uVar7 = uVar7 & 0xfffffff | (uint)(fVar15 < fVar14) << 0x1f |
                (uint)(fVar15 == fVar14) << 0x1e;
        uVar6 = uVar7 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
        bVar2 = (byte)(uVar7 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar6 >> 0x1c) & 1)) {
          fVar12 = (float)FUN_003727f0(fVar15 - fVar14);
          fVar10 = fVar10 - fVar12;
        }
      }
      else {
        fVar12 = (float)FUN_003727f0(fVar14 - fVar15);
        fVar10 = fVar10 - fVar12;
      }
      local_60 = local_60 - fVar11 * fVar10;
    }
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1d0),(byte)(uVar6 >> 0x15) & 3);
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1ce),(byte)(uVar6 >> 0x15) & 3);
    FUN_00367df4(fVar12 * fVar4,fVar10 * fVar4,uVar9,&local_64,param_3 + 300);
    iVar5 = *piVar3;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1ce),(byte)(uVar6 >> 0x15) & 3);
    *(float *)(param_3 + 0x118) = fVar10 * fVar4;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1d0),(byte)(uVar6 >> 0x15) & 3);
    *(float *)(param_3 + 0x114) = fVar10 * fVar4;
  }
  local_70 = *(float *)(param_3 + 0xdc) + *(float *)(param_3 + 300);
  local_6c = *(float *)(param_3 + 0xe0) + *(float *)(param_3 + 0x130);
  local_68 = *(float *)(param_3 + 0xe4) + *(float *)(param_3 + 0x134);
  FUN_00367df4(*(undefined4 *)(param_3 + 0x148),*(undefined4 *)(param_3 + 0x148),fVar8,&local_70,
               local_58);
  return 1;
}

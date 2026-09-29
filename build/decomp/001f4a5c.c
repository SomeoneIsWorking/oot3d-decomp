// OoT3D decomp @ 001f4a5c  name=FUN_001f4a5c  size=1000

void FUN_001f4a5c(int param_1,int param_2)

{
  undefined4 uVar1;
  short *psVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  short local_40;
  short local_3e;
  short local_3c;
  float local_38;
  float local_34;
  float local_30;

  if (*(char *)(param_1 + 0x3e0) != '\0') {
    FUN_0035e240(param_1 + 0x214,param_1 + 0x148,0);
    FUN_00357750(0,param_1 + 0x1a4,param_1 + 0x148);
  }
  fVar3 = DAT_00171b74;
  psVar2 = DAT_00171b70;
  if (((*(ushort *)(param_1 + 0x1c) & 1) != 0) && (*(int *)(param_1 + 0x3d8) == DAT_001f4adc)) {
    if (((*(uint *)(DAT_00171b70 + 4) & 1) == 0) &&
       (iVar6 = FUN_003679b4(DAT_00171b70 + 4), pfVar4 = DAT_00171b7c, fVar8 = DAT_00171b78,
       iVar6 != 0)) {
      *DAT_00171b7c = fVar3;
      pfVar4[1] = fVar3;
      pfVar4[2] = fVar8;
    }
    fVar8 = (float)FUN_002cfca0((int)*psVar2);
    uVar1 = UnsignedSaturate((int)(fVar8 * DAT_00171b80),8);
    UnsignedDoesSaturate((int)(fVar8 * DAT_00171b80),8);
    FUN_0041507c(&local_40,*(undefined4 *)(param_2 + *(short *)(DAT_00171b84 + param_2) * 4 + 0xa54)
                );
    local_6c = DAT_00171b8c;
    fVar8 = DAT_00171b88;
    fVar9 = (float)VectorSignedToFloat((int)local_3e,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 * DAT_00171b88;
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar3) << 0x1e;
    local_80 = DAT_00171b8c;
    local_78 = fVar3;
    if (!SUB41(uVar7 >> 0x1e,0)) {
      fVar10 = (float)FUN_003727f0(fVar9);
      local_80 = (float)FUN_00372674(fVar9);
      local_78 = fVar10;
    }
    local_7c = fVar3;
    local_74 = fVar3;
    local_60 = -local_78;
    local_70 = fVar3;
    local_68 = fVar3;
    local_64 = fVar3;
    local_5c = fVar3;
    local_54 = fVar3;
    fVar9 = (float)VectorSignedToFloat((int)local_40,(byte)(uVar7 >> 0x15) & 3);
    fVar9 = fVar9 * fVar8;
    uVar7 = uVar7 & 0xfffffff | (uint)(fVar9 == fVar3) << 0x1e;
    local_58 = local_80;
    if (!SUB41(uVar7 >> 0x1e,0)) {
      fVar11 = (float)FUN_003727f0(fVar9);
      fVar12 = (float)FUN_00372674(fVar9);
      fVar9 = local_78 * fVar11;
      local_78 = local_78 * fVar12 - local_7c * fVar11;
      fVar10 = local_68 * fVar11;
      local_68 = local_68 * fVar12 - local_6c * fVar11;
      fVar13 = local_58 * fVar11;
      local_58 = local_58 * fVar12 - local_5c * fVar11;
      local_7c = local_7c * fVar12 + fVar9;
      local_6c = local_6c * fVar12 + fVar10;
      local_5c = local_5c * fVar12 + fVar13;
    }
    fVar9 = (float)VectorSignedToFloat((int)local_3c,(byte)(uVar7 >> 0x15) & 3);
    fVar9 = fVar9 * fVar8;
    uVar7 = uVar7 & 0xfffffff | (uint)(fVar9 == fVar3) << 0x1e;
    if (!SUB41(uVar7 >> 0x1e,0)) {
      fVar13 = (float)FUN_003727f0(fVar9);
      fVar11 = (float)FUN_00372674(fVar9);
      fVar8 = local_7c * fVar13;
      local_7c = local_7c * fVar11 - local_80 * fVar13;
      fVar9 = local_6c * fVar13;
      local_6c = local_6c * fVar11 - local_70 * fVar13;
      fVar10 = local_5c * fVar13;
      local_5c = local_5c * fVar11 - local_60 * fVar13;
      local_80 = local_80 * fVar11 + fVar8;
      local_70 = local_70 * fVar11 + fVar9;
      local_60 = local_60 * fVar11 + fVar10;
    }
    FUN_003735ac(&local_38,&local_80,DAT_00171b7c);
    FUN_003679d0(*(float *)(param_1 + 0x3c) + local_38,*(float *)(param_1 + 0x40) + local_34,
                 *(float *)(param_1 + 0x44) + local_30,&local_80,&local_40);
    uVar5 = DAT_00171b98;
    fVar8 = *(float *)(psVar2 + 2) * DAT_00171b90;
    local_80 = local_80 * fVar8;
    local_70 = local_70 * fVar8;
    local_60 = local_60 * fVar8;
    local_7c = local_7c * fVar8;
    local_6c = local_6c * fVar8;
    local_5c = local_5c * fVar8;
    local_78 = local_78 * fVar8;
    local_68 = local_68 * fVar8;
    local_58 = local_58 * fVar8;
    local_50 = fVar3;
    local_4c = fVar3;
    local_44 = (float)VectorSignedToFloat(uVar1,(byte)(uVar7 >> 0x15) & 3);
    local_48 = DAT_00171b98;
    local_44 = local_44 * DAT_00171b94;
    iVar6 = *(int *)(param_1 + 0x3d4);
    *(float *)(iVar6 + 0xc) = local_80;
    *(float *)(iVar6 + 0x10) = local_7c;
    *(float *)(iVar6 + 0x14) = local_78;
    *(float *)(iVar6 + 0x18) = local_74;
    *(float *)(iVar6 + 0x1c) = local_70;
    *(float *)(iVar6 + 0x20) = local_6c;
    *(float *)(iVar6 + 0x24) = local_68;
    *(float *)(iVar6 + 0x28) = local_64;
    *(float *)(iVar6 + 0x2c) = local_60;
    *(float *)(iVar6 + 0x30) = local_5c;
    *(float *)(iVar6 + 0x34) = local_58;
    *(float *)(iVar6 + 0x38) = local_54;
    iVar6 = *(int *)(param_1 + 0x3d4);
    *(float *)(iVar6 + 0xf0) = fVar3;
    *(float *)(iVar6 + 0xf4) = fVar3;
    *(undefined4 *)(iVar6 + 0xf8) = uVar5;
    *(float *)(iVar6 + 0xfc) = local_44;
    FUN_00371eac(*(undefined4 *)(param_1 + 0x3d4),0);
    return;
  }
  return;
}

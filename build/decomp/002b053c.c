// OoT3D decomp @ 002b053c  name=FUN_002b053c  size=468

void FUN_002b053c(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_88;
  float local_84;
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
  float local_48;
  float local_44;
  float local_40;
  float local_3c;

  fVar3 = DAT_002b0714;
  fVar2 = DAT_002b0710;
  local_78 = DAT_002b0710;
  local_74 = DAT_002b0714;
  local_70 = DAT_002b0710;
  local_6c = DAT_002b0714;
  local_88 = DAT_002b0714;
  local_84 = DAT_002b0710;
  local_80 = DAT_002b0710;
  local_7c = DAT_002b0714;
  FUN_00342988(*(undefined4 *)(param_1 + 600),&local_88,0xffffffff);
  iVar7 = DAT_002b0728;
  fVar6 = DAT_002b0724;
  fVar5 = DAT_002b0720;
  fVar4 = DAT_002b071c;
  for (iVar8 = (int)*(short *)(DAT_002b0718 + param_1); iVar8 < 6; iVar8 = iVar8 + 1) {
    fVar9 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = *(float *)(param_1 + 0x54) - fVar9 * fVar4;
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar2 <= fVar9) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar9 = fVar2;
    }
    if (iVar7 <= (int)fVar9) {
      fVar11 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar12 = fVar12 + fVar11 * fVar5;
      in_fpscr = uVar1 | (uint)(fVar12 == fVar2) << 0x1e;
      fVar10 = fVar3;
      fVar11 = fVar2;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar11 = (float)FUN_003727f0(fVar12);
        fVar10 = (float)FUN_00372674(fVar12);
      }
      fVar9 = fVar9 * fVar6;
      local_68 = fVar10 * fVar9;
      local_58 = fVar11 * fVar9;
      local_60 = fVar2 * fVar9;
      local_64 = -fVar11 * fVar9;
      local_40 = fVar3 * fVar9;
      local_5c = fVar2;
      local_54 = local_68;
      local_50 = local_60;
      local_4c = fVar2;
      local_48 = local_60;
      local_44 = local_60;
      local_3c = fVar2;
      FUN_003693b4(*(undefined4 *)(param_1 + 600),param_1 + iVar8 * 0xc + 0x1b8,&local_68,0,
                   &local_78,7);
    }
    if (*(int *)(param_1 + 0x1a8) < iVar7) break;
  }
  FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 600) + 8),0);
  return;
}

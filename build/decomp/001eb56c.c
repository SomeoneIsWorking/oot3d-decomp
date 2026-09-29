// OoT3D decomp @ 001eb56c  name=FUN_001eb56c  size=840

void FUN_001eb56c(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;

  fVar9 = DAT_001eb8c0;
  fVar1 = DAT_001eb8bc;
  pfVar2 = DAT_001eb8b8;
  if (((*(uint *)(DAT_001eb8b4 + 8) & 1) == 0) && (iVar3 = FUN_003679b4(DAT_001eb8c4), iVar3 != 0))
  {
    *pfVar2 = fVar1;
    pfVar2[1] = fVar9;
    pfVar2[2] = fVar1;
  }
  if ((*(byte *)(param_1 + 0x23f) & 8) == 0) {
    fVar10 = *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x28);
    fVar5 = *(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x2c);
    fVar8 = *(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x30);
    fVar5 = SQRT(fVar10 * fVar10 + fVar5 * fVar5 + fVar8 * fVar8) * DAT_001eb8c8;
    *(float *)(param_1 + 0x228) = fVar5;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x228);
  }
  local_28 = pfVar2[1] * *(float *)(param_1 + 0x68) - pfVar2[2] * *(float *)(param_1 + 100);
  local_24 = pfVar2[2] * *(float *)(param_1 + 0x60) - *pfVar2 * *(float *)(param_1 + 0x68);
  local_20 = *pfVar2 * *(float *)(param_1 + 100) - pfVar2[1] * *(float *)(param_1 + 0x60);
  fVar8 = SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20);
  if ((int)fVar8 < DAT_001eb8cc) {
    local_28 = *(float *)(param_1 + 0x21c);
    local_24 = *(float *)(param_1 + 0x220);
    local_20 = *(float *)(param_1 + 0x224);
  }
  else {
    fVar9 = fVar9 / fVar8;
    local_28 = local_28 * fVar9;
    local_24 = local_24 * fVar9;
    local_20 = local_20 * fVar9;
    *(float *)(param_1 + 0x21c) = local_28;
    *(float *)(param_1 + 0x220) = local_24;
    *(float *)(param_1 + 0x224) = local_20;
  }
  FUN_003625f8(*(float *)(param_1 + 0x22c) * fVar5,&local_58,&local_28);
  fVar9 = DAT_001eb8d0;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_001eb8d0;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == fVar1) << 0x1e;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    fVar8 = (float)FUN_003727f0(fVar5);
    fVar5 = (float)FUN_00372674(fVar5);
    fVar10 = local_58 * fVar8;
    local_58 = local_58 * fVar5 - local_50 * fVar8;
    local_50 = fVar10 + local_50 * fVar5;
    fVar10 = local_48 * fVar8;
    local_48 = local_48 * fVar5 - local_40 * fVar8;
    local_40 = fVar10 + local_40 * fVar5;
    fVar10 = local_38 * fVar8;
    local_38 = local_38 * fVar5 - local_30 * fVar8;
    local_30 = fVar10 + local_30 * fVar5;
  }
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),(byte)(uVar4 >> 0x15) & 3);
  fVar5 = fVar5 * fVar9;
  uVar4 = uVar4 & 0xfffffff | (uint)(fVar5 == fVar1) << 0x1e;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    fVar6 = (float)FUN_003727f0(fVar5);
    fVar7 = (float)FUN_00372674(fVar5);
    fVar5 = local_50 * fVar6;
    local_50 = local_50 * fVar7 - local_54 * fVar6;
    fVar8 = local_40 * fVar6;
    local_40 = local_40 * fVar7 - local_44 * fVar6;
    fVar10 = local_30 * fVar6;
    local_30 = local_30 * fVar7 - local_34 * fVar6;
    local_54 = local_54 * fVar7 + fVar5;
    local_44 = local_44 * fVar7 + fVar8;
    local_34 = local_34 * fVar7 + fVar10;
  }
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0),(byte)(uVar4 >> 0x15) & 3);
  fVar5 = fVar5 * fVar9;
  if (fVar5 != fVar1) {
    fVar8 = (float)FUN_003727f0(fVar5);
    fVar10 = (float)FUN_00372674(fVar5);
    fVar1 = local_54 * fVar8;
    local_54 = local_54 * fVar10 - local_58 * fVar8;
    fVar9 = local_44 * fVar8;
    local_44 = local_44 * fVar10 - local_48 * fVar8;
    fVar5 = local_34 * fVar8;
    local_34 = local_34 * fVar10 - local_38 * fVar8;
    local_58 = local_58 * fVar10 + fVar1;
    local_48 = local_48 * fVar10 + fVar9;
    local_38 = local_38 * fVar10 + fVar5;
  }
  FUN_003624c8(&local_58,param_1 + 0xbc,0);
  return;
}

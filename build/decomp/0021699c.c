// OoT3D decomp @ 0021699c  name=FUN_0021699c  size=920

void FUN_0021699c(undefined4 param_1,uint param_2,float *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8 [12];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60 [12];

  fVar8 = DAT_00216d40;
  fVar7 = DAT_00216d3c;
  local_60[0] = *DAT_00216d34;
  local_60[1] = DAT_00216d34[1];
  local_60[2] = DAT_00216d34[2];
  local_60[3] = DAT_00216d34[3];
  local_60[4] = DAT_00216d34[4];
  local_60[5] = DAT_00216d34[5];
  local_60[6] = DAT_00216d34[6];
  local_60[7] = DAT_00216d34[7];
  local_60[8] = DAT_00216d34[8];
  local_60[9] = DAT_00216d34[9];
  local_60[10] = DAT_00216d34[10];
  local_60[0xb] = DAT_00216d34[0xb];
  local_78 = *DAT_00216d38;
  uStack_74 = DAT_00216d38[1];
  uStack_70 = DAT_00216d38[2];
  uStack_6c = DAT_00216d38[3];
  uStack_68 = DAT_00216d38[4];
  uStack_64 = DAT_00216d38[5];
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  local_a8[3] = 0.0;
  local_a8[4] = 0.0;
  local_a8[5] = 0.0;
  local_a8[6] = 0.0;
  local_a8[7] = 0.0;
  local_a8[8] = 0.0;
  local_a8[9] = 0.0;
  local_a8[10] = 0.0;
  local_a8[0xb] = 0.0;
  if (param_2 < 4) {
    iVar2 = param_4 + param_2 * 0xc;
    fVar6 = *(float *)(iVar2 + 0x634);
    fVar9 = local_60[param_2 * 3];
    fVar11 = local_60[param_2 * 3 + 1];
    fVar13 = local_60[param_2 * 3 + 2];
    fVar10 = *(float *)(iVar2 + 0x638);
    fVar12 = *(float *)(iVar2 + 0x63c);
    param_3[1] = 0.0;
    *param_3 = 1.0;
    param_3[2] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = 1.0;
    param_3[3] = fVar6 + fVar9;
    param_3[6] = 0.0;
    param_3[8] = 0.0;
    param_3[7] = fVar10 + fVar11;
    param_3[9] = 0.0;
    param_3[10] = 1.0;
    iVar1 = param_2 * 6;
    param_3[0xb] = fVar12 + fVar13;
    param_4 = param_4 + param_2 * 6;
    iVar3 = (int)(short)(*(short *)(param_4 + 0x694) + *(short *)((int)&local_78 + iVar1));
    iVar4 = (int)(short)(*(short *)(param_4 + 0x696) + *(short *)((int)&local_78 + iVar1 + 2));
    fVar6 = (float)VectorSignedToFloat((int)(short)(*(short *)(param_4 + 0x698) +
                                                   *(short *)((int)&uStack_74 + iVar1)),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 * fVar8;
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 == fVar7) << 0x1e;
    if (!SUB41(uVar5 >> 0x1e,0)) {
      fVar9 = (float)FUN_003727f0(fVar6);
      fVar6 = (float)FUN_00372674(fVar6);
      fVar10 = *param_3;
      *param_3 = fVar10 * fVar6 + param_3[1] * fVar9;
      param_3[1] = param_3[1] * fVar6 - fVar10 * fVar9;
      fVar10 = param_3[4];
      param_3[4] = fVar10 * fVar6 + param_3[5] * fVar9;
      param_3[5] = param_3[5] * fVar6 - fVar10 * fVar9;
      fVar10 = param_3[8];
      param_3[8] = fVar10 * fVar6 + param_3[9] * fVar9;
      param_3[9] = param_3[9] * fVar6 - fVar10 * fVar9;
    }
    if (iVar4 != 0) {
      fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(uVar5 >> 0x15) & 3);
      fVar6 = fVar6 * fVar8;
      uVar5 = uVar5 & 0xfffffff | (uint)(fVar6 == fVar7) << 0x1e;
      if (!SUB41(uVar5 >> 0x1e,0)) {
        fVar9 = (float)FUN_003727f0(fVar6);
        fVar6 = (float)FUN_00372674(fVar6);
        fVar10 = *param_3;
        *param_3 = fVar10 * fVar6 - param_3[2] * fVar9;
        param_3[2] = fVar10 * fVar9 + param_3[2] * fVar6;
        fVar10 = param_3[4];
        param_3[4] = fVar10 * fVar6 - param_3[6] * fVar9;
        param_3[6] = fVar10 * fVar9 + param_3[6] * fVar6;
        fVar10 = param_3[8];
        param_3[8] = fVar10 * fVar6 - param_3[10] * fVar9;
        param_3[10] = fVar10 * fVar9 + param_3[10] * fVar6;
      }
    }
    if (iVar3 != 0) {
      fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(uVar5 >> 0x15) & 3);
      fVar6 = fVar6 * fVar8;
      if (fVar6 != fVar7) {
        fVar7 = (float)FUN_003727f0(fVar6);
        fVar8 = (float)FUN_00372674(fVar6);
        fVar6 = param_3[1];
        param_3[1] = fVar6 * fVar8 + param_3[2] * fVar7;
        param_3[2] = param_3[2] * fVar8 - fVar6 * fVar7;
        fVar6 = param_3[5];
        param_3[5] = fVar6 * fVar8 + param_3[6] * fVar7;
        param_3[6] = param_3[6] * fVar8 - fVar6 * fVar7;
        fVar6 = param_3[9];
        param_3[9] = fVar6 * fVar8 + param_3[10] * fVar7;
        param_3[10] = param_3[10] * fVar8 - fVar6 * fVar7;
      }
    }
    fVar7 = *(float *)(iVar2 + 0x664) + local_a8[param_2 * 3];
    fVar8 = *(float *)(iVar2 + 0x668) + local_a8[param_2 * 3 + 1];
    fVar6 = *(float *)(iVar2 + 0x66c) + local_a8[param_2 * 3 + 2];
    *param_3 = *param_3 * fVar7;
    param_3[4] = param_3[4] * fVar7;
    param_3[8] = param_3[8] * fVar7;
    param_3[1] = param_3[1] * fVar8;
    param_3[5] = param_3[5] * fVar8;
    param_3[9] = param_3[9] * fVar8;
    param_3[2] = param_3[2] * fVar6;
    param_3[6] = param_3[6] * fVar6;
    param_3[10] = param_3[10] * fVar6;
  }
  return;
}

// OoT3D decomp @ 00249cf4  name=FUN_00249cf4  size=868

void FUN_00249cf4(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;

  fVar1 = DAT_0024a05c;
  fVar8 = DAT_0024a058;
  local_58 = *(undefined4 *)(param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x2c);
  local_38 = *(undefined4 *)(param_1 + 0x30);
  local_5c = 0.0;
  local_60 = 0.0;
  local_64 = 1.0;
  local_54 = 0.0;
  local_50 = 1.0;
  local_40 = 0.0;
  local_3c = 1.0;
  local_4c = 0.0;
  local_44 = 0.0;
  sVar2 = FUN_003758b0(*(float *)(param_1 + 0x68) - DAT_0024a058,
                       *(float *)(param_1 + 0x60) - DAT_0024a058);
  sVar3 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar5 = (float)FUN_00338f60((int)(short)(sVar2 - sVar3));
  fVar6 = (float)FUN_002cfca0((int)(short)(sVar2 - sVar3));
  fVar11 = *(float *)(param_1 + 0x60) - fVar8;
  fVar7 = *(float *)(param_1 + 0x68) - fVar8;
  fVar11 = SQRT(fVar11 * fVar11 + fVar7 * fVar7) * DAT_0024a060;
  sVar2 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar7 = (float)VectorSignedToFloat((int)(short)(sVar2 + -0x8000),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 * DAT_0024a064;
  if (fVar7 != fVar8) {
    fVar8 = (float)FUN_003727f0(fVar7);
    fVar7 = (float)FUN_00372674(fVar7);
    fVar12 = local_64 * fVar8;
    local_64 = local_64 * fVar7 - local_5c * fVar8;
    local_5c = fVar12 + local_5c * fVar7;
    fVar12 = local_54 * fVar8;
    local_54 = local_54 * fVar7 - local_4c * fVar8;
    local_4c = fVar12 + local_4c * fVar7;
    fVar12 = local_44 * fVar8;
    local_44 = local_44 * fVar7 - local_3c * fVar8;
    local_3c = fVar12 + local_3c * fVar7;
  }
  fVar6 = fVar6 * DAT_0024a068 * fVar11 * DAT_0024a06c;
  if (fVar6 != fVar8) {
    fVar9 = (float)FUN_003727f0(fVar6);
    fVar10 = (float)FUN_00372674(fVar6);
    fVar6 = local_60 * fVar9;
    local_60 = local_60 * fVar10 - local_64 * fVar9;
    fVar7 = local_50 * fVar9;
    local_50 = local_50 * fVar10 - local_54 * fVar9;
    fVar12 = local_40 * fVar9;
    local_40 = local_40 * fVar10 - local_44 * fVar9;
    local_64 = local_64 * fVar10 + fVar6;
    local_54 = local_54 * fVar10 + fVar7;
    local_44 = local_44 * fVar10 + fVar12;
  }
  fVar6 = *(float *)(param_1 + 0x204) * DAT_0024a070;
  fVar5 = fVar1 + ABS(fVar5) * DAT_0024a074 * fVar11;
  local_64 = local_64 * fVar6 * fVar1;
  if ((int)fVar5 < DAT_0024a078) {
    fVar5 = DAT_0024a07c;
  }
  local_54 = local_54 * fVar6 * fVar1;
  local_44 = local_44 * fVar6 * fVar1;
  fVar7 = fVar1 / fVar5;
  local_60 = local_60 * fVar6 * fVar5;
  local_50 = local_50 * fVar6 * fVar5;
  local_40 = local_40 * fVar6 * fVar5;
  local_5c = local_5c * fVar6 * fVar7;
  local_4c = local_4c * fVar6 * fVar7;
  local_3c = local_3c * fVar6 * fVar7;
  iVar4 = FUN_003695f8();
  if (iVar4 == 0) {
    *(float *)(*(int *)(param_1 + 0x218) + 0xc) = fVar1;
  }
  else {
    *(float *)(*(int *)(param_1 + 0x218) + 0xc) = fVar8;
  }
  FUN_00373bec(*(undefined4 *)(param_1 + 0x218));
  *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x210),&local_64);
  FUN_00372170(*(undefined4 *)(param_1 + 0x210),0);
  return;
}

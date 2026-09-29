// OoT3D decomp @ 002e4660  name=FUN_002e4660  size=352

void FUN_002e4660(int param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_4c [4];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;

  pfVar1 = (float *)FUN_003373b8(*(undefined4 *)(param_1 + 0x340c),0);
  fVar4 = DAT_002e47c0;
  local_4c[0] = *pfVar1;
  local_4c[1] = pfVar1[1];
  local_4c[2] = pfVar1[2];
  local_4c[3] = DAT_002e47c0;
  local_38 = pfVar1[4];
  local_34 = pfVar1[5];
  local_3c = pfVar1[3];
  local_30 = DAT_002e47c0;
  local_2c = pfVar1[6];
  local_28 = pfVar1[7];
  local_24 = pfVar1[8];
  local_20 = DAT_002e47c0;
  local_1c = pfVar1[9];
  local_18 = pfVar1[10];
  local_14 = pfVar1[0xb];
  uVar2 = param_1 + 0x3000;
  local_10 = DAT_002e47c0;
  bVar7 = *(char *)(param_1 + 0x31b0) == '\0';
  if (bVar7) {
    uVar2 = (uint)*(byte *)(param_1 + 0x3237);
  }
  if (bVar7 && uVar2 == 0xff) {
    uVar2 = (uint)*(byte *)(DAT_002e47c4 + 4);
    uVar3 = (uint)*(byte *)(DAT_002e47c4 + 5);
    if (uVar2 != uVar3) {
      fVar9 = local_4c[uVar2 * 4 + 1];
      fVar10 = local_4c[uVar2 * 4 + 2];
      fVar4 = local_4c[uVar3 * 4 + 1];
      fVar11 = local_4c[uVar2 * 4 + 3];
      fVar5 = local_4c[uVar3 * 4 + 2];
      fVar6 = local_4c[uVar3 * 4 + 3];
      fVar8 = *(float *)(DAT_002e47c4 + 0x28);
      *param_2 = local_4c[uVar2 * 4] + (local_4c[uVar3 * 4] - local_4c[uVar2 * 4]) * fVar8;
      param_2[1] = fVar9 + (fVar4 - fVar9) * fVar8;
      param_2[2] = fVar10 + (fVar5 - fVar10) * fVar8;
      param_2[3] = fVar11 + (fVar6 - fVar11) * fVar8;
      return;
    }
    fVar4 = local_4c[uVar2 * 4 + 1];
    fVar5 = local_4c[uVar2 * 4 + 2];
    fVar6 = local_4c[uVar2 * 4 + 3];
    *param_2 = local_4c[uVar2 * 4];
    param_2[1] = fVar4;
    param_2[2] = fVar5;
    param_2[3] = fVar6;
  }
  else {
    *param_2 = pfVar1[3];
    param_2[1] = local_38;
    param_2[2] = local_34;
    param_2[3] = fVar4;
  }
  return;
}

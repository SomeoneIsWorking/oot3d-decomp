// OoT3D decomp @ 003d0aa8  name=FUN_003d0aa8  size=500

void FUN_003d0aa8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;

  fVar2 = DAT_003d0ca0;
  fVar1 = DAT_003d0c9c;
  pfVar7 = (float *)(param_1 + 0x2a4);
  pfVar9 = (float *)(param_1 + 0x1a4);
  local_58 = DAT_003d0c9c;
  local_54 = DAT_003d0c9c;
  local_50 = DAT_003d0c9c;
  local_4c = DAT_003d0ca0;
  local_68 = DAT_003d0ca4;
  local_64 = DAT_003d0ca4;
  local_60 = DAT_003d0ca4;
  local_5c = DAT_003d0ca0;
  FUN_003429c8(*(undefined4 *)(param_1 + 0x5c4),1,&local_68);
  pfVar5 = DAT_003d0cb0;
  puVar4 = DAT_003d0cac;
  fVar3 = DAT_003d0ca8;
  iVar8 = 0;
  *(uint *)(*(int *)(param_1 + 0x5c4) + 0x178) =
       *(uint *)(*(int *)(param_1 + 0x5c4) + 0x178) & 0xfffffffe;
  do {
    fVar10 = *pfVar9;
    if ((int)fVar10 < 0x3f800000) {
      fVar10 = fVar2 - fVar10 * fVar10;
      local_3c = *(float *)(param_1 + 0x28) +
                 *pfVar7 * ((fVar2 - *(float *)(param_1 + 0x5a8)) +
                           *(float *)(param_1 + 0x5a8) * fVar10);
      local_38 = *(float *)(param_1 + 0x2c) +
                 pfVar7[1] *
                 ((fVar2 - *(float *)(param_1 + 0x5ac)) + *(float *)(param_1 + 0x5ac) * fVar10);
      local_34 = *(float *)(param_1 + 0x30) +
                 pfVar7[2] *
                 ((fVar2 - *(float *)(param_1 + 0x5b0)) + *(float *)(param_1 + 0x5b0) * fVar10);
      local_40 = *(float *)(param_1 + 0x5b4);
      local_48 = local_40 * fVar3;
      local_44 = local_40 * fVar3;
      local_40 = local_40 * fVar3;
      if (((*puVar4 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_003d0cac), iVar6 != 0)) {
        *pfVar5 = fVar2;
        pfVar5[1] = fVar1;
        pfVar5[2] = fVar1;
        pfVar5[3] = fVar1;
        pfVar5[4] = fVar1;
        pfVar5[5] = fVar2;
        pfVar5[6] = fVar1;
        pfVar5[7] = fVar1;
        pfVar5[8] = fVar1;
        pfVar5[9] = fVar1;
        pfVar5[10] = fVar2;
        pfVar5[0xb] = fVar1;
      }
      FUN_00371f1c(*(undefined4 *)(param_1 + 0x5c4),&local_3c,DAT_003d0cb0,&local_48,&local_58,0);
    }
    iVar8 = iVar8 + 1;
    pfVar7 = pfVar7 + 3;
    pfVar9 = pfVar9 + 1;
  } while (iVar8 < 0x40);
  FUN_00371eac(*(undefined4 *)(param_1 + 0x5c4),0);
  return;
}

// OoT3D decomp @ 003d0830  name=FUN_003d0830  size=600

void FUN_003d0830(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;

  FUN_00372224(&local_4c,param_2 + 0x148);
  fVar7 = DAT_003d0a88;
  iVar2 = FUN_003695f8();
  fVar6 = DAT_003d0a8c;
  if (iVar2 != 0) {
    fVar7 = DAT_003d0a8c;
  }
  if (*(char *)(param_2 + 0x1c0) == '\0') {
    local_54 = (float)DAT_003d0a94[1];
    local_58 = *DAT_003d0a94;
    local_50 = (float)DAT_003d0a94[2];
  }
  else {
    local_54 = *(float *)(param_2 + 0xc);
    local_58 = *(undefined4 *)(param_2 + 8);
    local_50 = *(float *)(param_2 + 0x10);
  }
  local_54 = local_54 - DAT_003d0a90;
  local_44 = 0.0;
  local_48 = 0.0;
  local_4c = 1.0;
  local_3c = 0.0;
  local_38 = 1.0;
  local_40 = local_58;
  local_28 = 0.0;
  local_24 = 1.0;
  local_34 = 0.0;
  local_2c = 0.0;
  local_30 = local_54;
  local_20 = local_50;
  sVar1 = FUN_0036e70c(*(undefined4 *)(param_1 + *(short *)(DAT_003d0a98 + param_1) * 4 + 0xa54));
  if ((short)(sVar1 + -0x8000) != 0) {
    fVar4 = (float)VectorSignedToFloat((int)(short)(sVar1 + -0x8000),(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * DAT_003d0a9c;
    if (fVar4 != fVar6) {
      fVar3 = (float)FUN_003727f0(fVar4);
      fVar4 = (float)FUN_00372674(fVar4);
      fVar5 = local_4c * fVar3;
      local_4c = local_4c * fVar4 - local_44 * fVar3;
      local_44 = fVar5 + local_44 * fVar4;
      fVar5 = local_3c * fVar3;
      local_3c = local_3c * fVar4 - local_34 * fVar3;
      local_34 = fVar5 + local_34 * fVar4;
      fVar5 = local_2c * fVar3;
      local_2c = local_2c * fVar4 - local_24 * fVar3;
      local_24 = fVar5 + local_24 * fVar4;
    }
  }
  local_58 = DAT_003d0aa0;
  local_54 = fVar6;
  local_50 = fVar6;
  FUN_00372070(&local_4c,&local_4c,&local_58);
  fVar6 = *(float *)(param_2 + 0x1c4);
  local_4c = local_4c * DAT_003d0aa4;
  local_3c = local_3c * DAT_003d0aa4;
  local_2c = local_2c * DAT_003d0aa4;
  local_48 = local_48 * fVar6;
  local_38 = local_38 * fVar6;
  local_28 = local_28 * fVar6;
  local_44 = local_44 * DAT_003d0aa4;
  local_34 = local_34 * DAT_003d0aa4;
  local_24 = local_24 * DAT_003d0aa4;
  if (*(int *)(param_2 + 0x22c) != 0) {
    *(undefined1 *)(*(int *)(param_2 + 0x22c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_2 + 0x22c),&local_4c);
    *(float *)(*(int *)(*(int *)(param_2 + 0x22c) + 0xc) + 0xc) = fVar7;
    FUN_00372170(*(undefined4 *)(param_2 + 0x22c),0);
  }
  return;
}

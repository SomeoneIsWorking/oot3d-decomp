// OoT3D decomp @ 002a6140  name=FUN_002a6140  size=564

void FUN_002a6140(float param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  char *pcVar5;
  short sVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  local_28 = *(undefined4 *)(DAT_002a6374 + 8);
  if (*(int *)((int)param_1 + 0x5d0) != DAT_002a6378) {
    if (*(short *)((int)param_1 + 0x5e0) != 0) {
      local_70 = 2.8026e-44;
      FUN_0032d184(param_2,param_1,&local_28,0);
    }
    local_6c = 0.0;
    local_70 = param_1;
    FUN_0035e240((int)param_1 + 0x1a4,(int)param_1 + 0x148,DAT_002a637c);
    uVar4 = DAT_002a6384;
    fVar3 = DAT_002a6380;
    pcVar5 = (char *)((int)param_1 + 0x6d4);
    sVar6 = 0;
    do {
      if (*pcVar5 == '\x01') {
        FUN_00372224(&local_70,(int)param_1 + 0x148);
        local_64 = *(undefined4 *)(pcVar5 + 4);
        local_54 = *(undefined4 *)(pcVar5 + 8);
        local_44 = *(undefined4 *)(pcVar5 + 0xc);
        local_58 = 0;
        local_68 = 0;
        uStack_48 = 0x3f800000;
        local_4c = *(float *)(pcVar5 + 0x2c);
        local_70 = local_4c * 1.0;
        local_60 = local_4c * 0.0;
        local_50 = local_4c * 0.0;
        local_6c = local_4c * 0.0;
        local_5c = local_4c * 1.0;
        local_4c = local_4c * 0.0;
        fVar9 = *(float *)(pcVar5 + 0x30);
        local_34 = local_64;
        local_30 = local_54;
        local_2c = local_44;
        if (fVar9 != fVar3) {
          fVar7 = (float)FUN_003727f0(fVar9);
          fVar8 = (float)FUN_00372674(fVar9);
          fVar9 = local_6c * fVar7;
          local_6c = local_6c * fVar8 - local_70 * fVar7;
          fVar1 = local_5c * fVar7;
          local_5c = local_5c * fVar8 - local_60 * fVar7;
          fVar2 = local_4c * fVar7;
          local_4c = local_4c * fVar8 - local_50 * fVar7;
          local_70 = local_70 * fVar8 + fVar9;
          local_60 = local_60 * fVar8 + fVar1;
          local_50 = local_50 * fVar8 + fVar2;
        }
        local_40 = fVar3;
        local_38 = fVar3;
        local_3c = uVar4;
        FUN_00372070(&local_70,&local_70,&local_40);
        *(undefined1 *)(*(int *)(pcVar5 + 0x38) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(pcVar5 + 0x38),&local_70);
        FUN_00372170(*(undefined4 *)(pcVar5 + 0x38),0);
      }
      sVar6 = sVar6 + 1;
      pcVar5 = pcVar5 + 0x3c;
    } while (sVar6 < 5);
  }
  return;
}

// OoT3D decomp @ 001bd664  name=FUN_001bd664  size=1036

void FUN_001bd664(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 auStack_54 [16];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  
  fVar1 = DAT_001bda48;
  pcVar4 = (char *)(param_1 + 0xd14);
  fVar7 = DAT_001bda4c[1] + DAT_001bda48 * DAT_001bda4c[3];
  fVar8 = *DAT_001bda4c + DAT_001bda48 * DAT_001bda4c[2];
  local_68 = DAT_001bda4c[0x201] + DAT_001bda48 * DAT_001bda4c[0x203];
  local_70 = DAT_001bda4c[0x200] + DAT_001bda48 * DAT_001bda4c[0x202];
  local_90 = fVar7 * local_68;
  local_80 = fVar8 * local_68;
  local_68 = fVar7 * local_68;
  local_8c = fVar8 * fVar7 * local_70 - fVar7 * fVar8;
  local_78 = fVar7 * fVar8 * local_70 - fVar8 * fVar7;
  local_88 = fVar8 * fVar8 + fVar7 * fVar7 * local_70;
  local_7c = fVar7 * fVar7 + fVar8 * fVar8 * local_70;
  local_70 = -local_70;
  local_84 = 0;
  local_74 = 0;
  local_64 = 0;
  local_6c = local_80;
  FUN_0035619c(param_2,&local_44,auStack_54,0xff,0xff,0xff,0xff,0x9b,0x9b,0x9b);
  FUN_00342988(*(undefined4 *)(param_1 + 0xc84),auStack_54,0xffffffff);
  fVar8 = DAT_001bda54;
  fVar7 = DAT_001bda50;
  iVar6 = 0;
  pcVar5 = pcVar4;
  do {
    if (*pcVar5 == '\x01') {
      local_38 = (float)VectorUnsignedToFloat((uint)(byte)pcVar5[0xf],(byte)(in_fpscr >> 0x15) & 3);
      local_38 = local_38 * fVar7;
      local_60 = *(float *)(pcVar5 + 4);
      local_5c = fVar8;
      local_58 = local_60;
      FUN_003693b4(*(undefined4 *)(param_1 + 0xc84),pcVar5 + 0x14,0,&local_60,&local_44,0);
      FUN_003693b4(*(undefined4 *)(param_1 + 0xc84),pcVar5 + 0x14,&local_90,&local_60,&local_44,0);
    }
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 0x38;
  } while (iVar6 < 0xf);
  iVar6 = *(int *)(*(int *)(param_1 + 0xc84) + 8);
  if (*(int *)(iVar6 + 0x1fc) != 0) {
    FUN_00371eac(iVar6,0);
  }
  FUN_0035619c(param_2,&local_44,auStack_54,0xff,0xff,0xff,0xff,0x96,0x96,0x96);
  FUN_00342988(*(undefined4 *)(param_1 + 0xc80),auStack_54,0xffffffff);
  fVar2 = DAT_001bda58;
  iVar6 = 0;
  pcVar5 = pcVar4;
  do {
    if (*pcVar5 == '\x03') {
      local_60 = *(float *)(pcVar5 + 4) * fVar2;
      local_5c = fVar8;
      local_58 = local_60;
      FUN_003693b4(*(undefined4 *)(param_1 + 0xc80),pcVar5 + 0x14,0,&local_60,&local_44,0);
    }
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 0x38;
  } while (iVar6 < 0xf);
  iVar6 = *(int *)(*(int *)(param_1 + 0xc80) + 8);
  if (*(int *)(iVar6 + 0x1fc) != 0) {
    FUN_00371eac(iVar6,0);
  }
  FUN_0035619c(param_2,&local_44,auStack_54,0xb4,0xb4,0xb4,0xff,200,200,200);
  FUN_00342988(*(undefined4 *)(param_1 + 0xc88),auStack_54,0xffffffff);
  fVar2 = DAT_001bda5c;
  iVar6 = 0;
  do {
    if (*pcVar4 == '\x02') {
      local_38 = (float)VectorUnsignedToFloat((uint)(byte)pcVar4[0xf],(byte)(in_fpscr >> 0x15) & 3);
      local_38 = local_38 * fVar7;
      local_60 = *(float *)(pcVar4 + 4) * fVar2;
      local_58 = fVar8;
      local_5c = local_60;
      FUN_003693b4(*(undefined4 *)(param_1 + 0xc88),pcVar4 + 0x14,0,&local_60,&local_44,0);
    }
    iVar6 = iVar6 + 1;
    pcVar4 = pcVar4 + 0x38;
  } while (iVar6 < 0xf);
  iVar6 = *(int *)(*(int *)(param_1 + 0xc88) + 8);
  if (*(int *)(iVar6 + 0x1fc) != 0) {
    FUN_00371eac(iVar6,0);
  }
  FUN_0035e3a4(param_1 + 0x228,0,(int)*(short *)(param_1 + 0x106c));
  FUN_0035e330(param_1 + 0x228);
  if (*(float *)(param_1 + 0x1060) != fVar1) {
    local_44 = *DAT_001bda60;
    uStack_40 = DAT_001bda60[1];
    uStack_3c = DAT_001bda60[2];
    local_38 = *(float *)(param_1 + 0x1060) * fVar7;
    uVar3 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
    FUN_003589cc(uVar3,4);
    FUN_00358964(uVar3,4,&local_44);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001bda90,DAT_001bda8c,param_1,0);
  }
  return;
}


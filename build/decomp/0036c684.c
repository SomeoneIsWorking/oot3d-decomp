// OoT3D decomp @ 0036c684  name=FUN_0036c684  size=676

void FUN_0036c684(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,int param_7,uint param_8)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;

  fVar9 = DAT_0036c930;
  if ((param_8 & 1) == 0) {
    local_34 = 0xaa;
    local_33 = 0x82;
    local_38 = 100;
    local_32 = 0x5a;
    local_37 = 0x3c;
    local_36 = 0x14;
    local_31 = 0xff;
    local_35 = 0xff;
  }
  else {
    local_34 = 0x96;
    local_36 = 0;
    local_37 = 0;
    local_32 = 0;
    local_33 = 0;
    local_38 = 0x50;
    local_35 = 0;
    local_31 = 0;
  }
  local_54 = DAT_0036c928;
  local_5c = DAT_0036c928;
  if ((param_8 & 8) == 0) {
    local_58 = DAT_0036c92c;
  }
  else {
    local_58 = DAT_0036c928;
  }
  iVar3 = *(int *)(param_7 + *(short *)(param_7 + 0xa64) * 4 + 0xa54);
  local_44 = *(float *)(iVar3 + 0x8c);
  local_40 = *(float *)(iVar3 + 0x90);
  local_3c = *(float *)(iVar3 + 0x94);
  uVar5 = 1000;
  uVar4 = 0xa0;
  iVar3 = *(int *)(param_7 + *(short *)(param_7 + 0xa64) * 4 + 0xa54);
  param_8 = param_8 & 6;
  local_50 = *(float *)(iVar3 + 0x80);
  local_4c = *(float *)(iVar3 + 0x84);
  local_48 = *(float *)(iVar3 + 0x88);
  local_74 = param_1;
  local_70 = param_2;
  local_6c = param_3;
  if (param_8 == 0) {
    uVar2 = FUN_003758b0(local_48 - local_3c,local_50 - local_44);
    sVar1 = FUN_003758b0(SQRT((local_50 - local_44) * (local_50 - local_44) +
                              (local_48 - local_3c) * (local_48 - local_3c)),local_40 - local_4c);
    iVar3 = (int)-sVar1;
    fVar6 = (float)FUN_002cfca0(uVar2);
    fVar7 = (float)FUN_00338f60(iVar3);
    local_68 = param_4 + fVar6 * fVar9 * fVar7;
    fVar6 = (float)FUN_002cfca0(iVar3);
    local_64 = param_5 + fVar6 * fVar9;
    fVar6 = (float)FUN_00338f60(uVar2);
    fVar7 = (float)FUN_00338f60(iVar3);
    local_60 = param_6 + fVar6 * fVar9 * fVar7;
    local_74 = local_74 - local_68 * DAT_0036c938;
    local_70 = local_70 - local_64 * DAT_0036c938;
    local_6c = local_6c - local_60 * DAT_0036c938;
  }
  else if (param_8 == 2) {
    fVar6 = (float)FUN_00371e50(DAT_0036c930);
    fVar7 = (float)FUN_003738a8(DAT_0036c934);
    fVar8 = (float)FUN_002cfca0((int)(short)(int)fVar7);
    local_68 = param_4 + (fVar6 + fVar9) * fVar8;
    local_64 = param_5;
    fVar7 = (float)FUN_00338f60((int)(short)(int)fVar7);
    local_60 = param_6 + (fVar6 + fVar9) * fVar7;
  }
  else if (param_8 == 4 || param_8 == 6) {
    uVar5 = 300;
    uVar4 = 0x32;
    local_68 = param_4;
    local_64 = param_5;
    local_60 = param_6;
  }
  fVar9 = (float)FUN_00371e50(DAT_0036c93c);
  FUN_0034035c(param_7,&local_74,&local_68,&local_5c,&local_34,&local_38,uVar5,uVar4,
               (int)(short)((short)(int)fVar9 + 0x14));
  return;
}

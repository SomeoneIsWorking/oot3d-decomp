// OoT3D decomp @ 002cebd0  name=FUN_002cebd0  size=1108

void FUN_002cebd0(float param_1,int param_2,float *param_3,float *param_4,int param_5,int param_6)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auStack_d8 [8];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;

  fVar1 = DAT_002cefac;
  if (DAT_002cefac < param_1) {
    pfVar4 = param_3;
    if (((*DAT_002cefb0 & 1) == 0) &&
       (uVar12 = FUN_003679b4(DAT_002cefb0), pfVar4 = (float *)((ulonglong)uVar12 >> 0x20),
       (int)uVar12 != 0)) {
      FUN_0036788c(DAT_002cefb4);
      pfVar4 = DAT_002cefbc;
    }
    fVar8 = DAT_002cefc4;
    uVar2 = DAT_002cefc0;
    local_40 = *param_3 + *param_4 * DAT_002cefc4;
    local_3c = param_3[1] + param_4[1] * DAT_002cefc4;
    param_2 = param_2 + param_5 * 4;
    local_38 = param_3[2] + param_4[2] * DAT_002cefc4;
    local_4c = DAT_002cefc8;
    local_48 = DAT_002cefc8;
    local_44 = DAT_002cefc8;
    local_58 = DAT_002cefcc;
    local_54 = DAT_002cefcc;
    local_50 = DAT_002cefcc;
    local_68 = DAT_002cefc4;
    local_64 = DAT_002cefc4;
    local_60 = DAT_002cefc4;
    local_5c = param_1;
    if (*(int *)(param_2 + 0x20) != 0) {
      if (((*DAT_002cefd0 & 1) == 0) &&
         (iVar3 = FUN_003679b4(DAT_002cefd0,pfVar4), pfVar4 = DAT_002cefd4, iVar3 != 0)) {
        *DAT_002cefd4 = fVar8;
        pfVar4[1] = fVar1;
        pfVar4[2] = fVar1;
        pfVar4[3] = fVar1;
        pfVar4[4] = fVar1;
        pfVar4[5] = fVar8;
        pfVar4[6] = fVar1;
        pfVar4[7] = fVar1;
        pfVar4[8] = fVar1;
        pfVar4[9] = fVar1;
        pfVar4[10] = fVar8;
        pfVar4[0xb] = fVar1;
      }
      FUN_00372224(&local_c8,DAT_002cefd4);
      fVar10 = -*param_4;
      fVar9 = -param_4[1];
      fVar5 = -param_4[2];
      fVar6 = fVar10 * fVar10 + fVar9 * fVar9;
      if (fVar1 < fVar6 + fVar5 * fVar5) {
        fVar7 = fVar8 / SQRT(fVar6 + fVar5 * fVar5);
        fVar9 = fVar9 * fVar7;
        fVar5 = fVar5 * fVar7;
        fVar6 = fVar1 * fVar10 * fVar7;
        fVar7 = fVar1 * fVar9 - DAT_002cefd8 * fVar10 * fVar7;
        fVar11 = DAT_002cefd8 * fVar5 - fVar1 * fVar9;
        fVar10 = fVar6 - fVar1 * fVar5;
        if (fVar1 < fVar11 * fVar11 + fVar10 * fVar10 + fVar7 * fVar7) {
          fVar5 = (float)FUN_00333ed8(fVar6 + DAT_002cefd8 * fVar9 + fVar1 * fVar5);
          FUN_0036c258(fVar5 * DAT_002cefdc * DAT_002cefe0 * DAT_002cefe4 * DAT_002cefe8,&local_cc,
                       &local_d0);
          fVar5 = fVar8 - local_d0;
          fVar8 = fVar8 / SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar7 * fVar7);
          fVar11 = fVar11 * fVar8;
          fVar10 = fVar10 * fVar8;
          fVar7 = fVar7 * fVar8;
          local_c4 = fVar5 * fVar11 * fVar10;
          local_b4 = local_d0 + fVar5 * fVar10 * fVar10;
          local_c8 = local_d0 + fVar5 * fVar11 * fVar11;
          local_c0 = fVar5 * fVar11 * fVar7;
          local_a0 = local_d0 + fVar5 * fVar7 * fVar7;
          local_b8 = local_c4 + local_cc * fVar7;
          local_c4 = local_c4 - local_cc * fVar7;
          fVar7 = fVar5 * fVar10 * fVar7;
          local_a8 = local_c0 - local_cc * fVar10;
          local_c0 = local_c0 + local_cc * fVar10;
          local_a4 = fVar7 + local_cc * fVar11;
          local_bc = fVar1;
          local_b0 = fVar7 - local_cc * fVar11;
          local_ac = fVar1;
          local_9c = fVar1;
        }
      }
      local_90 = 0;
      local_8c = 0;
      local_98 = local_58;
      local_78 = 0;
      local_94 = 0;
      local_84 = local_54;
      local_88 = 0;
      local_80 = 0;
      local_7c = 0;
      local_74 = 0;
      local_6c = 0;
      local_70 = local_50;
      FUN_0036c174(&local_98,&local_c8,&local_98);
      FUN_0032c78c(&local_98,&local_40,&local_98);
      *(undefined1 *)(*(int *)(param_2 + 0x20) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_2 + 0x20),&local_98);
      iVar3 = *(int *)(*(int *)(param_2 + 0x20) + 0x10);
      FUN_00333abc(iVar3,0,auStack_d8);
      local_cc = param_1;
      FUN_00333a38(iVar3,0,auStack_d8);
      **(undefined1 **)(iVar3 + 4) = 1;
      FUN_002cf064(uVar2,*(undefined4 *)(param_2 + 0x20),param_6 + 10);
    }
    iVar3 = *(int *)(param_2 + 0x90);
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x3c) = local_40;
      *(float *)(iVar3 + 0x40) = local_3c;
      *(float *)(iVar3 + 0x44) = local_38;
      iVar3 = *(int *)(param_2 + 0x90);
      *(undefined4 *)(iVar3 + 0x48) = local_4c;
      *(undefined4 *)(iVar3 + 0x4c) = local_48;
      *(undefined4 *)(iVar3 + 0x50) = local_44;
      iVar3 = *(int *)(param_2 + 0x90);
      *(float *)(iVar3 + 0xf0) = local_68;
      *(float *)(iVar3 + 0xf4) = local_64;
      *(float *)(iVar3 + 0xf8) = local_60;
      *(float *)(iVar3 + 0xfc) = local_5c;
      FUN_002c517c(uVar2,*(undefined4 *)(param_2 + 0x90),param_6 + 0x10);
    }
  }
  return;
}

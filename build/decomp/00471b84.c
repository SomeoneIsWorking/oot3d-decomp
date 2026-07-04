// OoT3D decomp @ 00471b84  name=FUN_00471b84  size=1840

undefined4 FUN_00471b84(int *param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_ac [5];
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  int local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  
  if (((*(byte *)(param_1 + 0x76) & param_2 | (int)param_2 >> 4) & 8) == 0) {
    FUN_002feabc(param_1[2],*param_1,param_1[3] - param_1[2],param_1[1] - *param_1);
    iVar2 = FUN_002dd704();
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x78 < iVar2) {
      iVar2 = 0x78;
    }
    FUN_002d5984(param_1[2],*param_1 + iVar2,param_1[3] - param_1[2],
                 (param_1[1] - iVar2) - (*param_1 + iVar2));
    fVar6 = DAT_00479258;
    fVar3 = DAT_00479254;
    fVar5 = (float)VectorSignedToFloat(param_1[3] - param_1[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat(param_1[1] - *param_1,(byte)(in_fpscr >> 0x15) & 3);
    param_1[9] = (int)(fVar8 / fVar5);
    fVar17 = DAT_00479264;
    fVar15 = DAT_00479260;
    fVar13 = DAT_0047925c;
    fVar12 = (float)param_1[4];
    if ((float)param_1[4] == fVar3) {
      fVar12 = fVar6;
    }
    fVar16 = (float)param_1[5];
    fVar14 = (float)param_1[6];
    FUN_0036c258(fVar12 * DAT_0047925c * DAT_00479260 * DAT_00479264,&local_64,&local_68);
    fVar1 = DAT_00479268;
    param_1[0x16] = (int)fVar3;
    param_1[0x17] = (int)fVar3;
    param_1[0x18] = (int)fVar3;
    param_1[0x19] = (int)fVar3;
    param_1[0x1b] = (int)fVar3;
    param_1[0x1c] = (int)fVar3;
    param_1[0x1d] = (int)fVar3;
    param_1[0x1e] = (int)fVar3;
    param_1[0x21] = (int)fVar3;
    iVar2 = DAT_0047926c;
    param_1[0x22] = (int)fVar3;
    param_1[0x23] = iVar2;
    param_1[0x24] = (int)fVar3;
    fVar10 = fVar1 / (fVar14 - fVar16);
    param_1[0x15] = (int)((local_68 / local_64) / (fVar8 / fVar5));
    param_1[0x1a] = (int)(local_68 / local_64);
    param_1[0x1f] = (int)(fVar14 * fVar10);
    param_1[0x20] = (int)(fVar14 * fVar16 * fVar10);
    fVar5 = DAT_00479270;
    if (*(char *)((int)param_1 + 0x1db) != '\0') {
      fVar12 = (float)param_1[8];
    }
    fVar8 = (float)param_1[5];
    if (fVar12 == fVar3) {
      fVar12 = fVar6;
    }
    fVar10 = (float)param_1[9];
    FUN_0036c258(fVar12 * fVar13 * fVar15 * fVar17,&local_64,&local_68);
    param_1[0x26] = (int)fVar3;
    param_1[0x27] = (int)fVar3;
    param_1[0x28] = (int)fVar3;
    param_1[0x29] = (int)fVar3;
    param_1[0x2b] = (int)fVar3;
    param_1[0x2c] = (int)fVar3;
    param_1[0x2d] = (int)fVar3;
    param_1[0x2e] = (int)fVar3;
    param_1[0x31] = (int)fVar3;
    param_1[0x32] = (int)fVar3;
    param_1[0x33] = iVar2;
    param_1[0x34] = (int)fVar3;
    fVar6 = fVar1 / (fVar5 - fVar8);
    param_1[0x25] = (int)((local_68 / local_64) / fVar10);
    param_1[0x2a] = (int)(local_68 / local_64);
    param_1[0x2f] = (int)(fVar5 * fVar6);
    param_1[0x30] = (int)(fVar5 * fVar8 * fVar6);
    fVar17 = (float)param_1[9];
    fVar15 = (float)param_1[5];
    fVar13 = (float)param_1[6];
    FUN_0036c258(DAT_00479274,&local_64,&local_68);
    param_1[0x36] = (int)fVar3;
    param_1[0x37] = (int)fVar3;
    param_1[0x38] = (int)fVar3;
    param_1[0x39] = (int)fVar3;
    param_1[0x3b] = (int)fVar3;
    param_1[0x3c] = (int)fVar3;
    param_1[0x3d] = (int)fVar3;
    param_1[0x3e] = (int)fVar3;
    param_1[0x41] = (int)fVar3;
    param_1[0x42] = (int)fVar3;
    param_1[0x43] = iVar2;
    param_1[0x44] = (int)fVar3;
    fVar6 = fVar1 / (fVar13 - fVar15);
    param_1[0x35] = (int)((local_68 / local_64) / fVar17);
    param_1[0x3a] = (int)(local_68 / local_64);
    param_1[0x3f] = (int)(fVar13 * fVar6);
    param_1[0x40] = (int)(fVar13 * fVar15 * fVar6);
    FUN_002cf9e0(param_1,param_1 + 0x15);
    FUN_002cf9e0(param_1,param_1 + 0x25);
    FUN_002cf9e0(param_1,param_1 + 0x35);
    if (*(char *)(DAT_00479278 + 0xe) != '\0') {
      local_6c = iVar2;
      local_68 = fVar1;
      local_64 = fVar1;
      local_ac[2] = 0;
      local_ac[3] = 0;
      local_ac[0] = iVar2;
      local_8c = 0;
      local_ac[1] = 0;
      local_98 = fVar1;
      local_ac[4] = 0;
      local_94 = 0;
      local_90 = 0;
      local_84 = fVar1;
      local_88 = 0;
      local_80 = 0;
      local_7c = 0;
      local_78 = 0;
      local_74 = 0;
      uStack_70 = 0x3f800000;
      FUN_002d9688(param_1 + 0x15,local_ac,param_1 + 0x15);
      FUN_002d9688(param_1 + 0x25,local_ac,param_1 + 0x25);
      FUN_002d9688(param_1 + 0x35,local_ac,param_1 + 0x35);
    }
    local_48 = (float)param_1[0xc];
    local_44 = (float)param_1[0xd];
    local_40 = param_1[0xe];
    local_54 = (float)param_1[0x12];
    local_50 = (float)param_1[0x13];
    local_4c = (float)param_1[0x14];
    local_60 = (float)param_1[0xf];
    local_5c = (float)param_1[0x10];
    local_58 = (float)param_1[0x11];
    FUN_002d9e68(param_1 + 0x45,&local_48,&local_54,&local_60);
    local_60 = fVar3;
    local_5c = fVar3;
    local_58 = fVar3;
    local_54 = fVar3;
    local_50 = fVar1;
    local_4c = fVar3;
    local_48 = fVar3;
    local_44 = fVar3;
    local_40 = DAT_0047927c;
    FUN_002d9e68(param_1 + 0x51,&local_60,&local_54,&local_48);
    param_1[0x5d] = param_1[0x45];
    param_1[0x5e] = param_1[0x46];
    param_1[0x5f] = param_1[0x47];
    param_1[0x60] = param_1[0x48];
    param_1[0x61] = param_1[0x49];
    param_1[0x62] = param_1[0x4a];
    param_1[99] = param_1[0x4b];
    param_1[100] = param_1[0x4c];
    param_1[0x65] = param_1[0x4d];
    param_1[0x66] = param_1[0x4e];
    param_1[0x67] = param_1[0x4f];
    param_1[0x68] = param_1[0x50];
    param_1[0x68] = (int)fVar3;
    param_1[100] = (int)fVar3;
    param_1[0x60] = (int)fVar3;
    FUN_0034a80c(param_1 + 0x5d,param_1 + 0x5d);
    if (((*DAT_00479280 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00479280), iVar2 != 0)) {
      FUN_0036788c(DAT_00479284);
    }
    *(int **)(DAT_00479284 + 0xfc) = param_1;
    return 1;
  }
  FUN_002feabc(param_1[2],*param_1,param_1[3] - param_1[2],param_1[1] - *param_1);
  iVar2 = FUN_002dd704();
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x78 < iVar2) {
    iVar2 = 0x78;
  }
  FUN_002d5984(param_1[2],*param_1 + iVar2,param_1[3] - param_1[2],
               (param_1[1] - iVar2) - (*param_1 + iVar2));
  fVar3 = (float)VectorSignedToFloat(param_1[3] - param_1[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(param_1[1] - *param_1,(byte)(in_fpscr >> 0x15) & 3);
  param_1[9] = (int)(fVar6 / fVar3);
  uVar11 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
  uVar9 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x15) & 3);
  FUN_00300aa8(uVar4,uVar7,uVar9,uVar11,param_1[5],param_1[6],param_1 + 0x15,0);
  uVar11 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
  uVar9 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x15) & 3);
  FUN_00300aa8(uVar4,uVar7,uVar9,uVar11,param_1[5],DAT_00471e38,param_1 + 0x25,0);
  uVar11 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
  uVar9 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x15) & 3);
  FUN_00300aa8(uVar4,uVar7,uVar9,uVar11,param_1[5],param_1[6],param_1 + 0x35,0);
  local_40 = param_1[0xf];
  FUN_002d9e68(param_1 + 0x45,&stack0xffffffd8,&stack0xffffffcc,&local_40);
  iVar2 = DAT_00471e3c;
  local_40 = DAT_00471e3c;
  FUN_002d9e68(param_1 + 0x51,&local_40,&stack0xffffffcc,&stack0xffffffd8);
  param_1[0x5d] = param_1[0x45];
  param_1[0x5e] = param_1[0x46];
  param_1[0x5f] = param_1[0x47];
  param_1[0x60] = param_1[0x48];
  param_1[0x61] = param_1[0x49];
  param_1[0x62] = param_1[0x4a];
  param_1[99] = param_1[0x4b];
  param_1[100] = param_1[0x4c];
  param_1[0x65] = param_1[0x4d];
  param_1[0x66] = param_1[0x4e];
  param_1[0x67] = param_1[0x4f];
  param_1[0x68] = param_1[0x50];
  param_1[0x68] = iVar2;
  param_1[100] = iVar2;
  param_1[0x60] = iVar2;
  FUN_0034a80c(param_1 + 0x5d,param_1 + 0x5d);
  if (((*DAT_00471e48 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00471e48), iVar2 != 0)) {
    FUN_0036788c(DAT_00471e4c);
  }
  *(int **)(DAT_00471e4c + 0xfc) = param_1;
  return 1;
}


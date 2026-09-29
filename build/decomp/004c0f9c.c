// OoT3D decomp @ 004c0f9c  name=FUN_004c0f9c  size=1504

void FUN_004c0f9c(undefined4 *param_1,int param_2)

{
  short sVar1;
  float *pfVar2;
  float fVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;

  if ((*(int *)(param_2 + 0x1d0) == 0) ||
     (iVar6 = FUN_0031b9c0(*(int *)(param_2 + 0x1d0),0), iVar6 == 0)) {
    if (*(char *)(param_2 + 0x250) != '\0') {
      return;
    }
  }
  else {
    FUN_0031b99c(*(undefined4 *)(param_2 + 0x1d0));
    *(undefined4 *)(param_2 + 0x1d0) = 0;
    if (*(int *)(param_2 + 0x1cc) != 0) {
      iVar6 = (int)*(short *)(param_2 + 0x224e);
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      FUN_004c60c0(*(undefined4 *)(DAT_004c103c + param_2),param_2 + 0x1cc,iVar6 + -1);
    }
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  pfVar2 = DAT_004c1040;
  iVar6 = (int)*(short *)(param_2 + 0x224e);
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  sVar1 = *(short *)(param_2 + 0xbe);
  fVar14 = DAT_004c4ba8;
  if (*(char *)(param_2 + 0x172b) != '\0') {
    fVar14 = DAT_004c4bac;
  }
  if (*(int *)(param_2 + 0x284) == 0x198) {
    sVar1 = sVar1 + -0x8000;
  }
  iVar8 = *(int *)(DAT_004c4bb0 + 4);
  if (*(char *)(param_2 + 0x172b) != '\0') {
    iVar8 = iVar8 + 2;
  }
  fVar10 = (float)FUN_002cfca0((int)sVar1,DAT_004c4bb0,DAT_004c1040,iVar6);
  pfVar9 = (float *)(DAT_004c4bb4 + iVar8 * 0xc);
  fVar21 = *pfVar2 + *pfVar9 * fVar10;
  fVar11 = pfVar2[1];
  fVar16 = pfVar9[1];
  fVar12 = (float)FUN_00338f60((int)sVar1);
  fVar3 = DAT_004c4bc4;
  fVar10 = DAT_004c4bc0;
  fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004c4bb8 + 0x788),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar12 = pfVar2[2] + (pfVar9[2] + fVar18 * DAT_004c4bbc) * fVar12;
  if ((*(char *)(param_2 + 0x172b) == '\0') &&
     (((iVar6 = FUN_0036c5bc(param_1,0), *(short *)(iVar6 + 0x18a) == 0x28 ||
       (iVar6 = FUN_0036c5bc(param_1,0), *(short *)(iVar6 + 0x18a) == 0x29)) ||
      (iVar6 = FUN_0036c5bc(param_1,0), *(short *)(iVar6 + 0x18a) == 0x38)))) {
    iVar6 = FUN_0036c5bc(param_1,0);
    iVar8 = FUN_0036c5bc(param_1,0);
    fVar19 = *(float *)(iVar6 + 0x80) - *(float *)(iVar8 + 0x8c);
    fVar18 = *(float *)(iVar6 + 0x88) - *(float *)(iVar8 + 0x94);
    fVar17 = fVar10 / SQRT(fVar19 * fVar19 + fVar3 * fVar3 + fVar18 * fVar18);
    iVar6 = FUN_0036c5bc(param_1,0);
    fVar21 = fVar21 - *(float *)(iVar6 + 0x8c);
    fVar12 = fVar12 - *(float *)(iVar6 + 0x94);
    fVar20 = SQRT(fVar21 * fVar21 + fVar3 * fVar3 + fVar12 * fVar12);
    fVar13 = fVar10 / fVar20;
    iVar6 = FUN_0036c5bc(param_1,0);
    fVar20 = fVar20 * (fVar19 * fVar17 * fVar21 * fVar13 + fVar3 * fVar17 * fVar3 * fVar13 +
                      fVar18 * fVar17 * fVar12 * fVar13);
    fVar21 = *(float *)(iVar6 + 0x8c) + fVar19 * fVar17 * fVar20;
    iVar6 = FUN_0036c5bc(param_1,0);
    fVar12 = *(float *)(iVar6 + 0x94) + fVar18 * fVar17 * fVar20;
  }
  local_54 = fVar21;
  local_50 = fVar11 + fVar16 + fVar14;
  local_4c = fVar12;
  iVar6 = FUN_0035bfb4(param_1 + 0x29c,*param_1);
  FUN_0035bf50(iVar6,param_1[0x29c],&local_54);
  fVar14 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar6 + 8),(byte)(in_fpscr >> 0x15) & 3);
  uVar15 = VectorFloatToUnsigned(fVar14 * (float)param_1[0xc87],3);
  *(char *)(iVar6 + 8) = (char)uVar15;
  fVar14 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar6 + 9),(byte)(in_fpscr >> 0x15) & 3);
  uVar15 = VectorFloatToUnsigned(fVar14 * (float)param_1[0xc87],3);
  *(char *)(iVar6 + 9) = (char)uVar15;
  fVar14 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar6 + 10),(byte)(in_fpscr >> 0x15) & 3);
  uVar15 = VectorFloatToUnsigned(fVar14 * (float)param_1[0xc87],3);
  *(char *)(iVar6 + 10) = (char)uVar15;
  FUN_0035bbe0(iVar6,*(undefined4 *)(param_2 + 0x29d4));
  FUN_00368704(param_1[0x17f2],*(undefined4 *)(param_2 + 0x29d4));
  uVar5 = DAT_004c4be0;
  uVar15 = DAT_004c4bdc;
  puVar4 = DAT_004c4bd8;
  fVar16 = DAT_004c4bd4;
  fVar12 = DAT_004c4bd0;
  fVar11 = DAT_004c4bcc;
  fVar14 = DAT_004c4bc8;
  iVar6 = 0;
  do {
    iVar8 = param_2 + iVar6 * 4;
    if (*(int *)(iVar8 + 0x244) != 0) {
      local_90 = 0;
      local_94 = 0;
      local_8c = local_54;
      local_98 = 0x3f800000;
      local_88 = 0;
      uStack_84 = 0x3f800000;
      local_80 = 0;
      local_78 = 0;
      local_7c = local_50;
      local_74 = 0;
      uStack_70 = 0x3f800000;
      local_6c = local_4c;
      if (((*puVar4 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_004c4bd8), iVar7 != 0)) {
        FUN_0036788c(DAT_004c4be4);
      }
      if (*(int *)(DAT_004c4be4 + 0xfc) != 0) {
        FUN_0036c174(&local_98,&local_98,*(int *)(DAT_004c4be4 + 0xfc) + 0x174);
      }
      if (iVar6 == 0) {
        fVar18 = (float)VectorUnsignedToFloat(param_1[0x16fd] * 1000,(byte)(in_fpscr >> 0x15) & 3);
        FUN_0036c258(fVar18 * fVar14 * fVar11 * fVar12 * fVar16 * fVar12,&local_58,&local_5c);
        fVar18 = fVar10 - local_5c;
        local_f8 = local_5c + fVar18 * fVar3;
        local_e4 = local_5c + fVar18 * fVar10;
        local_f4 = fVar18 * fVar3 * fVar10;
        local_d8 = fVar18 * fVar3 * fVar3;
        local_e8 = local_f4 + local_58 * fVar3;
        local_f4 = local_f4 - local_58 * fVar3;
        local_f0 = local_d8 + local_58 * fVar10;
        local_d8 = local_d8 - local_58 * fVar10;
        local_e0 = fVar18 * fVar10 * fVar3;
        local_d4 = local_e0 + local_58 * fVar3;
        local_e0 = local_e0 - local_58 * fVar3;
        local_ec = fVar3;
        local_dc = fVar3;
        local_d0 = local_f8;
        local_cc = fVar3;
        FUN_0036c174(&local_98,&local_98,&local_f8);
      }
      local_c4 = 0;
      local_b0 = 0;
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      local_ac = 0;
      local_a8 = 0;
      local_a4 = 0;
      local_9c = 0;
      local_c8 = uVar15;
      local_b4 = uVar15;
      local_a0 = uVar15;
      local_68 = uVar15;
      local_64 = uVar15;
      local_60 = uVar15;
      FUN_0036c174(&local_98,&local_98,&local_c8);
      FUN_003721e0(*(undefined4 *)(iVar8 + 0x244),&local_98);
      *(undefined1 *)(*(int *)(iVar8 + 0x244) + 0xac) = 1;
      if (((*puVar4 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_004c4bd8), iVar7 != 0)) {
        FUN_0036788c(DAT_004c4be4);
      }
      FUN_00330b98(uVar5,*(undefined4 *)(iVar8 + 0x244),1);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  return;
}

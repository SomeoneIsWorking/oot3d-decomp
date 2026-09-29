// OoT3D decomp @ 001d7fb4  name=FUN_001d7fb4  size=1232

void FUN_001d7fb4(int param_1,undefined4 param_2)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  short sVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 uStack_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 uStack_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;

  piVar5 = DAT_001d82ec;
  pcVar9 = (char *)(param_1 + 0xcac);
  sVar11 = 0;
  pcVar10 = pcVar9;
  do {
    if (*pcVar10 != '\0') {
      cVar2 = pcVar10[1];
      pcVar10[1] = cVar2 + -1;
      if ((char)(cVar2 + -1) == '\0') {
        *pcVar10 = '\0';
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar11 = sVar11 + 1;
    pcVar10 = pcVar10 + 0x38;
  } while (sVar11 < 10);
  local_68 = 8.40779e-44;
  uStack_64 = 0x14;
  local_70 = 3.57331e-43;
  local_6c = 1.4013e-43;
  bVar3 = false;
  FUN_0035619c(param_2,&uStack_44,&uStack_54,0xaa,0x82,0x5a);
  FUN_00342988(*(undefined4 *)(param_1 + 3000),&uStack_54,0xffffffff);
  fVar14 = DAT_001d82f8;
  fVar1 = DAT_001d82f4;
  sVar11 = 0;
  do {
    if (*pcVar9 != '\0') {
      local_38 = (float)VectorUnsignedToFloat((uint)(byte)pcVar9[1],(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorUnsignedToFloat((uint)(byte)pcVar9[2],(byte)(in_fpscr >> 0x15) & 3);
      local_38 = local_38 / fVar13;
      local_60 = *(float *)(pcVar9 + 4) * fVar1;
      local_5c = *(float *)(pcVar9 + 4) * fVar1;
      local_58 = fVar1;
      fVar13 = (float)VectorUnsignedToFloat((uint)(byte)pcVar9[2],(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorUnsignedToFloat((uint)(byte)pcVar9[1],(byte)(in_fpscr >> 0x15) & 3);
      iVar8 = (int)(short)(0xf - (short)(int)((fVar14 / fVar13) * fVar18));
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      FUN_003693b4(*(undefined4 *)(param_1 + 3000),pcVar9 + 0x14,0,&local_60,&uStack_44,iVar8);
      bVar3 = true;
    }
    sVar11 = sVar11 + 1;
    pcVar9 = pcVar9 + 0x38;
  } while (sVar11 < 10);
  if (bVar3) {
    FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 3000) + 8),0);
  }
  iVar8 = DAT_001d85a4;
  fVar1 = DAT_001d8304;
  iVar6 = *(int *)(param_1 + 0xbbc);
  if (iVar6 == DAT_001d8300) {
    uVar12 = in_fpscr & 0xfffffff;
    in_fpscr = uVar12 | (uint)(*(float *)(param_1 + 0x1e4) == DAT_001d8304) << 0x1e;
    if ((SUB41(in_fpscr >> 0x1e,0)) &&
       (in_fpscr = uVar12 | (uint)(*(float *)(param_1 + 0x1e0) == DAT_001d8304) << 0x1e,
       SUB41(in_fpscr >> 0x1e,0))) {
      *(undefined4 *)(param_1 + 0x50) = DAT_001d8308;
      local_40 = fVar1;
      local_3c = fVar1;
      local_38 = fVar1;
      *(undefined1 *)(*(int *)(param_1 + 0xbb0) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0xbb0),param_1 + 0x148);
      FUN_00372170(*(undefined4 *)(param_1 + 0xbb0),0);
      pfVar7 = (float *)(param_1 + 0x148);
      goto LAB_001d8520;
    }
  }
  iVar4 = DAT_001d85a0;
  if (iVar6 != DAT_001d85a0 && iVar6 != DAT_001d85a4) {
    iVar4 = DAT_001d85a8;
  }
  if ((iVar6 != DAT_001d85a0 && iVar6 != DAT_001d85a4) && iVar6 != iVar4) {
    *(float *)(param_1 + 0x50) = DAT_001d8304;
    local_34 = DAT_001d85bc;
    FUN_0035e3a4(param_1 + 0x9e0,0,(int)*(char *)((int)&local_34 + (uint)*(byte *)(param_1 + 0xc4c))
                );
    FUN_0035e3a4(param_1 + 0x9e0,1,*(undefined1 *)(param_1 + 0xc4d));
    FUN_0035e330(param_1 + 0x9e0);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001d85c4,DAT_001d85c0,param_1,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = DAT_001d85ac;
  local_40 = fVar1;
  local_3c = fVar1;
  local_38 = fVar1;
  fVar14 = fVar1;
  if (*(int *)(param_1 + 0xbbc) != iVar8) {
    fVar14 = *(float *)(param_1 + 0x6c);
  }
  fVar14 = fVar14 * DAT_001d85b0;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
  ;
  iVar8 = FUN_003695f8();
  if (iVar8 == 0) {
    *(int *)(param_1 + 0xf04) = *(int *)(param_1 + 0xf04) + 1;
  }
  fVar18 = DAT_001d85b8;
  local_70 = *(float *)(param_1 + 0x148);
  local_6c = *(float *)(param_1 + 0x14c);
  local_68 = *(float *)(param_1 + 0x150);
  uStack_64 = *(undefined4 *)(param_1 + 0x154);
  local_60 = *(float *)(param_1 + 0x158);
  local_5c = *(float *)(param_1 + 0x15c);
  local_58 = *(float *)(param_1 + 0x160);
  uStack_54 = *(undefined4 *)(param_1 + 0x164);
  local_50 = *(float *)(param_1 + 0x168);
  local_4c = *(float *)(param_1 + 0x16c);
  local_48 = *(float *)(param_1 + 0x170);
  uStack_44 = *(undefined4 *)(param_1 + 0x174);
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0),(byte)(in_fpscr >> 0x15) & 3);
  iVar8 = *(int *)(param_1 + 0xf04) * (short)(int)(fVar14 / fVar13) * DAT_001d85b4 >> 0x10;
  fVar15 = fVar15 * DAT_001d85b8;
  uVar12 = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar1) << 0x1e;
  if (!SUB41(uVar12 >> 0x1e,0)) {
    fVar16 = (float)FUN_003727f0(fVar15);
    fVar17 = (float)FUN_00372674(fVar15);
    fVar14 = local_6c * fVar16;
    local_6c = local_6c * fVar17 - local_70 * fVar16;
    fVar13 = local_5c * fVar16;
    local_5c = local_5c * fVar17 - local_60 * fVar16;
    fVar15 = local_4c * fVar16;
    local_4c = local_4c * fVar17 - local_50 * fVar16;
    local_70 = local_70 * fVar17 + fVar14;
    local_60 = local_60 * fVar17 + fVar13;
    local_50 = local_50 * fVar17 + fVar15;
  }
  if (iVar8 != 0) {
    fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(uVar12 >> 0x15) & 3);
    fVar14 = fVar14 * fVar18;
    if (fVar14 != fVar1) {
      fVar18 = (float)FUN_003727f0(fVar14);
      fVar15 = (float)FUN_00372674(fVar14);
      fVar1 = local_68 * fVar18;
      local_68 = local_68 * fVar15 - local_6c * fVar18;
      fVar14 = local_58 * fVar18;
      local_58 = local_58 * fVar15 - local_5c * fVar18;
      fVar13 = local_48 * fVar18;
      local_48 = local_48 * fVar15 - local_4c * fVar18;
      local_6c = local_6c * fVar15 + fVar1;
      local_5c = local_5c * fVar15 + fVar14;
      local_4c = local_4c * fVar15 + fVar13;
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0xbb4) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0xbb4),&local_70);
  FUN_00372170(*(undefined4 *)(param_1 + 0xbb4),0);
  pfVar7 = &local_70;
LAB_001d8520:
  FUN_003735ac(param_1 + 0x3c,pfVar7,&local_40);
  return;
}

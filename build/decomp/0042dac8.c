// OoT3D decomp @ 0042dac8  name=FUN_0042dac8  size=692

void FUN_0042dac8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint in_fpscr;
  int iVar10;
  int iVar11;
  float fVar12;
  char local_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  
  if (param_1 == 0) {
    return;
  }
  iVar10 = (int)*(float *)(param_1 + 0x34);
  uVar9 = *(uint *)(param_1 + 0x14) & 0xfffffff;
  iVar11 = (int)*(float *)(param_1 + 0x38);
  if (*(char *)(DAT_0042dd7c + 0xe) != '\0') {
    fVar12 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    iVar10 = (int)-fVar12;
  }
  uVar8 = 0;
  if (0x100 < iVar11 * iVar11 + iVar10 * iVar10) {
    iVar4 = iVar10;
    if (iVar10 < 0) {
      iVar4 = -iVar10;
    }
    iVar7 = iVar11;
    if (iVar11 < 0) {
      iVar7 = -iVar11;
    }
    iVar11 = iVar11 * 100;
    iVar10 = iVar10 * 100;
    if (iVar11 + iVar4 * -0x32 == 0 || iVar11 < iVar4 * 0x32) {
      if (iVar11 < iVar4 * -0x32) {
        uVar8 = 0x80;
      }
    }
    else {
      uVar8 = 0x40;
    }
    if (iVar10 < iVar7 * 0x32) {
      if (iVar10 + iVar7 * 0x32 == 0 || iVar10 < iVar7 * -0x32) {
        uVar8 = uVar8 | 0x20;
      }
    }
    else {
      uVar8 = uVar8 | 0x10;
    }
  }
  iVar10 = FUN_002f43e8();
  if ((((iVar10 == 1) && (iVar10 = FUN_002fbc38(), iVar10 == 0)) &&
      (iVar10 = FUN_002f2c3c(), iVar10 == 0)) && (*(char *)(param_1 + 0x100) != '\a')) {
    uVar8 = 0;
    uVar9 = uVar8;
  }
  puVar1 = DAT_0042dd80;
  if ((uVar9 & 0xf0) != 0) {
    uVar8 = 0;
  }
  uVar2 = *DAT_0042dd80;
  *DAT_0042dd80 = uVar8;
  uVar5 = uVar8 & ~uVar2;
  puVar1[2] = uVar5;
  uVar2 = puVar1[1];
  puVar1[1] = uVar9;
  uVar2 = uVar9 & ~uVar2;
  uVar3 = 0;
  puVar1[3] = uVar2;
  if (uVar8 == 0) {
    puVar1[5] = 0;
    puVar1[4] = 0;
    uVar5 = uVar3;
  }
  else if (uVar5 == 0) {
    if ((int)puVar1[4] < 0xc) {
      puVar1[4] = puVar1[4] + 1;
      uVar5 = uVar3;
    }
    else {
      uVar6 = puVar1[5];
      puVar1[5] = uVar6 + 1;
      uVar5 = uVar3;
      if (2 < (int)(uVar6 + 1)) {
        puVar1[5] = 0;
        uVar5 = uVar8;
      }
    }
  }
  puVar1[8] = uVar5;
  if (uVar9 == 0) {
    puVar1[7] = 0;
  }
  uVar8 = 0;
  if (uVar9 == 0) {
    puVar1[6] = 0;
    uVar2 = uVar8;
  }
  else if (uVar2 == 0) {
    if ((int)puVar1[6] < 0xc) {
      puVar1[6] = puVar1[6] + 1;
      uVar2 = uVar8;
    }
    else {
      uVar5 = puVar1[7];
      puVar1[7] = uVar5 + 1;
      uVar2 = uVar8;
      if (2 < (int)(uVar5 + 1)) {
        puVar1[7] = 0;
        uVar2 = uVar9;
      }
    }
  }
  puVar1[9] = uVar2;
  FUN_002f9484(auStack_18,auStack_1c,local_20);
  if (local_20[0] != '\0') {
    iVar10 = FUN_002fcad4();
    if (((iVar10 == 0) && (iVar10 = FUN_002fcdd4(), iVar10 == 0)) &&
       (iVar10 = FUN_002fcaec(), iVar10 == 0)) {
      iVar10 = FUN_0043c0e4();
      if (iVar10 == 0) {
        puVar1[9] = 0;
        puVar1[3] = 0;
        puVar1[1] = 0;
        puVar1[8] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        return;
      }
    }
    else {
      *puVar1 = *puVar1 & 0x300;
      puVar1[2] = puVar1[2] & 0x300;
      puVar1[8] = puVar1[8] & 0x300;
      puVar1[1] = puVar1[1] & 0x300;
      puVar1[3] = puVar1[3] & 0x300;
      puVar1[9] = puVar1[9] & 0x300;
    }
  }
  return;
}


// OoT3D decomp @ 0041decc  name=FUN_0041decc  size=916

void FUN_0041decc(int param_1)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float local_2c;
  float local_28;

  uVar6 = (uint)*(byte *)(param_1 + 0x100);
  bVar11 = uVar6 != 3;
  if (!bVar11) {
    uVar6 = (uint)*(byte *)(param_1 + 0x101);
  }
  if (bVar11 || uVar6 != 2) {
    return;
  }
  bVar11 = param_1 == 0;
  if (!bVar11) {
    uVar6 = param_1 + 0x2ba4;
    bVar11 = uVar6 == 0;
  }
  if (bVar11) {
    return;
  }
  uVar9 = (uint)*(ushort *)(uVar6 + 0x226);
  FUN_0042bf00((int)*(short *)(uVar6 + 0x230),param_1);
  iVar2 = DAT_0041e260;
  uVar7 = *(uint *)(DAT_0041e260 + 0x4c);
  if (uVar9 == uVar7) {
    if (uVar9 == 10) goto LAB_0041df44;
  }
  else {
    if (uVar9 == 10) {
LAB_0041df44:
      if ((*(int *)(DAT_0041e260 + 0x54) != 999) || (uVar7 == 0xffffffff)) goto code_r0x0041df70;
      *(uint *)(DAT_0041e260 + 0x50) = uVar7;
      *(undefined4 *)(iVar2 + 0x4c) = 0xffffffff;
    }
    else {
      *(uint *)(DAT_0041e260 + 0x50) = uVar7;
      *(uint *)(iVar2 + 0x4c) = uVar9;
    }
    *(undefined4 *)(iVar2 + 0x54) = 0;
  }
code_r0x0041df70:
  FUN_0042b194();
  FUN_0042a7b0(param_1);
  fVar4 = DAT_0041e268;
  fVar3 = DAT_0041e264;
  iVar10 = 0;
  fVar12 = (float)VectorUnsignedToFloat
                            ((uint)*(ushort *)(uVar6 + 0x28c),(byte)(in_fpscr >> 0x15) & 3);
  do {
    local_2c = fVar3;
    if (fVar12 == fVar4) {
      local_2c = fVar4;
    }
    if (*(int *)(iVar2 + 0x48) != 0) {
      local_2c = fVar3;
    }
    FUN_002fcdec(*(undefined4 *)(iVar2 + 0x18),&local_2c,1,iVar10);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 8);
  local_28 = fVar4;
  iVar8 = FUN_002fcdd4();
  iVar10 = DAT_0041e270;
  uVar5 = DAT_0041e26c;
  if (iVar8 == 0) {
    sVar1 = *(short *)(DAT_0041e270 + 0x5e);
    if (sVar1 == 0 || sVar1 == 10) {
      if (*(short *)(DAT_0041e270 + 0x62) == 0) goto LAB_0041e038;
      if (sVar1 != 0) goto LAB_0041e014;
      sVar1 = *(short *)(DAT_0041e270 + 100);
    }
    else {
LAB_0041e014:
      sVar1 = *(short *)(DAT_0041e270 + 0x60);
    }
    FUN_002fcc88(DAT_0041e274,DAT_0041e26c,*(undefined4 *)(iVar2 + 0x2c));
    FUN_00424cb4(*(undefined4 *)(iVar2 + 0x2c),(int)sVar1);
    local_28 = fVar3;
  }
LAB_0041e038:
  FUN_002fcdec(*(undefined4 *)(iVar2 + 0x18),&local_28,1,5);
  local_28 = fVar4;
  iVar8 = FUN_0037577c(param_1);
  if (iVar8 == 0) {
    if (*(short *)(iVar10 + 0x94) == 1) {
      FUN_002fcdec(*(undefined4 *)(iVar2 + 0x18),&local_28,1,5);
      FUN_002fcc88(DAT_0041e278,uVar5,*(undefined4 *)(iVar2 + 0x30));
      FUN_002fcb04(*(undefined4 *)(iVar2 + 0x30),*(undefined2 *)(iVar10 + 0x96),0);
      local_28 = fVar3;
    }
    else {
      FUN_002fcc88(DAT_0041e280,DAT_0041e27c,*(undefined4 *)(iVar2 + 0x30));
    }
  }
  iVar8 = FUN_002fd25c();
  if (iVar8 == 0) {
    local_28 = fVar4;
  }
  FUN_002fcdec(*(undefined4 *)(iVar2 + 0x18),&local_28,1,6);
  iVar8 = FUN_002fcaec();
  if (((iVar8 != 0) || (iVar8 = FUN_002fcdd4(), iVar8 != 0)) || (iVar8 = FUN_002fcad4(), iVar8 != 0)
     ) {
    if (((*DAT_0041e284 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_0041e284), iVar8 != 0)) {
      FUN_0036788c(DAT_0041e288);
    }
    FUN_00328350(DAT_0041e294,3,*(undefined4 *)(iVar2 + 0x70),10);
    FUN_00425300(*(undefined4 *)(iVar2 + 0x34));
  }
  *(undefined4 *)(iVar2 + 8) = 1;
  *(undefined4 *)(iVar2 + 0xc) = 2;
  *(undefined4 *)(iVar2 + 0x10) = 0x400;
  *(undefined4 *)(iVar2 + 0x14) = 0x800;
  if (*(int *)(iVar2 + 0x38) != 0) {
    FUN_00428cbc();
  }
  if (*(int *)(iVar2 + 0x3c) != 0) {
    FUN_0042f794();
  }
  if (*(int *)(iVar2 + 0x40) != 0) {
    iVar8 = *(int *)(iVar2 + 0x48);
    if (iVar8 == 1) {
      uVar6 = (int)*(char *)(DAT_0041e298 + param_1) - 1;
    }
    else if (iVar8 == 2) {
      uVar6 = (uint)*(char *)(DAT_0041e29c + param_1);
    }
    else if (iVar8 == 4) {
      uVar6 = (uint)*(ushort *)(DAT_0041e2a0 + param_1);
    }
    else {
      if (iVar8 != 5) goto LAB_0041e21c;
      uVar6 = (uint)*(char *)((uint)*(byte *)(DAT_0041e2a4 + 3) + DAT_0041e2a8);
    }
    *(uint *)(*(int *)(iVar2 + 0x40) + 0x42c) = uVar6;
  }
LAB_0041e21c:
  if ((*(short *)(iVar10 + 0x5e) != 0 && *(short *)(iVar10 + 0x5e) != 10) ||
     (*(short *)(iVar10 + 0x62) != 0)) {
    FUN_002fc950(*(undefined4 *)(iVar2 + 0x2c));
  }
  FUN_0042b58c();
  FUN_0042b848();
  return;
}

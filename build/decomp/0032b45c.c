// OoT3D decomp @ 0032b45c  name=FUN_0032b45c  size=524

void FUN_0032b45c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x1aa);
  if (uVar3 < 0xfe) {
    if (uVar3 == 0xfc) {
      cVar8 = '\x01';
    }
    else if (uVar3 == 0x59) {
      cVar8 = '\x02';
    }
    else {
      cVar8 = *(char *)(DAT_0032b668 + uVar3);
    }
  }
  else {
    cVar8 = '\0';
  }
  FUN_0035d27c(param_1,DAT_0032b66c);
  FUN_0034bbfc(param_1);
  iVar9 = DAT_0032b678;
  iVar7 = (int)*(char *)(DAT_0032b674 +
                         (uint)*(byte *)(DAT_0032b670 + (uint)*(byte *)(param_1 + 0x1b0) * 5) * 6 +
                        (uint)*(byte *)(DAT_0032b670 + (uint)*(byte *)(param_1 + 0x1b1) * 5));
  uVar3 = param_1 + 0x100;
  if (cVar8 == '\x1e' || cVar8 == '\x14') {
    iVar7 = 0xd;
  }
  else if ((cVar8 == '\0') &&
          (*(char *)(param_1 + 0x1a9) == '\x1e' || *(char *)(param_1 + 0x1a9) == '\x14')) {
    iVar7 = -0xd;
  }
  iVar5 = iVar7;
  if (iVar7 < 0) {
    iVar5 = -iVar7;
  }
  *(char *)(param_1 + 0x1b2) = (char)iVar5;
  iVar9 = *(int *)(iVar9 + (char)iVar5 * 8);
  if (iVar9 == 0xaa) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1a6);
  }
  if (iVar9 == 0xaa && uVar3 == 0) {
    iVar9 = 0xa8;
  }
  uVar4 = FUN_003603c0(param_1 + 0x254,iVar9);
  iVar5 = *(int *)(param_1 + 0x284);
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  iVar6 = iVar5 - DAT_0032b67c;
  if (iVar5 == DAT_0032b67c) {
    FUN_00317dbc(param_1 + 0x254,DAT_0032b684);
    goto LAB_0032b60c;
  }
  if (iVar5 == DAT_0032b67c || iVar5 < DAT_0032b67c) {
    if (iVar5 == 0x23) {
      sVar2 = *(short *)(param_1 + 0x1758) + 0x4000;
    }
    else {
      if (iVar5 != 0x25) {
        if (iVar5 != 0x109) goto LAB_0032b60c;
        goto LAB_0032b5a8;
      }
      sVar2 = *(short *)(param_1 + 0x1758) + -0x4000;
    }
    *(short *)(param_1 + 0x1758) = sVar2;
  }
  else {
    if (iVar6 == 2) {
      FUN_00317dbc(param_1 + 0x254,DAT_0032b680);
      goto LAB_0032b60c;
    }
    if (iVar6 == 0x1d) {
      FUN_00317dbc(param_1 + 0x254,DAT_0032b688);
      goto LAB_0032b60c;
    }
    if (iVar6 != 0x1f) goto LAB_0032b60c;
LAB_0032b5a8:
    FUN_00317dbc(param_1 + 0x254,0x230);
  }
LAB_0032b60c:
  uVar11 = uVar4;
  uVar1 = DAT_0032b68c;
  fVar10 = DAT_0032b690;
  if (-1 < iVar7) {
    uVar11 = DAT_0032b68c;
    uVar1 = uVar4;
    fVar10 = DAT_0032b694;
  }
  if (cVar8 != '\0') {
    fVar10 = fVar10 * DAT_0032b698;
  }
  FUN_00360190(fVar10,uVar11,uVar1,param_1 + 0x1764,param_2,iVar9,2);
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xfffffeff;
  return;
}


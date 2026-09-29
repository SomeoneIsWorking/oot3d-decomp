// OoT3D decomp @ 0037aedc  name=FUN_0037aedc  size=1008

void FUN_0037aedc(int param_1,int param_2)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  FUN_003510b0(param_1,DAT_0037b2cc);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0037b2d0 + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  uVar4 = ObjectBankArchive_00358ef8(iVar3 + 0x10,*(short *)(param_1 + 0x1c) == -1);
  if (((*DAT_0037b2d4 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0037b2d4), iVar5 != 0)) {
    FUN_0036788c(DAT_0037b2d8);
  }
  piVar9 = *(int **)(DAT_0037b2d8 + 0x17c);
  piVar9[2] = *(int *)(param_1 + 0x178);
  uVar4 = (**(code **)(*piVar9 + 8))(piVar9,uVar4,1);
  *(undefined4 *)(param_1 + 0x1dc) = uVar4;
  piVar9[2] = 0;
  iVar5 = 0;
  do {
    TorchAnimationModel_0034f94c(param_1 + iVar5 * 0xc + 0x1e0,param_2,param_1,0xb);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  FUN_003532e8(param_1,1);
  uVar4 = FUN_003532c0(iVar3 + 0x10,*(short *)(param_1 + 0x1c) == -1);
  uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar4);
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  uVar4 = DAT_0037b30c;
  iVar3 = DAT_0037b2e4;
  if (*(short *)(param_1 + 0x1c) != -1) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      fVar13 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar16 = DAT_0037b310;
      fVar12 = *(float *)(param_1 + 0x30);
      fVar13 = fVar13 * DAT_0037b310;
      fVar17 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      iVar3 = FUN_0036aa20(*(float *)(param_1 + 0x28) - fVar17 * fVar16,
                           *(undefined4 *)(param_1 + 0x2c),fVar12 + fVar13,param_2 + 0x208c,param_1,
                           param_2,0x4a,(int)*(short *)(param_1 + 0xbc),
                           (int)*(short *)(param_1 + 0xbe),0,1);
      if (iVar3 == 0) {
        FUN_00374428(param_1);
        FUN_00374428(*(undefined4 *)(param_1 + 0x124));
      }
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar4;
    goto LAB_0037b268;
  }
  iVar5 = *(int *)(DAT_0037b2e4 + 4);
  if ((iVar5 == 0) && (*(int *)(DAT_0037b2e4 + 0x14e8) < 4)) {
    FUN_00374428(param_1);
    return;
  }
  iVar7 = *(int *)(DAT_0037b2e4 + 0x14e8);
  uVar1 = (undefined2)DAT_0037b2e8;
  if (iVar7 == 6) {
LAB_0037b0b4:
    *(undefined2 *)(param_1 + 0xbc) = 0;
  }
  else {
    if (iVar7 != 4 && iVar7 != 5) {
      if (iVar5 != 0) {
        iVar7 = *(int *)(DAT_0037b2e4 + 0x10);
      }
      if (iVar5 == 0 || iVar7 == 0) goto LAB_0037b0b4;
    }
    *(undefined2 *)(param_1 + 0xbc) = uVar1;
  }
  if (*(int *)(iVar3 + 0x14e8) != 6) {
    uVar6 = *(uint *)(iVar3 + 0xbc);
    uVar8 = *(uint *)(DAT_0037b2ec + 0x48);
    bVar10 = (uVar8 & uVar6) != 0;
    if (bVar10) {
      uVar8 = *(uint *)(DAT_0037b2ec + 0x4c);
    }
    bVar11 = (uVar8 & uVar6) != 0;
    uVar8 = DAT_0037b2ec;
    if (bVar10 && bVar11) {
      uVar8 = *(uint *)(DAT_0037b2ec + 0x50);
    }
    if (((bVar10 && bVar11) && (uVar6 & uVar8) != 0) &&
       ((*(ushort *)(DAT_0037b2f0 + 0xfc) & 1) == 0)) {
      *(undefined2 *)(param_1 + 0xbc) = uVar1;
    }
  }
  fVar12 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
  fVar16 = DAT_0037b2f4;
  fVar12 = fVar12 * DAT_0037b2f4;
  fVar13 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbc));
  fVar17 = DAT_0037b2f8;
  fVar13 = fVar13 * DAT_0037b2f8;
  fVar14 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbc));
  fVar15 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
  fVar18 = fVar14 * fVar16 - fVar15 * fVar17;
  fVar16 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  fVar16 = fVar16 * DAT_0037b2fc;
  fVar17 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar14 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar14 = fVar14 * DAT_0037b300;
  fVar15 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  sVar2 = 0;
  if (*(short *)(param_1 + 0xbc) != 0) {
    sVar2 = (short)DAT_0037b304;
  }
  iVar3 = FUN_0036aa20(*(float *)(param_1 + 0x28) + fVar16 + fVar18 * fVar17,
                       *(float *)(param_1 + 0x2c) + (fVar12 - fVar13),
                       *(float *)(param_1 + 0x30) + fVar14 + fVar18 * fVar15,param_2 + 0x208c,
                       param_1,param_2,0x4a,(int)sVar2,(int)*(short *)(param_1 + 0xbe),0,0);
  if (iVar3 == 0) {
    FUN_00374428(param_1);
  }
  *(undefined4 *)(param_1 + 0x1bc) = DAT_0037b308;
  *(undefined2 *)(param_1 + 0x1f8) = 0x28;
LAB_0037b268:
  if (*(short *)(param_1 + 0x1c) < 0) {
    return;
  }
  uVar4 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c0) = uVar4;
  uVar4 = DAT_0037b314;
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar4 = DAT_0037b318;
  }
  FUN_0036f410(uVar4,DAT_0037b320,DAT_0037b31c,param_1 + 0x1c4,0xff,0xff,0,0,0);
  return;
}

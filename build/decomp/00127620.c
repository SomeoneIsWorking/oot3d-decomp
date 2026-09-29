// OoT3D decomp @ 00127620  name=FUN_00127620  size=764

void FUN_00127620(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  iVar8 = *(int *)(param_2 + 0x20ac);
  iVar9 = 0x10 - (uint)*(byte *)(param_1 + 0x8f8);
  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x8fa) != 0) {
    *(short *)(param_1 + 0x8fa) = *(short *)(param_1 + 0x8fa) + -1;
  }
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  if (iVar9 < 0x10) {
    fVar10 = (float)FUN_002cfca0((int)(short)((ushort)*(byte *)(param_1 + 0x8f8) << 0xb));
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x36) = (short)(int)(fVar11 + ABS(fVar10) * DAT_0012791c);
  }
  FUN_00373500(DAT_00127928,DAT_00127924,DAT_00127920,param_1 + 0x908);
  uVar2 = DAT_00127930;
  uVar1 = DAT_0012792c;
  FUN_00373500(*(undefined4 *)(iVar8 + 0x28),DAT_00127930,DAT_0012792c,param_1 + 8);
  FUN_00373500(*(undefined4 *)(iVar8 + 0x30),uVar2,uVar1,param_1 + 0x10);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x36),1,0x800,0x200);
  fVar13 = DAT_0012793c;
  fVar11 = DAT_00127938;
  uVar3 = DAT_00127934;
  fVar12 = *(float *)(param_1 + 8) - *(float *)(iVar8 + 0x28);
  fVar7 = (float)(DAT_00127934 | DAT_00127934 << 0xc);
  fVar10 = DAT_00127938;
  if (((int)DAT_00127934 < (int)fVar12) || (fVar10 = DAT_0012793c, (uint)fVar7 < (uint)fVar12)) {
    *(float *)(param_1 + 8) = *(float *)(iVar8 + 0x28) + fVar10;
  }
  fVar10 = *(float *)(param_1 + 0x10) - *(float *)(iVar8 + 0x30);
  if (((int)uVar3 < (int)fVar10) || (fVar11 = fVar13, (uint)fVar7 < (uint)fVar10)) {
    *(float *)(param_1 + 0x10) = *(float *)(iVar8 + 0x30) + fVar11;
  }
  fVar10 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x908) * fVar10;
  fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  uVar5 = DAT_0012794c;
  iVar9 = DAT_00127948;
  uVar4 = DAT_00127944;
  uVar1 = DAT_00127940;
  iVar8 = DAT_00127948 + -0x78;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x908) * fVar10;
  if (*(short *)(param_1 + 0x8fa) == 0) {
    FUN_00370350(uVar1,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    *(undefined2 *)(param_1 + 0x8fa) = 0x18;
    *(byte *)(param_1 + 0x949) = *(byte *)(param_1 + 0x949) & 0xfc;
    FUN_00375bcc(param_1,iVar9);
    FUN_00375bcc(param_1,iVar8);
    *(undefined4 *)(param_1 + 0x8f4) = uVar5;
  }
  else if (*(short *)(param_1 + 0x8fe) == 0) {
    *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_1 + 0x924);
    *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(param_1 + 0x928);
    *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0x92c);
    *(undefined2 *)(param_1 + 0x8fe) = 0x46;
    *(undefined2 *)(param_1 + 0x8fc) = *(undefined2 *)(param_1 + 0xbe);
  }
  iVar6 = *(int *)(param_2 + 0x20ac);
  if (*(char *)(param_1 + 0x8f8) == '\0') {
    *(undefined1 *)(param_1 + 0x8f8) = 0x20;
  }
  *(char *)(param_1 + 0x8f8) = *(char *)(param_1 + 0x8f8) + -1;
  fVar10 = DAT_00127950;
  fVar11 = *(float *)(param_1 + 0x84);
  if (fVar11 == -32000.0) {
    FUN_00370350(uVar1,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    *(undefined2 *)(param_1 + 0x8fa) = 0x18;
    *(byte *)(param_1 + 0x949) = *(byte *)(param_1 + 0x949) & 0xfc;
    FUN_00375bcc(param_1,iVar9);
    FUN_00375bcc(param_1,iVar8);
    *(undefined4 *)(param_1 + 0x8f4) = uVar5;
  }
  else {
    fVar13 = *(float *)(iVar6 + 0x2c);
    if (fVar11 < fVar13) {
      fVar11 = fVar13;
    }
    FUN_00373500(fVar11 + DAT_00127950,uVar2,DAT_00127954,param_1 + 0xc);
    fVar11 = (float)FUN_002cfca0((int)(short)((ushort)*(byte *)(param_1 + 0x8f8) << 0xb));
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar11 * fVar10;
  }
  FUN_00373264(param_1,DAT_00127958);
  return;
}

// OoT3D decomp @ 0028d1c4  name=FUN_0028d1c4  size=1032

void FUN_0028d1c4(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  byte bVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  pfVar5 = DAT_0028d5d0;
  piVar4 = DAT_0028d5cc;
  FUN_0036c5d8(param_1,DAT_0028d5d0 + 3,DAT_0028d5cc[1] + 0x28);
  FUN_0036c5d8(param_1,pfVar5,*piVar4 + 0x28);
  sVar2 = *(short *)(param_1 + 0xbe);
  *(short *)(piVar4 + -0x15) = *(short *)(*piVar4 + 0xbe) - sVar2;
  *(short *)((int)piVar4 + -0x52) = *(short *)(piVar4[1] + 0xbe) - sVar2;
  FUN_0029f8a0(param_1,param_2);
  (**(code **)(param_1 + 0x22c))(param_1,param_2);
  if (*(char *)(param_1 + 0x230) != '\0') {
    if ((*(char *)(DAT_0028d5d4 + param_2) == '\0') || (*(short *)(DAT_0028d5d8 + param_1) != 0)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
    }
  }
  iVar10 = param_1 + 0xeec;
  iVar11 = param_2 + 0x5c78;
  if ((*(byte *)(param_1 + 0xefc) & 1) != 0) {
    FUN_003761f0(param_2,iVar11,iVar10);
  }
  iVar8 = *(int *)(param_1 + 0x22c);
  iVar9 = DAT_0028d5dc;
  if (iVar8 != DAT_0028d5dc) {
    iVar9 = DAT_0028d5e0;
  }
  if (iVar8 != DAT_0028d5dc && iVar8 != iVar9) {
    if ((*(byte *)(DAT_0028d5e4 + param_1) & 1) != 0) {
      FUN_00376168(param_2,iVar11,param_1 + 0x127c);
    }
    FUN_00376168(param_2,iVar11,iVar10);
  }
  if ((*(byte *)(param_1 + 0xefe) & 1) != 0) {
    FUN_003762a4(param_2,iVar11,iVar10);
  }
  fVar14 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar15 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  pfVar6 = DAT_0028d5ec;
  if (*(int *)(param_1 + 0x22c) != DAT_0028d5e8) {
    *(float *)(param_1 + 0x28) = *DAT_0028d5ec + *(float *)(param_1 + 0xedc) * fVar14;
    *(float *)(param_1 + 0x30) = pfVar6[2] + *(float *)(param_1 + 0xedc) * fVar15;
  }
  pfVar6 = DAT_0028d5d0;
  iVar10 = *piVar4;
  fVar16 = *DAT_0028d5d0;
  *(float *)(iVar10 + 0x28) =
       DAT_0028d5d0[2] * fVar14 + fVar16 * fVar15 + *(float *)(param_1 + 0x28);
  *(float *)(iVar10 + 0x2c) = *(float *)(param_1 + 0x2c) + pfVar6[1];
  fVar7 = DAT_0028d5f0;
  fVar17 = fVar14 * DAT_0028d5f0;
  *(float *)(iVar10 + 0x30) = (*(float *)(param_1 + 0x30) + pfVar6[2] * fVar15) - fVar16 * fVar14;
  fVar16 = DAT_0028d5f4;
  fVar18 = (float)VectorSignedToFloat((int)*(char *)(iVar10 + 0x230),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(iVar10 + 8) = fVar17 + fVar18 * DAT_0028d5f4 * fVar15 + *(float *)(param_1 + 0x28);
  *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  fVar18 = (float)VectorSignedToFloat((int)*(char *)(iVar10 + 0x230),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(iVar10 + 0x10) =
       (*(float *)(param_1 + 0x30) + fVar15 * fVar7) - fVar18 * fVar16 * fVar14;
  *(undefined2 *)(iVar10 + 0x16) = *(undefined2 *)(param_1 + 0xbe);
  *(short *)(iVar10 + 0xbe) = (short)piVar4[-0x15] + *(short *)(param_1 + 0xbe);
  fVar18 = *(float *)(iVar10 + 0x2c);
  fVar19 = *(float *)(iVar10 + 0x84);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar18 < fVar19) << 0x1f | (uint)(fVar18 == fVar19) << 0x1e;
  bVar3 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar3 >> 6 & 1) || (bool)(bVar3 >> 7) != (NAN(fVar18) || NAN(fVar19))) {
    fVar18 = fVar19;
  }
  *(float *)(iVar10 + 0x2c) = fVar18;
  iVar11 = piVar4[1];
  *(float *)(iVar11 + 0x28) = pfVar5[5] * fVar14 + pfVar5[3] * fVar15 + *(float *)(param_1 + 0x28);
  *(float *)(iVar11 + 0x2c) = *(float *)(param_1 + 0x2c) + pfVar5[4];
  *(float *)(iVar11 + 0x30) = (*(float *)(param_1 + 0x30) + pfVar5[5] * fVar15) - pfVar5[3] * fVar14
  ;
  fVar18 = (float)VectorSignedToFloat((int)*(char *)(iVar11 + 0x230),(byte)(uVar1 >> 0x15) & 3);
  *(float *)(iVar11 + 8) = fVar17 + fVar18 * fVar16 * fVar15 + *(float *)(param_1 + 0x28);
  *(undefined4 *)(iVar11 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  fVar18 = (float)VectorSignedToFloat((int)*(char *)(iVar11 + 0x230),(byte)(uVar1 >> 0x15) & 3);
  *(float *)(iVar11 + 0x10) =
       (*(float *)(param_1 + 0x30) + fVar15 * fVar7) - fVar18 * fVar16 * fVar14;
  *(undefined2 *)(iVar11 + 0x16) = *(undefined2 *)(param_1 + 0xbe);
  *(short *)(iVar11 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)((int)piVar4 + -0x52);
  iVar10 = DAT_0028d5f8;
  fVar14 = *(float *)(iVar11 + 0x2c);
  if (*(float *)(iVar11 + 0x2c) <= *(float *)(iVar11 + 0x84)) {
    fVar14 = *(float *)(iVar11 + 0x84);
  }
  *(float *)(iVar11 + 0x2c) = fVar14;
  if ((*(char *)(param_1 + 0x230) == '\0') || ((*(uint *)(param_1 + 4) & 0x80) != 0)) {
    iVar9 = *(int *)(param_1 + 0x22c);
    bVar12 = iVar9 != DAT_0028d5fc;
    bVar13 = iVar9 != iVar10;
    iVar11 = DAT_0028d5fc;
    if (bVar12 && bVar13) {
      iVar11 = DAT_0028d600;
    }
    iVar8 = iVar11;
    if ((bVar12 && bVar13) && iVar9 != iVar11) {
      iVar8 = DAT_0028d604;
    }
    if (((bVar12 && bVar13) && iVar9 != iVar11) && iVar9 != iVar8) {
      iVar11 = DAT_0028d608;
      if (iVar9 != DAT_0028d608) {
        iVar11 = DAT_0028d60c;
      }
      if (iVar9 != DAT_0028d608 && iVar9 != iVar11) goto LAB_0028d574;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  else {
LAB_0028d574:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x22c) == iVar10) {
    FUN_0037547c(DAT_0028d618,param_1 + 0xee0,4,DAT_0028d614,DAT_0028d614,DAT_0028d610);
  }
  FUN_00326e74(param_1,param_2);
  FUN_003fe570(DAT_0028d61c);
  return;
}

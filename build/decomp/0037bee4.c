// OoT3D decomp @ 0037bee4  name=FUN_0037bee4  size=596

void FUN_0037bee4(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  short *psVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  iVar4 = DAT_0037c148;
  fVar3 = DAT_0037c144;
  fVar2 = DAT_0037c140;
  fVar1 = DAT_0037c13c;
  fVar14 = DAT_0037c138;
  fVar7 = *(float *)(param_1 + 0x28);
  fVar8 = *(float *)(param_1 + 0x2c);
  fVar10 = *(float *)(param_1 + 0x30);
  if (*(short *)(param_1 + 0x1c0) == 0) {
    iVar11 = *(int *)(param_2 + 0x20ac);
    if ((*(char *)(iVar11 + 0x1a9) == '\x06') && (*(short *)(DAT_0037c14c + iVar11) != 0)) {
      fVar13 = *(float *)(iVar11 + 0x22a8) - fVar7;
      fVar16 = *(float *)(iVar11 + 0x22ac) - fVar8;
      fVar12 = *(float *)(iVar11 + 0x22b0) - fVar10;
      fVar13 = fVar13 * fVar13 + fVar12 * fVar12;
      fVar12 = (float)FUN_003696ec();
      if (fVar12 < fVar3) {
        fVar12 = fVar12 + fVar1;
      }
      if ((((fVar13 <= DAT_0037c150) && (DAT_0037c154 <= fVar13)) && (fVar3 <= fVar16)) &&
         (fVar16 <= fVar14)) {
        fVar14 = fVar12 - *(float *)(iVar4 + *(short *)(param_1 + 0x1c) * 4);
        if (fVar14 < fVar3) {
          fVar14 = -fVar14;
        }
        if ((int)fVar14 < 0x3f400000) {
          *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(iVar11 + 0x22ac);
          *(float *)(param_1 + 0x1c8) = fVar12;
LAB_0037c100:
          *(undefined2 *)(param_1 + 0x1c0) = 0x3c;
          uVar6 = DAT_0037c164;
          *(float *)(param_1 + 0x1cc) = fVar3;
          *(undefined4 *)(param_1 + 0x13c) = uVar6;
          return;
        }
      }
    }
    iVar11 = DAT_0037c160;
    fVar14 = DAT_0037c15c;
    pfVar5 = DAT_0037c158;
    psVar9 = *(short **)(param_2 + 0x20d4);
    fVar12 = *DAT_0037c158;
    fVar13 = DAT_0037c158[1];
    if (psVar9 != (short *)0x0) {
      do {
        if (*psVar9 == 0x9f) {
          fVar15 = *(float *)(psVar9 + 0x14) - fVar7;
          fVar17 = *(float *)(psVar9 + 0x16) - fVar8;
          fVar16 = *(float *)(psVar9 + 0x18) - fVar10;
          fVar18 = fVar12 * fVar2 + *(float *)(psVar9 + 0x2a) * pfVar5[3] * fVar14;
          fVar15 = fVar15 * fVar15 + fVar16 * fVar16;
          fVar16 = (float)FUN_003696ec();
          if (fVar16 < fVar3) {
            fVar16 = fVar16 + fVar1;
          }
          if (((fVar15 <= fVar18 * fVar18) && ((fVar18 - fVar2) * (fVar18 - fVar2) <= fVar15)) &&
             ((fVar3 <= fVar17 && (fVar17 <= fVar13 * fVar2)))) {
            fVar15 = fVar16 - *(float *)(iVar4 + *(short *)(param_1 + 0x1c) * 4);
            if (fVar15 < fVar3) {
              fVar15 = -fVar15;
            }
            if ((int)fVar15 < iVar11) {
              *(float *)(param_1 + 0x1c4) = *(float *)(psVar9 + 0x16) + pfVar5[4];
              *(float *)(param_1 + 0x1c8) = fVar16;
              goto LAB_0037c100;
            }
          }
        }
        psVar9 = *(short **)(psVar9 + 0x98);
        if (psVar9 == (short *)0x0) {
          return;
        }
      } while( true );
    }
  }
  return;
}

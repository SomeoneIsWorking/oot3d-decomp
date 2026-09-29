// OoT3D decomp @ 001fedd4  name=FUN_001fedd4  size=672

void FUN_001fedd4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  puVar4 = DAT_001ff074;
  uVar7 = *(undefined4 *)(param_2 + 0x20ac);
  *DAT_001ff074 = 0;
  if (*(char *)(param_1 + 800) == '\0') {
    iVar1 = *(short *)(param_1 + 0x1c) * 0x20;
    if ((puVar4[iVar1 + 0x8f] & 2) != 0) {
      if ((puVar4[iVar1 + 0x8f] & 4) != 0) {
        fVar15 = *(float *)(param_1 + 0x2f4);
        fVar16 = *(float *)(param_1 + 0x2e8);
        fVar9 = *(float *)(puVar4 + iVar1 + 0x80);
        fVar17 = *(float *)(param_1 + 0x2f8);
        fVar19 = *(float *)(param_1 + 0x2ec);
        *(float *)(*(int *)(param_1 + 0x1c0) + 0x38) =
             (*(float *)(param_1 + 0x2f0) - *(float *)(param_1 + 0x2e4)) * fVar9 +
             *(float *)(param_1 + 0x2e4);
        *(float *)(*(int *)(param_1 + 0x1c0) + 0x3c) =
             (fVar15 - fVar16) * fVar9 + *(float *)(param_1 + 0x2e8);
        *(float *)(*(int *)(param_1 + 0x1c0) + 0x40) =
             (fVar17 - fVar19) * fVar9 + *(float *)(param_1 + 0x2ec);
        fVar9 = (float)VectorSignedToFloat((int)*(short *)(puVar4 + iVar1 + 0x84),
                                           (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(*(int *)(param_1 + 0x1c0) + 0x44) =
             fVar9 * *(float *)(*(int *)(param_1 + 0x1c0) + 0x48);
      }
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
    }
    fVar9 = DAT_001ff078;
    fVar15 = *(float *)(param_1 + 0x294);
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar15 < DAT_001ff078) << 0x1f |
            (uint)(fVar15 == DAT_001ff078) << 0x1e;
    uVar8 = uVar2 | (uint)(NAN(fVar15) || NAN(DAT_001ff078)) << 0x1c;
    bVar3 = (byte)(uVar2 >> 0x18);
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) {
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x214);
    }
    iVar6 = *(int *)(param_2 + 0x20ac);
    iVar1 = *(short *)(param_1 + 0x1c) * 0x20;
    iVar5 = FUN_00339474(*(undefined4 *)(iVar6 + 0x28),*(float *)(iVar6 + 0x2c) + DAT_001ff07c,
                         *(undefined4 *)(iVar6 + 0x30),param_1 + 0x2e4,param_1 + 0x2f0,
                         (int)*(short *)(param_1 + 0x2fc),(int)*(short *)(param_1 + 0x2fe));
    if (iVar5 == 0) {
      FUN_00372aa8(param_1 + 0x300,0,6);
      FUN_0036e140(param_1 + 0x308,puVar4[iVar1 + 0x8c],puVar4[iVar1 + 0x8d],puVar4[iVar1 + 0x8e],
                   (int)*(short *)(param_1 + 0x300),0);
    }
    else {
      if ((puVar4[iVar1 + 0x8f] & 8) == 0) {
        fVar16 = *(float *)(param_1 + 0x2f0) - *(float *)(param_1 + 0x2e4);
        fVar17 = *(float *)(param_1 + 0x2f4) - *(float *)(param_1 + 0x2e8);
        fVar15 = *(float *)(param_1 + 0x2f8) - *(float *)(param_1 + 0x2ec);
      }
      else {
        fVar16 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x2e4);
        fVar17 = *(float *)(iVar6 + 0x2c) - *(float *)(param_1 + 0x2e8);
        fVar15 = *(float *)(iVar6 + 0x30) - *(float *)(param_1 + 0x2ec);
      }
      fVar18 = *(float *)(param_1 + 0x2e4);
      fVar19 = *(float *)(puVar4 + iVar1 + 0x88);
      fVar12 = *(float *)(param_1 + 0x2e8);
      fVar13 = *(float *)(param_1 + 0x2ec);
      FUN_00372aa8(param_1 + 0x300,(int)*(short *)(puVar4 + iVar1 + 0x86),6);
      uVar14 = VectorSignedToFloat((int)(short)(int)(fVar13 + fVar15 * fVar19),
                                   (byte)(uVar8 >> 0x15) & 3);
      uVar11 = VectorSignedToFloat((int)(short)(int)(fVar12 + fVar17 * fVar19),
                                   (byte)(uVar8 >> 0x15) & 3);
      uVar10 = VectorSignedToFloat((int)(short)(int)(fVar18 + fVar16 * fVar19),
                                   (byte)(uVar8 >> 0x15) & 3);
      FUN_003591e4(uVar10,uVar11,uVar14,param_1 + 0x308,puVar4[iVar1 + 0x8c],puVar4[iVar1 + 0x8d],
                   puVar4[iVar1 + 0x8e],(int)*(short *)(param_1 + 0x300),0);
    }
    if (fVar9 < *(float *)(param_1 + 0x294)) {
      FUN_0034a928(uVar7,DAT_001ff080);
      return;
    }
  }
  return;
}

// OoT3D decomp @ 003098c4  name=FUN_003098c4  size=160

void FUN_003098c4(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  undefined4 uVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  byte abStack_50 [4];
  float afStack_4c [2];

  bVar11 = *(char *)(param_1 + -0x40) != '\0';
  cVar1 = '\0';
  if (bVar11) {
    cVar1 = *(char *)(param_1 + -0x3f);
  }
  if (bVar11 && cVar1 != '\0') {
    if (*(char *)(param_1 + -0x3e) != '\0') {
LAB_00309958:
      fVar4 = DAT_00309b5c;
      fVar3 = DAT_00309b50;
      if (*(int *)(param_1 + 0x50) != 0) {
        fVar21 = *(float *)(param_1 + 0x40);
        uVar6 = (uint)*(byte *)(param_1 + 0x49);
        fVar22 = *(float *)(param_1 + -0x3c) * DAT_00309b4c;
        fVar13 = *(float *)(param_1 + -0x38) * DAT_00309b4c;
        if (uVar6 < 2) {
          fVar14 = (float)VectorSignedToFloat(uVar6 - 0x3f,(byte)(in_fpscr >> 0x15) & 3);
        }
        else {
          fVar14 = (float)VectorSignedToFloat(uVar6 - 0x40,(byte)(in_fpscr >> 0x15) & 3);
        }
        fVar14 = DAT_00309b50 + fVar14 * DAT_00309b54;
        fVar15 = *(float *)(param_1 + 0x10);
        uVar6 = (uint)*(byte *)(param_1 + 0x4a);
        fVar16 = *(float *)(param_1 + -0x34);
        if (uVar6 < 0x40) {
          fVar17 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar12 = DAT_00309b54;
        }
        else {
          fVar17 = (float)VectorUnsignedToFloat(uVar6 + 1,(byte)(in_fpscr >> 0x15) & 3);
          fVar12 = DAT_00309b58;
        }
        uVar2 = *(undefined1 *)(param_1 + -0x24);
        uVar5 = *(undefined4 *)(param_1 + -0x28);
        uVar6 = 0;
        fVar12 = DAT_00309b50 + fVar17 * fVar12;
        fVar18 = *(float *)(param_1 + -0x30);
        fVar23 = *(float *)(param_1 + -0x2c) + DAT_00309b50;
        fVar17 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x4b),(byte)(in_fpscr >> 0x15) & 3);
        fVar19 = *(float *)(param_1 + -0x20);
        abStack_50[0] = *(byte *)(param_1 + 0x4c);
        abStack_50[1] = *(undefined1 *)(param_1 + 0x4d);
        fVar17 = (fVar17 * DAT_00309b5c - DAT_00309b4c) + DAT_00309b50;
        do {
          pfVar9 = afStack_4c + uVar6;
          fVar20 = (float)VectorUnsignedToFloat
                                    ((uint)abStack_50[uVar6],(byte)(in_fpscr >> 0x15) & 3);
          *pfVar9 = fVar3 + fVar20 * fVar4;
          fVar20 = (float)FUN_0030a024(param_1 + -0x48,uVar6 & 0xff);
          uVar6 = uVar6 + 1;
          *pfVar9 = fVar20 + *pfVar9;
        } while ((int)uVar6 < 2);
        *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x124) = *(undefined1 *)(param_1 + -0x1c);
        *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x125) = *(undefined1 *)(param_1 + -0x1b);
        *(float *)(*(int *)(param_1 + 0x50) + 0xcc) = fVar22;
        *(float *)(*(int *)(param_1 + 0x50) + 0xd0) = fVar21 * fVar13;
        *(float *)(*(int *)(param_1 + 0x50) + 0xd4) = fVar16 + fVar15 * fVar14;
        *(float *)(*(int *)(param_1 + 0x50) + 0xdc) = fVar23;
        FUN_0030a018(uVar5,*(undefined4 *)(param_1 + 0x50),uVar2);
        *(float *)(*(int *)(param_1 + 0x50) + 0xe4) = fVar19 + fVar17;
        *(float *)(*(int *)(param_1 + 0x50) + 0xe8) = afStack_4c[0];
        *(float *)(*(int *)(param_1 + 0x50) + 0xec) = afStack_4c[1];
        *(float *)(*(int *)(param_1 + 0x50) + 0xd8) = fVar18 + fVar12;
        iVar7 = *(int *)(param_1 + 0x50);
        uVar5 = *(undefined4 *)(param_1 + 0x34);
        uVar8 = *(undefined4 *)(param_1 + 0x38);
        uVar10 = *(undefined4 *)(param_1 + 0x3c);
        *(undefined4 *)(iVar7 + 0xac) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(iVar7 + 0xb0) = uVar5;
        *(undefined4 *)(iVar7 + 0xb4) = uVar8;
        *(undefined4 *)(iVar7 + 0xb8) = uVar10;
      }
      return;
    }
    if (*(char *)(param_1 + 0xc) == '\0') {
      iVar7 = FUN_00406440(param_1 + -0x48,*(undefined4 *)(param_1 + 0x18),
                           *(undefined4 *)(param_1 + 0x1c));
      if (iVar7 != 0) goto LAB_00309958;
      if (*(char *)(param_1 + -0x3f) == '\0') {
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x50) != 0) goto LAB_00309958;
      *(undefined1 *)(param_1 + -0x3d) = 1;
    }
    uVar5 = FUN_0030c7cc();
    FUN_00309bdc(uVar5,param_1);
    *(undefined1 *)(param_1 + -0x3f) = 0;
  }
  return;
}

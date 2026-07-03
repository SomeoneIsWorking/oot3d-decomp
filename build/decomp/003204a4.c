// OoT3D decomp @ 003204a4  name=FUN_003204a4  size=2132

void FUN_003204a4(float param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  
  if (((*(uint *)(DAT_003208d0 + 0x10) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003208d4), iVar5 != 0)) {
    FUN_00350820(DAT_003208dc,DAT_003208d8,0x24,0x80);
  }
  FUN_0048ba78(*(undefined4 *)(param_2 + 0x28),DAT_003208dc);
  local_40 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    local_40 = FUN_0034807c(*(int *)(param_2 + 4),param_3);
  }
  iVar4 = DAT_003208fc;
  fVar17 = DAT_003208f8;
  iVar3 = DAT_003208f4;
  fVar2 = DAT_003208f0;
  fVar16 = DAT_003208ec;
  fVar12 = DAT_003208e8;
  fVar11 = DAT_003208e4;
  iVar5 = DAT_003208dc;
  if (local_40 != 0) {
    if (*(char *)(param_2 + 0x81) == '\x01') {
      param_1 = (float)VectorSignedToFloat((int)(param_1 + DAT_003208e0),
                                           (byte)(in_fpscr >> 0x15) & 3);
    }
    cVar1 = *(char *)(param_2 + 0x80);
    if (*(char *)(param_2 + 0x76) == '\0') {
      if (cVar1 == '\0') {
        uVar10 = 0;
        if (param_4 != 0) {
          do {
            pfVar7 = (float *)(DAT_003208dc + uVar10 * 0x24);
            FUN_00347550(param_1,local_40,uVar10,pfVar7,3);
            pfVar6 = (float *)(param_5 + uVar10 * 0x34);
            fVar12 = ABS(pfVar7[4] * fVar16);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= pfVar7[5] * fVar16) << 0x1d;
            fVar20 = ABS(pfVar7[5] * fVar16);
            for (fVar11 = ABS(pfVar7[3] * fVar16); iVar3 <= (int)fVar11; fVar11 = fVar11 - fVar17) {
            }
            for (; iVar3 <= (int)fVar12; fVar12 = fVar12 - fVar17) {
            }
            for (; iVar3 <= (int)fVar20; fVar20 = fVar20 - fVar17) {
            }
            uVar13 = VectorFloatToUnsigned(fVar11,3);
            uVar14 = VectorFloatToUnsigned(fVar12,3);
            uVar15 = VectorFloatToUnsigned(fVar20,3);
            pfVar8 = (float *)(iVar4 + (uVar13 & 0xff) * 0x10);
            fVar21 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
            fVar18 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
            fVar23 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
            fVar19 = pfVar8[1] + (fVar11 - fVar21) * pfVar8[3];
            pfVar9 = (float *)(iVar4 + (uVar14 & 0xff) * 0x10);
            fVar21 = *pfVar8 + (fVar11 - fVar21) * pfVar8[2];
            pfVar8 = (float *)(iVar4 + (uVar15 & 0xff) * 0x10);
            fVar22 = *pfVar9 + (fVar12 - fVar18) * pfVar9[2];
            fVar12 = pfVar9[1] + (fVar12 - fVar18) * pfVar9[3];
            fVar11 = *pfVar8 + (fVar20 - fVar23) * pfVar8[2];
            if (pfVar7[3] * fVar16 < fVar2) {
              fVar21 = -fVar21;
            }
            fVar20 = pfVar8[1] + (fVar20 - fVar23) * pfVar8[3];
            if (pfVar7[4] * fVar16 < fVar2) {
              fVar22 = -fVar22;
            }
            if (!SUB41(in_fpscr >> 0x1d,0)) {
              fVar11 = -fVar11;
            }
            *pfVar6 = fVar20 * fVar12;
            pfVar6[4] = fVar11 * fVar12;
            pfVar6[9] = fVar21 * fVar12;
            pfVar6[10] = fVar19 * fVar12;
            pfVar6[1] = fVar21 * fVar20 * fVar22 - fVar19 * fVar11;
            pfVar6[6] = fVar19 * fVar11 * fVar22 - fVar21 * fVar20;
            pfVar6[2] = fVar21 * fVar11 + fVar19 * fVar20 * fVar22;
            pfVar6[5] = fVar19 * fVar20 + fVar21 * fVar11 * fVar22;
            pfVar6[8] = -fVar22;
            pfVar6[3] = 0.0;
            pfVar6[7] = 0.0;
            pfVar6[0xb] = 0.0;
            uVar10 = uVar10 + 1;
            pfVar6[3] = *pfVar7;
            pfVar6[7] = pfVar7[1];
            pfVar6[0xb] = pfVar7[2];
          } while (uVar10 < param_4);
          return;
        }
      }
      else if ((cVar1 == '\x01') && (uVar10 = 0, param_4 != 0)) {
        do {
          pfVar7 = (float *)(iVar5 + uVar10 * 0x24);
          FUN_002c4a44(param_1,local_40,uVar10,pfVar7,&local_50,3);
          uVar13 = uVar10 + 1;
          pfVar6 = (float *)(param_5 + uVar10 * 0x34);
          pfVar6[3] = fVar2;
          pfVar6[7] = fVar2;
          pfVar6[0xb] = fVar2;
          fVar16 = fVar11 / (local_50 * local_50 + local_4c * local_4c + local_48 * local_48 +
                            local_44 * local_44);
          fVar20 = local_4c * fVar16;
          fVar17 = local_48 * fVar16;
          fVar23 = local_44 * local_50 * fVar16;
          fVar16 = local_50 * local_50 * fVar16;
          *pfVar6 = fVar12 - (local_4c * fVar20 + local_48 * fVar17);
          pfVar6[1] = local_50 * fVar20 - local_44 * fVar17;
          pfVar6[2] = local_50 * fVar17 + local_44 * fVar20;
          pfVar6[4] = local_50 * fVar20 + local_44 * fVar17;
          pfVar6[5] = fVar12 - (fVar16 + local_48 * fVar17);
          pfVar6[6] = local_4c * fVar17 - fVar23;
          pfVar6[8] = local_50 * fVar17 - local_44 * fVar20;
          pfVar6[9] = local_4c * fVar17 + fVar23;
          pfVar6[10] = fVar12 - (fVar16 + local_4c * fVar20);
          pfVar6[3] = *pfVar7;
          pfVar6[7] = pfVar7[1];
          pfVar6[0xb] = pfVar7[2];
          uVar10 = uVar13;
        } while (uVar13 < param_4);
        return;
      }
    }
    else if (cVar1 == '\0') {
      uVar10 = 0;
      if (param_4 != 0) {
        do {
          iVar5 = DAT_003208dc + uVar10 * 0x24;
          if (*(byte *)(param_2 + 0x75) == uVar10) {
            FUN_00347550(param_1,local_40,uVar10,iVar5,3);
          }
          else {
            FUN_00347550(param_1,local_40,uVar10,iVar5,2);
          }
          pfVar7 = (float *)(DAT_003208dc + uVar10 * 0x24);
          pfVar6 = (float *)(param_5 + uVar10 * 0x34);
          fVar12 = ABS(pfVar7[4] * fVar16);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= pfVar7[5] * fVar16) << 0x1d;
          fVar20 = ABS(pfVar7[5] * fVar16);
          for (fVar11 = ABS(pfVar7[3] * fVar16); iVar3 <= (int)fVar11; fVar11 = fVar11 - fVar17) {
          }
          for (; iVar3 <= (int)fVar12; fVar12 = fVar12 - fVar17) {
          }
          for (; iVar3 <= (int)fVar20; fVar20 = fVar20 - fVar17) {
          }
          uVar13 = VectorFloatToUnsigned(fVar11,3);
          uVar14 = VectorFloatToUnsigned(fVar12,3);
          uVar15 = VectorFloatToUnsigned(fVar20,3);
          pfVar8 = (float *)(DAT_003208fc + (uVar14 & 0xff) * 0x10);
          fVar21 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
          pfVar9 = (float *)(DAT_003208fc + (uVar13 & 0xff) * 0x10);
          fVar18 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
          fVar23 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
          fVar19 = pfVar9[1] + (fVar11 - fVar21) * pfVar9[3];
          fVar21 = *pfVar9 + (fVar11 - fVar21) * pfVar9[2];
          pfVar9 = (float *)(DAT_003208fc + (uVar15 & 0xff) * 0x10);
          fVar11 = pfVar8[1] + (fVar12 - fVar18) * pfVar8[3];
          fVar12 = *pfVar8 + (fVar12 - fVar18) * pfVar8[2];
          if (pfVar7[3] * fVar16 < fVar2) {
            fVar21 = -fVar21;
          }
          fVar18 = *pfVar9 + (fVar20 - fVar23) * pfVar9[2];
          fVar20 = pfVar9[1] + (fVar20 - fVar23) * pfVar9[3];
          if (pfVar7[4] * fVar16 < fVar2) {
            fVar12 = -fVar12;
          }
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            fVar18 = -fVar18;
          }
          uVar10 = uVar10 + 1;
          *pfVar6 = fVar20 * fVar11;
          pfVar6[4] = fVar18 * fVar11;
          pfVar6[9] = fVar21 * fVar11;
          pfVar6[10] = fVar19 * fVar11;
          pfVar6[1] = fVar21 * fVar20 * fVar12 - fVar19 * fVar18;
          pfVar6[6] = fVar19 * fVar18 * fVar12 - fVar21 * fVar20;
          pfVar6[2] = fVar21 * fVar18 + fVar19 * fVar20 * fVar12;
          pfVar6[5] = fVar19 * fVar20 + fVar21 * fVar18 * fVar12;
          pfVar6[8] = -fVar12;
          pfVar6[3] = 0.0;
          pfVar6[7] = 0.0;
          pfVar6[0xb] = 0.0;
          pfVar6[3] = *pfVar7;
          pfVar6[7] = pfVar7[1];
          pfVar6[0xb] = pfVar7[2];
        } while (uVar10 < param_4);
        return;
      }
    }
    else if ((cVar1 == '\x01') && (uVar10 = 0, param_4 != 0)) {
      do {
        if (*(byte *)(param_2 + 0x75) == uVar10) {
          FUN_002c4a44(param_1,local_40,uVar10,iVar5 + uVar10 * 0x24,&local_50,3);
        }
        else {
          FUN_002c4a44(param_1,local_40,uVar10,iVar5 + uVar10 * 0x24,&local_50,2);
        }
        pfVar6 = (float *)(param_5 + uVar10 * 0x34);
        pfVar7 = (float *)(iVar5 + uVar10 * 0x24);
        pfVar6[3] = fVar2;
        pfVar6[7] = fVar2;
        pfVar6[0xb] = fVar2;
        uVar10 = uVar10 + 1;
        fVar16 = fVar11 / (local_50 * local_50 + local_4c * local_4c + local_48 * local_48 +
                          local_44 * local_44);
        fVar20 = local_4c * fVar16;
        fVar17 = local_48 * fVar16;
        fVar23 = local_44 * local_50 * fVar16;
        fVar16 = local_50 * local_50 * fVar16;
        *pfVar6 = fVar12 - (local_4c * fVar20 + local_48 * fVar17);
        pfVar6[1] = local_50 * fVar20 - local_44 * fVar17;
        pfVar6[2] = local_50 * fVar17 + local_44 * fVar20;
        pfVar6[4] = local_50 * fVar20 + local_44 * fVar17;
        pfVar6[5] = fVar12 - (fVar16 + local_48 * fVar17);
        pfVar6[6] = local_4c * fVar17 - fVar23;
        pfVar6[8] = local_50 * fVar17 - local_44 * fVar20;
        pfVar6[9] = local_4c * fVar17 + fVar23;
        pfVar6[10] = fVar12 - (fVar16 + local_4c * fVar20);
        pfVar6[3] = *pfVar7;
        pfVar6[7] = pfVar7[1];
        pfVar6[0xb] = pfVar7[2];
      } while (uVar10 < param_4);
    }
  }
  return;
}


// OoT3D decomp @ 00263178  name=FUN_00263178  size=1172

void FUN_00263178(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  uint *extraout_r1;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_15c [72];
  float local_3c;
  float local_38;
  float local_34;
  int local_30;

  fVar1 = DAT_002634a0;
  local_30 = param_2;
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    FUN_00350820(local_15c,DAT_002634a4,0x24,8);
    FUN_0048ba78(*(undefined4 *)(param_1 + 0x1cc),local_15c);
    iVar5 = DAT_002634b4;
    fVar2 = DAT_002634b0;
    iVar11 = DAT_002634ac;
    fVar15 = DAT_002634a8;
    uVar7 = 0;
    do {
      iVar8 = param_1 + uVar7 * 0x34;
      fVar14 = ABS(local_15c[uVar7 * 9 + 4] * fVar15);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar1 <= local_15c[uVar7 * 9 + 5] * fVar15) << 0x1d;
      fVar16 = ABS(local_15c[uVar7 * 9 + 5] * fVar15);
      for (fVar17 = ABS(local_15c[uVar7 * 9 + 3] * fVar15); iVar11 <= (int)fVar17;
          fVar17 = fVar17 - fVar2) {
      }
      for (; iVar11 <= (int)fVar14; fVar14 = fVar14 - fVar2) {
      }
      for (; iVar11 <= (int)fVar16; fVar16 = fVar16 - fVar2) {
      }
      uVar18 = VectorFloatToUnsigned(fVar17,3);
      uVar19 = VectorFloatToUnsigned(fVar14,3);
      uVar20 = VectorFloatToUnsigned(fVar16,3);
      pfVar9 = (float *)(iVar5 + (uVar18 & 0xff) * 0x10);
      fVar24 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar22 = (float)VectorUnsignedToFloat(uVar19 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      pfVar4 = (float *)(iVar5 + (uVar20 & 0xff) * 0x10);
      fVar21 = (float)VectorUnsignedToFloat(uVar20 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar23 = pfVar9[1] + (fVar17 - fVar24) * pfVar9[3];
      pfVar10 = (float *)(iVar5 + (uVar19 & 0xff) * 0x10);
      fVar24 = *pfVar9 + (fVar17 - fVar24) * pfVar9[2];
      fVar25 = *pfVar10 + (fVar14 - fVar22) * pfVar10[2];
      fVar17 = pfVar10[1] + (fVar14 - fVar22) * pfVar10[3];
      if (local_15c[uVar7 * 9 + 3] * fVar15 < fVar1) {
        fVar24 = -fVar24;
      }
      fVar14 = *pfVar4 + (fVar16 - fVar21) * pfVar4[2];
      if (local_15c[uVar7 * 9 + 4] * fVar15 < fVar1) {
        fVar25 = -fVar25;
      }
      fVar16 = pfVar4[1] + (fVar16 - fVar21) * pfVar4[3];
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar14 = -fVar14;
      }
      *(float *)(iVar8 + 0x228) = fVar16 * fVar17;
      *(float *)(iVar8 + 0x238) = fVar14 * fVar17;
      *(float *)(iVar8 + 0x24c) = fVar24 * fVar17;
      *(float *)(iVar8 + 0x250) = fVar23 * fVar17;
      *(float *)(iVar8 + 0x22c) = fVar24 * fVar16 * fVar25 - fVar23 * fVar14;
      *(float *)(iVar8 + 0x240) = fVar23 * fVar14 * fVar25 - fVar24 * fVar16;
      *(float *)(iVar8 + 0x230) = fVar24 * fVar14 + fVar23 * fVar16 * fVar25;
      *(float *)(iVar8 + 0x23c) = fVar23 * fVar16 + fVar24 * fVar14 * fVar25;
      *(float *)(iVar8 + 0x248) = -fVar25;
      *(undefined4 *)(iVar8 + 0x234) = 0;
      *(undefined4 *)(iVar8 + 0x244) = 0;
      *(undefined4 *)(iVar8 + 0x254) = 0;
      uVar18 = uVar7 + 1;
      *(float *)(iVar8 + 0x234) = local_15c[uVar7 * 9];
      *(float *)(iVar8 + 0x244) = local_15c[uVar7 * 9 + 1];
      *(float *)(iVar8 + 0x254) = local_15c[uVar7 * 9 + 2];
      uVar7 = uVar18;
    } while (uVar18 < 8);
    FUN_003332b4(DAT_002634b8,fVar1,DAT_002634b8,param_1 + 0x228);
  }
  (**(code **)(param_1 + 0x9dc))(param_1,local_30);
  iVar11 = *(int *)(local_30 + 0x20ac);
  FUN_0036c5d8(param_1,&local_3c,iVar11 + 0x28);
  uVar3 = DAT_002634c0;
  uVar7 = DAT_002634bc;
  uVar18 = *(uint *)(param_1 + 0x9dc);
  if (uVar18 == DAT_002634bc) {
    return;
  }
  bVar12 = (*(byte *)(param_1 + 0x919) & 2) == 0;
  puVar6 = extraout_r1;
  if (!bVar12) {
    puVar6 = *(uint **)(param_1 + 0x944);
  }
  if (bVar12 || puVar6 == (uint *)0x0) {
    iVar5 = FUN_00373bc0(local_30,param_1 + 0x96c);
    if (iVar5 == 0) {
      iVar5 = FUN_0036a7a0(local_30);
      if ((((iVar5 == 0) && ((int)ABS(local_38) < DAT_00263648)) &&
          ((int)ABS(local_3c) < DAT_00263648)) &&
         ((((int)local_34 < DAT_0026364c && (fVar1 < local_34)) &&
          ((int)(short)(-0x8000 - (*(short *)(iVar11 + 0xbe) - *(short *)(param_1 + 0xbe))) +
           0x2fffU <= DAT_00263650)))) {
        *(undefined1 *)(iVar11 + 0x12a4) = 3;
        fVar15 = DAT_00263654;
        if (fVar1 <= local_34) {
          fVar15 = DAT_00263658;
        }
        *(char *)(iVar11 + 0x12a5) = (char)(int)fVar15;
        *(int *)(iVar11 + 0x12a8) = param_1;
      }
      goto LAB_002635fc;
    }
    if (*(uint *)(param_1 + 0x9dc) == uVar7) goto LAB_002635fc;
  }
  else {
    *(byte *)(param_1 + 0x919) = *(byte *)(param_1 + 0x919) & 0xfd;
    uVar19 = *puVar6 & ~DAT_002634c4;
    if (uVar19 != 0) {
      bVar12 = uVar18 != DAT_002634c8;
      uVar7 = DAT_002634c8;
      if (bVar12) {
        uVar7 = DAT_002634cc;
      }
      bVar13 = uVar18 != uVar7;
      if (bVar12 && bVar13) {
        uVar19 = DAT_002634d0;
      }
      uVar20 = uVar19;
      if ((bVar12 && bVar13) && uVar18 != uVar19) {
        uVar20 = DAT_002634d4;
      }
      if (((bVar12 && bVar13) && uVar18 != uVar19) && uVar18 != uVar20) {
        *(undefined2 *)(DAT_002634d8 + param_1) = 0x18;
        *(uint *)(param_1 + 0x9dc) = uVar7;
      }
      goto LAB_002635fc;
    }
    if ((*puVar6 & 0x48) == 0) goto LAB_002635fc;
  }
  FUN_00196208(param_1,local_30);
  *(uint *)(param_1 + 0x9dc) = uVar7;
  FUN_00375c44(local_30,param_1 + 0x28,0x14,uVar3);
LAB_002635fc:
  FUN_0037632c(param_1);
  iVar11 = local_30 + 0x5c78;
  FUN_00376168(local_30,iVar11,param_1 + 0x908);
  FUN_00376168(local_30,iVar11,param_1 + 0x96c);
  return;
}

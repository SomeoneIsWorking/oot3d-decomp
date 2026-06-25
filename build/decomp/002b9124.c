// OoT3D decomp @ 002b9124  name=FUN_002b9124  size=868

undefined4 FUN_002b9124(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  short *psVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  byte bVar18;
  bool bVar19;
  byte bVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 *local_38;
  
  puVar5 = DAT_002b9480;
  fVar4 = DAT_002b947c;
  fVar3 = DAT_002b9478;
  uVar13 = 0;
  if (**(ushort **)(param_1 + 0xc) == 0xffff) {
    return 0;
  }
  puVar14 = DAT_002b9480 + 3;
  pfVar12 = (float *)(DAT_002b9480 + 9);
  psVar11 = (short *)(*(int *)(*(int *)(param_1 + 8) + 0x1588) +
                     (uint)**(ushort **)(param_1 + 0xc) * 4);
  local_38 = DAT_002b9480 + 6;
  while( true ) {
    while( true ) {
      iVar6 = *(int *)(param_1 + 8);
      iVar10 = *(int *)(iVar6 + 0x1580) + *psVar11 * 0x20;
      if (((uint)*(ushort *)(iVar10 + 2) & (uint)*(ushort *)(param_1 + 4) << 0xd) == 0) break;
      if ((ushort)psVar11[1] == 0xffff) {
        return uVar13;
      }
      psVar11 = (short *)(*(int *)(iVar6 + 0x1588) + (uint)(ushort)psVar11[1] * 4);
    }
    iVar15 = *(int *)(iVar6 + 0x1584);
    pfVar7 = *(float **)(param_1 + 0x10);
    pfVar8 = *(float **)(param_1 + 0x14);
    fVar23 = *(float *)(iVar10 + 0x10);
    iVar6 = *(int *)(param_1 + 0x20);
    uVar28 = *(undefined4 *)(param_1 + 0x28);
    puVar5[0xc] = fVar23;
    fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
    fVar27 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar25 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
    fVar21 = fVar23 + (fVar24 * *pfVar7 + fVar21 * pfVar7[1] + fVar22 * pfVar7[2]) * fVar3;
    uVar1 = in_fpscr & 0xfffffff;
    uVar2 = uVar1 | (uint)(fVar21 < fVar4) << 0x1f;
    in_fpscr = uVar2 | (uint)(NAN(fVar21) || NAN(fVar4)) << 0x1c;
    fVar23 = fVar23 + (fVar27 * *pfVar8 + fVar25 * pfVar8[1] + fVar26 * pfVar8[2]) * fVar3;
    bVar18 = (byte)(uVar2 >> 0x1f);
    bVar20 = (byte)(in_fpscr >> 0x1c) & 1;
    if (bVar18 == bVar20) {
      in_fpscr = uVar1 | (uint)(fVar23 < fVar4) << 0x1f | (uint)(NAN(fVar23) || NAN(fVar4)) << 0x1c;
      bVar20 = (byte)(in_fpscr >> 0x18);
      bVar18 = bVar20 >> 7;
      bVar20 = bVar20 >> 4 & 1;
    }
    if (bVar18 != bVar20) {
      uVar1 = in_fpscr & 0xfffffff;
      in_fpscr = uVar1 | (uint)(fVar4 <= fVar21) << 0x1d;
      bVar19 = SUB41(in_fpscr >> 0x1d,0);
      if (!bVar19) {
        in_fpscr = uVar1 | (uint)(fVar4 <= fVar23) << 0x1d;
        bVar19 = SUB41(in_fpscr >> 0x1d,0);
      }
      if (bVar19) {
        bVar19 = true;
        if (iVar6 != 0) {
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar4 <= fVar21) << 0x1d;
          bVar19 = SUB41(in_fpscr >> 0x1d,0);
        }
        if (((bVar19) ||
            (uVar1 = in_fpscr & 0xfffffff | (uint)(fVar23 < fVar4) << 0x1f |
                     (uint)(fVar23 == fVar4) << 0x1e,
            in_fpscr = uVar1 | (uint)(NAN(fVar23) || NAN(fVar4)) << 0x1c,
            bVar18 = (byte)(uVar1 >> 0x18),
            (bool)(bVar18 >> 6 & 1) || bVar18 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) &&
           (DAT_002b9484 <= (int)ABS(fVar21 - fVar23))) {
          *pfVar12 = *(float *)(iVar10 + 0x14);
          puVar5[10] = *(undefined4 *)(iVar10 + 0x18);
          puVar5[0xb] = *(undefined4 *)(iVar10 + 0x1c);
          puVar9 = (undefined4 *)(iVar15 + (*(ushort *)(iVar10 + 2) & 0xffff1fff) * 0xc);
          uVar16 = puVar9[1];
          uVar17 = puVar9[2];
          *puVar5 = *puVar9;
          puVar5[1] = uVar16;
          puVar5[2] = uVar17;
          puVar9 = (undefined4 *)(iVar15 + (*(ushort *)(iVar10 + 4) & 0xffff1fff) * 0xc);
          uVar16 = puVar9[1];
          uVar17 = puVar9[2];
          *puVar14 = *puVar9;
          puVar5[4] = uVar16;
          puVar5[5] = uVar17;
          puVar9 = (undefined4 *)(iVar15 + (uint)*(ushort *)(iVar10 + 6) * 0xc);
          uVar16 = puVar9[1];
          uVar17 = puVar9[2];
          *local_38 = *puVar9;
          local_38[1] = uVar16;
          local_38[2] = uVar17;
          FUN_002bde90(fVar21 / (fVar21 - fVar23),pfVar7,pfVar8,&local_44);
          if ((((0x3f000000 < (int)ABS(*pfVar12)) &&
               (iVar6 = FUN_002bde48(local_40,local_3c,uVar28,DAT_002b9488 + -0x24,puVar5 + 3,
                                     puVar5 + 6), iVar6 != 0)) ||
              ((0x3f000000 < (int)ABS((float)puVar5[10]) &&
               (iVar6 = FUN_002bde00(local_3c,local_44,uVar28,DAT_002b9488 + -0x24,puVar5 + 3,
                                     puVar5 + 6), iVar6 != 0)))) ||
             ((0x3f000000 < (int)ABS((float)puVar5[0xb]) &&
              (iVar6 = FUN_002bddb8(local_44,local_40,uVar28,DAT_002b9488 + -0x24,puVar5 + 3,
                                    puVar5 + 6), iVar6 != 0)))) {
            pfVar7 = *(float **)(param_1 + 0x10);
            fVar21 = **(float **)(param_1 + 0x24);
            fVar22 = (*pfVar7 - local_44) * (*pfVar7 - local_44) +
                     (pfVar7[1] - local_40) * (pfVar7[1] - local_40) +
                     (pfVar7[2] - local_3c) * (pfVar7[2] - local_3c);
            uVar1 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar22) << 0x1f |
                    (uint)(fVar21 == fVar22) << 0x1e;
            in_fpscr = uVar1 | (uint)(NAN(fVar21) || NAN(fVar22)) << 0x1c;
            bVar18 = (byte)(uVar1 >> 0x18);
            if (!(bool)(bVar18 >> 6 & 1) && bVar18 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              **(float **)(param_1 + 0x24) = fVar22;
              pfVar7 = *(float **)(param_1 + 0x18);
              *pfVar7 = local_44;
              pfVar7[1] = local_40;
              pfVar7[2] = local_3c;
              uVar13 = 1;
              pfVar7 = *(float **)(param_1 + 0x14);
              *pfVar7 = local_44;
              pfVar7[1] = local_40;
              pfVar7[2] = local_3c;
              **(int **)(param_1 + 0x1c) = iVar10;
            }
          }
        }
      }
    }
    if ((ushort)psVar11[1] == 0xffff) break;
    psVar11 = (short *)(*(int *)(*(int *)(param_1 + 8) + 0x1588) + (uint)(ushort)psVar11[1] * 4);
  }
  return uVar13;
}


// OoT3D decomp @ 002bbdc4  name=FUN_002bbdc4  size=416

float FUN_002bbdc4(int param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  short *psVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float local_30;
  
  puVar5 = DAT_002bbf6c;
  fVar4 = DAT_002bbf68;
  uVar3 = DAT_002bbf64;
  fVar23 = *(float *)(param_1 + 0x10);
  if (**(ushort **)(param_1 + 0x2c) != DAT_002bbf64) {
    puVar14 = DAT_002bbf6c + 3;
    iVar13 = *(int *)(*(int *)(param_1 + 0x28) + 0x1580);
    psVar12 = (short *)(*(int *)(*(int *)(param_1 + 0x28) + 0x1588) +
                       (uint)**(ushort **)(param_1 + 0x2c) * 4);
    while( true ) {
      puVar6 = DAT_002bbf70;
      sVar2 = *psVar12;
      iVar7 = iVar13 + sVar2 * 0x20;
      if (((uint)*(ushort *)(iVar7 + 2) & (uint)*(ushort *)(param_1 + 8) << 0xd) == 0) {
        uVar8 = param_2 & 6;
        bVar18 = uVar8 != 0;
        if (bVar18) {
          uVar8 = *(uint *)(param_1 + 0x20) & 0x10;
        }
        bVar16 = true;
        if (bVar18 && uVar8 != 0) {
          bVar16 = fVar4 <= *(float *)(iVar7 + 0x18);
        }
        if (bVar16) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x1584);
          uVar21 = **(undefined4 **)(param_1 + 0x14);
          uVar20 = (*(undefined4 **)(param_1 + 0x14))[2];
          puVar10 = (undefined4 *)(iVar9 + (*(ushort *)(iVar7 + 2) & 0xffff1fff) * 0xc);
          uVar11 = puVar10[1];
          uVar15 = puVar10[2];
          uVar22 = *(undefined4 *)(param_1 + 0x24);
          *DAT_002bbf70 = *puVar10;
          puVar6[1] = uVar11;
          puVar6[2] = uVar15;
          puVar10 = (undefined4 *)(iVar9 + (*(ushort *)(iVar7 + 4) & 0xffff1fff) * 0xc);
          uVar11 = puVar10[1];
          uVar15 = puVar10[2];
          *puVar5 = *puVar10;
          puVar5[1] = uVar11;
          puVar5[2] = uVar15;
          puVar10 = (undefined4 *)(iVar9 + (uint)*(ushort *)(iVar7 + 6) * 0xc);
          uVar11 = puVar10[1];
          uVar15 = puVar10[2];
          *puVar14 = *puVar10;
          puVar5[4] = uVar11;
          puVar5[5] = uVar15;
          iVar7 = FUN_002bf520(*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x18),
                               *(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 0x10),uVar20,
                               uVar21,uVar22,puVar6,puVar6 + 3,puVar6 + 6,&local_30);
          if (iVar7 == 1) {
            fVar19 = *(float *)(*(int *)(param_1 + 0x14) + 4);
            bVar18 = fVar19 < local_30;
            bVar16 = fVar19 == local_30;
            bVar17 = NAN(fVar19) || NAN(local_30);
            if (!bVar16 && bVar18 == bVar17) {
              bVar18 = local_30 < fVar23;
              bVar16 = local_30 == fVar23;
              bVar17 = NAN(local_30) || NAN(fVar23);
            }
            if (!bVar16 && bVar18 == bVar17) {
              **(int **)(param_1 + 0xc) = *(int *)(*(int *)(param_1 + 0x28) + 0x1580) + sVar2 * 0x20
              ;
              fVar23 = local_30;
            }
          }
          uVar1 = psVar12[1];
        }
        else {
          uVar1 = psVar12[1];
        }
      }
      else {
        uVar1 = psVar12[1];
      }
      if (uVar1 == uVar3) break;
      psVar12 = (short *)(*(int *)(*(int *)(param_1 + 0x28) + 0x1588) + (uint)uVar1 * 4);
    }
  }
  return fVar23;
}


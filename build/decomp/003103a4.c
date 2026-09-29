// OoT3D decomp @ 003103a4  name=FUN_003103a4  size=716

void FUN_003103a4(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint in_fpscr;
  float fVar17;
  int local_204 [115];
  int *local_38;

  fVar3 = DAT_00310678;
  fVar2 = DAT_00310674;
  fVar1 = DAT_00310670;
  iVar10 = 0;
  local_38 = *(int **)(*param_1 + 8);
  if (0 < *(int *)(*local_38 + 8)) {
    do {
      FUN_00371738(local_204,local_38[3] + iVar10 * 0x1cc,0x1cc);
      pfVar4 = (float *)(param_1[1] + iVar10 * 0x124 + 0x10);
      iVar13 = iVar10 * 0x124 + 0x80;
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(local_204[0] + 0xa8),(byte)(in_fpscr >> 0x15) & 3);
      *pfVar4 = fVar17 * fVar3;
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(local_204[0] + 0xa9),(byte)(in_fpscr >> 0x15) & 3);
      pfVar4[1] = fVar17 * fVar3;
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(local_204[0] + 0xaa),(byte)(in_fpscr >> 0x15) & 3);
      pfVar4[2] = fVar17 * fVar3;
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(local_204[0] + 0xab),(byte)(in_fpscr >> 0x15) & 3);
      pfVar4[3] = fVar17 * fVar3;
      iVar6 = *(int *)(local_204[0] + 0xc);
      *(int *)(param_1[1] + iVar13) = iVar6;
      iVar5 = 0;
      if (0 < iVar6) {
        do {
          if (iVar5 < *(int *)(local_204[0] + 0xc)) {
            puVar12 = (undefined4 *)(local_204[0] + iVar5 * 0x18 + 0x58);
          }
          else {
            puVar12 = (undefined4 *)0x0;
          }
          iVar6 = iVar5 + 1;
          puVar11 = (undefined4 *)(param_1[1] + iVar10 * 0x124 + iVar5 * 0x18 + 0x84);
          uVar8 = puVar12[1];
          uVar9 = puVar12[2];
          uVar15 = puVar12[3];
          *puVar11 = *puVar12;
          puVar11[1] = uVar8;
          puVar11[2] = uVar9;
          puVar11[3] = uVar15;
          uVar8 = puVar12[5];
          puVar11[4] = puVar12[4];
          puVar11[5] = uVar8;
          iVar5 = iVar6;
        } while (iVar6 < *(int *)(param_1[1] + iVar13));
      }
      iVar6 = *(int *)(local_204[0] + 8);
      iVar13 = iVar10 * 0x124 + 0xcc;
      iVar5 = 0;
      *(int *)(param_1[1] + iVar13) = iVar6;
      if (0 < iVar6) {
        do {
          if (iVar5 < *(int *)(local_204[0] + 8)) {
            puVar12 = (undefined4 *)(local_204[0] + iVar5 * 0x18 + 0x10);
          }
          else {
            puVar12 = (undefined4 *)0x0;
          }
          iVar6 = iVar5 + 1;
          puVar11 = (undefined4 *)(param_1[1] + iVar10 * 0x124 + iVar5 * 0x18 + 0xd0);
          uVar8 = puVar12[1];
          uVar9 = puVar12[2];
          uVar15 = puVar12[3];
          uVar14 = puVar12[4];
          uVar16 = puVar12[5];
          *puVar11 = *puVar12;
          puVar11[1] = uVar8;
          puVar11[2] = uVar9;
          puVar11[3] = uVar15;
          puVar11[4] = uVar14;
          puVar11[5] = uVar16;
          iVar5 = iVar6;
        } while (iVar6 < *(int *)(param_1[1] + iVar13));
      }
      uVar7 = 0;
      iVar5 = 6;
      do {
        pfVar4 = (float *)(param_1[1] + iVar10 * 0x124 + uVar7 * 0x10 + 0x20);
        if (uVar7 < 6) {
          fVar17 = (float)VectorUnsignedToFloat
                                    ((uint)*(byte *)(local_204[0] + uVar7 * 4 + 0xb4),
                                     (byte)(in_fpscr >> 0x15) & 3);
          *pfVar4 = fVar17 * fVar3;
          fVar17 = (float)VectorUnsignedToFloat
                                    ((uint)*(byte *)(local_204[0] + uVar7 * 4 + 0xb5),
                                     (byte)(in_fpscr >> 0x15) & 3);
          pfVar4[1] = fVar17 * fVar3;
          fVar17 = (float)VectorUnsignedToFloat
                                    ((uint)*(byte *)(local_204[0] + uVar7 * 4 + 0xb6),
                                     (byte)(in_fpscr >> 0x15) & 3);
          pfVar4[2] = fVar17 * fVar3;
          fVar17 = (float)VectorUnsignedToFloat
                                    ((uint)*(byte *)(local_204[0] + uVar7 * 4 + 0xb7),
                                     (byte)(in_fpscr >> 0x15) & 3);
          pfVar4[3] = fVar17 * fVar3;
        }
        else {
          pfVar4[2] = fVar1;
          pfVar4[1] = fVar1;
          *pfVar4 = fVar1;
          pfVar4[3] = fVar2;
        }
        iVar5 = iVar5 + -1;
        uVar7 = uVar7 + 1;
      } while (iVar5 != 0);
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(*local_38 + 8));
  }
  return;
}

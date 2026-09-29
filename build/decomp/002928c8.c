// OoT3D decomp @ 002928c8  name=FUN_002928c8  size=608

void FUN_002928c8(int param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  fVar12 = DAT_00292b2c;
  *(undefined1 *)(param_1 + 0x175d) = 1;
  fVar18 = DAT_00292b28;
  *(char *)(param_1 + 0x175e) = *(char *)(param_1 + 0x175e) + '\x01';
  if (*(float *)(param_1 + 0x1718) != fVar18) {
    *(float *)(param_1 + 0x1718) = *(float *)(param_1 + 0x1718) - fVar12;
  }
  if (*(float *)(param_1 + 0x1714) != fVar18) {
    *(float *)(param_1 + 0x1714) = *(float *)(param_1 + 0x1714) - fVar12;
  }
  if (*(float *)(param_1 + 0x171c) != fVar18) {
    *(float *)(param_1 + 0x171c) = *(float *)(param_1 + 0x171c) - fVar12;
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(*(int *)(param_1 + 0x124) + 0xbe);
  uVar14 = DAT_00292b30;
  if (*(char *)(param_1 + 0x175c) != '\0') {
    *(char *)(param_1 + 0x175c) = *(char *)(param_1 + 0x175c) + -1;
    fVar12 = (float)FUN_00371e50(uVar14);
    fVar13 = (float)FUN_00371e50(DAT_00292b34);
    uVar14 = FUN_00371e50(DAT_00292b38);
    fVar15 = (float)FUN_003727f0();
    fVar16 = (float)FUN_00372674(uVar14);
    fVar17 = (float)FUN_00371e50(DAT_00292b3c);
    iVar1 = DAT_00292b44;
    iVar9 = 0;
    piVar3 = (int *)(DAT_00292b40 + (short)(int)fVar17 * 8);
    iVar4 = *piVar3;
    iVar11 = (int)(short)piVar3[1];
    if (0 < iVar11) {
      do {
        if ((((fVar18 <= fVar12) && ((int)fVar12 < 0x42000000)) && (fVar18 <= fVar13)) &&
           ((int)fVar13 < DAT_00292b48)) {
          iVar7 = 0;
          psVar8 = (short *)(iVar4 + iVar9 * 2);
          if (0 < *psVar8 + 1) {
            do {
              iVar10 = (short)((short)(int)fVar13 * 0x20 + (short)(int)fVar12) + iVar7;
              iVar6 = 0;
              sVar2 = *psVar8 + 1;
              puVar5 = (undefined2 *)(iVar1 + iVar10 * 2);
              do {
                sVar2 = sVar2 + -1;
                if (iVar10 + iVar6 * 0x20 < 0x800) {
                  *puVar5 = 0;
                }
                puVar5 = puVar5 + 0x20;
                iVar6 = iVar6 + 1;
              } while (0 < sVar2);
              iVar7 = (int)(short)((short)iVar7 + 1);
            } while (iVar7 < *psVar8 + 1);
          }
        }
        fVar12 = fVar12 + fVar15;
        fVar13 = fVar13 + fVar16;
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < iVar11);
    }
    FUN_0032b1c4(param_1 + 0x1768,param_1 + 0x17bc,DAT_00292b44,0);
    uVar14 = DAT_00292b4c;
    sVar2 = 0;
    do {
      fVar18 = (float)FUN_00371e50(uVar14);
      fVar12 = (float)FUN_00371e50(uVar14);
      *(undefined1 *)(param_1 + (short)(int)fVar18 * 0x1c8 + (int)(short)(int)fVar12 + 0x360) = 1;
      sVar2 = sVar2 + 1;
    } while (sVar2 < 4);
  }
  return;
}

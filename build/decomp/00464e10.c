// OoT3D decomp @ 00464e10  name=FUN_00464e10  size=772

void FUN_00464e10(int param_1)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_30;
  float local_2c;
  float local_28;

  uVar4 = *DAT_00465130;
  switch(*(undefined1 *)(param_1 + 0x1c)) {
  case 1:
    if (((uVar4 & *(byte *)(param_1 + 8)) == 0) && (*(byte *)(param_1 + 9) != 0)) {
      uVar4 = *(byte *)(param_1 + 9) & 1;
      if (uVar4 == 1) {
        puVar8 = *(undefined4 **)(param_1 + 0x10);
        puVar10 = *(undefined4 **)(param_1 + 0xc);
        uVar5 = puVar8[1];
        uVar6 = puVar8[2];
        uVar11 = puVar8[3];
        uVar12 = puVar8[4];
        uVar14 = puVar8[5];
        uVar15 = puVar8[6];
        uVar16 = puVar8[7];
        *puVar10 = *puVar8;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar11;
        puVar10[4] = uVar12;
        puVar10[5] = uVar14;
        puVar10[6] = uVar15;
        puVar10[7] = uVar16;
        uVar5 = puVar8[9];
        uVar6 = puVar8[10];
        uVar11 = puVar8[0xb];
        uVar12 = puVar8[0xc];
        puVar10[8] = puVar8[8];
        puVar10[9] = uVar5;
        puVar10[10] = uVar6;
        puVar10[0xb] = uVar11;
        puVar10[0xc] = uVar12;
      }
      if (uVar4 < *(byte *)(param_1 + 9)) {
        do {
          uVar7 = uVar4 + 2;
          puVar10 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar4 * 0x34);
          puVar8 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar4 * 0x34);
          uVar5 = puVar8[1];
          uVar6 = puVar8[2];
          uVar11 = puVar8[3];
          uVar12 = puVar8[4];
          uVar14 = puVar8[5];
          *puVar10 = *puVar8;
          puVar10[1] = uVar5;
          puVar10[2] = uVar6;
          puVar10[3] = uVar11;
          puVar10[4] = uVar12;
          puVar10[5] = uVar14;
          uVar5 = puVar8[7];
          uVar6 = puVar8[8];
          uVar11 = puVar8[9];
          uVar12 = puVar8[10];
          uVar14 = puVar8[0xb];
          uVar15 = puVar8[0xc];
          puVar10[6] = puVar8[6];
          puVar10[7] = uVar5;
          puVar10[8] = uVar6;
          puVar10[9] = uVar11;
          puVar10[10] = uVar12;
          puVar10[0xb] = uVar14;
          puVar10[0xc] = uVar15;
          iVar9 = uVar4 * 0x34 + 0x34;
          puVar8 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar9);
          puVar10 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar9);
          uVar5 = puVar8[1];
          uVar6 = puVar8[2];
          uVar11 = puVar8[3];
          uVar12 = puVar8[4];
          uVar14 = puVar8[5];
          uVar15 = puVar8[6];
          *puVar10 = *puVar8;
          puVar10[1] = uVar5;
          puVar10[2] = uVar6;
          puVar10[3] = uVar11;
          puVar10[4] = uVar12;
          puVar10[5] = uVar14;
          puVar10[6] = uVar15;
          uVar5 = puVar8[8];
          uVar6 = puVar8[9];
          uVar11 = puVar8[10];
          uVar12 = puVar8[0xb];
          uVar14 = puVar8[0xc];
          puVar10[7] = puVar8[7];
          puVar10[8] = uVar5;
          puVar10[9] = uVar6;
          puVar10[10] = uVar11;
          puVar10[0xb] = uVar12;
          puVar10[0xc] = uVar14;
          uVar4 = uVar7;
        } while (uVar7 < *(byte *)(param_1 + 9));
      }
    }
    break;
  case 2:
    if ((uVar4 & *(byte *)(param_1 + 8)) == 0) {
      bVar1 = *(byte *)(param_1 + 9);
      iVar9 = *(int *)(param_1 + 0xc);
      iVar13 = *(int *)(param_1 + 0x10);
      uVar4 = 0;
      bVar2 = *(byte *)(*(int *)(param_1 + 4) + 0x75);
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      if (bVar1 != 0) {
        do {
          FUN_002d4258(uVar5,uVar4 == bVar2,iVar9 + uVar4 * 0x34,iVar9 + uVar4 * 0x34,
                       iVar13 + uVar4 * 0x34);
          uVar4 = uVar4 + 1;
        } while (uVar4 < bVar1);
        return;
      }
    }
    break;
  case 3:
    if ((*(byte *)(param_1 + 8) & uVar4) == 0) {
      iVar9 = *(int *)(param_1 + 0xc);
      iVar13 = *(int *)(param_1 + 0x10);
      uVar4 = 0;
      pcVar3 = *(char **)(param_1 + 0x14);
      if (*(char *)(param_1 + 9) != '\0') {
        do {
          if (*pcVar3 != '\0') {
            FUN_002d4258(*(undefined4 *)(param_1 + 0x18),
                         uVar4 == *(byte *)(*(int *)(param_1 + 4) + 0x75),iVar9,iVar9,iVar13);
          }
          uVar4 = uVar4 + 1;
          iVar9 = iVar9 + 0x34;
          iVar13 = iVar13 + 0x34;
          pcVar3 = pcVar3 + 1;
        } while (uVar4 < *(byte *)(param_1 + 9));
        return;
      }
    }
    break;
  case 4:
    if ((*(byte *)(param_1 + 8) & uVar4) == 0) {
      uVar4 = (uint)*(byte *)(param_1 + 9);
      puVar8 = *(undefined4 **)(param_1 + 0x10);
      puVar10 = *(undefined4 **)(param_1 + 0xc);
      pcVar3 = *(char **)(param_1 + 0x14);
      if (uVar4 != 0) {
        do {
          if (*pcVar3 != '\0') {
            uVar5 = puVar8[1];
            uVar6 = puVar8[2];
            uVar11 = puVar8[3];
            uVar12 = puVar8[4];
            uVar14 = puVar8[5];
            uVar15 = puVar8[6];
            uVar16 = puVar8[7];
            *puVar10 = *puVar8;
            puVar10[1] = uVar5;
            puVar10[2] = uVar6;
            puVar10[3] = uVar11;
            puVar10[4] = uVar12;
            puVar10[5] = uVar14;
            puVar10[6] = uVar15;
            puVar10[7] = uVar16;
            uVar5 = puVar8[9];
            uVar6 = puVar8[10];
            uVar11 = puVar8[0xb];
            uVar12 = puVar8[0xc];
            puVar10[8] = puVar8[8];
            puVar10[9] = uVar5;
            puVar10[10] = uVar6;
            puVar10[0xb] = uVar11;
            puVar10[0xc] = uVar12;
          }
          uVar4 = uVar4 - 1;
          puVar8 = puVar8 + 0xd;
          puVar10 = puVar10 + 0xd;
          pcVar3 = pcVar3 + 1;
        } while (uVar4 != 0);
        return;
      }
    }
    break;
  case 5:
    if ((*(byte *)(param_1 + 8) & uVar4) == 0) {
      uVar4 = (uint)*(byte *)(param_1 + 9);
      puVar8 = *(undefined4 **)(param_1 + 0x10);
      puVar10 = *(undefined4 **)(param_1 + 0xc);
      pcVar3 = *(char **)(param_1 + 0x14);
      if (uVar4 != 0) {
        do {
          if (*pcVar3 == '\0') {
            uVar5 = puVar8[1];
            uVar6 = puVar8[2];
            uVar11 = puVar8[3];
            uVar12 = puVar8[4];
            uVar14 = puVar8[5];
            uVar15 = puVar8[6];
            uVar16 = puVar8[7];
            *puVar10 = *puVar8;
            puVar10[1] = uVar5;
            puVar10[2] = uVar6;
            puVar10[3] = uVar11;
            puVar10[4] = uVar12;
            puVar10[5] = uVar14;
            puVar10[6] = uVar15;
            puVar10[7] = uVar16;
            uVar5 = puVar8[9];
            uVar6 = puVar8[10];
            uVar11 = puVar8[0xb];
            uVar12 = puVar8[0xc];
            puVar10[8] = puVar8[8];
            puVar10[9] = uVar5;
            puVar10[10] = uVar6;
            puVar10[0xb] = uVar11;
            puVar10[0xc] = uVar12;
          }
          uVar4 = uVar4 - 1;
          puVar8 = puVar8 + 0xd;
          puVar10 = puVar10 + 0xd;
          pcVar3 = pcVar3 + 1;
        } while (uVar4 != 0);
        return;
      }
    }
    break;
  case 6:
    iVar9 = *(int *)(param_1 + 8);
    FUN_002d4094(*(undefined4 *)(param_1 + 0xc),&local_30,(int)*(short *)(iVar9 + 0xbe));
    *(float *)(iVar9 + 0x28) = *(float *)(iVar9 + 0x28) + local_30 * *(float *)(iVar9 + 0x54);
    *(float *)(iVar9 + 0x2c) =
         *(float *)(iVar9 + 0x2c) + local_2c * *(float *)(iVar9 + 0x58) * *(float *)(param_1 + 0x10)
    ;
    *(float *)(iVar9 + 0x30) = *(float *)(iVar9 + 0x30) + local_28 * *(float *)(iVar9 + 0x5c);
    return;
  }
  return;
}

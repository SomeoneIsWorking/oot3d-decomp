// OoT3D decomp @ 00360190  name=FUN_00360190  size=552

void FUN_00360190(undefined4 param_1,float param_2,undefined4 param_3,float param_4,int param_5,
                 int param_6,int param_7,undefined param_8)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint in_fpscr;
  uint uVar16;
  
  piVar2 = *(int **)(param_5 + 4);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)FUN_0034807c(piVar2,param_7);
  }
  if ((piVar2 == (int *)0x0) && (piVar2 = *(int **)(param_5 + 4), piVar2 != (int *)0x0)) {
    piVar2 = (int *)FUN_0034807c(piVar2,0);
  }
  fVar1 = DAT_003603b8;
  uVar16 = in_fpscr & 0xfffffff | (uint)(param_4 == DAT_003603b8) << 0x1e;
  *(undefined *)(param_5 + 0x70) = param_8;
  if (!SUB41(uVar16 >> 0x1e,0)) {
    bVar15 = *(int *)(param_5 + 0x30) == param_7;
    if (bVar15) {
      uVar16 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_5 + 0x3c) == param_2) << 0x1e;
      bVar15 = SUB41(uVar16 >> 0x1e,0);
    }
    if (!bVar15) {
      uVar16 = uVar16 & 0xfffffff | (uint)(fVar1 <= param_4) << 0x1d;
      if (SUB41(uVar16 >> 0x1d,0)) {
        *(undefined *)(param_5 + 0x71) = 3;
        uVar4 = FUN_00324154(param_6 + 0x3410,param_5);
        FUN_002bd9ec(param_2,uVar4,*(undefined4 *)(param_5 + 0x28),piVar2,
                     *(undefined *)(param_5 + 0x74),*(undefined4 *)(param_5 + 0x7c),
                     *(undefined *)(param_5 + 0x81),0);
      }
      else {
        if (*(byte *)(param_5 + 0x70) < 2) {
          *(undefined *)(param_5 + 0x71) = 1;
        }
        else {
          *(undefined *)(param_5 + 0x71) = 2;
        }
        *(float *)(param_5 + 0x34) = fVar1;
        puVar3 = *(undefined4 **)(param_5 + 0x7c);
        puVar5 = *(undefined4 **)(param_5 + 0x78);
        if (*(byte *)(param_5 + 0x74) != 0) {
          puVar8 = puVar5 + -0xd;
          puVar9 = puVar3 + -0xd;
          if ((*(byte *)(param_5 + 0x74) & 1) != 0) {
            uVar4 = puVar5[1];
            uVar6 = puVar5[2];
            uVar7 = puVar5[3];
            uVar10 = puVar5[4];
            uVar12 = puVar5[5];
            uVar13 = puVar5[6];
            uVar14 = puVar5[7];
            *puVar3 = *puVar5;
            puVar3[1] = uVar4;
            puVar3[2] = uVar6;
            puVar3[3] = uVar7;
            puVar3[4] = uVar10;
            puVar3[5] = uVar12;
            puVar3[6] = uVar13;
            puVar3[7] = uVar14;
            uVar4 = puVar5[9];
            uVar6 = puVar5[10];
            uVar7 = puVar5[0xb];
            uVar10 = puVar5[0xc];
            puVar3[8] = puVar5[8];
            puVar3[9] = uVar4;
            puVar3[10] = uVar6;
            puVar3[0xb] = uVar7;
            puVar3[0xc] = uVar10;
            puVar8 = puVar5;
            puVar9 = puVar3;
          }
          for (uVar11 = (uint)(*(byte *)(param_5 + 0x74) >> 1); uVar11 != 0; uVar11 = uVar11 - 1) {
            uVar4 = puVar8[0xe];
            uVar6 = puVar8[0xf];
            uVar7 = puVar8[0x10];
            uVar10 = puVar8[0x11];
            puVar9[0xd] = puVar8[0xd];
            puVar9[0xe] = uVar4;
            puVar9[0xf] = uVar6;
            puVar9[0x10] = uVar7;
            puVar9[0x11] = uVar10;
            uVar4 = puVar8[0x13];
            uVar6 = puVar8[0x14];
            uVar7 = puVar8[0x15];
            uVar10 = puVar8[0x16];
            puVar9[0x12] = puVar8[0x12];
            puVar9[0x13] = uVar4;
            puVar9[0x14] = uVar6;
            puVar9[0x15] = uVar7;
            puVar9[0x16] = uVar10;
            uVar4 = puVar8[0x18];
            uVar6 = puVar8[0x19];
            puVar9[0x17] = puVar8[0x17];
            puVar9[0x18] = uVar4;
            puVar9[0x19] = uVar6;
            uVar4 = puVar8[0x1b];
            uVar6 = puVar8[0x1c];
            uVar7 = puVar8[0x1d];
            uVar10 = puVar8[0x1e];
            uVar12 = puVar8[0x1f];
            uVar13 = puVar8[0x20];
            puVar3 = puVar8 + 0x21;
            puVar9[0x1a] = puVar8[0x1a];
            puVar9[0x1b] = uVar4;
            puVar9[0x1c] = uVar6;
            puVar9[0x1d] = uVar7;
            puVar9[0x1e] = uVar10;
            puVar9[0x1f] = uVar12;
            puVar9[0x20] = uVar13;
            uVar4 = puVar8[0x22];
            uVar6 = puVar8[0x23];
            uVar7 = puVar8[0x24];
            uVar10 = puVar8[0x25];
            uVar12 = puVar8[0x26];
            puVar8 = puVar8 + 0x1a;
            puVar9[0x21] = *puVar3;
            puVar9[0x22] = uVar4;
            puVar9[0x23] = uVar6;
            puVar9[0x24] = uVar7;
            puVar9[0x25] = uVar10;
            puVar9[0x26] = uVar12;
            puVar9 = puVar9 + 0x1a;
          }
        }
        param_4 = -param_4;
      }
      fVar1 = DAT_003603bc;
      *(float *)(param_5 + 0x34) = DAT_003603bc;
      *(float *)(param_5 + 0x38) = fVar1 / param_4;
      goto LAB_00360378;
    }
  }
  if (*(byte *)(param_5 + 0x70) < 2) {
    *(undefined *)(param_5 + 0x71) = 1;
  }
  else {
    *(undefined *)(param_5 + 0x71) = 2;
  }
  *(float *)(param_5 + 0x34) = fVar1;
  uVar4 = FUN_00324154(param_6 + 0x3410,param_5);
  FUN_002bd9ec(param_2,uVar4,*(undefined4 *)(param_5 + 0x28),piVar2,*(undefined *)(param_5 + 0x74),
               *(undefined4 *)(param_5 + 0x78),*(undefined *)(param_5 + 0x81),0);
  *(float *)(param_5 + 0x34) = fVar1;
LAB_00360378:
  *(int *)(param_5 + 0x30) = param_7;
  *(float *)(param_5 + 0x44) = param_2;
  *(float *)(param_5 + 0x3c) = param_2;
  *(undefined4 *)(param_5 + 0x48) = param_3;
  uVar4 = VectorSignedToFloat(*(int *)(*piVar2 + *(int *)(*piVar2 + 0x14) + 0x10) + 1,
                              (byte)(uVar16 >> 0x15) & 3);
  *(undefined4 *)(param_5 + 0x4c) = uVar4;
  *(undefined4 *)(param_5 + 0x40) = param_1;
  return;
}


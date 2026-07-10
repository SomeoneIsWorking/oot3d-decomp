// OoT3D decomp @ 00479e70  name=FUN_00479e70  size=1104

void FUN_00479e70(int param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_13c [37];
  undefined1 auStack_a8 [132];
  
  FUN_00343280(local_13c,0x94);
  iVar3 = FUN_002cf63c(param_1 + 0xa70,auStack_a8);
  FUN_0035bf50(iVar3,*(undefined4 *)(param_1 + 0xa70),0);
  fVar9 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 8),(byte)(in_fpscr >> 0x15) & 3);
  uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_1 + 0x321c),3);
  *(char *)(iVar3 + 8) = (char)uVar10;
  fVar9 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 9),(byte)(in_fpscr >> 0x15) & 3);
  uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_1 + 0x321c),3);
  *(char *)(iVar3 + 9) = (char)uVar10;
  fVar9 = DAT_0047a2c0;
  fVar11 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 10),(byte)(in_fpscr >> 0x15) & 3);
  uVar12 = VectorFloatToUnsigned(fVar11 * *(float *)(param_1 + 0x321c),3);
  *(char *)(iVar3 + 10) = (char)uVar12;
  iVar8 = DAT_0047a2cc;
  pfVar1 = DAT_0047a2c8;
  fVar11 = DAT_0047a2c4;
  fVar13 = (float)VectorUnsignedToFloat(*(byte *)(iVar3 + 8) + 0x1e,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (float)VectorUnsignedToFloat(*(byte *)(iVar3 + 9) + 0x1e,(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = (float)VectorUnsignedToFloat((uVar12 & 0xff) + 0x1e,(byte)(in_fpscr >> 0x15) & 3);
  *DAT_0047a2c8 = fVar13;
  if (iVar8 < (int)fVar13) {
    fVar13 = fVar11;
  }
  pfVar1[1] = fVar14;
  pfVar1[2] = fVar15;
  pfVar1[3] = fVar11;
  *pfVar1 = fVar13;
  if (iVar8 < (int)fVar14) {
    fVar14 = fVar11;
  }
  if (iVar8 < (int)fVar15) {
    fVar15 = fVar11;
  }
  pfVar1[1] = fVar14;
  *pfVar1 = fVar13 * fVar9;
  pfVar1[1] = fVar14 * fVar9;
  fVar11 = DAT_0047a2d0;
  pfVar1[2] = fVar15 * fVar9;
  pfVar1[3] = fVar11;
  iVar8 = DAT_0047a2d8;
  puVar6 = *(uint **)(DAT_0047a2d4 + 0x80);
  if (puVar6 != (uint *)(DAT_0047a2d4 + 0x198)) {
    do {
      puVar7 = (uint *)puVar6[0x20];
      if (((((short)puVar6[0x18] < 0) || (iVar8 < (int)*puVar6)) || (DAT_0047a2dc < *puVar6)) ||
         (((iVar8 < (int)puVar6[1] || (DAT_0047a2dc < puVar6[1])) ||
          ((iVar8 < (int)puVar6[2] || (DAT_0047a2dc < puVar6[2])))))) {
        FUN_002d6a50(puVar6,0);
      }
      else {
        if (puVar6[0x1e] != 0) {
          if (puVar6[0x1b] != 0) {
            iVar3 = FUN_002cf63c(param_1 + 0xa70,auStack_a8);
            if (puVar6[0x1e] == 1) {
              FUN_0035bf50(iVar3,*(undefined4 *)(param_1 + 0xa70),puVar6);
              fVar9 = (float)VectorUnsignedToFloat
                                       ((uint)*(byte *)(iVar3 + 8),(byte)(in_fpscr >> 0x15) & 3);
              uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_1 + 0x321c),3);
              *(char *)(iVar3 + 8) = (char)uVar10;
              fVar9 = (float)VectorUnsignedToFloat
                                       ((uint)*(byte *)(iVar3 + 9),(byte)(in_fpscr >> 0x15) & 3);
              uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_1 + 0x321c),3);
              *(char *)(iVar3 + 9) = (char)uVar10;
              fVar9 = (float)VectorUnsignedToFloat
                                       ((uint)*(byte *)(iVar3 + 10),(byte)(in_fpscr >> 0x15) & 3);
              uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_1 + 0x321c),3);
              *(char *)(iVar3 + 10) = (char)uVar10;
              uVar10 = FUN_003687a8(puVar6[0x1b]);
              FUN_0035bbe0(iVar3,uVar10);
            }
            else {
              FUN_0035bf50(iVar3,*(undefined4 *)(param_1 + 0xa70),0);
              uVar10 = FUN_003687a8(puVar6[0x1b]);
              FUN_00340f44(iVar3,uVar10);
            }
            FUN_003687a8(puVar6[0x1b]);
            FUN_0036879c();
            uVar10 = FUN_003687a8(puVar6[0x1b]);
            FUN_00368704(*(undefined4 *)(param_1 + 0x5fc8),uVar10);
          }
          local_13c[*(byte *)((int)puVar6 + 99)] = local_13c[*(byte *)((int)puVar6 + 99)] + 1;
        }
        pcVar5 = *(code **)(*DAT_0047a2e0 + puVar6[0x21] * 0x88 + 0x28);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(param_1);
        }
      }
      puVar6 = puVar7;
    } while (puVar7 != DAT_0047a2e4);
  }
  iVar8 = 0;
  do {
    piVar2 = DAT_0047a2e0;
    iVar3 = 0;
    do {
      iVar4 = piVar2[iVar8 * 10 + iVar3 + 2];
      if (iVar4 == 0) break;
      if (*(int *)(iVar4 + 0x1fc) != 0) {
        FUN_00371eac(iVar4,0);
        iVar4 = 0;
        if (local_13c[iVar8] != 0) {
          iVar4 = *(int *)(piVar2[iVar8 * 10 + iVar3 + 2] + 0x1dc);
        }
        if (local_13c[iVar8] != 0 && iVar4 != 0) {
          iVar4 = FUN_002cf63c(param_1 + 0xa70,auStack_a8);
          FUN_0035bf50(iVar4,*(undefined4 *)(param_1 + 0xa70),piVar2[iVar8 * 10 + iVar3 + 2] + 0x280
                      );
          fVar9 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)(iVar4 + 8),(byte)(in_fpscr >> 0x15) & 3);
          uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_1 + 0x321c),3);
          *(char *)(iVar4 + 8) = (char)uVar10;
          fVar9 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)(iVar4 + 9),(byte)(in_fpscr >> 0x15) & 3);
          uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_1 + 0x321c),3);
          *(char *)(iVar4 + 9) = (char)uVar10;
          fVar9 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)(iVar4 + 10),(byte)(in_fpscr >> 0x15) & 3);
          uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_1 + 0x321c),3);
          *(char *)(iVar4 + 10) = (char)uVar10;
          FUN_0035bbe0(iVar4,*(undefined4 *)(piVar2[iVar8 * 10 + iVar3 + 2] + 0x1dc));
          FUN_00368704(*(undefined4 *)(param_1 + 0x5fc8),
                       *(undefined4 *)(piVar2[iVar8 * 10 + iVar3 + 2] + 0x1dc));
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 10);
    iVar8 = iVar8 + 1;
    if (0x24 < iVar8) {
      return;
    }
  } while( true );
}


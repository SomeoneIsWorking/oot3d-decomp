// OoT3D decomp @ 004ad7e4  name=FUN_004ad7e4  size=480

/* WARNING: Removing unreachable block (ram,0x004b0a7c) */

int * FUN_004ad7e4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  uint uVar4;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  int *piVar5;
  code *pcVar6;
  byte *pbVar7;
  int iVar8;
  int unaff_r6;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  int extraout_r12;
  int extraout_r12_00;
  undefined8 uVar17;

  puVar3 = (ushort *)*param_1 + 1;
  uVar4 = (uint)*(ushort *)*param_1;
  if (CARRY4(uVar4 * 0x10000,uVar4 * 0x10000)) {
    param_1[0x13] = (uint)CARRY4(uVar4 << 0x11,uVar4 << 0x11);
    if (CARRY4(uVar4 * 0x40000,uVar4 * 0x40000)) {
      uVar16 = param_1[0x10];
    }
    else {
      uVar16 = param_1[0xf];
    }
    param_1[0xee] = uVar16;
    uVar17 = FUN_004ae168(param_1,puVar3);
    iVar8 = (int)uVar17;
    uVar4 = extraout_r3 << 6;
    iVar1 = extraout_r2 + -6;
    if (extraout_r2 < 6) {
      iVar8 = FUN_004ae168(iVar8,(int)((ulonglong)uVar17 >> 0x20));
      iVar1 = extraout_r2_00;
      uVar4 = extraout_r3_00;
    }
    if (*(uint *)(iVar8 + 0x48) != extraout_r3 >> 0x1a) {
      iVar8 = FUN_004b0a70();
      iVar1 = extraout_r2_01;
      uVar4 = extraout_r3_01;
    }
    iVar8 = *(int *)(iVar8 + 8);
    do {
      if (CARRY4(uVar4,uVar4)) {
        pcVar6 = (code *)0x4adac8;
      }
      else {
        pcVar6 = FUN_004ada04;
      }
      if (iVar1 < 1) {
        FUN_004ae168();
      }
      uVar17 = (*pcVar6)();
      iVar1 = extraout_r2_02;
      uVar4 = extraout_r3_02;
    } while ((extraout_r12_00 != 0x10) || (iVar8 = iVar8 + -0x10, iVar8 != 0));
    return (int *)(((int)((ulonglong)uVar17 >> 0x20) - *(int *)uVar17) + -2);
  }
  iVar1 = FUN_004ae168(param_1,puVar3);
  iVar1 = *(int *)(iVar1 + 0x48);
  piVar2 = (int *)FUN_004ae17c();
  if (iVar1 != 0) {
    if (unaff_r6 != 0) {
      piVar2 = (int *)FUN_004b0a70();
    }
    piVar2[0xee] = piVar2[0xf];
    piVar5 = piVar2 + 0xf1;
    iVar1 = piVar2[1] + 0x20;
    do {
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5 = piVar5 + 2;
      iVar1 = iVar1 + -0x10;
    } while (iVar1 != 0);
    iVar1 = piVar2[2];
    do {
      piVar5 = piVar2 + 0xf1;
      do {
        iVar8 = *piVar5;
        iVar9 = piVar5[1];
        iVar11 = piVar5[2];
        iVar14 = piVar5[3];
        iVar12 = iVar11;
        if (iVar11 < iVar8) {
          iVar12 = iVar8;
          iVar8 = iVar11;
        }
        if (piVar5[4] < iVar12) {
          iVar12 = piVar5[4];
        }
        if (iVar12 < iVar8) {
          iVar12 = iVar8;
        }
        iVar8 = iVar14;
        if (iVar14 < iVar9) {
          iVar8 = iVar9;
          iVar9 = iVar14;
        }
        if (piVar5[5] < iVar8) {
          iVar8 = piVar5[5];
        }
        if (iVar8 < iVar9) {
          iVar8 = iVar9;
        }
        piVar2[0xef] = iVar12;
        piVar2[0xf0] = iVar8;
        piVar5[2] = 0;
        piVar5[3] = 0;
        uVar17 = FUN_004ac3d0();
        piVar2 = (int *)uVar17;
        piVar5 = piVar5 + 2;
      } while (extraout_r12 != 0x10);
      iVar1 = iVar1 + -0x10;
    } while (iVar1 != 0);
    return (int *)(((int)((ulonglong)uVar17 >> 0x20) - *piVar2) + -2);
  }
  piVar2[0x12] = 0xc;
  uVar10 = (uint)DAT_004b0a10;
  uVar4 = (uint)DAT_004b0a46;
  iVar1 = 0x10;
  pbVar7 = &DAT_004b0994 + uVar4 * 0x10;
  pbVar13 = &DAT_004b09f4;
  puVar15 = (uint *)(piVar2 + 0x5e);
  do {
    *puVar15 = (uint)*pbVar13 | (uint)*pbVar7 << (uVar10 + 8 & 0xff);
    iVar1 = iVar1 + -1;
    pbVar7 = pbVar7 + 1;
    pbVar13 = pbVar13 + 1;
    puVar15 = puVar15 + 1;
  } while (iVar1 != 0);
  iVar1 = 0x40;
  pbVar7 = &DAT_004b07d4 + uVar4 * 0x40;
  pbVar13 = &DAT_004b0954;
  puVar15 = (uint *)(piVar2 + 0x1e);
  do {
    *puVar15 = (uint)*pbVar13 | (uint)*pbVar7 << (uVar10 + 6 & 0xff);
    iVar1 = iVar1 + -1;
    pbVar7 = pbVar7 + 1;
    pbVar13 = pbVar13 + 1;
    puVar15 = puVar15 + 1;
  } while (iVar1 != 0);
  *(undefined1 *)((int)piVar2 + 0x51) = 9;
  *(undefined1 *)((int)piVar2 + 0x52) = 9;
  *(undefined1 *)((int)piVar2 + 0x53) = 9;
  *(undefined1 *)(piVar2 + 0x15) = 9;
  *(undefined1 *)(piVar2 + 0x16) = 9;
  *(undefined1 *)(piVar2 + 0x18) = 9;
  *(undefined1 *)(piVar2 + 0x1a) = 9;
  *(undefined1 *)(piVar2 + 0x1c) = 9;
  return piVar2;
}

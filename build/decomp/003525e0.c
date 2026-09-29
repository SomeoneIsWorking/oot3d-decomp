// OoT3D decomp @ 003525e0  name=FUN_003525e0  size=692

void FUN_003525e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;

  if (((*DAT_00352894 & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_00352894), puVar2 = DAT_0035289c, uVar1 = DAT_00352898, iVar7 != 0))
  {
    *DAT_0035289c = DAT_00352898;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  fVar5 = DAT_003528b4;
  piVar4 = DAT_003528b0;
  uVar1 = DAT_003528ac;
  uVar3 = DAT_003528a8;
  uVar8 = (*(ushort *)(param_1 + 0x1c) & 0xfc0) >> 6;
  fVar11 = *(float *)(param_2 + 0x1b8) - *(float *)(param_1 + 0x1340);
  fVar9 = *(float *)(param_2 + 0x1bc) - *(float *)(param_1 + 0x1344);
  fVar10 = *(float *)(param_2 + 0x1c0);
  *(float *)(param_1 + 0x1340) = *(float *)(param_2 + 0x1b8);
  fVar10 = fVar10 - *(float *)(param_1 + 0x1348);
  *(undefined4 *)(param_1 + 0x1344) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1348) = *(undefined4 *)(param_2 + 0x1c0);
  fVar6 = DAT_003528b8;
  fVar9 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10) * DAT_003528a0;
  if (0x3f800000 < (int)fVar9) {
    fVar9 = DAT_003528a4;
  }
  if (uVar8 == 7) {
    fVar10 = fVar9 * DAT_003528b8;
    FUN_0036ef10(DAT_0035289c,uVar3);
    uVar8 = (uint)*(ushort *)(param_2 + 0x22b8);
    iVar7 = (int)*(short *)(*piVar4 + 0x110);
    fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    if (((int)(DAT_003528cc / fVar11 + fVar5) <= (int)uVar8) ||
       ((fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3),
        (int)(DAT_003528d0 / fVar11 + fVar5) <= (int)uVar8 &&
        (fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3),
        (int)uVar8 <= (int)(DAT_003528d4 / fVar11 + fVar5))))) {
      FUN_0034e124(fVar10,DAT_0035289c,uVar1);
    }
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_003528d8 / fVar10 + fVar5) == (uint)*(ushort *)(param_2 + 0x22b8)) {
LAB_003527a4:
      FUN_0036ef10(fVar9 * fVar6,DAT_0035289c,uVar3 | (int)uVar3 >> 0x18);
      return;
    }
  }
  else if (uVar8 == 8 || uVar8 == 9) {
    fVar10 = fVar9 * DAT_003528b8;
    FUN_0036ef10(DAT_0035289c,uVar3);
    uVar8 = (uint)*(ushort *)(param_2 + 0x22b8);
    iVar7 = (int)*(short *)(*piVar4 + 0x110);
    fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    if (((int)(DAT_003528bc / fVar11 + fVar5) <= (int)uVar8) ||
       ((fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3),
        (int)(DAT_003528c0 / fVar11 + fVar5) <= (int)uVar8 &&
        (fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3),
        (int)uVar8 <= (int)(DAT_003528c4 / fVar11 + fVar5))))) {
      FUN_0034e124(fVar10,DAT_0035289c,uVar1);
    }
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_003528c8 / fVar10 + fVar5) == (uint)*(ushort *)(param_2 + 0x22b8))
    goto LAB_003527a4;
  }
  return;
}

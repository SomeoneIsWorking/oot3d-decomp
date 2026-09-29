// OoT3D decomp @ 003a6190  name=FUN_003a6190  size=932

void FUN_003a6190(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  if (*(char *)(param_1 + 0xe74) == '\x04') {
    FUN_0031d314(param_1);
  }
  uVar3 = DAT_003a6534;
  if (*(short *)(param_2 + 0x2e1c) == 0) {
    *(int *)(param_1 + 0x1034) = *(int *)(param_1 + 0x1034) + 1;
  }
  iVar6 = FUN_001ff084(uVar3);
  piVar4 = DAT_003a6538;
  psVar7 = (short *)(DAT_003a6538[1] + *(int *)(param_1 + 0xe68) * 10);
  local_38 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  local_34 = (float)VectorSignedToFloat((int)psVar7[1],(byte)(in_fpscr >> 0x15) & 3);
  local_30 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
  FUN_0031d2ac(&local_38,(int)*(short *)(DAT_003a6538[1] + *(int *)(param_1 + 0xe68) * 10 + 8),
               &local_3c,&local_40,&local_44);
  iVar8 = *piVar4;
  if (iVar8 + -1 <= *(int *)(param_1 + 0xe68)) {
    fVar15 = *(float *)(param_1 + 0x28) - local_38;
    fVar12 = *(float *)(param_1 + 0x2c) - local_34;
    fVar13 = *(float *)(param_1 + 0x30) - local_30;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003a653c + 0x564),
                                        (byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff |
               (uint)(fVar14 <= SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar13 * fVar13)) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      *(uint *)(param_1 + 0x1030) = *(uint *)(param_1 + 0x1030) | 2;
    }
  }
  iVar5 = DAT_003a6544;
  fVar12 = DAT_003a6540;
  local_44 = *(float *)(param_1 + 0x28) * local_3c + local_40 * *(float *)(param_1 + 0x30) +
             local_44;
  uVar9 = in_fpscr & 0xfffffff | (uint)(local_44 < DAT_003a6540) << 0x1f |
          (uint)(local_44 == DAT_003a6540) << 0x1e;
  uVar11 = uVar9 | (uint)(NAN(local_44) || NAN(DAT_003a6540)) << 0x1c;
  bVar2 = (byte)(uVar9 >> 0x18);
  if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) ||
     (iVar10 = *(int *)(param_1 + 0xe68) + 1, *(int *)(param_1 + 0xe68) = iVar10, iVar10 < iVar8)) {
    if ((*(uint *)(param_1 + 0x1030) & 1) == 0) {
      FUN_003326f0(param_1,&local_38,DAT_003a6548);
    }
    fVar13 = DAT_003a654c;
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(piVar4[1] +
                                                       *(int *)(param_1 + 0xe68) * 10 + 6),
                                        (byte)(uVar11 >> 0x15) & 3);
    fVar14 = *(float *)(param_1 + 0x6c);
    if ((fVar15 <= fVar14) || ((*(uint *)(param_1 + 0x1030) & 1) != 0)) {
      fVar14 = fVar14 - fVar13;
      *(float *)(param_1 + 0x6c) = fVar14;
      if (fVar14 <= fVar12) {
        fVar14 = fVar12;
      }
      *(float *)(param_1 + 0x6c) = fVar14;
      uVar9 = *(uint *)(param_1 + 0x1030);
      goto LAB_003a63a0;
    }
    *(float *)(param_1 + 0x6c) = fVar14 + fVar13;
LAB_003a63a8:
    uVar9 = *(uint *)(param_1 + 0x1034);
    if (0x44 < (int)uVar9) goto LAB_003a63b4;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x1030) | 1;
    *(uint *)(param_1 + 0x1030) = uVar9;
LAB_003a63a0:
    if ((uVar9 & 1) == 0) goto LAB_003a63a8;
LAB_003a63b4:
    if (iVar6 != 1) {
      uVar9 = (uint)*(ushort *)(iVar5 + 0x94);
    }
    if (iVar6 != 1 && uVar9 != 3) {
      *(undefined4 *)(DAT_003a6550 + 8) = 0;
      FUN_003716f0(param_2,0x3b0,0x14,0x20);
    }
  }
  if ((*(short *)(param_2 + 0x2e1c) == 0) || ((*(uint *)(param_1 + 0x1030) & 2) != 0)) {
LAB_003a6448:
    if ((*(uint *)(param_1 + 0x1030) & 4) != 0) {
      *(uint *)(param_1 + 0x1030) = *(uint *)(param_1 + 0x1030) & 0xfffffffb;
      FUN_0036ec40(0,uVar3);
    }
  }
  else {
    uVar9 = (uint)*(ushort *)(iVar5 + 0x96);
    if ((*(ushort *)(DAT_003a6554 + 0x42) & 1) == 0) {
      if (999 < uVar9) goto LAB_003a6428;
    }
    else if (DAT_003a6558 <= uVar9) {
LAB_003a6428:
      *(uint *)(param_1 + 0x1030) = *(uint *)(param_1 + 0x1030) | 4;
      if ((*(short *)(param_2 + 0x2e1c) == 0) || ((*(uint *)(param_1 + 0x1030) & 2) != 0))
      goto LAB_003a6448;
    }
  }
  if (*(int *)(param_1 + 0x102c) == 0) {
    *(float *)(param_1 + 0x6c) = fVar12;
    fVar13 = DAT_003a6568;
    if (*(char *)(param_1 + 0xe74) == '\0') goto LAB_003a64d8;
    FUN_0033d694(param_1);
  }
  cVar1 = *(char *)(param_1 + 0xe74);
  if (cVar1 == '\x04') {
    fVar13 = *(float *)(param_1 + 0x6c) * DAT_003a655c;
  }
  else {
    if (cVar1 == '\x05') {
      fVar14 = *(float *)(param_1 + 0x6c);
      fVar13 = DAT_003a6560;
    }
    else {
      fVar13 = DAT_003a6568;
      if (cVar1 != '\a' && cVar1 != '\t') goto LAB_003a64d8;
      fVar14 = *(float *)(param_1 + 0x6c);
      fVar13 = DAT_003a6564;
    }
    fVar13 = fVar14 * fVar13;
  }
LAB_003a64d8:
  FUN_003731e8(fVar13,param_1 + 0x1c4);
  iVar6 = FUN_003731e0(param_1 + 0x1c4);
  if ((iVar6 == 0) &&
     ((*(char *)(param_1 + 0xe74) != '\0' || (*(float *)(param_1 + 0x6c) == fVar12)))) {
    return;
  }
  FUN_0033d694(param_1);
  return;
}

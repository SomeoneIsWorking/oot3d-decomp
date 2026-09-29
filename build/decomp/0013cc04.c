// OoT3D decomp @ 0013cc04  name=FUN_0013cc04  size=1048

void FUN_0013cc04(int param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_58 [48];
  float local_28;
  float local_24;
  float local_20;

  fVar14 = DAT_0013cff4;
  iVar8 = DAT_0013cff0;
  fVar15 = DAT_0013cfec;
  iVar7 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x22),(byte)(in_fpscr >> 0x15) & 3);
  if ((uint)DAT_0013cfec < (uint)fVar13) {
    *(undefined4 *)(param_1 + 0x1c4) = 0xff;
  }
  else if ((int)fVar13 < DAT_0013cff0) {
    *(int *)(param_1 + 0x1c4) = 0xff - (int)((fVar13 - DAT_0013cff8) * DAT_0013cffc * DAT_0013cff4);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c4) = 0xa0;
  }
  if ((int)fVar13 < iVar8) {
    *(undefined4 *)(param_1 + 0x1c8) = 0xff;
  }
  else if ((int)fVar13 < DAT_0013d000) {
    *(int *)(param_1 + 0x1c8) = 0xff - (int)((fVar13 - DAT_0013d004) * DAT_0013d008 * fVar14);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c8) = 0xa0;
  }
  if ((uint)DAT_0013d00c < (uint)fVar13) {
    *(undefined4 *)(param_1 + 0x1cc) = 0xff;
  }
  else if ((uint)fVar15 < (uint)fVar13) {
    *(int *)(param_1 + 0x1cc) = 0xff - (int)((fVar13 - DAT_0013d010) * DAT_0013d014 * fVar14);
  }
  else {
    *(undefined4 *)(param_1 + 0x1cc) = 0xa0;
  }
  pbVar5 = DAT_0013d024;
  uVar4 = DAT_0013d01c;
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1cc);
  uVar3 = DAT_0013d018;
  switch(*(ushort *)(param_1 + 0x1c) >> 0xc) {
  case 0:
  case 2:
    iVar8 = (int)*(short *)(iVar7 + 0x22);
    fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = *(float *)(param_1 + 0x1c0) - DAT_0013d028;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 <= fVar14 + DAT_0013d020) << 0x1d;
    bVar2 = (byte)(in_fpscr >> 0x18);
    break;
  case 1:
    iVar8 = (int)*(short *)(iVar7 + 0x22);
    fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = *(float *)(param_1 + 0x1c0) - DAT_0013d02c;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 <= fVar14 + DAT_0013d020) << 0x1d;
    bVar2 = (byte)(in_fpscr >> 0x18);
    break;
  case 3:
    iVar8 = FUN_0036e864(param_2,0x1c);
    if (iVar8 == 0) {
      iVar8 = FUN_0036e864(param_2,0x1d);
      if (iVar8 == 0) {
        iVar8 = FUN_0036e864(param_2,0x1e);
        if (iVar8 == 0) goto LAB_0013ce10;
        iVar8 = 3;
      }
      else {
        iVar8 = 2;
      }
    }
    else {
LAB_0013ce10:
      iVar8 = 1;
    }
    iVar8 = FUN_003705a0(*(float *)(param_1 + 0x1c0) + *(float *)(DAT_0013d030 + iVar8 * 4),uVar3,
                         param_1 + 0x2c);
    if (iVar8 != 0) goto switchD_0013cd38_default;
    if (((*pbVar5 & 2) == 0) && (((uint)*(ushort *)(param_1 + 0x1c) << 0x18) >> 0x1c != 0)) {
      *pbVar5 = *pbVar5 | 2;
      *(byte *)(param_1 + 0x1d4) = *(byte *)(param_1 + 0x1d4) | 2;
    }
    if ((*(byte *)(param_1 + 0x1d4) & 2) == 0) goto switchD_0013cd38_default;
    if (*(char *)(param_1 + 3) == '\0') {
      FUN_00373264(param_1,uVar4);
      goto switchD_0013cd38_default;
    }
    goto LAB_0013cf14;
  case 4:
  case 5:
  case 6:
    iVar8 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    fVar15 = *(float *)(param_1 + 0x1c0);
    if (iVar8 != 0) {
      fVar15 = fVar15 + DAT_0013d034;
    }
    iVar8 = FUN_003705a0(fVar15,uVar3,param_1 + 0x2c);
    if (iVar8 != 0) goto switchD_0013cd38_default;
    if (((*pbVar5 & 2) == 0) && (((uint)*(ushort *)(param_1 + 0x1c) << 0x18) >> 0x1c != 0)) {
      *pbVar5 = *pbVar5 | 2;
      *(byte *)(param_1 + 0x1d4) = *(byte *)(param_1 + 0x1d4) | 2;
    }
    if ((*(byte *)(param_1 + 0x1d4) & 2) == 0) goto switchD_0013cd38_default;
LAB_0013cf14:
    FUN_0035ae08(param_1,uVar4);
  default:
    goto switchD_0013cd38_default;
  }
  if ((bool)(bVar2 >> 5)) {
    fVar15 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = fVar15 + DAT_0013d020;
  }
  *(float *)(param_1 + 0x2c) = fVar15;
switchD_0013cd38_default:
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar9 = 3;
  bVar10 = uVar1 >> 0xc == 3;
  if (!bVar10) {
    uVar9 = 4;
  }
  bVar11 = uVar9 == uVar1 >> 0xc;
  if (!bVar10 && !bVar11) {
    uVar9 = 5;
  }
  bVar12 = uVar9 != uVar1 >> 0xc;
  if ((!bVar10 && !bVar11) && bVar12) {
    uVar9 = 6;
  }
  if (((bVar10 || bVar11) || !bVar12) || uVar9 == uVar1 >> 0xc) {
    if (((*(uint *)(pbVar5 + 8) & 1) == 0) &&
       (iVar8 = FUN_003679b4(DAT_0013d038), puVar6 = DAT_0013d048, uVar4 = DAT_0013d044,
       uVar3 = DAT_0013d040, iVar8 != 0)) {
      *DAT_0013d048 = DAT_0013d03c;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
    }
    if (*(char *)(DAT_0013d04c + param_2) == *(char *)(param_1 + 3)) {
      FUN_00372224(auStack_58,param_1 + 0x148);
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar15 * DAT_0013d050,auStack_58,0);
      FUN_003735ac(&local_28,auStack_58,DAT_0013d048);
      *(float *)(*(int *)(param_1 + 0x128) + 0x28) = *(float *)(param_1 + 0x28) + local_28;
      *(float *)(*(int *)(param_1 + 0x128) + 0x2c) = *(float *)(param_1 + 0x2c) + local_24;
      *(float *)(*(int *)(param_1 + 0x128) + 0x30) = *(float *)(param_1 + 0x30) + local_20;
      *(uint *)(*(int *)(param_1 + 0x128) + 4) =
           *(uint *)(*(int *)(param_1 + 0x128) + 4) & 0xfffffffe;
    }
  }
  return;
}

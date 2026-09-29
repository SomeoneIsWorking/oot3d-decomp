// OoT3D decomp @ 003afe64  name=FUN_003afe64  size=876

/* WARNING: Removing unreachable block (ram,0x003afeec) */
/* WARNING: Removing unreachable block (ram,0x003aff18) */
/* WARNING: Removing unreachable block (ram,0x003aff0c) */

void FUN_003afe64(int param_1,undefined4 param_2)

{
  char cVar1;
  float fVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r2;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  short local_28 [2];

  if ((*(short *)(param_1 + 0xbc0) != 0) && (0x3f7fffff < *(int *)(param_1 + 0x6c))) {
    iVar5 = FUN_00371cf8(DAT_003b01e4,param_1,2,0);
    if (iVar5 == 0) {
      return;
    }
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003b01e8 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (((int)(DAT_003b01ec / fVar12 + DAT_003b01f0) < (int)*(short *)(param_1 + 0xef4)) &&
       (*(short *)(param_1 + 0xf00) == 0)) {
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003b01e8 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0xef4) = (short)(int)(DAT_003b01ec / fVar12 + DAT_003b01f0);
    }
    FUN_00371b34(param_1,0);
    return;
  }
  iVar5 = FUN_00371cf8(DAT_003b01d0,param_1,4,1);
  fVar2 = DAT_003b01d8;
  fVar12 = DAT_003b01d4;
  iVar8 = 0;
  if (iVar5 == 1) {
    if (((*(ushort *)(param_1 + 0x1c) & 0x1f) == 1) &&
       ((int)*(char *)(param_1 + 0xc48) < (int)(uint)*(byte *)(param_1 + 0xc4e))) {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      bVar9 = DAT_003b01dc * DAT_003b01dc <= *(float *)(param_1 + 0x94);
      sVar3 = (short)(int)(fVar13 - fVar10);
      if (sVar3 < 0) {
        sVar3 = -sVar3;
      }
      if (!bVar9 || *(float *)(param_1 + 0x94) == DAT_003b01dc * DAT_003b01dc) {
        bVar9 = DAT_003b01d8 <= ABS(*(float *)(param_1 + 0x9c));
      }
      if ((!bVar9) && (sVar3 < DAT_003b01f4)) {
        *(undefined4 *)(param_1 + 0xbbc) = DAT_003b0200;
        return;
      }
    }
    FUN_00371b34(param_1,3);
  }
  fVar10 = (float)FUN_0035c628(param_1,*(undefined4 *)(param_1 + 0xc40),
                               (int)*(char *)(param_1 + 0xc48),local_28);
  FUN_00375a18(param_1 + 0x36,(int)local_28[0],6,4000,1);
  uVar7 = extraout_r2;
  if ((DAT_003b01f8 < fVar10) && ((int)fVar10 < DAT_003b01fc)) {
    uVar7 = 1;
    if (*(byte **)(param_1 + 0xc40) != (byte *)0x0) {
      uVar6 = **(byte **)(param_1 + 0xc40) - 1 & 0xff;
      if (*(char *)(param_1 + 0xc46) == '\0') {
        cVar1 = *(char *)(param_1 + 0xc48) + '\x01';
        *(char *)(param_1 + 0xc48) = cVar1;
        if ((int)uVar6 <= (int)cVar1) {
          *(undefined1 *)(param_1 + 0xc48) = 0;
        }
      }
      else {
        cVar1 = *(char *)(param_1 + 0xc48) + -1;
        if (cVar1 < '\0') {
          uVar6 = uVar6 - 1;
        }
        *(char *)(param_1 + 0xc48) = cVar1;
        if (cVar1 < '\0') {
          *(char *)(param_1 + 0xc48) = (char)uVar6;
        }
      }
      iVar8 = 1;
    }
  }
  uVar4 = *(ushort *)(param_1 + 0x1c) & 0x1f;
  if (uVar4 == 1) {
    if (iVar8 == 2) {
      uVar7 = (uint)*(byte *)(param_1 + 0xc48);
    }
    if (iVar8 == 2 && uVar7 == 1) goto LAB_003b013c;
  }
  else {
    bVar9 = uVar4 == 5 && iVar8 == 1;
    if (uVar4 == 5 && iVar8 == 1) {
      bVar9 = *(char *)(param_1 + 0xc48) == '\0';
    }
    if (bVar9) {
LAB_003b013c:
      FUN_0033dccc(param_1,param_2);
      return;
    }
  }
  if (uVar4 != 2) {
    fVar12 = fVar2;
  }
  if ((((uVar4 != 1) || (fVar12 <= ABS(*(float *)(param_1 + 0x9c)))) ||
      (uVar11 = DAT_003b0208, DAT_003b0204 <= *(int *)(param_1 + 0x98))) &&
     (uVar11 = DAT_003b020c, (*(ushort *)(param_1 + 0x1c) & 0x1f) == 0)) {
    uVar11 = DAT_003b0210;
  }
  FUN_00373500(uVar11,DAT_003b0218,DAT_003b0214,param_1 + 0x6c);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  return;
}

// OoT3D decomp @ 004983ec  name=FUN_004983ec  size=872

void FUN_004983ec(int param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  undefined4 *puVar8;
  uint extraout_r1;
  int iVar9;
  bool bVar10;
  uint in_fpscr;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  int local_30;

  if (*(char *)(param_1 + 9) != '\0') {
    FUN_00306a34(param_1 + 0x16c);
    bVar1 = *(byte *)(param_1 + 8);
    FUN_003069cc(param_1 + 0x16c);
    bVar10 = bVar1 == 6;
    if (5 < bVar1) {
      bVar10 = *(int *)(param_1 + 0x6fc) == 0;
    }
    if (bVar10) {
      FUN_004a0908(param_1);
    }
    FUN_00306a34(param_1 + 0x16c);
    bVar1 = *(byte *)(param_1 + 8);
    FUN_003069cc(param_1 + 0x16c);
    if ((bVar1 < 6) && (*(int *)(param_1 + 0x6fc) != 0)) {
      FUN_002c008c(param_1);
    }
    FUN_00306a34(param_1 + 0x16c);
    cVar2 = *(char *)(param_1 + 8);
    FUN_003069cc(param_1 + 0x16c);
    if ((cVar2 == '\v') && (uVar6 = *(uint *)(param_1 + 0x6fc), uVar6 != 0)) {
      software_interrupt(0x28);
      lVar3 = (ulonglong)uVar6 * 3 +
              CONCAT44(((int)extraout_r1 >> 0x1f) * DAT_00498754 +
                       (int)((ulonglong)DAT_00498754 * (ulonglong)extraout_r1 >> 0x20),
                       (int)((ulonglong)DAT_00498754 * (ulonglong)extraout_r1)) +
              CONCAT44(extraout_r1 * 3,(int)((ulonglong)DAT_00498754 * (ulonglong)uVar6 >> 0x20));
      uVar14 = FUN_00332754((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),1000,0);
      FUN_00306a34(param_1 + 0x16c);
      uVar6 = *(uint *)(param_1 + 0x158);
      iVar9 = *(int *)(param_1 + 0x15c);
      FUN_003069cc(param_1 + 0x16c);
      FUN_002c0134(*(undefined4 *)(param_1 + 0x94),&local_30);
      if (1 < local_30) {
        fVar7 = (float)FUN_002dbc64((uint)uVar14 - uVar6,
                                    (int)((ulonglong)uVar14 >> 0x20) -
                                    (iVar9 + (uint)((uint)uVar14 < uVar6)));
        iVar11 = VectorFloatToUnsigned(fVar7 * DAT_00498758 * *(float *)(param_1 + 0x14c),3);
        FUN_00306a34(param_1 + 0x16c);
        iVar9 = *(int *)(param_1 + 0x160);
        FUN_003069cc(param_1 + 0x16c);
        uVar5 = DAT_00498760;
        uVar4 = DAT_0049875c;
        if (0 < iVar11 - iVar9) {
          iVar9 = 0;
          *(int *)(param_1 + 0x704) = 1 - *(int *)(param_1 + 0x704);
          do {
            FUN_004a19c8(*(undefined4 *)(param_1 + 0x94),&local_64);
            iVar11 = param_1 + iVar9 * 0xa8;
            FUN_0049fd00(local_4c,local_48,1,2,1,local_64,local_60,local_5c,local_58 - local_4c,
                         local_54 - (local_4c >> 1),local_50 - (local_4c >> 1),
                         *(undefined4 *)(iVar11 + *(int *)(param_1 + 0x704) * 0x54 + 0x238),
                         0x200 - local_4c);
            puVar8 = (undefined4 *)FUN_0049fe7c();
            local_34 = *puVar8;
            uVar6 = FUN_0030dbd4(auStack_38,&local_34,1,0,0xffffffff,0xffffffff);
            if ((uVar6 & 0x80000000) == 0) {
              uVar6 = uVar6 >> 0x1b;
            }
            else {
              uVar6 = (uVar6 >> 0x1b) - 0x20;
            }
            if ((uVar6 != 0xfffffff9 && uVar6 != 0) && uVar6 != 1) {
              FUN_003351b4();
            }
            FUN_002c0ffc(*(undefined4 *)(param_1 + 0x94));
            FUN_00348a64(param_1 + iVar9 * 0x1b8 + 0x33c,0,
                         iVar11 + *(int *)(param_1 + 0x704) * 0x54 + 0x1ec,0x2600,0x2600,uVar4,uVar4
                        );
            uVar12 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1e0),
                                         (byte)(in_fpscr >> 0x15) & 3);
            uVar13 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1e4),
                                         (byte)(in_fpscr >> 0x15) & 3);
            if (*(char *)(param_1 + 0x1e8) != '\0') {
              uVar12 = VectorSignedToFloat(200 - *(int *)(param_1 + 0x144) / 2,
                                           (byte)(in_fpscr >> 0x15) & 3);
              uVar13 = VectorSignedToFloat(0x78 - *(int *)(param_1 + 0x148) / 2,
                                           (byte)(in_fpscr >> 0x15) & 3);
            }
            iVar11 = iVar9 * 4;
            iVar9 = iVar9 + 1;
            iVar11 = *(int *)(param_1 + iVar11 + 0x6fc);
            *(undefined4 *)(iVar11 + 0x44) = uVar5;
            *(undefined4 *)(iVar11 + 0x40) = uVar13;
            *(undefined4 *)(iVar11 + 0x3c) = uVar12;
          } while (iVar9 < 2);
          FUN_00306a34(param_1 + 0x16c);
          *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
          FUN_003069cc(param_1 + 0x16c);
        }
      }
    }
  }
  return;
}

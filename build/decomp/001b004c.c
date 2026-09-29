// OoT3D decomp @ 001b004c  name=FUN_001b004c  size=1788

void FUN_001b004c(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint *puVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  short sVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  uint in_fpscr;
  undefined4 uVar25;
  float fVar26;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;

  if (*(short *)(param_1 + 0x618) != 0) {
    FUN_0034f724(param_2);
    *(undefined2 *)(param_1 + 0x618) = 0;
  }
  piVar8 = DAT_001b042c;
  fVar7 = DAT_001b0424;
  uVar6 = DAT_001b0420;
  uVar5 = DAT_001b041c;
  uVar25 = DAT_001b0418;
  fVar4 = DAT_001b0414;
  if (*(uint *)(param_1 + 0x22c) != DAT_001b0410) {
    FUN_003731e0(param_1 + 0x1a4);
    local_50 = uVar6;
    local_4c = (float)uVar6;
    local_48 = uVar6;
    local_54 = uVar6;
    iVar13 = *(int *)(param_1 + 0x22c);
    iVar14 = DAT_001b0430;
    if (iVar13 != DAT_001b0430) {
      iVar14 = DAT_001b0434;
    }
    if (iVar13 == DAT_001b0430 || iVar13 == iVar14) {
      local_50 = *(undefined4 *)(param_1 + 0x28);
      local_4c = *(float *)(param_1 + 0x84) + DAT_001b0438;
      local_48 = *(undefined4 *)(param_1 + 0x30);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  uVar9 = DAT_001b0444;
  if ((*(uint *)(param_1 + 4) & 0x2000) == 0) {
    uVar20 = *(uint *)(param_1 + 0x22c);
    if (uVar20 != DAT_001b0444) {
      bVar1 = *(byte *)(param_1 + 0x241);
      uVar19 = (uint)bVar1;
      uVar15 = *(undefined4 *)(param_2 + 0x20ac);
      if ((bVar1 & 2) == 0) {
        bVar22 = uVar20 != DAT_001b0410;
        uVar3 = DAT_001b0410;
        if (bVar22) {
          uVar3 = DAT_001b044c;
        }
        bVar23 = uVar20 != uVar3;
        if (bVar22 && bVar23) {
          uVar3 = DAT_001b0450;
        }
        bVar24 = uVar20 != uVar3;
        if ((bVar22 && bVar23) && bVar24) {
          uVar20 = (uint)*(byte *)(param_2 + 0x208e);
        }
        if (((((!bVar22 || !bVar23) || !bVar24) || uVar20 == 0) ||
            (DAT_001b0454 <= *(int *)(param_1 + 0x98))) ||
           (DAT_001b0458 <= *(int *)(param_1 + 0x9c))) {
          if (((*(short *)(param_1 + 0x620) == 0) ||
              (sVar21 = *(short *)(param_1 + 0x620) + -1, *(short *)(param_1 + 0x620) = sVar21,
              sVar21 == 0)) && ((*(byte *)(param_1 + 0x240) & 2) != 0)) {
            *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) & 0xfd;
            uVar10 = DAT_001b0934;
            uVar12 = *(ushort *)(param_1 + 0x61e);
            bVar22 = uVar12 == 0;
            if (bVar22) {
              uVar12 = (ushort)*(byte *)(param_1 + 0x240);
            }
            if (bVar22 && (uVar12 & 4) == 0) {
              *(undefined2 *)(param_1 + 0x620) = 0x2d;
              FUN_00375bcc(uVar15,uVar10);
              FUN_00374bb8(*(float *)(param_1 + 0x6c) + fVar4,DAT_001b0938,param_2,param_1,
                           (int)*(short *)(param_1 + 0x92));
            }
          }
          goto LAB_001b0594;
        }
      }
      *(byte *)(param_1 + 0x241) = bVar1 & 0xfd;
      if (*(short *)(param_1 + 0x61e) == 0) {
        iVar14 = *(int *)(param_1 + 0x24c);
        puVar16 = *(uint **)(iVar14 + 0x24);
        if (puVar16 != (uint *)0x0) {
          uVar19 = *puVar16;
        }
        if (puVar16 == (uint *)0x0 || (uVar19 & 0x80) == 0) {
          if ((*(char *)(param_1 + 0x610) == '\0') &&
             (iVar14 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x62c),
                                    *(undefined4 *)(param_1 + 0x630),
                                    *(undefined4 *)(param_1 + 0x634),param_2 + 0x208c,param_1,
                                    param_2,0xab,0,(int)*(short *)(param_1 + 0xbe),0,
                                    (int)*(short *)(param_1 + 0x616)), iVar14 != 0)) {
            bVar1 = *(byte *)(param_1 + 0xb7);
            *(byte *)(*(int *)(param_1 + 0x128) + 0xb7) = bVar1 & 7;
            if ((bVar1 & 7) == 0) {
              *(undefined1 *)(*(int *)(param_1 + 0x128) + 0xb7) = 8;
            }
            if ((*(uint *)(param_1 + 4) & 0x2000) != 0) {
              FUN_003426b0(param_2,param_1,*(undefined4 *)(param_1 + 0x128));
            }
            *(undefined1 *)(param_1 + 0x610) = 1;
            *(undefined2 *)(param_1 + 0x61e) = 0x2d;
            uVar15 = DAT_001b0448;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
            FUN_00375bcc(param_1,uVar15);
            FUN_00375b70(param_2,param_1);
          }
        }
        else {
          local_50 = VectorSignedToFloat((int)*(short *)(iVar14 + 0xe),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_4c = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0x10),
                                                (byte)(in_fpscr >> 0x15) & 3);
          local_48 = VectorSignedToFloat((int)*(short *)(iVar14 + 0x12),(byte)(in_fpscr >> 0x15) & 3
                                        );
          FUN_003741e4(param_2,*puVar16,1,&local_50,0);
        }
      }
    }
  }
  else {
    uVar12 = *(ushort *)(param_1 + 0x61e);
    bVar22 = uVar12 == 0;
    if (bVar22) {
      uVar12 = (ushort)*(byte *)(param_1 + 0x610);
    }
    if ((bVar22 && uVar12 == 0) &&
       (iVar14 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x62c),*(undefined4 *)(param_1 + 0x630),
                              *(undefined4 *)(param_1 + 0x634),param_2 + 0x208c,param_1,param_2,0xab
                              ,0,(int)*(short *)(param_1 + 0xbe),0,(int)*(short *)(param_1 + 0x616))
       , iVar14 != 0)) {
      bVar1 = *(byte *)(param_1 + 0xb7);
      *(byte *)(*(int *)(param_1 + 0x128) + 0xb7) = bVar1 & 7;
      if ((bVar1 & 7) == 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x128) + 0xb7) = 8;
      }
      if ((*(uint *)(param_1 + 4) & 0x2000) != 0) {
        FUN_003426b0(param_2,param_1,*(undefined4 *)(param_1 + 0x128));
      }
      *(undefined1 *)(param_1 + 0x610) = 1;
      uVar15 = DAT_001b0448;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      *(undefined2 *)(param_1 + 0x61e) = 0x2d;
      FUN_00375bcc(param_1,uVar15);
      FUN_00375b70(param_2,param_1);
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffdfff;
    }
  }
LAB_001b0594:
  FUN_00376864(param_1);
  FUN_00376340(uVar6,uVar6,uVar6,param_2,param_1,4);
  if (*(short *)(param_1 + 0x61e) != 0) {
    FUN_0036e168(uVar6,uVar25,uVar5,uVar6,param_1 + 0x628);
    iVar14 = DAT_001b093c;
    uVar25 = VectorFloatToUnsigned(*(int *)(param_1 + 0x628),3);
    *(char *)(param_1 + 0xd0) = (char)uVar25;
    if (*(int *)(param_1 + 0x628) < iVar14) {
      *(undefined4 *)(param_1 + 0x6c) = uVar6;
      *(undefined2 *)(param_1 + 0x61e) = 0;
      *(undefined2 *)(param_1 + 0x61a) = 0;
      *(uint *)(param_1 + 0x22c) = uVar9;
    }
  }
  (**(code **)(param_1 + 0x22c))(param_1,param_2);
  fVar11 = DAT_001b0948;
  fVar4 = DAT_001b0944;
  pcVar17 = (char *)(param_1 + 0xe58);
  local_54 = *DAT_001b0940;
  local_50 = DAT_001b0940[1];
  local_4c = (float)DAT_001b0940[2];
  local_48 = DAT_001b0940[3];
  sVar21 = 0;
  pcVar18 = pcVar17;
  do {
    if (*pcVar18 == '\x02') {
      bVar1 = pcVar18[1];
      pcVar18[1] = (char)(bVar1 + 1);
      iVar13 = *piVar8;
      uVar20 = bVar1 + 1 & 3;
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(pcVar18 + 0x14) =
           *(float *)(pcVar18 + 0x14) + *(float *)(pcVar18 + 0x20) * fVar26 * fVar11;
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(pcVar18 + 0x18) =
           *(float *)(pcVar18 + 0x18) + *(float *)(pcVar18 + 0x24) * fVar26 * fVar11;
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(pcVar18 + 0x1c) =
           *(float *)(pcVar18 + 0x1c) + *(float *)(pcVar18 + 0x28) * fVar26 * fVar11;
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(pcVar18 + 0x20) =
           *(float *)(pcVar18 + 0x20) + *(float *)(pcVar18 + 0x2c) * fVar26 * fVar11;
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(pcVar18 + 0x24) =
           *(float *)(pcVar18 + 0x24) + *(float *)(pcVar18 + 0x30) * fVar26 * fVar11;
      iVar14 = uVar20 * 4;
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(pcVar18 + 0x28) =
           *(float *)(pcVar18 + 0x28) + *(float *)(pcVar18 + 0x34) * fVar26 * fVar11;
      pcVar18[0xc] = *(char *)(&local_54 + uVar20);
      pcVar18[0xd] = *(char *)((int)&local_54 + iVar14 + 1);
      pcVar18[0xe] = *(char *)((int)&local_54 + iVar14 + 2);
      fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fVar7 + fVar26 * fVar4 * fVar11) < (int)(uint)(byte)pcVar18[0xf]) {
        fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar13 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        pcVar18[0xf] = pcVar18[0xf] - (char)(int)(fVar7 + fVar26 * fVar4 * fVar11);
      }
      else {
        pcVar18[0xf] = '\0';
        *pcVar18 = '\0';
      }
    }
    sVar21 = sVar21 + 1;
    pcVar18 = pcVar18 + 0x3c;
  } while (sVar21 < 100);
  sVar21 = 0;
  do {
    if (*pcVar17 == '\x01') {
      cVar2 = pcVar17[1];
      pcVar17[1] = cVar2 + -1;
      if ((char)(cVar2 + -1) == '\0') {
        *pcVar17 = '\0';
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar21 = sVar21 + 1;
    pcVar17 = pcVar17 + 0x3c;
  } while (sVar21 < 100);
  uVar19 = *(uint *)(param_1 + 0x22c);
  uVar20 = DAT_001b0410;
  if (uVar19 != DAT_001b0410) {
    uVar20 = DAT_001b044c;
  }
  if ((uVar19 == DAT_001b0410 || uVar19 == uVar20) || uVar19 == uVar9) {
    return;
  }
  sVar21 = *(short *)(param_1 + 0x620);
  bVar22 = sVar21 == 0;
  if (bVar22) {
    sVar21 = *(short *)(param_1 + 0x61e);
  }
  if (bVar22 && sVar21 == 0) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x230);
  }
  iVar13 = *(int *)(param_1 + 0x22c);
  iVar14 = DAT_001b0430;
  if (iVar13 != DAT_001b0430) {
    iVar14 = DAT_001b0434;
  }
  if (iVar13 == DAT_001b0430 || iVar13 == iVar14) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x230);
  }
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x230);
  return;
}

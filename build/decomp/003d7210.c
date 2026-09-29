// OoT3D decomp @ 003d7210  name=FUN_003d7210  size=2868

void FUN_003d7210(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  short *psVar9;
  undefined1 *puVar10;
  short sVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;

  fVar20 = DAT_003d7604;
  uVar12 = DAT_003d7600;
  local_6c = DAT_003d7600;
  local_68 = DAT_003d7600;
  local_64 = DAT_003d7600;
  local_78 = DAT_003d7600;
  local_74 = DAT_003d7604;
  local_70 = DAT_003d7600;
  local_7c = *DAT_003d7608;
  local_80 = DAT_003d7608[1];
  local_8c = DAT_003d7600;
  local_88 = DAT_003d7600;
  local_84 = DAT_003d7600;
  local_98 = DAT_003d7600;
  local_94 = DAT_003d760c;
  local_90 = DAT_003d7600;
  iVar14 = *(int *)(DAT_003d7610 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00370084(param_1 + 0xbc,0,2,DAT_003d7614);
  iVar6 = FUN_003736fc(DAT_003d7618,fVar20,param_1 + 0x1a4);
  if ((iVar6 != 0) || (iVar6 = FUN_003736fc(DAT_003d761c,fVar20,param_1 + 0x1a4), iVar6 != 0)) {
    FUN_00375bcc(param_1,DAT_003d7620);
  }
  iVar6 = FUN_003736fc(DAT_003d7624,fVar20,param_1 + 0x1a4);
  if (iVar6 != 0) {
    FUN_0036fcfc(param_1,param_2,0,8);
  }
  *(undefined2 *)(param_1 + 0x254) = 2;
  *(undefined2 *)(param_1 + 0x250) = 1;
  if (*(short *)(param_1 + 0x26e) == 0x3e9) {
    puVar10 = (undefined1 *)(param_1 + 0x7f4);
    iVar6 = 0x5a;
    pcVar7 = DAT_003d7628;
    do {
      if (*pcVar7 != '\0') {
        *puVar10 = 1;
      }
      iVar6 = iVar6 + -1;
      puVar10 = puVar10 + 1;
      pcVar7 = pcVar7 + 1;
    } while (iVar6 != 0);
  }
  if (((int)*(short *)(param_1 + 0x26e) - 0x44dU < 99) &&
     (((int)*(short *)(param_1 + 0x26e) & 7U) == 0)) {
    FUN_00339f50(param_2,param_1 + 0x3c);
  }
  uVar2 = DAT_003d765c;
  fVar25 = DAT_003d7658;
  uVar1 = DAT_003d7654;
  fVar24 = DAT_003d7650;
  fVar22 = DAT_003d764c;
  fVar23 = DAT_003d7648;
  uVar15 = DAT_003d7630;
  fVar21 = DAT_003d762c;
  if (((int)*(short *)(param_1 + 0x26e) - 0x385U < 0xb3) && (*(short *)(param_1 + 0x26c) < 3)) {
    if (*(short *)(param_1 + 0x26e) < DAT_003d7634) {
      FUN_00375bcc(param_1,DAT_003d7638);
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  uVar8 = (uint)*(short *)(param_1 + 0x26c);
  if (uVar8 == 0) {
    *(undefined2 *)(param_1 + 0x26c) = 1;
    FUN_00367494(param_2,param_2 + 0x2298);
    FUN_0036e980(param_2,param_1,1);
    uVar5 = FUN_00367d74(param_2);
    *(undefined2 *)(param_1 + 600) = uVar5;
    FUN_00320d7c(param_2,0,3);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 600),7);
    iVar6 = FUN_0036c5bc(param_2,0);
    fVar20 = *(float *)(iVar6 + 0x8c);
    *(float *)(param_1 + 0x32c) = fVar20;
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(iVar6 + 0x90);
    fVar21 = *(float *)(iVar6 + 0x94);
    *(float *)(param_1 + 0x334) = fVar21;
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(iVar6 + 0x80);
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(iVar6 + 0x84);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(iVar6 + 0x88);
    fVar20 = fVar20 - *(float *)(param_1 + 0x28);
    fVar21 = fVar21 - *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x2c4) = SQRT(fVar20 * fVar20 + fVar21 * fVar21);
    uVar15 = FUN_003696ec();
    uVar12 = DAT_003d7b88;
    *(undefined4 *)(param_1 + 0x2c8) = uVar15;
    uVar15 = DAT_003d7b8c;
    *(short *)(param_1 + 0x270) = (short)uVar12;
    FUN_00375bcc(param_1,uVar15);
  }
  else {
    local_60 = param_2 + 0x208c;
    if (uVar8 == 1) {
      fVar18 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar26 = DAT_003d7b90;
      fVar18 = fVar18 * DAT_003d7b90;
      fVar19 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      uVar3 = DAT_003d7b94;
      FUN_00373500(*(float *)(param_1 + 0x28) + fVar18,DAT_003d7b94,uVar15,iVar14 + 0x28);
      FUN_00373500(*(float *)(param_1 + 0x30) + fVar19 * fVar26,uVar3,uVar15,iVar14 + 0x30);
      if (*(short *)(param_1 + 0x26e) < DAT_003d7b98) {
        *(undefined2 *)(param_1 + 0x25e) = 1;
        local_b4 = fVar20;
        local_b0 = fVar20;
        local_ac = fVar20;
        iVar6 = param_1 + 0x1a4;
        fVar18 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x25c),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar20 = fVar20 - fVar18 * fVar23;
        local_a8 = fVar24 + fVar20 * fVar20 * fVar22;
        FUN_00357a50(iVar6,0,0,&local_b4,2);
        FUN_00357a50(iVar6,1,0,&local_b4,2);
        FUN_00357a50(iVar6,2,0,&local_b4,2);
        FUN_00357a50(iVar6,3,0,&local_b4,2);
        *(short *)(param_1 + 0x25c) = *(short *)(param_1 + 0x25c) + 1;
      }
      if ((*(short *)(param_1 + 0x26e) < DAT_003d7634) && ((*(ushort *)(param_1 + 0x230) & 3) == 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      *(float *)(param_1 + 0x2c8) = *(float *)(param_1 + 0x2c8) + DAT_003d7b9c;
      FUN_00373500(DAT_003d7ba0,uVar1,uVar15,param_1 + 0x2c4);
      fVar20 = (float)FUN_003727f0(*(undefined4 *)(param_1 + 0x2c8));
      fVar22 = *(float *)(param_1 + 0x2c4);
      fVar23 = (float)FUN_00372674(*(undefined4 *)(param_1 + 0x2c8));
      fVar24 = *(float *)(param_1 + 0x2c4);
      FUN_0036e168(*(float *)(param_1 + 0x28) + fVar20 * fVar22,uVar2,fVar25,uVar1,param_1 + 0x32c);
      FUN_0036e168(*(float *)(param_1 + 0x2c) + fVar21,uVar2,fVar25,uVar1,param_1 + 0x330);
      FUN_0036e168(*(float *)(param_1 + 0x30) + fVar23 * fVar24,uVar2,fVar25,uVar1,param_1 + 0x334);
      FUN_0036e168(*(undefined4 *)(param_1 + 0x308),uVar2,fVar25,uVar1,param_1 + 0x338);
      FUN_0036e168(*(undefined4 *)(param_1 + 0x40),uVar3,fVar26,uVar1,param_1 + 0x33c);
      FUN_0036e168(*(undefined4 *)(param_1 + 0x310),uVar2,fVar25,uVar1,param_1 + 0x340);
      if (*(short *)(param_1 + 0x270) == 0x50) {
        FUN_0036ec40(0,DAT_003d7ba4);
      }
      if (*(short *)(param_1 + 0x270) == 0) {
        *(undefined2 *)(param_1 + 0x26c) = 2;
        FUN_00320d7c(param_2,0,3);
        *(undefined2 *)(param_1 + 0x270) = 0x46;
        *(undefined4 *)(param_1 + 700) = uVar12;
        iVar6 = FUN_0035b164();
        if (iVar6 == 1) {
          iVar6 = FUN_0035b0a0();
          if (iVar6 != 0) {
            sVar11 = *(short *)(param_1 + 0xbe);
            fVar20 = (float)FUN_002cfca0();
            fVar21 = DAT_003d7ba8;
            fVar25 = *(float *)(param_1 + 0x28);
            fVar20 = fVar20 * DAT_003d7ba8;
            fVar23 = (float)FUN_00338f60((int)(short)(sVar11 + 0x4000));
            fVar26 = *(float *)(param_1 + 0x30);
            fVar22 = (float)FUN_002cfca0();
            fVar18 = *(float *)(param_1 + 0x28);
            fVar24 = (float)FUN_00338f60((int)(short)(sVar11 + -0x4000));
            FUN_0035af20(fVar25 + fVar20,DAT_003d7bac,fVar26 + fVar23 * fVar21,
                         fVar18 + fVar22 * fVar21,DAT_003d7bac,
                         *(float *)(param_1 + 0x30) + fVar24 * fVar21,param_2,0,sVar11 + -0x8000,
                         sVar11 + -0x8000);
          }
        }
        else {
          local_b0 = 0.0;
          local_ac = 1.4013e-45;
          local_b4 = 0.0;
          z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           *(undefined4 *)(param_1 + 0x30),local_60,param_2,0x5f,0,0);
        }
      }
    }
    else if (uVar8 == 2) {
      local_b4 = fVar20;
      local_b0 = fVar20;
      local_ac = fVar20;
      iVar6 = param_1 + 0x1a4;
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x25c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar21 = fVar20 - fVar21 * DAT_003d7648;
      local_a8 = DAT_003d7650 + fVar21 * fVar21 * DAT_003d764c;
      FUN_00357a50(iVar6,0,0,&local_b4,2);
      FUN_00357a50(iVar6,1,0,&local_b4,2);
      FUN_00357a50(iVar6,2,0,&local_b4,2);
      FUN_00357a50(iVar6,3,0,&local_b4,2);
      *(short *)(param_1 + 0x25c) = *(short *)(param_1 + 0x25c) + 1;
      iVar6 = FUN_0036c5bc(param_2,0);
      FUN_0036e168(*(undefined4 *)(iVar6 + 0x8c),uVar2,*(float *)(param_1 + 700) * fVar25,
                   param_1 + 0x32c);
      FUN_0036e168(*(undefined4 *)(iVar6 + 0x90),uVar2,*(float *)(param_1 + 700) * fVar25,
                   param_1 + 0x330);
      FUN_0036e168(*(undefined4 *)(iVar6 + 0x94),uVar2,*(float *)(param_1 + 700) * fVar25,
                   param_1 + 0x334);
      FUN_0036e168(*(undefined4 *)(iVar6 + 0x80),uVar2,*(float *)(param_1 + 700) * fVar25,
                   param_1 + 0x338);
      FUN_0036e168(*(undefined4 *)(iVar6 + 0x84),uVar2,*(float *)(param_1 + 700) * fVar25,
                   param_1 + 0x33c);
      FUN_0036e168(*(undefined4 *)(iVar6 + 0x88),uVar2,*(float *)(param_1 + 700) * fVar25,
                   param_1 + 0x340);
      FUN_0036e168(fVar20,fVar20,DAT_003d7f48,uVar12,param_1 + 700);
      fVar21 = DAT_003d7f50;
      fVar20 = DAT_003d7f4c;
      if (*(short *)(param_1 + 0x270) == 0) {
        *(undefined2 *)(param_1 + 0x270) = 0x1e;
        *(undefined2 *)(param_1 + 0x26c) = 3;
        iVar4 = DAT_003d7f5c;
        uVar12 = DAT_003d7f58;
        iVar6 = DAT_003d7f54;
        iVar13 = 0;
        iVar16 = DAT_003d7f54 + 0x4e0000;
        fVar23 = fVar21;
        fVar22 = fVar20;
        do {
          if (((iVar6 <= (int)ABS(fVar22 - *(float *)(iVar14 + 0x28))) ||
              (iVar6 <= (int)ABS(fVar23 - *(float *)(iVar14 + 0x30)))) &&
             ((iVar16 <= (int)ABS(fVar22 - *(float *)(param_1 + 0x28)) ||
              (iVar16 <= (int)ABS(fVar23 - *(float *)(param_1 + 0x30)))))) break;
          fVar22 = (float)FUN_003738a8(uVar12);
          fVar22 = fVar22 + fVar20;
          fVar23 = (float)FUN_003738a8(uVar12);
          fVar23 = fVar23 + fVar21;
          iVar13 = (int)(short)((short)iVar13 + 1);
        } while (iVar13 < iVar4);
        local_b0 = 0.0;
        local_b4 = 0.0;
        local_ac = 0.0;
        FUN_0036aa20(fVar22,*(undefined4 *)(param_1 + 0x2c),local_60,param_1,param_2,0x5d,0);
        FUN_0036ec14(param_2,(int)*(char *)(DAT_003d7f60 + param_2));
      }
    }
    else {
      bVar17 = uVar8 == 3;
      if (bVar17) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x270);
      }
      if (bVar17 && uVar8 == 0) {
        iVar6 = FUN_0036e168(uVar12,fVar20,DAT_003d7660,uVar12,param_1 + 0x58);
        if (iVar6 <= DAT_003d7664) {
          iVar6 = FUN_0036c5bc(param_2,0);
          uVar12 = *(undefined4 *)(param_1 + 0x330);
          uVar15 = *(undefined4 *)(param_1 + 0x334);
          *(undefined4 *)(iVar6 + 0x8c) = *(undefined4 *)(param_1 + 0x32c);
          *(undefined4 *)(iVar6 + 0x90) = uVar12;
          *(undefined4 *)(iVar6 + 0x94) = uVar15;
          uVar12 = *(undefined4 *)(param_1 + 0x330);
          uVar15 = *(undefined4 *)(param_1 + 0x334);
          *(undefined4 *)(iVar6 + 0xa4) = *(undefined4 *)(param_1 + 0x32c);
          *(undefined4 *)(iVar6 + 0xa8) = uVar12;
          *(undefined4 *)(iVar6 + 0xac) = uVar15;
          uVar12 = *(undefined4 *)(param_1 + 0x33c);
          uVar15 = *(undefined4 *)(param_1 + 0x340);
          *(undefined4 *)(iVar6 + 0x80) = *(undefined4 *)(param_1 + 0x338);
          *(undefined4 *)(iVar6 + 0x84) = uVar12;
          *(undefined4 *)(iVar6 + 0x88) = uVar15;
          FUN_0036e9b8(param_2,(int)*(short *)(param_1 + 600),0);
          *(undefined2 *)(param_1 + 600) = 0;
          FUN_00367374(param_2,param_2 + 0x2298);
          FUN_0036e980(param_2,param_1,7);
          FUN_0035af04(iVar14,0);
          FUN_00374428(param_1);
        }
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
      }
    }
  }
  if (*(short *)(param_1 + 600) != 0) {
    FUN_00367b14(param_2,(int)*(short *)(param_1 + 600),param_1 + 0x338,param_1 + 0x32c);
  }
  psVar9 = (short *)(param_2 + 0x3200);
  if (*(short *)(param_1 + 0x260) == 0) {
    *(short *)(param_2 + 0x31fc) = *(short *)(param_2 + 0x31fc) + -10;
    *(short *)(param_2 + 0x31fe) = *(short *)(param_2 + 0x31fe) + -10;
    *psVar9 = *psVar9 + -0x14;
    *(short *)(param_2 + 0x3208) = *(short *)(param_2 + 0x3208) + -2;
    *(short *)(param_2 + 0x320a) = *(short *)(param_2 + 0x320a) + -2;
    sVar11 = *(short *)(param_2 + 0x320c) + -4;
  }
  else {
    *(short *)(param_1 + 0x260) = *(short *)(param_1 + 0x260) + -1;
    *(short *)(param_2 + 0x31fc) = *(short *)(param_2 + 0x31fc) + 0x14;
    *(short *)(param_2 + 0x31fe) = *(short *)(param_2 + 0x31fe) + 0x14;
    *psVar9 = *psVar9 + 0x28;
    *(short *)(param_2 + 0x3208) = *(short *)(param_2 + 0x3208) + 5;
    *(short *)(param_2 + 0x320a) = *(short *)(param_2 + 0x320a) + 5;
    sVar11 = *(short *)(param_2 + 0x320c) + 10;
  }
  *(short *)(param_2 + 0x320c) = sVar11;
  if (100 < *(short *)(param_2 + 0x31fc)) {
    *(undefined2 *)(param_2 + 0x31fc) = 100;
  }
  if (100 < *(short *)(param_2 + 0x31fe)) {
    *(undefined2 *)(param_2 + 0x31fe) = 100;
  }
  if (100 < *psVar9) {
    *psVar9 = 100;
  }
  if (0x23 < *(short *)(param_2 + 0x3208)) {
    *(undefined2 *)(param_2 + 0x3208) = 0x23;
  }
  if (0x23 < *(short *)(param_2 + 0x320a)) {
    *(undefined2 *)(param_2 + 0x320a) = 0x23;
  }
  if (0x46 < *(short *)(param_2 + 0x320c)) {
    *(undefined2 *)(param_2 + 0x320c) = 0x46;
  }
  if (*(short *)(param_2 + 0x31fc) < 0) {
    *(undefined2 *)(param_2 + 0x31fc) = 0;
  }
  if (*(short *)(param_2 + 0x31fe) < 0) {
    *(undefined2 *)(param_2 + 0x31fe) = 0;
  }
  if (*psVar9 < 0) {
    *psVar9 = 0;
  }
  if (*(short *)(param_2 + 0x3208) < 0) {
    *(undefined2 *)(param_2 + 0x3208) = 0;
  }
  if (*(short *)(param_2 + 0x320a) < 0) {
    *(undefined2 *)(param_2 + 0x320a) = 0;
  }
  if (*(short *)(param_2 + 0x320c) < 0) {
    *(undefined2 *)(param_2 + 0x320c) = 0;
  }
  return;
}

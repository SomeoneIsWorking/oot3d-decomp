// OoT3D decomp @ 003efc9c  name=FUN_003efc9c  size=1976

void FUN_003efc9c(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  undefined4 uVar8;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 auStack_38 [12];
  int local_2c;
  int local_28;

  iVar10 = *(int *)(DAT_003f02d4 + param_2);
  if ((*(int *)(param_1 + 0x124) == 0) || (iVar5 = FUN_00355a60(iVar10), iVar5 == 0)) {
    iVar10 = *(int *)(param_1 + 0x270);
    if (iVar10 != 0) {
      *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) & 0xffffdfff;
      *(undefined4 *)(param_1 + 0x270) = 0;
    }
    FUN_00374428(param_1);
    return;
  }
  FUN_0034a928(iVar10,DAT_003f02d8);
  iVar11 = *(int *)(param_1 + 0x124);
  iVar5 = FUN_00355a60(iVar11);
  uVar9 = extraout_r2;
  if (iVar5 != 0) {
    uVar6 = (uint)*(char *)(iVar11 + 0x1a9);
    bVar12 = (int)*(char *)(iVar11 + 0x1ac) != uVar6;
    if (!bVar12) {
      uVar6 = *(uint *)(iVar11 + 4);
    }
    if ((bVar12 || (uVar6 & 0x100) != 0) || ((*(uint *)(DAT_003f02dc + iVar11) & DAT_003f02e0) != 0)
       ) {
      *(undefined2 *)(param_1 + 0x280) = 0;
      iVar5 = *(int *)(param_1 + 0x270);
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) & 0xffffdfff;
        *(undefined4 *)(param_1 + 0x270) = 0;
      }
      FUN_0036df4c(param_1 + 0x28,iVar11 + 0x1240);
      uVar9 = extraout_r2_00;
    }
  }
  if (*(short *)(param_1 + 0x280) == 0) {
LAB_003efe68:
    iVar5 = DAT_003f02f4;
    psVar7 = *(short **)(param_1 + 0x270);
    if (psVar7 != (short *)0x0) {
      uVar9 = 0;
      if (*(int *)(psVar7 + 0x9e) != 0) {
        uVar9 = *(uint *)(psVar7 + 2);
      }
      if (*(int *)(psVar7 + 0x9e) != 0 && (uVar9 & 0x2000) != 0) {
        if (*(int *)(param_1 + 0x128) != 0) {
          fVar14 = (float)FUN_003306c4(param_1,psVar7);
          fVar15 = *(float *)(param_1 + 0x274);
          fVar16 = *(float *)(param_1 + 0x278);
          fVar17 = *(float *)(param_1 + 0x27c);
          *(float *)(param_1 + 0x28) = *(float *)(psVar7 + 0x14) - fVar15;
          *(float *)(param_1 + 0x2c) = *(float *)(psVar7 + 0x16) - fVar16;
          *(float *)(param_1 + 0x30) = *(float *)(psVar7 + 0x18) - fVar17;
          if (iVar5 < (int)(fVar14 - SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17))) {
            iVar11 = *(int *)(param_1 + 0x270);
            if (iVar11 != 0) {
              *(uint *)(iVar11 + 4) = *(uint *)(iVar11 + 4) & 0xffffdfff;
              *(undefined4 *)(param_1 + 0x270) = 0;
            }
            psVar7 = (short *)0x0;
          }
        }
      }
      else {
        psVar7 = (short *)0x0;
        *(undefined4 *)(param_1 + 0x270) = 0;
      }
    }
    fVar14 = DAT_003f02fc;
    fVar19 = *(float *)(param_1 + 0x28) - *(float *)(iVar10 + 0x1240);
    fVar16 = *(float *)(param_1 + 0x2c) - *(float *)(iVar10 + 0x1244);
    fVar17 = *(float *)(param_1 + 0x30) - *(float *)(iVar10 + 0x1248);
    fVar15 = SQRT(fVar19 * fVar19 + fVar16 * fVar16 + fVar17 * fVar17);
    if ((int)fVar15 < DAT_003f02f8) {
      bVar12 = true;
      if (psVar7 != (short *)0x0) {
        bVar12 = *DAT_003f0300 <= fVar15;
      }
      fVar15 = fVar14;
      fVar20 = fVar14;
      if (!bVar12) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar10 + 0x28);
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar10 + 0x30);
      }
    }
    else {
      fVar18 = DAT_003f0304;
      if ((*(int *)(param_1 + 0x128) == 0) && (fVar18 = DAT_003f0308, psVar7 != (short *)0x0)) {
        fVar18 = DAT_003f030c;
      }
      fVar20 = fVar15 - fVar18;
      if (fVar15 - fVar18 <= DAT_003f02fc) {
        fVar20 = DAT_003f02fc;
      }
      fVar15 = fVar20 / fVar15;
    }
    fVar18 = DAT_003f0310;
    if (*(int *)(param_1 + 0x128) == 0) {
      if ((psVar7 == (short *)0x0) || (*psVar7 != 0xd5)) {
        fVar19 = *(float *)(iVar10 + 0x1240) + fVar19 * fVar15;
        *(float *)(param_1 + 0x28) = fVar19;
        *(float *)(param_1 + 0x2c) = *(float *)(iVar10 + 0x1244) + fVar16 * fVar15;
        *(float *)(param_1 + 0x30) = *(float *)(iVar10 + 0x1248) + fVar17 * fVar15;
        if (psVar7 != (short *)0x0) {
          *(float *)(psVar7 + 0x14) = fVar19 + *(float *)(param_1 + 0x274);
          *(float *)(psVar7 + 0x16) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x278);
          *(float *)(psVar7 + 0x18) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x27c);
        }
      }
      else {
        *(float *)(param_1 + 0x28) = *(float *)(psVar7 + 0x14) - *(float *)(param_1 + 0x274);
        *(float *)(param_1 + 0x2c) = *(float *)(psVar7 + 0x16) - *(float *)(param_1 + 0x278);
        *(float *)(param_1 + 0x30) = *(float *)(psVar7 + 0x18) - *(float *)(param_1 + 0x27c);
        fVar20 = fVar18;
      }
    }
    else {
      *(float *)(iVar10 + 0x60) = fVar19 - fVar19 * fVar15;
      *(float *)(iVar10 + 100) = fVar16 - fVar16 * fVar15;
      *(float *)(iVar10 + 0x68) = fVar17 - fVar17 * fVar15;
      uVar4 = FUN_003758b0(SQRT(fVar19 * fVar19 + fVar17 * fVar17),-fVar16);
      *(undefined2 *)(iVar10 + 0x34) = uVar4;
    }
    if ((int)fVar20 < iVar5) {
      iVar5 = *(int *)(param_1 + 0x270);
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) & 0xffffdfff;
        *(undefined4 *)(param_1 + 0x270) = 0;
      }
      if (fVar20 == fVar14) {
        *(undefined4 *)(param_1 + 0x284) = DAT_003f0314;
        iVar5 = DAT_003f0318;
        *(int *)(iVar10 + 0x128) = param_1;
        *(int *)(iVar5 + iVar10) = param_1;
        if (*(int *)(param_1 + 0x128) != 0) {
          *(undefined4 *)(iVar10 + 0x124) = 0;
          *(undefined4 *)(param_1 + 0x128) = 0;
          *(float *)(iVar10 + 0x60) = *(float *)(param_1 + 0x28) - *(float *)(iVar10 + 0x28);
          fVar14 = *(float *)(param_1 + 0x2c) - *(float *)(iVar10 + 0x2c);
          *(float *)(iVar10 + 100) = fVar14;
          *(float *)(iVar10 + 0x68) = *(float *)(param_1 + 0x30) - *(float *)(iVar10 + 0x30);
          *(float *)(iVar10 + 100) = fVar14 - DAT_003f031c;
        }
      }
    }
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x1b4);
  bVar12 = (bVar1 & 2) != 0;
  if (bVar12) {
    uVar9 = *(uint *)(param_1 + 0x1dc);
    bVar1 = *(byte *)(uVar9 + 0x14);
  }
  if (bVar12 && bVar1 != 4) {
    psVar7 = *(short **)(param_1 + 0x1a8);
    bVar12 = *(int *)(psVar7 + 0x9e) != 0;
    uVar6 = 0;
    if (bVar12) {
      uVar6 = *(uint *)(psVar7 + 2);
    }
    bVar13 = (uVar6 & 0x600) != 0;
    if (bVar12 && bVar13) {
      uVar9 = (uint)*(byte *)(uVar9 + 0x16);
    }
    if ((bVar12 && bVar13) && (uVar9 & 4) != 0) {
      *(uint *)(psVar7 + 2) = uVar6 | 0x2000;
      *(short **)(param_1 + 0x270) = psVar7;
      *(float *)(param_1 + 0x274) = *(float *)(psVar7 + 0x14) - *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x278) = *(float *)(psVar7 + 0x16) - *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x27c) = *(float *)(psVar7 + 0x18) - *(float *)(param_1 + 0x30);
      if ((*(uint *)(psVar7 + 2) & 0x400) != 0) {
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x124);
        *(int *)(*(int *)(param_1 + 0x124) + 0x124) = param_1;
      }
    }
    *(undefined2 *)(param_1 + 0x280) = 0;
    sVar3 = *psVar7;
    if (sVar3 == 0xd5) {
      psVar7 = (short *)(uint)(ushort)psVar7[0xe];
    }
    uVar8 = DAT_003f02ec;
    uVar21 = DAT_003f02e8;
    uVar22 = DAT_003f02e4;
    if (sVar3 == 0xd5 && psVar7 == (short *)0x1) {
      uVar8 = DAT_003f02f0;
    }
    goto LAB_003f047c;
  }
  sVar3 = *(short *)(param_1 + 0x280) + -1;
  *(short *)(param_1 + 0x280) = sVar3;
  if (sVar3 == 0) goto LAB_003efe68;
  FUN_00376864(param_1);
  *(float *)(param_1 + 600) =
       *(float *)(param_1 + 600) + (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x108));
  *(float *)(param_1 + 0x25c) =
       *(float *)(param_1 + 0x25c) + (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x10c));
  *(float *)(param_1 + 0x260) =
       *(float *)(param_1 + 0x260) + (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x110));
  uVar4 = FUN_003758b0(*(undefined4 *)(param_1 + 0x6c),-*(float *)(param_1 + 100));
  *(undefined2 *)(param_1 + 0xbc) = uVar4;
  iVar10 = param_2 + 0xa98;
  local_44 = *(float *)(param_1 + 0x264) - (*(float *)(param_1 + 600) - *(float *)(param_1 + 0x264))
  ;
  local_40 = *(float *)(param_1 + 0x268) -
             (*(float *)(param_1 + 0x25c) - *(float *)(param_1 + 0x268));
  local_3c = *(float *)(param_1 + 0x26c) -
             (*(float *)(param_1 + 0x260) - *(float *)(param_1 + 0x26c));
  iVar5 = FUN_00369f9c(iVar10,&local_44,param_1 + 600,auStack_38,&local_28,1,1,1,1,&local_2c);
  if ((iVar5 == 0) ||
     (iVar5 = FUN_00314c68(param_2,param_1,local_28,local_2c,auStack_38), iVar5 != 0)) {
    if ((*(uint *)(param_2 + 0x18) & DAT_003f04b0) != 0) {
      *(undefined2 *)(param_1 + 0x280) = 0;
    }
    return;
  }
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(local_28 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = fVar15 * DAT_003f0320;
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(local_28 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = fVar16 * DAT_003f0320;
  FUN_0036df4c(param_1 + 0x28,auStack_38);
  fVar14 = DAT_003f0324;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar15 * DAT_003f0324;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar16 * fVar14;
  *(undefined2 *)(param_1 + 0x280) = 0;
  iVar5 = FUN_00314aa0(iVar10,local_28,local_2c);
  if (iVar5 != 0) {
    if ((local_2c != 0x32) && (iVar10 = FUN_00359690(iVar10), iVar10 != 0)) {
      *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) | 0x2000;
      *(int *)(param_1 + 0x270) = iVar10;
      *(float *)(param_1 + 0x274) = *(float *)(iVar10 + 0x28) - *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x278) = *(float *)(iVar10 + 0x2c) - *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x27c) = *(float *)(iVar10 + 0x30) - *(float *)(param_1 + 0x30);
    }
    uVar21 = DAT_003f02e8;
    uVar22 = DAT_003f02e4;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x124);
    *(int *)(*(int *)(param_1 + 0x124) + 0x124) = param_1;
    uVar8 = DAT_003f04a8;
    goto LAB_003f047c;
  }
  iVar5 = FUN_00359690(iVar10);
  cVar2 = '\0';
  if (iVar5 != 0) {
    cVar2 = *(char *)(iVar5 + 0x19b);
  }
  if (iVar5 == 0 || cVar2 == '\0') {
    iVar10 = FUN_00314c14(iVar10,local_28,local_2c);
    if (iVar10 == 0xb) {
LAB_003f0434:
      FUN_00375f90(param_2,auStack_38,8);
      uVar8 = DAT_003f04ac;
      uVar21 = DAT_003f02e8;
      uVar22 = DAT_003f02e4;
      goto LAB_003f047c;
    }
  }
  else {
    if (cVar2 == '\x01') {
      FUN_00314c28(param_2,auStack_38,8);
      uVar8 = DAT_003f04ac;
      uVar21 = DAT_003f02e8;
      uVar22 = DAT_003f02e4;
      goto LAB_003f047c;
    }
    if (cVar2 == '\x02') goto LAB_003f0434;
    uVar8 = DAT_003f04ac;
    uVar21 = DAT_003f02e8;
    uVar22 = DAT_003f02e4;
    if (cVar2 != '\x03') goto LAB_003f047c;
  }
  FUN_0033af2c(param_2,auStack_38,8);
  uVar8 = DAT_003f04ac;
  uVar21 = DAT_003f02e8;
  uVar22 = DAT_003f02e4;
LAB_003f047c:
  FUN_0037547c(uVar8,param_1 + 0x28,4,uVar21,uVar21,uVar22);
  return;
}

// OoT3D decomp @ 00394e8c  name=FUN_00394e8c  size=3116

void FUN_00394e8c(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  undefined2 uVar5;
  short sVar6;
  float *pfVar7;
  float *pfVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int extraout_r1;
  int iVar13;
  float fVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  undefined4 uVar18;

  iVar13 = *(int *)(DAT_0039529c + param_2);
  *(short *)(param_1 + 0xfb0) = *(short *)(param_1 + 0xfb0) + 0xc31;
  fVar16 = (float)FUN_00338f60();
  fVar17 = DAT_003952a4;
  *(float *)(param_1 + 0xfa4) = DAT_003952a4 + fVar16 * DAT_003952a0;
  fVar16 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xfb0));
  iVar11 = DAT_003952ac;
  *(float *)(param_1 + 0xfa8) = fVar17 + fVar16 * DAT_003952a8;
  uVar12 = DAT_0039567c;
  fVar4 = DAT_00395668;
  pfVar3 = DAT_00395664;
  fVar14 = DAT_0039564c;
  fVar16 = DAT_0039563c;
  pfVar7 = DAT_00395624;
  pfVar8 = DAT_003952c4;
  piVar2 = DAT_003952b4;
  fVar17 = DAT_003952a8;
  switch(*(undefined1 *)(iVar11 + 9)) {
  case 0:
    FUN_0035af04(iVar13,1);
    FUN_0036e980(param_2,param_1,1);
    *(char *)(DAT_003952ac + 9) = *(char *)(DAT_003952ac + 9) + '\x01';
    break;
  case 1:
    FUN_00367494(param_2,param_2 + 0x2298);
    iVar11 = DAT_003952ac;
    if (*(short *)(DAT_003952ac + 0xc) == 0) {
      uVar5 = FUN_00367d74(param_2);
      *(undefined2 *)(iVar11 + 0xc) = uVar5;
    }
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(iVar11 + 0xc),7);
    iVar10 = DAT_003952d8;
    pfVar8 = DAT_003952c4;
    fVar17 = DAT_003952c0;
    pfVar7 = DAT_003952c4 + 6;
    *DAT_003952c4 = DAT_003952c0;
    *pfVar7 = fVar17;
    fVar17 = DAT_003952c8;
    pfVar8[1] = DAT_003952c8;
    pfVar8[7] = fVar17;
    fVar17 = DAT_003952cc;
    pfVar8[2] = DAT_003952cc;
    pfVar8[8] = fVar17;
    fVar17 = *(float *)(iVar13 + 0x28);
    pfVar8[3] = fVar17;
    pfVar8[9] = fVar17;
    fVar17 = *(float *)(iVar13 + 0x2c);
    pfVar8[4] = fVar17;
    pfVar8[10] = fVar17;
    fVar17 = *(float *)(iVar13 + 0x30);
    pfVar8[5] = fVar17;
    pfVar8[0xb] = fVar17;
    pfVar8[0xc] = pfVar8[-3];
    pfVar8[0xd] = pfVar8[-2];
    pfVar8[0xe] = pfVar8[-1];
    pfVar8[0xf] = pfVar8[0xc];
    pfVar8[0x10] = pfVar8[0xd];
    pfVar8[0x11] = pfVar8[0xe];
    iVar13 = 0xf;
    do {
      pfVar8 = (float *)(iVar10 + iVar13 * 0xc);
      psVar9 = (short *)(iVar10 + 0x138 + iVar13 * 6);
      FUN_0036aa20(*(float *)(param_1 + 0x28) + *pfVar8,*(float *)(param_1 + 0x2c) + pfVar8[1],
                   *(float *)(param_1 + 0x30) + pfVar8[2],param_2 + 0x208c,param_1,param_2,0xba,
                   (int)(short)(*psVar9 + *(short *)(param_1 + 0x34)),
                   (int)(short)(*(short *)(param_1 + 0x36) + psVar9[1]),
                   (int)(short)(psVar9[2] + *(short *)(param_1 + 0x38)),(int)(short)iVar13);
      iVar13 = iVar13 + -1;
    } while (5 < iVar13);
    *(undefined4 *)(param_1 + 0xf9c) = 0x87;
    *(char *)(iVar11 + 9) = *(char *)(iVar11 + 9) + '\x01';
    break;
  case 3:
    *DAT_00395624 = DAT_00395620;
    uVar12 = DAT_00395640;
    pfVar7[1] = DAT_00395628;
    pfVar7[2] = DAT_0039562c;
    pfVar7[3] = DAT_00395630;
    pfVar7[4] = DAT_00395634;
    pfVar7[5] = DAT_00395638;
    FUN_0036e168(DAT_00395644,uVar12,fVar16,fVar17,pfVar7 + 6);
    pfVar8 = DAT_00395648;
    pfVar7 = DAT_00395648 + 3;
    fVar17 = *DAT_00395648;
    DAT_00395648[2] = fVar17;
    pfVar8[1] = fVar17;
    fVar17 = pfVar8[1];
    fVar16 = pfVar8[2];
    *pfVar7 = *pfVar8;
    pfVar8[4] = fVar17;
    pfVar8[5] = fVar16;
    iVar11 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar11;
    if (iVar11 == 0) {
      *(char *)(DAT_003952ac + 9) = *(char *)(DAT_003952ac + 9) + '\x01';
      uVar12 = 0x5a;
LAB_003954ac:
      *(undefined4 *)(param_1 + 0xf9c) = uVar12;
    }
    break;
  case 4:
    pfVar7 = DAT_003952c4 + 6;
    *DAT_003952c4 = DAT_0039564c;
    *pfVar7 = fVar14;
    fVar17 = DAT_00395650;
    pfVar8[1] = DAT_00395650;
    pfVar8[7] = fVar17;
    fVar17 = DAT_00395654;
    pfVar8[2] = DAT_00395654;
    pfVar8[8] = fVar17;
    fVar17 = DAT_00395658;
    pfVar8[3] = DAT_00395658;
    pfVar8[9] = fVar17;
    fVar17 = DAT_0039565c;
    pfVar8[4] = DAT_0039565c;
    pfVar8[10] = fVar17;
    fVar17 = DAT_00395660;
    pfVar8[5] = DAT_00395660;
    pfVar8[0xb] = fVar17;
    *(undefined1 *)(DAT_003952ac + 9) = 5;
    uVar12 = 1;
LAB_0039550c:
    *(undefined4 *)(param_1 + 0xf9c) = uVar12;
    goto LAB_00395afc;
  case 5:
    *DAT_00395664 = DAT_00395658;
    uVar12 = DAT_00395640;
    pfVar3[1] = DAT_0039565c;
    pfVar3[2] = DAT_00395660;
    FUN_0036e168(DAT_00395644,uVar12,fVar16,fVar17,pfVar3 + 3);
    pfVar8 = DAT_00395648;
    pfVar7 = DAT_00395648 + 3;
    fVar17 = *DAT_00395648;
    DAT_00395648[2] = fVar17;
    pfVar8[1] = fVar17;
    fVar17 = pfVar8[1];
    fVar16 = pfVar8[2];
    *pfVar7 = *pfVar8;
    pfVar8[4] = fVar17;
    pfVar8[5] = fVar16;
    iVar11 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar11;
    if (iVar11 == 0) {
      *(char *)(DAT_003952ac + 9) = *(char *)(DAT_003952ac + 9) + '\x01';
      uVar12 = 0x3c;
      goto LAB_003954ac;
    }
    break;
  case 6:
    iVar11 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar11;
    pfVar8 = DAT_00395664;
    if (iVar11 == 0) {
      pfVar7 = DAT_00395664 + -0xc;
      *DAT_00395664 = DAT_00395658;
      pfVar8[1] = DAT_00395668;
      pfVar8[2] = DAT_00395660;
      pfVar8[3] = *pfVar7;
      pfVar8[4] = pfVar8[-0xb];
      pfVar8[5] = pfVar8[-10];
      pfVar8[6] = pfVar8[3];
      pfVar8[7] = pfVar8[4];
      pfVar8[8] = pfVar8[5];
      *(undefined1 *)(DAT_003952ac + 9) = 8;
      uVar12 = 0x1e;
      goto LAB_0039550c;
    }
    goto LAB_00395afc;
  case 8:
    FUN_0036e168(DAT_00395670,DAT_00395640,DAT_003952a4,DAT_0039566c,DAT_00395648);
    pfVar8 = DAT_00395648;
    pfVar7 = DAT_00395648 + 3;
    fVar17 = *DAT_00395648;
    DAT_00395648[1] = fVar17 * DAT_0039563c;
    pfVar8[2] = fVar17;
    fVar17 = DAT_00395674;
    fVar16 = pfVar8[1];
    fVar14 = pfVar8[2];
    *pfVar7 = *pfVar8;
    pfVar8[4] = fVar16;
    pfVar8[5] = fVar14;
    pfVar8[5] = pfVar8[5] * fVar17;
    iVar11 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar11;
    if (iVar11 == 0) {
      *(char *)(DAT_003952ac + 9) = *(char *)(DAT_003952ac + 9) + '\x01';
      *(undefined4 *)(param_1 + 0xf9c) = DAT_00395678;
      *(undefined2 *)(param_1 + 0xff6) = 0;
    }
    break;
  case 9:
    iVar11 = 10;
    do {
      iVar13 = DAT_00395680 + iVar11;
      cVar1 = *(char *)(iVar13 + -1);
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          FUN_00375bcc(param_1,DAT_00395684);
          *(undefined2 *)(param_2 + 0x31fc) = 10;
          *(undefined2 *)(param_2 + 0x31fe) = 10;
          *(undefined2 *)(param_2 + 0x3200) = 10;
          *(undefined2 *)(param_2 + 0x3202) = 0x73;
          *(undefined2 *)(param_2 + 0x3204) = 0x41;
          *(undefined2 *)(param_2 + 0x3206) = 100;
          *(undefined2 *)(param_2 + 0x3208) = 0x78;
          *(undefined2 *)(param_2 + 0x320a) = 0x78;
          *(undefined2 *)(param_2 + 0x320c) = 0x46;
          if (*(char *)(param_1 + 0xf94) == '\0') {
            *(undefined1 *)(param_1 + 0xf94) = 2;
          }
        }
        else if (cVar1 == '\x02') {
          uVar18 = VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
          FUN_0031f5a8(fVar4,uVar12,uVar18,param_2,param_1,6,0x8c,2,1);
        }
        if (*(byte *)(iVar13 + -1) < 3) {
          *(byte *)(iVar13 + -1) = *(byte *)(iVar13 + -1) + 1;
        }
      }
      iVar11 = iVar11 + -1;
    } while (0 < iVar11);
    FUN_00375a18(param_1 + 0xff6,0x280,1,0x32,0);
    FUN_0036e168(DAT_00395670,DAT_00395640,DAT_00395a08,DAT_0039566c,DAT_00395648);
    pfVar8 = DAT_00395648;
    pfVar7 = DAT_00395648 + 3;
    DAT_00395648[2] = *DAT_00395648;
    fVar17 = pfVar8[1];
    fVar16 = pfVar8[2];
    *pfVar7 = *pfVar8;
    pfVar8[4] = fVar17;
    pfVar8[5] = fVar16;
    if (*(int *)(param_1 + 0xf9c) < DAT_00395a0c) {
      if (DAT_00395a14 <= *(int *)(param_1 + 0xf9c)) {
        FUN_0036ec40(0,DAT_00395a18);
        iVar11 = FUN_0035b164();
        if ((iVar11 != 0) && (iVar11 = FUN_0035b0a0(), iVar11 == 0)) {
          if (((*DAT_00395a1c & 1) == 0) && (iVar11 = FUN_003679b4(DAT_00395a1c), iVar11 != 0)) {
            FUN_0036788c(DAT_00395a20);
          }
          FUN_003542c4(DAT_00395a2c,1);
        }
      }
    }
    else {
      *(undefined1 *)(DAT_00395a10 + param_2) = 1;
      FUN_0036e980(param_2,param_1,8);
    }
    iVar13 = *(int *)(param_1 + 0xf9c) + (int)*(short *)(param_1 + 0xff6);
    *(int *)(param_1 + 0xf9c) = iVar13;
    fVar16 = DAT_00395a30;
    fVar17 = DAT_00395658;
    iVar11 = DAT_003952ac;
    if (0xffff < iVar13) {
      pfVar8[4] = DAT_00395a30;
      pfVar8[1] = fVar16;
      fVar16 = DAT_00395a34;
      *(char *)(iVar11 + 9) = *(char *)(iVar11 + 9) + '\x01';
      pfVar8 = DAT_00395624;
      *DAT_00395624 = fVar17;
      pfVar8[2] = fVar16;
      pfVar8[3] = fVar17;
      pfVar8[4] = DAT_0039564c;
      pfVar8[5] = DAT_00395a38;
      if ((*(ushort *)(DAT_00395a3c + 0xfa) & 0x40) == 0) {
        FUN_00354248(param_2,param_2 + 0x224c,*(undefined4 *)(DAT_00395a40 + param_1),200,0xb4,0x100
                     ,0x40);
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    pfVar8[1] = DAT_00395a44;
    pfVar8 = DAT_00395624;
    DAT_00395624[1] = DAT_00395a48;
    fVar16 = (float)FUN_002cfca0((int)(short)iVar13);
    fVar17 = DAT_00395a4c;
    *pfVar8 = fVar16 * DAT_00395a4c;
    fVar16 = (float)FUN_00338f60((int)(short)*(undefined4 *)(param_1 + 0xf9c));
    pfVar8[2] = DAT_00395a38 + fVar16 * fVar17;
    break;
  case 10:
    iVar11 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar11;
    if (iVar11 == 0) {
      *(undefined1 *)(DAT_003952ac + 9) = 0xb;
      *(undefined4 *)(param_1 + 0xf9c) = 0x44;
    }
    goto LAB_00395afc;
  case 0xb:
    FUN_0031f5a8(DAT_00395668,DAT_0039567c,DAT_00395658,param_2,param_1,3,0x8c,2,0);
    iVar11 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar11;
    if (iVar11 == 0) {
      *(char *)(DAT_003952ac + 9) = *(char *)(DAT_003952ac + 9) + '\x01';
      uVar12 = 0xb;
      goto LAB_003954ac;
    }
    break;
  case 0xc:
    iVar10 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar10;
    iVar11 = DAT_003952ac;
    if (iVar10 == 0) {
      FUN_0036963c(param_2,(int)*(short *)(DAT_003952ac + 0xc));
      *(undefined2 *)(iVar11 + 0xc) = 0;
      FUN_00367374(param_2,param_2 + 0x2298);
      FUN_00320d7c(param_2,0,7);
      FUN_0036e980(param_2,param_1,7);
      *(char *)(iVar11 + 9) = *(char *)(iVar11 + 9) + '\x01';
      *(ushort *)(DAT_00395a3c + 0xfa) = *(ushort *)(DAT_00395a3c + 0xfa) | 0x40;
      sVar6 = *(short *)(param_1 + 0x92) + -0x8000;
      *(short *)(iVar13 + 0x36) = sVar6;
      *(short *)(iVar13 + 0xbe) = sVar6;
      break;
    }
    goto LAB_00395afc;
  case 0xd:
    bVar15 = (char)DAT_003952b4[2] != '\0';
    iVar11 = 0;
    if (bVar15) {
      iVar11 = *DAT_003952b4;
    }
    if (bVar15 && iVar11 != 0) {
      iVar11 = FUN_0036c5bc(iVar11,0xffffffff);
      FUN_00367c48();
      *(undefined4 *)(iVar11 + 0x144) = DAT_00395c38;
      *(undefined1 *)(piVar2 + 2) = 0;
    }
    uVar12 = FUN_0036ae14(param_1 + 0x1a4,1);
    uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00395a08,uVar12,uVar12,DAT_00395a34,param_1 + 0x1a4,1,2);
    iVar11 = DAT_003952ac;
    *(undefined4 *)(param_1 + 0xc4) = DAT_00395c3c;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0xf9c) = 0x26;
    *(undefined1 *)(iVar11 + 7) = 0x80;
    *(undefined4 *)(param_1 + 0xf90) = DAT_00395c40;
    break;
  case 0xfb:
    iVar11 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar11;
    if (iVar11 == 0) {
      *(undefined1 *)(DAT_003952ac + 9) = 0xfe;
      *(undefined4 *)(param_1 + 0xf9c) = 10;
    }
    goto LAB_00395b0c;
  case 0xfc:
    *(undefined1 *)(param_2 + 0x3262) = 0xdc;
    *(undefined1 *)(param_2 + 0x3263) = 0xdc;
    *(undefined1 *)(param_2 + 0x3264) = 0xbe;
    *(undefined1 *)(param_2 + 0x3265) = 0xd2;
    FUN_0036e980(param_2,param_1,8);
    uVar5 = (undefined2)DAT_003952b0;
    *(undefined2 *)(iVar13 + 0xbe) = uVar5;
    *(undefined2 *)(iVar13 + 0x36) = uVar5;
    iVar13 = DAT_003952bc;
    piVar2 = DAT_003952b4;
    *(undefined2 *)((int)DAT_003952b4 + 10) = 0;
    *(undefined1 *)(piVar2 + 2) = 1;
    iVar11 = DAT_003952b8;
    piVar2[1] = DAT_003952b8;
    *(undefined1 *)((int)piVar2 + 9) = 0;
    piVar2[6] = iVar13;
    piVar2[7] = iVar13;
    *(char *)(iVar11 + -0x2af) = *(char *)(iVar11 + -0x2af) + '\x01';
    break;
  case 0xfd:
    FUN_00367494(param_2,param_2 + 0x2298);
    iVar11 = DAT_003952ac;
    if (*(short *)(DAT_003952ac + 0xc) == 0) {
      uVar5 = FUN_00367d74(param_2);
      *(undefined2 *)(iVar11 + 0xc) = uVar5;
    }
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(iVar11 + 0xc),7);
    pfVar8 = DAT_003952c4;
    fVar17 = DAT_003952c0;
    pfVar7 = DAT_003952c4 + 6;
    *DAT_003952c4 = DAT_003952c0;
    *pfVar7 = fVar17;
    fVar17 = DAT_003952c8;
    pfVar8[1] = DAT_003952c8;
    pfVar8[7] = fVar17;
    fVar17 = DAT_003952cc;
    pfVar8[2] = DAT_003952cc;
    pfVar8[8] = fVar17;
    fVar17 = *(float *)(iVar13 + 0x28);
    pfVar8[3] = fVar17;
    pfVar8[9] = fVar17;
    fVar17 = *(float *)(iVar13 + 0x2c);
    pfVar8[4] = fVar17;
    pfVar8[10] = fVar17;
    fVar17 = *(float *)(iVar13 + 0x30);
    pfVar8[5] = fVar17;
    pfVar8[0xb] = fVar17;
    pfVar8[0xc] = pfVar8[-3];
    pfVar8[0xd] = pfVar8[-2];
    pfVar8[0xe] = pfVar8[-1];
    pfVar8[0xf] = pfVar8[0xc];
    pfVar8[0x10] = pfVar8[0xd];
    pfVar8[0x11] = pfVar8[0xe];
    *(undefined4 *)(param_1 + 0xf9c) = 0xf;
    *(char *)(iVar11 + 9) = *(char *)(iVar11 + 9) + '\x01';
    break;
  case 0xfe:
    iVar11 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar11;
    if (iVar11 != 0) goto LAB_00395b0c;
    FUN_0036e980(param_2,param_1,0x68);
    *(char *)(DAT_003952ac + 9) = *(char *)(DAT_003952ac + 9) + '\x01';
    *(undefined4 *)(param_1 + 0xf9c) = 0x2d;
    break;
  case 0xff:
    iVar13 = *(int *)(param_1 + 0xf9c) + -1;
    iVar11 = extraout_r1;
    if (iVar13 == 0) {
      iVar11 = DAT_003952ac;
    }
    *(int *)(param_1 + 0xf9c) = iVar13;
    if (iVar13 == 0) {
      *(undefined1 *)(iVar11 + 9) = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if ('\x04' < *(char *)(DAT_003952ac + 9)) {
LAB_00395afc:
    FUN_0036ef10(DAT_00395a08,param_1 + 0x28,DAT_00395c44);
  }
LAB_00395b0c:
  *(short *)(param_1 + 0xfb4) = *(short *)(param_1 + 0xfb4) + 0xce4;
  fVar17 = (float)FUN_002cfca0();
  iVar11 = DAT_003952ac;
  *(short *)(param_1 + 0xfb2) = (short)(int)(fVar17 * DAT_00395c48) + 0x96;
  uVar18 = DAT_00395c50;
  uVar12 = DAT_00395c4c;
  pfVar8 = DAT_00395648;
  if ((*(short *)(iVar11 + 0xc) != 0) && (*(char *)(iVar11 + 9) < '\v')) {
    FUN_0036e168(DAT_00395648[-6],DAT_00395c50,*DAT_00395648,DAT_00395c4c,DAT_00395648 + -0xc);
    FUN_0036e168(pfVar8[-5],uVar18,pfVar8[1],uVar12,pfVar8 + -0xb);
    FUN_0036e168(pfVar8[-4],uVar18,pfVar8[2],uVar12,pfVar8 + -10);
    FUN_0036e168(pfVar8[-3],uVar18,pfVar8[3],uVar12,pfVar8 + -9);
    FUN_0036e168(pfVar8[-2],uVar18,pfVar8[4],uVar12,pfVar8 + -8);
    FUN_0036e168(pfVar8[-1],uVar18,pfVar8[5],uVar12,pfVar8 + -7);
    FUN_00367b14(param_2,(int)*(short *)(iVar11 + 0xc),pfVar8 + -9,pfVar8 + -0xc);
    return;
  }
  return;
}

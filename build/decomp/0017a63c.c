// OoT3D decomp @ 0017a63c  name=FUN_0017a63c  size=72

void FUN_0017a63c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int unaff_r9;
  undefined4 uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s16;

  piVar7 = *(int **)(iRam0017aa78 + param_2);
  piVar8 = *(int **)(param_1 + 0x124);
  if (*(short *)(param_1 + 0x222) != 9) {
    FUN_00370734(param_1 + 0x26c);
  }
  piVar2 = piRam0017bea0;
  fVar12 = fRam0017ba58;
  uVar9 = uRam0017b280;
  uVar4 = uRam0017b258;
  fVar13 = fRam0017ae80;
  fVar14 = fRam0017aaa0;
  piVar1 = piRam0017aa98;
  iVar6 = iRam0017aa94;
  switch(*(undefined2 *)(param_1 + 0x222)) {
  case 0:
    if (((int)ABS((float)piVar7[10] - fRam0017aa7c) < iRam0017aa80) &&
       ((int)ABS((float)piVar7[0xc] - fRam0017aa84) < iRam0017aa80)) {
      *(undefined2 *)(param_1 + 0x222) = 0xf;
    }
    break;
  case 1:
    if ((*(ushort *)(iRam0017aa94 + 0xfa) & 4) != 0) {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piRam0017aa98 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fRam0017aaa4 / fVar13 + fRam0017aaa0) == (int)*(short *)(param_1 + 0x22c)) {
        FUN_0036aa20(fRam0017aa7c,uRam0017aaac,uRam0017aaa8,param_2 + 0x208c,param_1,param_2,0x2e,0,
                     0,0,0x100);
      }
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fRam0017aab0 / fVar13 + fVar14) == (int)*(short *)(param_1 + 0x22c)) {
        FUN_00375bcc(*(undefined4 *)(param_1 + 0x128),uRam0017aab4);
        FUN_0036ec40(0,uRam0017aab8);
        iVar6 = FUN_0035b164();
        if ((iVar6 != 0) && (iVar6 = FUN_0035b0a0(), iVar6 == 0)) {
          if (((*puRam0017aabc & 1) == 0) && (iVar6 = FUN_003679b4(puRam0017aabc), iVar6 != 0)) {
            FUN_0036788c(uRam0017aac0);
          }
          FUN_003542c4(uRam0017aacc,1);
        }
        FUN_0035af04(piVar7,1);
      }
      piVar8 = piVar1;
      unaff_s16 = fVar14;
      if (*(short *)(param_1 + 0x22c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      break;
    }
    FUN_00367494(param_2,param_2 + 0x2298);
    FUN_0036e980(param_2,param_1,8);
    uVar3 = FUN_00367d74(param_2);
    *(undefined2 *)(param_1 + 0x224) = uVar3;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x224),7);
    *(undefined2 *)(param_1 + 0x222) = 2;
    fVar14 = fRam0017aad8;
    piVar8 = piRam0017aa98;
    *(undefined4 *)(param_1 + 0x2c) = uRam0017aad4;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar8 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x22c) = (short)(int)(fVar14 / fVar13 + fRam0017aaa0);
    FUN_003655d0(0,1);
    *(ushort *)(iVar6 + 0xfa) = *(ushort *)(iVar6 + 0xfa) | 4;
    FUN_00375c10(param_2,0x23);
    piVar8 = (int *)FUN_0036c5bc(param_2,0xffffffff);
    FUN_00367c54();
    FUN_00367c60(iRam0017aadc,piVar8);
    FUN_0035af04(piVar7,1);
  case 2:
    iVar6 = iRam0017aae0;
    fVar14 = fRam0017aa7c;
    piVar7[10] = (int)fRam0017aa7c;
    piVar7[0xb] = iVar6;
    piVar7[0xc] = iRam0017aae4;
    iVar6 = iRam0017aadc;
    *(undefined2 *)((int)piVar7 + 0xbe) = 0;
    *(undefined2 *)((int)piVar7 + 0x36) = 0;
    piVar7[0x1b] = iVar6;
    uVar4 = uRam0017aae8;
    *(float *)(param_1 + 0x1a8) = fVar14;
    *(undefined4 *)(param_1 + 0x1ac) = uVar4;
    piVar7 = piRam0017aa98;
    *(undefined4 *)(param_1 + 0x1b0) = uRam0017aaec;
    *(float *)(param_1 + 0x1b4) = fVar14;
    fVar13 = fRam0017aa8c;
    *(float *)(param_1 + 0x1b8) = fVar14;
    *(float *)(param_1 + 0x1bc) = fVar13;
    *(undefined4 *)(param_1 + 0xd24) = 0;
    unaff_s16 = fRam0017aaa0;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017ae64 / fVar13 + fRam0017aaa0) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_0036aa20(fVar14,uRam0017aaac,uRam0017aaa8,param_2 + 0x208c,param_1,param_2,0x2e,0,0,0,
                   0x100);
    }
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017ae68 / fVar14 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_00375bcc(*(undefined4 *)(param_1 + 0x128),uRam0017aab4);
    }
    if (*(short *)(param_1 + 0x22c) == 0) {
      *(undefined2 *)(param_1 + 0x222) = 3;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x22c) = (short)(int)(fRam0017ae6c / fVar14 + unaff_s16);
    }
    break;
  case 3:
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piRam0017aa98 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017ae64 / fVar13 + fRam0017aaa0) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_00375bcc(param_1,uRam0017ae70);
    }
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017ae74 / fVar13 + fVar14) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_0036e980(param_2,param_1,9);
    }
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017ae78 / fVar13 + fVar14) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_0036ec40(0,uRam0017ae7c);
    }
    uVar4 = uRam0017ae88;
    unaff_s16 = fRam0017ae80;
    fVar13 = fRam0017aa7c;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0xa06),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(fVar12 + fRam0017aa7c + fRam0017ae84 + fRam0017ae80,uRam0017ae88,
                 *(float *)(param_1 + 0x200) * fRam0017ae80,param_1 + 0x1a8);
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0xa08),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500((fVar12 + fVar13) - fRam0017ae8c,uVar4,*(float *)(param_1 + 0x200) * unaff_s16,
                 param_1 + 0x1ac);
    fVar11 = fRam0017ae94;
    fVar12 = fRam0017ae90;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0xa0a),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500((fVar10 + fRam0017aa84 + fRam0017ae90) - fRam0017ae94,uVar4,
                 *(float *)(param_1 + 0x200) * unaff_s16,param_1 + 0x1b0);
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0xa0c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500((((fVar10 + fVar13) - fVar11) - fRam0017ae98) - fRam0017ae98,uVar4,
                 *(float *)(param_1 + 0x200) * unaff_s16,param_1 + 0x1b4);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0xa0e),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(fVar11 + fVar13,uVar4,*(float *)(param_1 + 0x200) * unaff_s16,param_1 + 0x1b8);
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0xa10),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(fVar13 + fRam0017aa8c + unaff_s16,uVar4,*(float *)(param_1 + 0x200) * unaff_s16,
                 param_1 + 0x1bc);
    FUN_00373500(uRam0017aea0,uRam0017aea0,uRam0017ae9c,param_1 + 0x200);
    *(undefined4 *)(param_1 + 0xd24) = 1;
    iVar6 = iRam0017aadc;
    piVar7 = piVar1;
    if (*(short *)(param_1 + 0x22c) == 0) {
      *(undefined2 *)(param_1 + 0x222) = 4;
      *(int *)(param_1 + 0x200) = iVar6;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x22c) = (short)(int)(fVar12 / fVar13 + fVar14);
    }
    break;
  case 4:
    FUN_00373500(uRam0017b25c,uRam0017b258,*(float *)(param_1 + 0x200) * fRam0017ae80,
                 param_1 + 0x1a8);
    FUN_00373500(iRam0017aae0,uVar4,*(float *)(param_1 + 0x200) * fVar13,param_1 + 0x1ac);
    FUN_00373500(uRam0017b260,uVar4,*(float *)(param_1 + 0x200) * fVar13,param_1 + 0x1b0);
    FUN_00373500(uRam0017b264,uVar4,*(float *)(param_1 + 0x200) * fVar13,param_1 + 0x1b4);
    FUN_00373500(uRam0017b268,uVar4,*(float *)(param_1 + 0x200) * fVar13,param_1 + 0x1b8);
    FUN_00373500(uRam0017b26c,uVar4,*(float *)(param_1 + 0x200) * fRam0017ae84,param_1 + 0x1bc);
    FUN_00373500(uRam0017aea0,uRam0017aea0,uRam0017ae88,param_1 + 0x200);
    piVar7 = piRam0017aa98;
    *(undefined4 *)(param_1 + 0xd24) = 2;
    unaff_s16 = fRam0017b274;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017b270 / fVar14 + fRam0017b274) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_00375bcc(param_1,uRam0017b278);
    }
    uVar4 = uRam0017b27c;
    if (*(short *)(param_1 + 0x22c) != 0) break;
    *(undefined2 *)(param_1 + 0x222) = 5;
    *(undefined4 *)(param_1 + 0x200) = uVar4;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x22c) = (short)(int)(fRam0017ae90 / fVar14 + unaff_s16);
    uVar4 = 3;
    goto code_r0x0017be30;
  case 5:
    *(undefined2 *)(param_1 + 0x222) = 6;
    *(undefined4 *)(param_1 + 0x1a8) = uVar9;
    piVar1 = piRam0017aa98;
    *(undefined4 *)(param_1 + 0x1ac) = uRam0017b284;
    *(undefined4 *)(param_1 + 0x1b0) = uRam0017b288;
    *(undefined4 *)(param_1 + 0x1b4) = uRam0017b264;
    *(undefined4 *)(param_1 + 0x1b8) = uRam0017b28c;
    *(undefined4 *)(param_1 + 0x1bc) = uRam0017b290;
    *(float *)(param_1 + 0x1c0) = fRam0017ae98;
    uVar4 = uRam0017b294;
    *(undefined4 *)(param_1 + 0x1c4) = uRam0017b294;
    *(undefined4 *)(param_1 + 0x1c8) = uVar4;
    *(undefined4 *)(param_1 + 0x1cc) = uRam0017b27c;
    *(float *)(param_1 + 0x1d0) = fRam0017ae8c;
    *(float *)(param_1 + 0x1d4) = fRam0017b298;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x22c) = (short)(int)(fRam0017b29c / fVar14 + fRam0017b274);
  case 6:
    uVar4 = uRam0017ae88;
    FUN_00373500(uRam0017b2a0,uRam0017ae88,*(float *)(param_1 + 0x1c0) * *(float *)(param_1 + 0x200)
                 ,param_1 + 0x1a8);
    FUN_00373500(uRam0017b2a4,uVar4,*(float *)(param_1 + 0x1c4) * *(float *)(param_1 + 0x200),
                 param_1 + 0x1ac);
    FUN_00373500(uRam0017b2a8,uVar4,*(float *)(param_1 + 0x1c8) * *(float *)(param_1 + 0x200),
                 param_1 + 0x1b0);
    FUN_00373500(uRam0017b264,uVar4,*(float *)(param_1 + 0x1cc) * *(float *)(param_1 + 0x200),
                 param_1 + 0x1b4);
    FUN_00373500(uRam0017b2ac,uVar4,*(float *)(param_1 + 0x1d0) * *(float *)(param_1 + 0x200),
                 param_1 + 0x1b8);
    FUN_00373500(uRam0017b26c,uVar4,*(float *)(param_1 + 0x1d4) * *(float *)(param_1 + 0x200),
                 param_1 + 0x1bc);
    FUN_00373500(uRam0017ae9c,uRam0017aea0,uRam0017b2b0,param_1 + 0x200);
    unaff_s16 = fRam0017b274;
    piVar1 = piRam0017aa98;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piRam0017aa98 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (((int)(fRam0017b2b4 / fVar14 + fRam0017b274) == (int)*(short *)(param_1 + 0x22c)) ||
       (fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piRam0017aa98 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3),
       (int)(fRam0017b2b8 / fVar14 + fRam0017b274) == (int)*(short *)(param_1 + 0x22c))) {
      FUN_0035a49c(uRam0017b2bc,param_1 + 0x26c,uRam0017b2c0);
      *(undefined1 *)(param_1 + 0x1a4) = 2;
      *(undefined4 *)(param_1 + 0xd24) = 4;
      FUN_00375bcc(param_1,uRam0017b2c4);
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fRam0017b2b8 / fVar14 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
        FUN_00375bcc(param_1,uRam0017b2c8);
      }
    }
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017b2cc / fVar14 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_00375bcc(param_1,uRam0017b278);
    }
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017b2d0 / fVar14 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_00375bcc(param_1,uRam0017b6e8);
      FUN_00353020(uRam0017b6f4,uRam0017b27c,uRam0017b6f0,uRam0017b6ec,param_1 + 0x26c,uRam0017b6f8,
                   1);
      unaff_r9 = *(int *)(param_1 + 0x124);
      FUN_0036e734(unaff_r9 + 0x1a4,6);
      *(undefined4 *)(unaff_r9 + 0x1e4) = uRam0017b6fc;
    }
    iVar6 = *piVar1;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    if ((int)(fRam0017b700 / fVar14 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
      *(undefined1 *)(iRam0017b704 + param_2) = 2;
      *(undefined2 *)(param_2 + 0x3254) = 0x14;
    }
    fVar12 = fRam0017b710;
    fVar13 = fRam0017b70c;
    fVar14 = fRam0017b708;
    iVar5 = (int)*(short *)(param_1 + 0x22c);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    if ((int)(fRam0017b708 / fVar11 + unaff_s16) == iVar5) {
      *(undefined1 *)(param_1 + 0x1a4) = 3;
    }
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    if ((int)(fVar13 / fVar11 + unaff_s16) == iVar5) {
      *(undefined1 *)(param_1 + 0x1a4) = 5;
    }
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    if ((int)(fVar12 / fVar13 + unaff_s16) == iVar5) {
      FUN_003655d0(0,0x50);
    }
    fVar13 = fRam0017b298;
    if (2 < *(byte *)(param_1 + 0x1a4)) {
      *(undefined4 *)(param_1 + 0xd24) = 5;
    }
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar13 / fVar11 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
      *(undefined2 *)((int)piVar8 + 0x252) = 2;
      FUN_0036e980(param_2,0,8);
      *(short *)((int)piVar7 + 0xbe) = *(short *)((int)piVar7 + 0xbe) + -0x8000;
    }
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017b714 / fVar13 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_0037547c(uRam0017b720,0,4,uRam0017b71c,uRam0017b71c,uRam0017b718);
    }
    uVar9 = uRam0017b71c;
    uVar4 = uRam0017b718;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar12 / fVar13 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
      *(undefined2 *)(iRam0017b724 + (int)piVar8) = 1;
      FUN_0037547c(uRam0017b728,0,4,uVar9,uVar9,uVar4);
    }
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017b72c / fVar13 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_0036ec40(0,uRam0017aab8);
      iVar6 = FUN_0035b164();
      if ((iVar6 != 0) && (iVar6 = FUN_0035b0a0(), iVar6 == 0)) {
        if (((*puRam0017aabc & 1) == 0) && (iVar6 = FUN_003679b4(puRam0017aabc), iVar6 != 0)) {
          FUN_0036788c(uRam0017aac0);
        }
        FUN_003542c4(uRam0017aacc,1);
      }
    }
    iVar6 = *piVar1;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    if ((int)(fRam0017b730 / fVar13 + unaff_s16) == (int)*(short *)(param_1 + 0x22c)) {
      *(undefined4 *)(param_1 + 0xd24) = 6;
      uVar4 = uRam0017b27c;
      *(undefined2 *)(param_1 + 0x222) = 7;
      *(undefined4 *)(param_1 + 0x200) = uVar4;
      fVar10 = fRam0017b744;
      fVar11 = fRam0017b740;
      fVar13 = fRam0017b738;
      *(float *)(param_1 + 0x1c0) = ABS(*(float *)(param_1 + 0x1a8) - fRam0017b734);
      fVar12 = fRam0017b73c;
      *(float *)(param_1 + 0x1c4) = ABS(*(float *)(param_1 + 0x1ac) - fVar13);
      *(float *)(param_1 + 0x1c8) = ABS(*(float *)(param_1 + 0x1b0) - fVar12);
      *(float *)(param_1 + 0x1cc) = ABS(*(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x28));
      *(float *)(param_1 + 0x1d0) =
           ABS(*(float *)(param_1 + 0x1b8) - ((*(float *)(param_1 + 0x2c) + fVar11) - fVar10));
      *(float *)(param_1 + 0x1d4) = ABS(*(float *)(param_1 + 0x1bc) - *(float *)(param_1 + 0x30));
      fVar13 = fRam0017ba50;
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x22c) = (short)(int)(fVar14 / fVar12 + unaff_s16);
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x22e) = (short)(int)(fVar13 / fVar14 + unaff_s16);
    }
    break;
  case 7:
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piRam0017aa98 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017ba54 / fVar14 + fRam0017ba58) == (int)*(short *)(param_1 + 0x22e)) {
      uVar4 = FUN_0036ae14(param_1 + 0x26c,7);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(fVar12,fRam0017ba60,uVar4,uRam0017ba5c,param_1 + 0x26c,7,1);
    }
    fVar14 = fRam0017ba64;
    FUN_00373500(fRam0017b734,fRam0017ba64,*(float *)(param_1 + 0x1c0) * *(float *)(param_1 + 0x200)
                 ,param_1 + 0x1a8);
    FUN_00373500(fRam0017b738,fVar14,*(float *)(param_1 + 0x1c4) * *(float *)(param_1 + 0x200),
                 param_1 + 0x1ac);
    FUN_00373500(*(float *)(param_1 + 0x204) + fRam0017b73c,fVar14,
                 *(float *)(param_1 + 0x1c8) * *(float *)(param_1 + 0x200),param_1 + 0x1b0);
    uVar4 = uRam0017ba68;
    FUN_00373500(uRam0017ba6c,fVar14,uRam0017ba68,param_1 + 0x204);
    fVar13 = fRam0017ba70;
    FUN_00373500(*(undefined4 *)(param_1 + 0x28),fVar14,*(float *)(param_1 + 0x200) * fRam0017ba70,
                 param_1 + 0x1b4);
    FUN_00373500((*(float *)(param_1 + 0x2c) + fRam0017b740) - fRam0017b744,fVar14,
                 *(float *)(param_1 + 0x200) * fVar13,param_1 + 0x1b8);
    FUN_00373500(*(undefined4 *)(param_1 + 0x30),fVar14,*(float *)(param_1 + 0x200) * fVar13,
                 param_1 + 0x1bc);
    fVar13 = fRam0017ba74;
    FUN_00373500(fRam0017b72c,fVar14,fRam0017ba74,param_1 + 0x2c);
    fVar14 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x218) * (short)uRam0017ba78));
    uVar9 = uRam0017ba7c;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar14 * fVar13;
    FUN_00373500(uVar4,uVar4,uVar9,param_1 + 0x200);
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017ba80 / fVar14 + fVar12) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_00354248(fRam0017ba60,param_2,param_2 + 0x224c,*(undefined4 *)(param_1 + 0xd28),200,0xb4,
                   0x100,0x40);
    }
    piVar7 = piVar1;
    unaff_s16 = fVar12;
    if (*(short *)(param_1 + 0x22c) == 0) {
      *(undefined4 *)(param_1 + 0xd24) = 7;
      *(undefined2 *)(param_1 + 0x222) = 8;
      fVar14 = fRam0017ba88;
      iVar6 = *piVar1;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x22c) = (short)(int)(fRam0017ba84 / fVar13 + fVar12);
      unaff_s16 = fRam0017ba60;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x22e) = (short)(int)(fVar14 / fVar13 + fVar12);
      *(float *)(param_1 + 0x200) = unaff_s16;
      uVar9 = FUN_0036ae14(param_1 + 0x26c,4);
      uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar4,unaff_s16,uVar9,uRam0017ba8c,param_1 + 0x26c,4,3);
      *(undefined1 *)(param_1 + 0x1a4) = 10;
      FUN_00375bcc(param_1,uRam0017b2c8);
      FUN_00375bcc(param_1,uRam0017b2c4);
      FUN_0036c5bc(param_2,0xffffffff);
      FUN_00367c48();
    }
    break;
  case 8:
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piRam0017bea0 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017ba54 / fVar14 + fRam0017ba58) == (int)*(short *)(param_1 + 0x22e)) {
      uVar4 = FUN_0036ae14(param_1 + 0x26c,5);
      VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(param_1 + 0x26c,5,3);
      *(undefined1 *)(param_1 + 0x1a4) = 0xb;
    }
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam0017bea4 / fVar14 + fVar12) == (int)*(short *)(param_1 + 0x22c)) {
      FUN_0036e980(param_2,0,9);
      *(undefined4 *)(iRam0017bea8 + (int)piVar7) = 0;
      FUN_00375bcc(param_1,uRam0017beac);
    }
    unaff_s16 = fRam0017beb0;
    fVar14 = fRam0017ba64;
    FUN_00373500(*(float *)(param_1 + 0x204) + fRam0017beb8,fRam0017ba64,
                 *(float *)(param_1 + 0x200) * fRam0017beb4,param_1 + 0x1b0);
    uVar4 = uRam0017ba68;
    FUN_00373500(uRam0017ba6c,fVar14,uRam0017ba68,param_1 + 0x204);
    FUN_00373500(unaff_s16,uVar4,*(float *)(param_1 + 0x200) * fRam0017ba70,param_1 + 0x30);
    FUN_00373500(uVar4,uVar4,uRam0017ba7c,param_1 + 0x200);
    if (((int)ABS(*(float *)(param_1 + 0x30) - unaff_s16) < iRam0017bebc) &&
       (*(short *)(param_1 + 0x220) == 0)) {
      piVar7 = (int *)0x1;
      *(undefined2 *)(param_1 + 0x220) = 1;
      FUN_0036aa20(uRam0017bec4,*(float *)(param_1 + 0x2c) + fRam0017bec0,unaff_s16,param_2 + 0x208c
                   ,param_1,param_2,0x6d,0,(int)*(short *)(param_1 + 0xbe),0,0x28);
      *(undefined1 *)(param_1 + 0x1a7) = 1;
    }
    uVar4 = uRam0017bec8;
    fVar14 = fRam0017bec0;
    FUN_00373500(*(undefined4 *)(param_1 + 0x28),uRam0017bec8,fRam0017bec0,param_1 + 0x1b4);
    FUN_00373500(*(undefined4 *)(param_1 + 0x30),uVar4,fVar14,param_1 + 0x1bc);
    uVar4 = uRam0017ba5c;
    piVar8 = piVar2;
    if ((int)ABS(*(float *)(param_1 + 0x30) - unaff_s16) < 0x3f800000) {
      *(undefined1 *)(iRam0017b704 + param_2) = 0;
      *(undefined2 *)(param_2 + 0x3254) = 0x14;
      *(undefined2 *)(param_1 + 0x222) = 9;
      FUN_00362a4c(uVar4,param_1 + 0x26c,uRam0017becc);
      *(undefined1 *)(param_1 + 0x1a4) = 0xff;
      fVar14 = fRam0017bed0;
      iVar6 = *piVar2;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x22e) = (short)(int)(fRam0017ba80 / fVar13 + fVar12);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x22c) = (short)(int)(fVar14 / fVar13 + fVar12);
    }
    break;
  case 9:
    FUN_00126438(param_1,param_2);
    unaff_s16 = fRam0017ba64;
    FUN_00373500(*(float *)(param_1 + 0x204) + fRam0017beb8,fRam0017ba64,
                 *(float *)(param_1 + 0x200) * fRam0017beb4,param_1 + 0x1b0);
    FUN_00373500(uRam0017ba6c,unaff_s16,uRam0017ba68,param_1 + 0x204);
    FUN_00373500((*(float *)(param_1 + 0x2c) + fRam0017bed4) - fRam0017bed8,unaff_s16,
                 *(float *)(param_1 + 0x200) * fRam0017ba70,param_1 + 0x1b8);
    if (*(short *)(param_1 + 0x22e) != 0) break;
    iVar6 = FUN_0036c5bc(param_2,0);
    uVar4 = *(undefined4 *)(param_1 + 0x1ac);
    uVar9 = *(undefined4 *)(param_1 + 0x1b0);
    *(undefined4 *)(iVar6 + 0x8c) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(iVar6 + 0x90) = uVar4;
    *(undefined4 *)(iVar6 + 0x94) = uVar9;
    uVar4 = *(undefined4 *)(param_1 + 0x1ac);
    unaff_r9 = *(int *)(param_1 + 0x1b0);
    *(undefined4 *)(iVar6 + 0xa4) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(iVar6 + 0xa8) = uVar4;
    *(int *)(iVar6 + 0xac) = unaff_r9;
    uVar4 = *(undefined4 *)(param_1 + 0x1b8);
    piVar8 = *(int **)(param_1 + 0x1bc);
    *(undefined4 *)(iVar6 + 0x80) = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined4 *)(iVar6 + 0x84) = uVar4;
    *(int **)(iVar6 + 0x88) = piVar8;
    FUN_0036e9b8(param_2,(int)*(short *)(param_1 + 0x224),0);
    *(undefined2 *)(param_1 + 0x224) = 0;
    FUN_00367374(param_2,param_2 + 0x2298);
    FUN_0036e980(param_2,param_1,7);
    func_0x0034bea8(*(undefined4 *)(iRam0017bedc + (int)piVar7),0);
    *(undefined4 *)(param_1 + 0x254) = uRam0017bee0;
    uVar4 = 8;
code_r0x0017be30:
    *(undefined4 *)(param_1 + 0xd24) = uVar4;
    break;
  case 0xf:
    if (((int)ABS((float)piVar7[10] - fRam0017aa7c) < iRam0017aa88) &&
       ((int)ABS((float)piVar7[0xc] - fRam0017aa8c) < iRam0017aa88)) {
      *(undefined2 *)(param_1 + 0x222) = 1;
      func_0x0034bea8(*(undefined4 *)(iRam0017aa90 + (int)piVar7),1);
      if ((*(ushort *)(iRam0017aa94 + 0xfa) & 4) != 0) {
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piRam0017aa98 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x22c) = (short)(int)(fRam0017aa9c / fVar14 + fRam0017aaa0);
      }
    }
  }
  iVar6 = (int)piVar7 >> 0xb;
  *(undefined2 *)(param_1 + 0x200) = (short)param_2;
  uVar4 = FUN_0036aa20(unaff_s16,DAT_0017c2e4,DAT_0017c2e0,piVar7 + 0x823,iVar6,piVar7,
                       param_2 + 0x178,0,0,0,0x2000);
  *(undefined4 *)(unaff_r9 + 0x4c) = uVar4;
  FUN_0036aa20(unaff_s16,unaff_s16,unaff_s16,piVar7 + 0x823,iVar6,piVar7,DAT_0017c2e8,0,0,0,1);
  *(undefined4 *)(*(int *)(unaff_r9 + 0x44) + 0x1704) = DAT_0017c2ec;
  *(undefined1 *)(iVar6 + 0xacc) = 3;
  if (*(int *)(iVar6 + 0xffc) == 0x69) {
    *(undefined2 *)(param_1 + 0x200) = 2;
    *(undefined4 *)(iVar6 + 0xffc) = 0;
  }
  if (*(short *)(param_1 + 0x202) == 0) {
    return;
  }
  if (piVar8 != (int *)0x0) {
    FUN_00373500(*(undefined4 *)(param_1 + 0x244),*(undefined4 *)(param_1 + 0x278),
                 *(float *)(param_1 + 0x22c) * *(float *)(param_1 + 0x274),iVar6 + 0x1008);
    FUN_00373500(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x278),
                 *(float *)(param_1 + 0x230) * *(float *)(param_1 + 0x274),iVar6 + 0x100c);
    FUN_00373500(*(undefined4 *)(param_1 + 0x24c),*(undefined4 *)(param_1 + 0x278),
                 *(float *)(param_1 + 0x234) * *(float *)(param_1 + 0x274),iVar6 + 0x1010);
    FUN_00373500(*(undefined4 *)(param_1 + 0x25c),*(undefined4 *)(param_1 + 0x278),
                 *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x274),iVar6 + 0x1014);
    FUN_00373500(*(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x278),
                 *(float *)(param_1 + 0x23c) * *(float *)(param_1 + 0x274),iVar6 + 0x1018);
    FUN_00373500(*(undefined4 *)(param_1 + 0x264),*(undefined4 *)(param_1 + 0x278),
                 *(float *)(param_1 + 0x240) * *(float *)(param_1 + 0x274),iVar6 + 0x101c);
  }
  FUN_00367b14(piVar7,(int)*(short *)(param_1 + 0x202),iVar6 + 0x1014,iVar6 + 0x1008);
  return;
}

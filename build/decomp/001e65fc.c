// OoT3D decomp @ 001e65fc  name=FUN_001e65fc  size=2840

void FUN_001e65fc(int param_1,int param_2)

{
  undefined2 uVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  undefined4 uVar24;
  int iVar25;
  int extraout_r1;
  float *pfVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint in_fpscr;
  float fVar31;
  float fVar32;
  float fVar33;

  iVar28 = *(int *)(param_2 + 0x20ac);
  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  iVar22 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar22 != 0) {
    FUN_00370350(DAT_001e691c,param_1 + 0x1a4,0x18);
  }
  fVar21 = DAT_001e6fc4;
  fVar20 = DAT_001e6fc0;
  fVar19 = DAT_001e6fb8;
  fVar18 = DAT_001e6fb0;
  fVar17 = DAT_001e6cbc;
  fVar16 = DAT_001e6cb8;
  fVar15 = DAT_001e6cb4;
  fVar14 = DAT_001e6ca4;
  fVar33 = DAT_001e6ca0;
  fVar13 = DAT_001e6c9c;
  fVar12 = DAT_001e6c98;
  fVar11 = DAT_001e6c94;
  iVar30 = DAT_001e6c80;
  fVar10 = DAT_001e6c7c;
  fVar9 = DAT_001e6c78;
  fVar8 = DAT_001e6c74;
  fVar32 = DAT_001e6c70;
  fVar7 = DAT_001e6c6c;
  uVar6 = DAT_001e6c68;
  fVar27 = DAT_001e6c64;
  uVar5 = DAT_001e6958;
  fVar23 = DAT_001e6950;
  uVar24 = DAT_001e694c;
  pfVar4 = DAT_001e6948;
  iVar29 = DAT_001e6944;
  pfVar26 = DAT_001e6938;
  iVar22 = DAT_001e692c;
  piVar3 = DAT_001e6928;
  pfVar2 = DAT_001e6924;
  fVar31 = DAT_001e6920;
  iVar25 = (int)*(short *)(param_1 + 0x234);
  if (iVar25 == 0) {
    *(uint *)(DAT_001e6928[1] + 4) = *(uint *)(DAT_001e6928[1] + 4) | 1;
    *(uint *)(*piVar3 + 4) = *(uint *)(*piVar3 + 4) | 1;
    *(uint *)(iVar28 + 0x1710) = *(uint *)(iVar28 + 0x1710) & 0xffffffdf;
    FUN_00367374(param_2,param_2 + 0x2298);
    fVar23 = 0.0;
    if (*(char *)(pfVar2 + 0x11) != '\0') {
      fVar23 = pfVar2[0xf];
    }
    if (*(char *)(pfVar2 + 0x11) != '\0' && fVar23 != 0.0) {
      iVar28 = FUN_0036c5bc(fVar23,0xffffffff);
      FUN_00367c48();
      *(undefined4 *)(iVar28 + 0x144) = DAT_001e6930;
      *(undefined1 *)(pfVar2 + 0x11) = 0;
    }
    FUN_0036e980(param_2,param_1,7);
    iVar28 = DAT_001e693c;
    pfVar26 = DAT_001e6938 + -3;
    pfVar2[1] = pfVar2[1] + fVar31;
    pfVar2[2] = pfVar2[2] + DAT_001e6934;
    FUN_00367b14(param_2,(int)*(short *)(iVar28 + 4),pfVar26);
    FUN_00338654(param_2,0,(int)*(short *)(iVar28 + 4));
    FUN_00320d7c(param_2,(int)*(short *)(iVar28 + 4),1);
    FUN_00320d7c(param_2,0,7);
    FUN_0036963c(param_2,(int)*(short *)(iVar28 + 4));
    *(ushort *)(iVar22 + 0xfa) = *(ushort *)(iVar22 + 0xfa) | 0x80;
    *(undefined2 *)(param_1 + 0x234) = 0xc5;
    *(undefined1 *)(param_1 + 0x231) = 0;
    *(int *)(param_1 + 0x22c) = DAT_001e6940;
    *(byte *)(param_1 + 0xefe) = *(byte *)(param_1 + 0xefe) | 1;
    *(byte *)(*piVar3 + 0xefe) = *(byte *)(*piVar3 + 0xefe) | 1;
    *(byte *)(piVar3[1] + 0xefe) = *(byte *)(piVar3[1] + 0xefe) | 1;
    *(undefined2 *)(param_1 + 0x234) = 0xb0;
    goto LAB_001e71dc;
  }
  if (DAT_001e6944 <= iVar25) {
    if (DAT_001e6954 < *(int *)(iVar28 + 0x2c)) {
      *(float *)(iVar28 + 0x28) = *DAT_001e6948;
      *(float *)(iVar28 + 0x30) = pfVar4[2];
      *(float *)(iVar28 + 0x221c) = fVar23;
      uVar1 = (undefined2)uVar5;
      *(undefined2 *)(iVar28 + 0xbe) = uVar1;
      *(undefined2 *)(iVar28 + 0x2222) = uVar1;
      *(undefined2 *)(iVar28 + 0x2220) = uVar1;
    }
    FUN_0036df4c(DAT_001e6924,iVar28 + 0x28);
    fVar31 = DAT_001e6974;
    uVar6 = DAT_001e6970;
    uVar5 = DAT_001e696c;
    iVar25 = DAT_001e695c;
    iVar30 = DAT_001e693c;
    if ((*(ushort *)(iVar28 + 0x90) & 2) != 0) {
      if (*(char *)(param_1 + 0x231) == '\0') {
        *(undefined2 *)(*(int *)(DAT_001e693c + 0x34) + 0x1c) = 1;
        *(undefined1 *)(param_1 + 0x231) = 1;
        if (*(char *)(iVar25 + iVar28) != '\0') {
          FUN_001cdddc(iVar28,param_2);
        }
        uVar24 = FUN_003603c0(param_1 + 0x1a4,0x22c);
        uVar24 = VectorSignedToFloat(uVar24,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00360190(DAT_001e6964,fVar23,uVar24,DAT_001e6960,iVar28 + 0x254,param_2,0x22c,0);
        *(uint *)(iVar28 + 0x29b8) = *(uint *)(iVar28 + 0x29b8) | 0x8000;
        FUN_00375bcc(*(undefined4 *)(iVar30 + 0x34),DAT_001e6968);
      }
      else if ((*(ushort *)(iVar22 + 0xfa) & 0x80) == 0) {
        *(short *)(param_1 + 0x234) = (short)iVar29;
      }
      else {
        *(undefined4 *)(piVar3[1] + 0x140) = uVar24;
        *(undefined4 *)(*piVar3 + 0x140) = uVar24;
        *(undefined4 *)(param_1 + 0x140) = uVar5;
        *(short *)(param_1 + 0x234) = (short)uVar6;
        *pfVar2 = fVar31;
        pfVar2[1] = fVar23;
        pfVar2[2] = fVar23;
      }
    }
    goto LAB_001e71dc;
  }
  if (0x2e0 < iVar25) {
    *DAT_001e6938 = *DAT_001e6938 + DAT_001e6c64;
    pfVar26[1] = pfVar26[1] + fVar27;
    pfVar26[2] = pfVar26[2] - fVar27;
    goto LAB_001e71dc;
  }
  if (0x2b3 < iVar25) {
    if (iVar25 == 0x2c6) {
      iVar22 = DAT_001e6928[1];
      *(undefined4 *)(iVar22 + 0x140) = DAT_001e694c;
      *(undefined4 *)(*piVar3 + 0x140) = uVar24;
      *(undefined4 *)(param_1 + 0x140) = DAT_001e696c;
      *(float *)(iVar28 + 0x28) = *pfVar4;
      *(float *)(iVar28 + 0x30) = pfVar4[2];
      *(undefined4 *)(iVar30 + *(short *)(iVar22 + 0x1c) * 4) = 1;
      FUN_00374a58(uVar6,iVar22 + 0x1a4,
                   *(undefined4 *)(iVar30 + 0x20 + *(short *)(iVar22 + 0x1c) * 4));
      *(undefined2 *)(iVar22 + 0xbc) = 0;
      *(undefined2 *)(iVar22 + 0x234) = 0x12;
      *(undefined4 *)(iVar22 + 0x22c) = DAT_001e6c84;
    }
    fVar31 = DAT_001e6c8c;
    if (DAT_001e6c88 < *(short *)(param_1 + 0x234)) {
      *pfVar26 = *pfVar26 - DAT_001e6c8c;
      fVar23 = DAT_001e6c90;
      pfVar26[1] = pfVar26[1] - fVar31;
      fVar23 = pfVar26[2] + fVar23;
    }
    else {
      if (*(short *)(param_1 + 0x234) != DAT_001e6c88) goto LAB_001e71dc;
      iVar28 = piVar3[1];
      *pfVar2 = *(float *)(iVar28 + 8);
      fVar31 = *(float *)(iVar28 + 0xc);
      pfVar2[1] = fVar31 - fVar7;
      fVar23 = *(float *)(iVar28 + 0x10);
      pfVar2[2] = fVar23 + fVar32;
      *pfVar26 = *(float *)(iVar28 + 8) + fVar8;
      pfVar26[1] = fVar31 + fVar9;
      fVar23 = fVar23 + fVar10;
    }
    pfVar26[2] = fVar23;
    goto LAB_001e71dc;
  }
  if (iVar25 < 0x240) {
    if (iVar25 < 0x1d8) {
      if (0x17b < iVar25) {
        iVar29 = iVar25 + -0x17c;
        iVar30 = 4;
        if (iVar29 == 0x11) {
          iVar28 = DAT_001e6928[1];
          *DAT_001e6924 = *(float *)(iVar28 + 8) + DAT_001e6920;
          fVar31 = *(float *)(iVar28 + 0xc);
          pfVar2[1] = fVar31 + fVar33;
          fVar33 = *(float *)(iVar28 + 0x10) - fVar32;
          pfVar2[2] = *(float *)(iVar28 + 0x10) + fVar15;
          *pfVar26 = *(float *)(iVar28 + 8) + fVar13;
          pfVar26[1] = fVar31 - DAT_001e6fb4;
          goto LAB_001e6d20;
        }
        if (iVar25 == 0x1d4) {
          iVar28 = *DAT_001e6928;
          *DAT_001e6924 = *(float *)(iVar28 + 8) - DAT_001e6c6c;
          fVar31 = *(float *)(iVar28 + 0xc);
          pfVar2[1] = fVar31 - fVar10;
          fVar32 = *(float *)(iVar28 + 0x10);
          pfVar2[2] = fVar32 + fVar19;
          *pfVar26 = *(float *)(iVar28 + 8) - fVar18;
          pfVar26[1] = fVar31 + fVar18;
          fVar32 = fVar32 - fVar8;
          goto LAB_001e6d74;
        }
LAB_001e6e70:
        fVar10 = DAT_001e7228;
        fVar9 = DAT_001e6ff8;
        fVar8 = DAT_001e6ff4;
        fVar7 = DAT_001e6fe8;
        fVar27 = DAT_001e6fe0;
        fVar31 = DAT_001e6fd4;
        iVar28 = (int)*(short *)(param_1 + 0x234);
        if (iVar28 < 0x139) {
          iVar25 = 0x138 - iVar28;
          if ((*(ushort *)(iVar22 + 0xfa) & 0x80) != 0 && iVar25 < 0x44) {
            *pfVar2 = *pfVar2 + DAT_001e6fd0;
            fVar23 = DAT_001e6fd8;
            pfVar2[1] = pfVar2[1] + fVar31;
            fVar31 = DAT_001e6fdc;
            *pfVar26 = *pfVar26 - fVar23;
            pfVar26[1] = pfVar26[1] - fVar31;
            fVar32 = pfVar26[2] + fVar32;
            goto LAB_001e6d74;
          }
          if (iVar28 < 0x1f) {
            pfVar2[1] = pfVar2[1] - DAT_001e6fe4;
            pfVar2[2] = pfVar2[2] + fVar7;
            *pfVar26 = *pfVar26 + fVar27;
            fVar31 = DAT_001e6ff0;
            pfVar26[1] = pfVar26[1] + DAT_001e6fec;
            pfVar26[2] = pfVar26[2] + fVar31;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
            *(undefined1 *)(param_1 + 0x230) = 1;
          }
          else if (iVar25 < 0x3c) {
            *pfVar2 = *pfVar2 + DAT_001e6ff4;
            fVar31 = DAT_001e6ffc;
            pfVar2[1] = pfVar2[1] + fVar9;
            fVar23 = DAT_001e7000;
            pfVar2[2] = pfVar2[2] + fVar31;
            fVar31 = DAT_001e7004;
            *pfVar26 = *pfVar26 + fVar23;
            pfVar26[1] = pfVar26[1] - fVar31;
          }
          else if (0x43 < iVar25) {
            if (iVar25 < 0x80) {
              *pfVar2 = *pfVar2 - DAT_001e7224;
              fVar31 = DAT_001e722c;
              pfVar2[1] = pfVar2[1] + fVar10;
              pfVar2[2] = pfVar2[2] - fVar31;
              *pfVar26 = *pfVar26 - fVar27;
              pfVar26[1] = pfVar26[1] + fVar8;
              fVar32 = pfVar26[2] - fVar9;
              goto LAB_001e6d74;
            }
            if (iVar25 == 0x80) {
              if ((*(ushort *)(iVar22 + 0xfa) & 0x80) == 0) {
                FUN_00354248(fVar23,param_2,param_2 + 0x224c,*(undefined4 *)(param_1 + 0x228),200,
                             0xb4,0x100,0x40);
              }
              FUN_0036ec40(0,DAT_001e7230);
              iVar28 = FUN_0035b164();
              if ((iVar28 != 0) && (iVar28 = FUN_0035b0a0(), iVar28 == 0)) {
                if (((*DAT_001e7234 & 1) == 0) && (iVar28 = FUN_003679b4(DAT_001e7234), iVar28 != 0)
                   ) {
                  FUN_0036788c(DAT_001e7238);
                }
                FUN_003542c4(DAT_001e7244,1);
              }
              FUN_00374a58(DAT_001e7248,param_1 + 0x1a4,0x13);
              FUN_0037547c(DAT_001e7254,param_1 + 0xee0,4,DAT_001e7250,DAT_001e7250,DAT_001e724c);
            }
          }
        }
        goto LAB_001e7164;
      }
      if (iVar25 < 300) {
        if (iVar25 < 0xe8) {
          if (iVar25 < 0xb0) {
            iVar30 = 0;
            iVar28 = (int)((ulonglong)((longlong)DAT_001e6fcc * (longlong)iVar25) >> 0x20);
            iVar29 = iVar25 + ((iVar28 >> 3) - (iVar28 >> 0x1f)) * -0x2c;
          }
          else {
            iVar29 = iVar25 + -0xb0;
            iVar30 = 1;
          }
        }
        else {
          iVar29 = iVar25 + -0xe8;
          iVar30 = 2;
        }
        goto LAB_001e6e70;
      }
      iVar29 = iVar25 + -300;
      iVar30 = 3;
      if (iVar25 == 0x178) {
        iVar28 = *DAT_001e6928;
        *DAT_001e6924 = *(float *)(iVar28 + 8) - DAT_001e6fbc;
        fVar31 = *(float *)(iVar28 + 0xc);
        pfVar2[1] = fVar31 - fVar13;
        fVar23 = *(float *)(iVar28 + 0x10);
        pfVar2[2] = fVar23 + fVar15;
        *pfVar26 = *(float *)(iVar28 + 8) + fVar20;
        pfVar26[1] = fVar31 + fVar18;
        pfVar26[2] = fVar23 + fVar12;
        goto LAB_001e7164;
      }
      if (iVar29 != 0x12) goto LAB_001e6e70;
      fVar31 = *DAT_001e6948 + DAT_001e6c98;
      *DAT_001e6924 = fVar31;
      fVar23 = pfVar4[1];
      pfVar2[1] = fVar23 - fVar16;
      fVar27 = pfVar4[2];
      pfVar2[2] = fVar27 - fVar21;
      *pfVar26 = fVar31;
      pfVar26[1] = fVar23 + DAT_001e6fc8;
      pfVar26[2] = fVar27 + fVar8;
    }
    else {
      iVar29 = iVar25 + -0x1d8;
      iVar30 = 5;
      if (iVar29 == 0x11) {
        iVar28 = DAT_001e6928[1];
        *DAT_001e6924 = *(float *)(iVar28 + 8) + DAT_001e6cb4;
        fVar31 = *(float *)(iVar28 + 0xc);
        pfVar2[1] = fVar31 - fVar16;
        fVar33 = *(float *)(iVar28 + 0x10);
        pfVar2[2] = fVar33 - fVar15;
        *pfVar26 = *(float *)(iVar28 + 8) - fVar7;
        pfVar26[1] = fVar31 + fVar11;
        fVar33 = fVar33 + fVar17;
        goto LAB_001e6d20;
      }
      if (iVar25 != 0x23c) goto LAB_001e6e70;
      iVar28 = *DAT_001e6928;
      *DAT_001e6924 = *(float *)(iVar28 + 8) - DAT_001e6c6c;
      fVar31 = *(float *)(iVar28 + 0xc);
      pfVar2[1] = fVar31;
      fVar32 = *(float *)(iVar28 + 0x10);
      pfVar2[2] = fVar32;
      *pfVar26 = *(float *)(iVar28 + 8) - fVar33;
      pfVar26[1] = fVar31 + fVar17;
      fVar32 = fVar32 + fVar8;
LAB_001e6d74:
      pfVar26[2] = fVar32;
LAB_001e7164:
      if (iVar29 != 0x12) {
        if (iVar29 == 8) goto LAB_001e71dc;
        goto LAB_001e71c0;
      }
    }
    iVar28 = piVar3[1];
    *(undefined4 *)(DAT_001e6c80 + *(short *)(iVar28 + 0x1c) * 4) = 1;
    FUN_00374a58(uVar6,iVar28 + 0x1a4,*(undefined4 *)(DAT_001e7258 + *(short *)(iVar28 + 0x1c) * 4))
    ;
    *(undefined2 *)(iVar28 + 0xbc) = 0;
    *(undefined2 *)(iVar28 + 0x234) = 0x12;
    *(undefined4 *)(iVar28 + 0x22c) = DAT_001e6c84;
  }
  else {
    iVar29 = iVar25 + -0x240;
    iVar30 = 6;
    if (iVar25 == 0x2b3) {
      fVar31 = *(float *)(iVar28 + 0x2c);
      fVar27 = *(float *)(iVar28 + 0x30);
      *DAT_001e6924 = *(float *)(iVar28 + 0x28);
      pfVar2[1] = fVar31;
      pfVar2[2] = fVar27;
      *pfVar26 = fVar14;
      pfVar26[1] = DAT_001e6ca8;
      pfVar26[2] = DAT_001e6cac;
      goto LAB_001e6e70;
    }
    if (iVar29 == 0x11) {
      iVar28 = DAT_001e6928[1];
      *DAT_001e6924 = *(float *)(iVar28 + 8) + DAT_001e6920;
      fVar31 = *(float *)(iVar28 + 0xc);
      pfVar2[1] = fVar31;
      fVar33 = *(float *)(iVar28 + 0x10);
      pfVar2[2] = fVar33 + fVar7;
      *pfVar26 = *(float *)(iVar28 + 8) + fVar9;
      pfVar26[1] = fVar31 + fVar32;
      fVar33 = fVar33 - fVar11;
    }
    else {
      if (iVar29 != 0x5f) goto LAB_001e6e70;
      iVar28 = *DAT_001e6928;
      *DAT_001e6924 = *(float *)(iVar28 + 8);
      fVar31 = *(float *)(iVar28 + 0xc);
      pfVar2[1] = fVar31 + fVar12;
      fVar33 = *(float *)(iVar28 + 0x10) - fVar33;
      pfVar2[2] = *(float *)(iVar28 + 0x10) + fVar9;
      *pfVar26 = *(float *)(iVar28 + 8) + fVar13;
      pfVar26[1] = fVar31 + DAT_001e6cb0;
    }
LAB_001e6d20:
    pfVar26[2] = fVar33;
  }
LAB_001e71c0:
  FUN_00368d94(iVar29,iVar30 * 3 + 0xb);
  if (extraout_r1 == 8) {
    FUN_0033be60(*piVar3);
  }
LAB_001e71dc:
  if (*(int *)(param_1 + 0x22c) == DAT_001e6940) {
    return;
  }
  FUN_00367b14(param_2,(int)*(short *)(DAT_001e693c + 4),DAT_001e6938 + -3);
  return;
}

// OoT3D decomp @ 00397974  name=FUN_00397974  size=568

void FUN_00397974(int param_1,int param_2)

{
  int *piVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  uint in_fpscr;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;

  iVar4 = FUN_0036c5bc(param_2,0);
  iVar11 = *(int *)(iRam00397de8 + param_2);
  switch(*(undefined1 *)(iRam00397dec + 9)) {
  case 0xe:
    FUN_0036e980(param_2,param_1,1);
    FUN_00367494(param_2,param_2 + 0x2298);
    uVar2 = FUN_00367d74(param_2);
    iVar11 = iRam00397dec;
    *(undefined2 *)(iRam00397dec + 0xc) = uVar2;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(iVar11 + 0xc),7);
    pfVar10 = pfRam00397df0;
    fVar18 = *(float *)(param_1 + 0x28);
    pfVar5 = pfRam00397df0 + -6;
    *pfRam00397df0 = fVar18;
    fVar15 = fRam00397df4;
    fVar19 = *(float *)(param_1 + 0x30);
    pfVar10[2] = fVar19;
    fVar16 = *(float *)(iVar4 + 0x84);
    fVar17 = *(float *)(iVar4 + 0x88);
    *pfVar5 = *(float *)(iVar4 + 0x80);
    pfVar10[-5] = fVar16;
    pfVar10[-4] = fVar17;
    pfVar5 = pfVar10 + -9;
    fVar16 = *(float *)(iVar4 + 0x90);
    fVar17 = *(float *)(iVar4 + 0x94);
    *pfVar5 = *(float *)(iVar4 + 0x8c);
    pfVar10[-8] = fVar16;
    pfVar10[-7] = fVar17;
    pfVar10[-3] = *pfVar5;
    pfVar10[-2] = pfVar10[-8];
    pfVar10[-1] = pfVar10[-7];
    pfVar10[-2] = fVar15;
    pfVar10[1] = fRam00397df8;
    pfVar10[3] = pfVar10[-0xc];
    pfVar10[4] = pfVar10[-0xb];
    pfVar10[5] = pfVar10[-10];
    pfVar10[6] = pfVar10[3];
    pfVar10[7] = pfVar10[4];
    pfVar10[8] = pfVar10[5];
    sVar3 = FUN_003758b0(fVar19 - pfVar10[-7],fVar18 - *pfVar5);
    *(short *)(param_1 + 0xfb0) = sVar3 + -0x100;
    *(undefined2 *)(param_1 + 0xfb4) = 0xf;
    *(undefined1 *)(param_2 + 0x3264) = 0xff;
    *(undefined1 *)(param_2 + 0x3263) = 0xff;
    *(undefined1 *)(param_2 + 0x3262) = 0xff;
    *(undefined1 *)(param_2 + 0x3265) = 0;
    *(undefined1 *)(param_2 + 0x3261) = 1;
    *(char *)(iVar11 + 9) = *(char *)(iVar11 + 9) + '\x01';
  case 0xf:
    *(short *)(param_1 + 0xfb0) = *(short *)(param_1 + 0xfb0) + 0xab;
    fVar16 = (float)FUN_002cfca0();
    fVar15 = fRam00397dfc;
    pfVar10 = pfRam00397df0;
    pfRam00397df0[-3] = *pfRam00397df0 + fVar16 * (*(float *)(param_1 + 0xfac) + fRam00397dfc);
    fVar17 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xfb0));
    uVar12 = uRam00397e0c;
    uVar14 = uRam00397e04;
    fVar16 = fRam00397e00;
    pfVar10[-1] = pfVar10[2] + fVar17 * (*(float *)(param_1 + 0xfac) + fVar15);
    FUN_0036e168(uVar12,uRam00397e08,uVar14,fVar16,pfVar10 + 3);
    pfVar5 = pfVar10 + 3;
    pfVar10[4] = *pfVar5 * fVar16;
    pfVar10[5] = *pfVar5;
    pfVar10[6] = *pfVar5;
    pfVar10[7] = pfVar10[4];
    pfVar10[8] = pfVar10[5];
    fVar15 = (float)FUN_003738a8(fVar16);
    iVar4 = iRam00397e1c;
    iVar11 = (int)(short)(int)(fVar15 + fRam00397e10 + *pfVar5 * fVar16);
    if (*(uint *)(iRam00397e14 + param_2) +
        (uint)((ulonglong)*(uint *)(iRam00397e14 + param_2) * (ulonglong)uRam00397e18 >> 0x22) * -6
        == 0) {
      if (*(short *)(param_1 + 0xfb4) != 0) {
        iVar7 = 4;
        do {
          uVar14 = VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
          FUN_0031c7d4(iVar4,iVar4,uVar14,param_2,param_1,1,iVar11,1,1);
          iVar7 = iVar7 + -1;
        } while (1 < iVar7);
        FUN_0031c7d4(iVar4,iVar4,uRam00397e20,param_2,param_1,1,iVar11,1,1);
        *(short *)(param_1 + 0xfb4) = *(short *)(param_1 + 0xfb4) + -1;
        goto code_r0x00397c5c;
      }
    }
    else {
code_r0x00397c5c:
      if (*(short *)(param_1 + 0xfb4) != 0) break;
    }
    iVar4 = iRam00397e1c;
    *(char *)(iRam00397dec + 9) = *(char *)(iRam00397dec + 9) + '\x01';
    fVar15 = pfRam00397e24[1];
    fVar16 = pfRam00397e24[2];
    *pfVar5 = *pfRam00397e24;
    pfVar10[4] = fVar15;
    pfVar10[5] = fVar16;
    pfVar10[6] = *pfVar5;
    pfVar10[7] = pfVar10[4];
    pfVar10[8] = pfVar10[5];
    piVar1 = piRam00397e28;
    *(undefined2 *)((int)piRam00397e28 + 10) = 0;
    *(undefined1 *)(piVar1 + 2) = 1;
    piVar1[1] = iRam00397e2c;
    *(undefined1 *)((int)piVar1 + 9) = 0;
    piVar1[6] = iVar4;
    piVar1[7] = iVar4;
    break;
  case 0x15:
    *(short *)(param_1 + 0xfb0) = *(short *)(param_1 + 0xfb0) + 0x1862;
    fVar16 = (float)FUN_00338f60();
    fVar15 = fRam00397e34;
    *(float *)(param_1 + 0xfa4) = fRam00397e34 + fVar16 * fRam00397e30;
    fVar16 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xfb0));
    *(float *)(param_1 + 0xfa8) = fVar15 + fVar16 * fRam00397e38;
    iVar4 = iRam00397dec;
    if (*(char *)(param_1 + 0xf98) == '\0') {
      *(char *)(param_1 + 0xf95) = *(char *)(param_1 + 0xf95) + '\x01';
      *(undefined1 *)(param_1 + 0xf98) = 1;
      *(undefined4 *)(param_1 + 0xf9c) = 0x2d;
      *(char *)(iVar4 + 9) = *(char *)(iVar4 + 9) + '\x01';
      FUN_0035e4f4(param_2,param_1 + 0x28,uRam00397e3c,1,1,0x28);
      *(undefined1 *)(param_1 + 0xf94) = 2;
      uVar14 = uRam00397e40;
      *(undefined2 *)(param_2 + 0x3208) = 0xdc;
      *(undefined2 *)(param_2 + 0x320a) = 0xdc;
      *(undefined2 *)(param_2 + 0x320c) = 0x96;
      *(short *)(param_2 + 0x320e) = (short)uVar14;
      *(undefined4 *)(param_2 + 0x3214) = uRam00397e44;
      *(undefined2 *)(param_2 + 0x31fc) = 200;
      *(undefined2 *)(param_2 + 0x31fe) = 200;
      *(undefined2 *)(param_2 + 0x3200) = 200;
      *(undefined2 *)(param_2 + 0x3202) = 0xd7;
      *(undefined2 *)(param_2 + 0x3204) = 0xa5;
      *(undefined2 *)(param_2 + 0x3206) = 200;
      *(undefined1 *)(param_2 + 0x3262) = 0xdc;
      *(undefined1 *)(param_2 + 0x3263) = 0xdc;
      *(undefined1 *)(param_2 + 0x3264) = 0x96;
      *(undefined1 *)(param_2 + 0x3265) = 100;
      FUN_0036e980(param_2,param_1,8);
    }
    break;
  case 0x16:
    if (*(int *)(param_1 + 0xf9c) == 0x14) {
      FUN_0036ec40(0,uRam00398264);
    }
    iVar4 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar4;
    fVar15 = fRam00398268;
    pfVar10 = pfRam00397df0;
    if (iVar4 == 0) {
      *pfRam00397df0 = *(float *)(param_1 + 0x28);
      pfVar10[1] = *(float *)(param_1 + 0x2c) + fVar15;
      pfVar10[2] = *(float *)(param_1 + 0x30);
      fVar16 = (float)FUN_002cfca0((int)*(short *)(iVar11 + 0xbe));
      pfVar10 = pfRam00398270;
      fVar15 = fRam0039826c;
      *pfRam00398270 = *(float *)(iVar11 + 0x28) + fVar16 * fRam0039826c;
      fVar16 = (float)FUN_00338f60((int)*(short *)(iVar11 + 0xbe));
      pfVar10[2] = *(float *)(iVar11 + 0x30) + fVar16 * fVar15;
      pfVar10[1] = *(float *)(iVar11 + 0x2c) + fRam00398274;
      pfVar10[6] = pfVar10[-9];
      pfVar10[7] = pfVar10[-8];
      pfVar10[8] = pfVar10[-7];
      pfVar10[9] = pfVar10[6];
      pfVar10[10] = pfVar10[7];
      pfVar10[0xb] = pfVar10[8];
      fVar15 = 0.0;
      if (*(char *)(pfVar10 + -0xf) != '\0') {
        fVar15 = pfVar10[-0x11];
      }
      if (*(char *)(pfVar10 + -0xf) != '\0' && fVar15 != 0.0) {
        iVar4 = FUN_0036c5bc(fVar15,0xffffffff);
        FUN_00367c48();
        *(undefined4 *)(iVar4 + 0x144) = uRam00398278;
        *(undefined1 *)(pfVar10 + -0xf) = 0;
      }
      *(char *)(iRam00397dec + 9) = *(char *)(iRam00397dec + 9) + '\x01';
      *(undefined4 *)(param_1 + 0xf9c) = 200;
    }
    break;
  case 0x17:
    FUN_0036e168(uRam00397e04,uRam00398284,fRam00398280,uRam0039827c,puRam00398288);
    puVar8 = puRam00398288;
    puVar9 = puRam00398288 + 3;
    uVar14 = *puRam00398288;
    puRam00398288[2] = uVar14;
    puVar8[1] = uVar14;
    uVar14 = puVar8[1];
    uVar12 = puVar8[2];
    *puVar9 = *puVar8;
    puVar8[4] = uVar14;
    puVar8[5] = uVar12;
    iVar6 = *(int *)(param_1 + 0xf9c) + -1;
    *(int *)(param_1 + 0xf9c) = iVar6;
    iVar7 = iRam00397dec;
    if (iVar6 == 0) {
      FUN_0036963c(param_2,(int)*(short *)(iRam00397dec + 0xc));
      piVar1 = piRam00397e28;
      bVar13 = (char)piRam00397e28[2] != '\0';
      iVar6 = 0;
      if (bVar13) {
        iVar6 = *piRam00397e28;
      }
      if (bVar13 && iVar6 != 0) {
        iVar6 = FUN_0036c5bc(iVar6,0xffffffff);
        FUN_00367c48();
        *(undefined4 *)(iVar6 + 0x144) = uRam00398278;
        *(undefined1 *)(piVar1 + 2) = 0;
      }
      *(undefined2 *)(iVar7 + 0xc) = 0;
      FUN_00367374(param_2,param_2 + 0x2298);
      FUN_00320d7c(param_2,0,7);
      uVar14 = puRam0039828c[1];
      uVar12 = puRam0039828c[2];
      *(undefined4 *)(iVar4 + 0x8c) = *puRam0039828c;
      *(undefined4 *)(iVar4 + 0x90) = uVar14;
      *(undefined4 *)(iVar4 + 0x94) = uVar12;
      *(undefined4 *)(iVar4 + 0xa4) = *(undefined4 *)(iVar4 + 0x8c);
      *(undefined4 *)(iVar4 + 0xa8) = *(undefined4 *)(iVar4 + 0x90);
      *(undefined4 *)(iVar4 + 0xac) = *(undefined4 *)(iVar4 + 0x94);
      uVar14 = puRam00398290[1];
      uVar12 = puRam00398290[2];
      *(undefined4 *)(iVar4 + 0x80) = *puRam00398290;
      *(undefined4 *)(iVar4 + 0x84) = uVar14;
      *(undefined4 *)(iVar4 + 0x88) = uVar12;
      FUN_0036e980(param_2,param_1,7);
      *(char *)(iVar7 + 9) = *(char *)(iVar7 + 9) + '\x01';
      iVar4 = FUN_0035b164();
      if (iVar4 == 1) {
        iVar4 = FUN_0035b0a0();
        if (iVar4 != 0) {
          FUN_0035af20(uRam003982a0,iRam00397e1c,uRam0039829c,uRam00398298,iRam00397e1c,uRam00398294
                       ,param_2,2,0x8000);
        }
      }
      else {
        z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x5f,0,0,0,0,1);
      }
      iVar4 = iRam003982a4;
      iVar7 = 2;
      iVar6 = 2;
      do {
        pfVar10 = (float *)(iRam003982a4 + iVar7 * 0xc);
        fVar19 = *(float *)(iVar11 + 0x28) - *pfVar10;
        fVar15 = *(float *)(iVar11 + 0x2c) - pfVar10[1];
        fVar17 = *(float *)(iVar11 + 0x30) - pfVar10[2];
        fVar20 = *(float *)(iVar11 + 0x28) - pfVar10[-3];
        fVar16 = *(float *)(iVar11 + 0x2c) - pfVar10[-2];
        fVar18 = *(float *)(iVar11 + 0x30) - pfVar10[-1];
        if (SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar17 * fVar17) <
            SQRT(fVar20 * fVar20 + fVar16 * fVar16 + fVar18 * fVar18)) {
          iVar6 = iVar7 + -1;
        }
        iVar7 = iVar7 + -1;
      } while (0 < iVar7);
      FUN_0035af04(iVar11,0);
      iVar11 = FUN_0035b164();
      puVar8 = (undefined4 *)(iVar4 + iVar6 * 0xc);
      if (iVar11 == 1) {
        uVar14 = 0x5d;
      }
      else {
        uVar14 = 0xa1;
      }
      z_actor_003738d0(*puVar8,puVar8[1],puVar8[2],param_2 + 0x208c,param_2,uVar14,0,0,0,0,1);
    }
  case 0x18:
    FUN_003738a8(fRam00397e00);
    *(undefined1 *)(iRam003982a8 + param_2) = 0;
  }
  uVar12 = uRam003982ac;
  puVar8 = puRam00398288;
  uVar14 = uRam00398284;
  iVar4 = iRam00397dec;
  if (*(short *)(iRam00397dec + 0xc) != 0) {
    FUN_0036e168(puRam00398288[-6],uRam00398284,*puRam00398288,uRam003982ac,puRam00398288 + -0xc);
    FUN_0036e168(puVar8[-5],uVar14,puVar8[1],uVar12,puVar8 + -0xb);
    FUN_0036e168(puVar8[-4],uVar14,puVar8[2],uVar12,puVar8 + -10);
    FUN_0036e168(puVar8[-3],uVar14,puVar8[3],uVar12,puVar8 + -9);
    FUN_0036e168(puVar8[-2],uVar14,puVar8[4],uVar12,puVar8 + -8);
    FUN_0036e168(puVar8[-1],uVar14,puVar8[5],uVar12,puVar8 + -7);
    FUN_00367b14(param_2,(int)*(short *)(iVar4 + 0xc),puVar8 + -9,puVar8 + -0xc);
  }
  FUN_003731e0(param_1 + 0x1a4);
  fVar15 = fRam00398430;
  uVar14 = uRam0039842c;
  FUN_0036e168(uRam00398434,fRam00398430,fRam00398268,uRam0039842c,param_1 + 0xc4);
  FUN_00375a18(param_1 + 0xffc,0,1,200,0);
  FUN_00375a18(param_1 + 0xffa,0,1,200,0);
  FUN_00375a18(param_1 + 0xfb2,200,1,10,0);
  uVar12 = uRam00398438;
  if (*(char *)(param_2 + 0x3265) != '\0') {
    *(char *)(param_2 + 0x3265) = *(char *)(param_2 + 0x3265) + -0x32;
  }
  FUN_0036e168(uVar14,fVar15,uVar12,uVar14,param_1 + 0x6c);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0xffc);
  *(short *)(param_1 + 0xfb0) = *(short *)(param_1 + 0xfb0) + *(short *)(param_1 + 0xffa);
  fVar16 = (float)FUN_00338f60();
  *(float *)(param_1 + 0xfa4) = fVar15 + fVar16 * fRam0039843c;
  fVar16 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xfb0));
  *(float *)(param_1 + 0xfa8) = fVar15 + fVar16 * fRam00398280;
  return;
}

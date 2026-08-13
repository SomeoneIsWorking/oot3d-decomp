// OoT3D decomp @ 001ec834  name=FUN_001ec834  size=3940

void FUN_001ec834(int param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char *pcVar13;
  short sVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  float *pfVar25;
  uint in_fpscr;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  int iStack_6c;
  int *piStack_68;

  *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_2 + 0x7f44);
  *(short *)(param_1 + 0x88e) = *(short *)(param_1 + 0x88e) + 1;
  *(short *)(param_1 + 0x88c) = *(short *)(param_1 + 0x88c) + 1;
  iStack_70 = param_2;
  (**(code **)(param_1 + 0x880))(param_1,param_2);
  iVar15 = 0;
  do {
    iVar20 = param_1 + iVar15 * 2;
    sVar14 = *(short *)(iVar20 + 0x8b0);
    iVar15 = (int)(short)((short)iVar15 + 1);
    if (sVar14 != 0) {
      *(short *)(iVar20 + 0x8b0) = sVar14 + -1;
    }
  } while (iVar15 < 6);
  if (*(short *)(param_1 + 0x884) != 0) {
    *(short *)(param_1 + 0x884) = *(short *)(param_1 + 0x884) + -1;
  }
  if (*(short *)(param_1 + 0x898) != 0) {
    *(short *)(param_1 + 0x898) = *(short *)(param_1 + 0x898) + -1;
  }
  if (*(short *)(param_1 + 0x8a6) != 0) {
    *(short *)(param_1 + 0x8a6) = *(short *)(param_1 + 0x8a6) + -1;
  }
  if (*(short *)(param_1 + 0x88a) < 200) {
    if (*(short *)(param_1 + 0x8a6) == 0) {
      iVar15 = *(int *)(param_1 + 0x2330);
      if ((*(byte *)(iVar15 + 0x16) & 2) != 0) {
        puVar16 = *(uint **)(iVar15 + 0x24);
        *(byte *)(iVar15 + 0x16) = *(byte *)(iVar15 + 0x16) & 0xfd;
        cVar2 = *(char *)(param_1 + 0xb7);
        *(char *)(param_1 + 0xb7) = cVar2 + -2;
        if ((*puVar16 & 0x1000) != 0) {
          *(char *)(param_1 + 0xb7) = cVar2 + -4;
        }
        if (*(char *)(param_1 + 0xb7) < '\x03') {
          *(undefined1 *)(param_1 + 0xb7) = 2;
        }
        iVar15 = *(int *)(param_1 + 0x2330);
        fStack_7c = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0xe),
                                               (byte)(in_fpscr >> 0x15) & 3);
        fStack_78 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x10),
                                               (byte)(in_fpscr >> 0x15) & 3);
        fStack_74 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x12),
                                               (byte)(in_fpscr >> 0x15) & 3);
        uVar21 = *puVar16;
        if (*(char *)(param_1 + 0xb7) == cVar2) {
          func_0x003741e4(iStack_70,uVar21,1,&fStack_7c,0);
        }
        else {
          func_0x003741e4(iStack_70,uVar21,0,&fStack_7c,0);
        }
        uVar32 = uRam001ecd3c;
        fStack_94 = fRam001ecd38;
        *(undefined2 *)(param_1 + 0x898) = 10;
        *(undefined2 *)(param_1 + 0x8a6) = 0x14;
        FUN_0037547c(uRam001ecd40,param_1 + 0x28,4,uVar32,uVar32);
      }
    }
    iVar15 = iStack_70 + 0x5c78;
    func_0x00376168();
    func_0x003761f0(iStack_70,iVar15,param_1 + 0x2314);
  }
  func_0x001317dc(param_1,iStack_70);
  fVar5 = fRam001ecd60;
  fVar4 = fRam001ecd54;
  fVar3 = fRam001ecd50;
  fVar26 = fRam001ecd4c;
  *(float *)(param_1 + 0x8bc) = *(float *)(param_1 + 0x8bc) + fRam001ecd44;
  *(undefined4 *)(param_1 + 0x8c0) = uRam001ecd48;
  *(float *)(param_1 + 0x8c4) = *(float *)(param_1 + 0x8c4) + fVar26;
  *(float *)(param_1 + 0x8c8) = *(float *)(param_1 + 0x8c8) - fVar3;
  func_0x00373500(param_1 + 0x8d8);
  fVar6 = fRam001ecd68;
  fVar26 = fRam001ecd64;
  if (*(short *)(param_1 + 0x886) == 0) {
    *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(param_1 + 0x8d8);
  }
  else {
    fVar27 = fRam001ecd64;
    if ((*(ushort *)(param_1 + 0x88e) & 8) != 0) {
      fVar27 = fRam001ecd68;
    }
    func_0x00373500(fVar27,fVar5,uRam001ecd6c,param_1 + 0x8dc);
  }
  uVar32 = uRam001ecd74;
  uVar21 = (uint)*(short *)(param_1 + 0x88e);
  fVar27 = fVar26;
  if ((uVar21 & 8) != 0) {
    fVar27 = fRam001ecd70;
  }
  fVar35 = fVar26;
  if ((uVar21 + 3 & 8) != 0) {
    fVar35 = fRam001ecd70;
  }
  if ((uVar21 + 6 & 8) != 0) {
    fVar26 = fRam001ecd70;
  }
  func_0x00373500(fVar27,fVar5,uRam001ecd74,param_1 + 0x8ec);
  func_0x00373500(fVar35,fVar5,uVar32,param_1 + 0x8f0);
  func_0x00373500(fVar26,fVar5,uVar32,param_1 + 0x8f4);
  iVar15 = iRam001ecd7c;
  uVar32 = uRam001ecd78;
  if ((*(short *)(param_1 + 0x8a2) != 0) &&
     (sVar14 = *(short *)(param_1 + 0x8a2) + -1, *(short *)(param_1 + 0x8a2) = sVar14,
     iVar15 = (int)((ulonglong)((longlong)iVar15 * (longlong)(int)sVar14) >> 0x20),
     (int)sVar14 + ((iVar15 >> 2) - (iVar15 >> 0x1f)) * -0x18 == 0)) {
    fVar26 = (float)func_0x00371e50(uVar32);
    fStack_90 = (float)(int)(short)((short)(int)fVar26 + 0x82);
    fStack_94 = 0.0;
    fStack_8c = 1.4013e-43;
    iVar20 = func_0x0036aa20(*(undefined4 *)(param_1 + 0x28),uRam001ecd80,
                             *(undefined4 *)(param_1 + 0x30),iStack_70 + 0x208c,param_1,iStack_70,
                             0xad,0);
    uVar8 = uRam001ecd94;
    fVar26 = fRam001ecd90;
    uVar7 = uRam001ecd8c;
    uVar30 = uRam001ecd88;
    iVar15 = iRam001ecd84;
    if (iVar20 != 0) {
      sVar14 = 0;
      do {
        fStack_7c = fVar6;
        fStack_78 = fVar6;
        fStack_74 = fVar6;
        fStack_88 = fVar6;
        fStack_84 = (float)iVar15;
        fStack_80 = fVar6;
        fStack_94 = (float)func_0x003738a8(uVar30);
        fStack_94 = fStack_94 + *(float *)(iVar20 + 0x28);
        fStack_90 = (float)func_0x003738a8(uVar30);
        fStack_90 = fStack_90 + *(float *)(iVar20 + 0x2c);
        fStack_8c = (float)func_0x003738a8(uVar30);
        fStack_8c = fStack_8c + *(float *)(iVar20 + 0x30);
        fVar27 = (float)func_0x00371e50(uVar7);
        iVar17 = 0x14;
        fVar27 = (float)VectorSignedToFloat((short)(int)fVar27 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
        piVar23 = (int *)(param_1 + 0x2924);
LAB_001ecc84:
        if (((char)piVar23[0xd] != '\0') || (*piVar23 == 0)) goto LAB_001ecd98;
        *(undefined1 *)(piVar23 + 0xd) = 1;
        piVar23[4] = (int)fStack_94;
        piVar23[5] = (int)fStack_90;
        piVar23[6] = (int)fStack_8c;
        piVar23[7] = (int)fStack_7c;
        piVar23[8] = (int)fStack_78;
        piVar23[9] = (int)fStack_74;
        piVar23[10] = (int)fStack_88;
        piVar23[0xb] = (int)fStack_84;
        piVar23[0xc] = (int)fStack_80;
        piVar23[1] = (int)(fVar27 * fVar26);
        iVar17 = func_0x00371e50(uVar8);
        piVar23[2] = iVar17;
        iVar17 = func_0x00371e50(uVar8);
        piVar23[3] = iVar17;
        iVar17 = 0;
        do {
          func_0x0036932c(*piVar23,iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 < 5);
        func_0x0037266c(*piVar23,3);
        *(undefined2 *)((int)piVar23 + 0x36) = 0xff;
        *(undefined1 *)((int)piVar23 + 0x3e) = 0xff;
        *(undefined1 *)((int)piVar23 + 0x3d) = 0xff;
        *(undefined1 *)(piVar23 + 0xf) = 0xff;
        *(undefined1 *)((int)piVar23 + 0x43) = 0;
LAB_001ecda8:
        sVar14 = sVar14 + 1;
        if (3 < sVar14) break;
      } while( true );
    }
  }
  fVar35 = fRam001ed158;
  fVar27 = fRam001ed154;
  fVar26 = fRam001ed150;
  uVar8 = uRam001ed14c;
  iVar15 = iRam001ed148;
  uVar7 = uRam001ed144;
  uVar30 = uRam001ed140;
  fStack_7c = fVar6;
  fStack_78 = fVar6;
  fStack_74 = fVar6;
  fStack_88 = fVar6;
  fStack_80 = fVar6;
  sVar14 = 0;
  do {
    fStack_84 = fVar27;
    fStack_88 = (float)func_0x003738a8(fVar35);
    fStack_80 = (float)func_0x003738a8(fVar35);
    fVar28 = (float)func_0x00371e50(uVar30);
    fStack_94 = (float)func_0x003738a8(uVar7);
    pfVar25 = (float *)(iVar15 + (short)(int)fVar28 * 0xc);
    fStack_94 = fStack_94 + *pfVar25;
    fVar28 = (float)func_0x00371e50(uVar8);
    fStack_90 = fVar28 + fVar26 + pfVar25[1];
    fStack_8c = (float)func_0x003738a8(uVar7);
    fStack_8c = fStack_8c + pfVar25[2];
    fVar28 = (float)func_0x00371e50(fVar3);
    uVar29 = VectorSignedToFloat((short)(int)fVar28 + 6,(byte)(in_fpscr >> 0x15) & 3);
    func_0x0036fde0(uVar29,param_1,&fStack_94,&fStack_7c,&fStack_88);
    uVar9 = uRam001ed168;
    iVar20 = iRam001ed164;
    uVar29 = uRam001ed160;
    fVar28 = fRam001ed15c;
    sVar14 = sVar14 + 1;
  } while (sVar14 < 3);
  if ((*(short *)(param_1 + 0x886) != 0) &&
     (iVar15 = 0, 0 < (int)(fVar35 + *(float *)(param_1 + 0x8fc) * fVar3 * fRam001ed15c))) {
    do {
      fVar26 = (float)func_0x00371e50(uVar29);
      fStack_90 = (float)func_0x003738a8(uVar9);
      iVar17 = param_1 + (short)(int)fVar26 * 0xc;
      fStack_90 = fStack_90 + *(float *)(iVar17 + 0x19d4);
      if (iVar20 <= (int)fStack_90) {
        fStack_94 = (float)func_0x003738a8(uVar9);
        fStack_94 = fStack_94 + *(float *)(iVar17 + 0x19d0);
        fStack_8c = (float)func_0x003738a8(uVar9);
        fStack_8c = fStack_8c + *(float *)(iVar17 + 0x19d8);
        fStack_7c = (float)func_0x003738a8(*(undefined4 *)(param_1 + 0x8f8));
        fStack_78 = (float)func_0x003738a8(*(undefined4 *)(param_1 + 0x8f8));
        fStack_74 = (float)func_0x003738a8(*(undefined4 *)(param_1 + 0x8f8));
        fStack_84 = fVar27;
        fStack_88 = (float)func_0x003738a8(fVar35);
        fStack_80 = (float)func_0x003738a8(fVar35);
        fVar26 = (float)func_0x00371e50(fVar3);
        uVar30 = VectorSignedToFloat((short)(int)fVar26 + 8,(byte)(in_fpscr >> 0x15) & 3);
        func_0x0036fde0(uVar30,param_1,&fStack_94,&fStack_7c,&fStack_88);
      }
      iVar15 = (int)(short)((short)iVar15 + 1);
    } while (iVar15 < (int)(fVar35 + *(float *)(param_1 + 0x8fc) * fVar3 * fVar28));
  }
  uVar7 = uRam001ed18c;
  fVar12 = fRam001ed188;
  iVar15 = iRam001ed184;
  fVar11 = fRam001ed180;
  fVar10 = fRam001ed17c;
  fVar28 = fRam001ed178;
  uVar30 = uRam001ed174;
  fVar27 = fRam001ed170;
  fVar26 = fRam001ed16c;
  piVar23 = (int *)(param_1 + 0x2924);
  iVar20 = *(int *)(iStack_70 + 0x20ac);
  iVar17 = 0;
  iStack_6c = iVar20 + 0x2000;
  piStack_68 = piVar23;
LAB_001ed054:
  cVar2 = (char)piVar23[0xd];
  if (cVar2 != '\0') {
    *(char *)((int)piVar23 + 0x35) = *(char *)((int)piVar23 + 0x35) + '\x01';
    fVar33 = (float)piVar23[4] + (float)piVar23[7];
    piVar23[4] = (int)fVar33;
    fVar31 = (float)piVar23[5] + (float)piVar23[8];
    piVar23[5] = (int)fVar31;
    fVar34 = (float)piVar23[6] + (float)piVar23[9];
    piVar23[6] = (int)fVar34;
    piVar23[7] = (int)((float)piVar23[7] + (float)piVar23[10]);
    piVar23[8] = (int)((float)piVar23[8] + (float)piVar23[0xb]);
    piVar23[9] = (int)((float)piVar23[9] + (float)piVar23[0xc]);
    if (*(byte *)((int)piVar23 + 0x42) < *(byte *)((int)piVar23 + 0x43)) {
      bVar19 = *(byte *)((int)piVar23 + 0x42) + 1;
      uVar1 = (ushort)bVar19;
      *(byte *)((int)piVar23 + 0x42) = bVar19;
      *(char *)(piVar23 + 0xf) =
           *(char *)((int)piVar23 + 0x3f) +
           (char)((int)(short)piVar23[0x11] * (int)(short)uVar1 >> 7);
      *(char *)((int)piVar23 + 0x3d) =
           (char)piVar23[0x10] +
           (char)((int)*(short *)((int)piVar23 + 0x46) * (int)(short)uVar1 >> 7);
      *(char *)((int)piVar23 + 0x3e) =
           *(char *)((int)piVar23 + 0x41) +
           (char)((int)(short)piVar23[0x12] * (int)(short)uVar1 >> 7);
    }
    iVar18 = iRam001ed618;
    if (cVar2 == '\x05') {
      sVar14 = *(short *)((int)piVar23 + 0x36) + -0x14;
      *(short *)((int)piVar23 + 0x36) = sVar14;
      if (sVar14 < 1) {
        *(undefined2 *)((int)piVar23 + 0x36) = 0;
        *(undefined1 *)(piVar23 + 0xd) = 0;
      }
    }
    else if (cVar2 == '\x01' || cVar2 == '\x02') {
      piVar23[2] = (int)((float)piVar23[2] + fVar26);
      piVar23[3] = (int)((float)piVar23[3] + fVar27);
      if ((int)fVar31 <= iVar18) {
LAB_001ed4c0:
        *(undefined1 *)(piVar23 + 0xd) = 0;
      }
    }
    else if (cVar2 == '\x03') {
      sVar14 = (short)piVar23[0xe] + 1;
      *(short *)(piVar23 + 0xe) = sVar14;
      if (0xf < sVar14) goto LAB_001ed4c0;
    }
    else if (cVar2 == '\x04') {
      fVar33 = *(float *)(iVar20 + 0x28) - fVar33;
      fVar31 = (*(float *)(iVar20 + 0x2c) + fVar4) - fVar31;
      fVar34 = *(float *)(iVar20 + 0x30) - fVar34;
      if ((*(short *)(param_1 + 0x8b6) == 0) &&
         ((int)SQRT(fVar33 * fVar33 + fVar31 * fVar31 + fVar34 * fVar34) < iRam001ed61c)) {
        *(undefined2 *)(param_1 + 0x8b6) = 0x4b;
        func_0x00368fc0(uVar30,fVar6,iStack_70,0,(int)*(short *)((int)piVar23 + 0x3a),0x30);
        if (*(char *)(iStack_6c + 0x46c) == '\0') {
          func_0x0035d8d8(iVar20,iStack_70,0);
        }
      }
      fVar31 = (float)piVar23[1];
      if ((short)piVar23[0xe] == 0) {
        if ((int)fVar31 < iRam001ed620) {
          piVar23[1] = (int)(fVar31 + (float)piVar23[2]);
          piVar23[2] = (int)((float)piVar23[2] + fVar28);
        }
        in_fpscr = in_fpscr & 0xfffffff |
                   (uint)((float)piVar23[5] == (float)piVar23[3] + fVar10) << 0x1e |
                   (uint)((float)piVar23[3] + fVar10 <= (float)piVar23[5]) << 0x1d;
        bVar19 = (byte)(in_fpscr >> 0x18);
        if ((!(bool)(bVar19 >> 5 & 1) || (bool)(bVar19 >> 6)) ||
           (0xe < *(byte *)((int)piVar23 + 0x35))) {
          *(undefined2 *)(piVar23 + 0xe) = 1;
          fStack_7c = (float)piVar23[7] * fVar12;
          piVar23[10] = (int)((float)piVar23[7] * fVar11);
          fStack_74 = (float)piVar23[9] * fVar12;
          piVar23[0xc] = (int)((float)piVar23[9] * fVar11);
          piVar23[0xb] = iVar15;
          piVar23[8] = (int)fVar6;
          fStack_78 = fVar6;
          fStack_88 = fVar6;
          fStack_84 = fVar3;
          fStack_80 = fVar6;
          fVar31 = (float)func_0x00371e50(uVar7);
          iVar18 = 0x14;
          fVar31 = fVar31 + fRam001ed624;
          piVar24 = piStack_68;
LAB_001ed348:
          if ((char)piVar24[0xd] != '\0') goto LAB_001ed414;
          iVar22 = 0;
          if (*piVar24 != 0) {
            iVar22 = *(int *)(param_1 + 0x86c);
          }
          if (*piVar24 == 0 || iVar22 == 0) goto LAB_001ed414;
          *(undefined1 *)(piVar24 + 0xd) = 3;
          fVar34 = fRam001ed628;
          iVar18 = piVar23[5];
          iVar22 = piVar23[6];
          piVar24[4] = piVar23[4];
          piVar24[5] = iVar18;
          piVar24[6] = iVar22;
          piVar24[7] = (int)fStack_7c;
          piVar24[8] = (int)fStack_78;
          piVar24[9] = (int)fStack_74;
          piVar24[10] = (int)fStack_88;
          piVar24[0xb] = (int)fStack_84;
          piVar24[0xc] = (int)fStack_80;
          iVar18 = 0;
          *(undefined2 *)(piVar24 + 0xe) = 0;
          piVar24[1] = (int)(fVar31 * fVar34);
          do {
            func_0x0036932c(*piVar24,iVar18);
            iVar18 = iVar18 + 1;
          } while (iVar18 < 5);
          func_0x0037266c(*piVar24,4);
          *(undefined2 *)((int)piVar24 + 0x36) = 0xff;
          *(undefined1 *)((int)piVar24 + 0x43) = 0;
          *(undefined1 *)(piVar24 + 0xf) = 0;
          *(undefined1 *)((int)piVar24 + 0x3d) = 0;
          *(undefined1 *)((int)piVar24 + 0x3e) = 0;
          *(undefined1 *)((int)piVar24 + 0x42) = 0;
          iVar18 = *(int *)(*piVar24 + 0xc);
          func_0x00372d94(iVar18,*(undefined4 *)(param_1 + 0x86c));
          *(undefined1 *)(iVar18 + 0x10) = 1;
          *(float *)(iVar18 + 0xc) = fVar3;
          goto LAB_001ed428;
        }
      }
      else {
        if ((int)fVar31 < iRam001ed620) {
          func_0x00373500(uRam001ed62c,fVar35,fVar35,piVar23 + 1);
        }
        sVar14 = (short)piVar23[0xe] + 1;
        *(short *)(piVar23 + 0xe) = sVar14;
        if (5 < sVar14) goto LAB_001ed4c0;
      }
    }
  }
  goto LAB_001ed4c4;
LAB_001ecd98:
  iVar17 = iVar17 + 1;
  piVar23 = piVar23 + 0x13;
  if (0x6d < iVar17) goto LAB_001ecda8;
  goto LAB_001ecc84;
LAB_001ed414:
  iVar18 = iVar18 + 1;
  piVar24 = piVar24 + 0x13;
  if (0x6d < iVar18) goto code_r0x001ed424;
  goto LAB_001ed348;
code_r0x001ed424:
  piVar24 = (int *)0x0;
LAB_001ed428:
  if (piVar24 != (int *)0x0) {
    *(byte *)((int)piVar24 + 0x3f) = *(byte *)(piVar24 + 0xf);
    *(byte *)(piVar24 + 0x10) = *(byte *)((int)piVar24 + 0x3d);
    *(byte *)((int)piVar24 + 0x41) = *(byte *)((int)piVar24 + 0x3e);
    *(ushort *)(piVar24 + 0x11) = (0xff - (ushort)*(byte *)(piVar24 + 0xf)) * 0x10;
    *(ushort *)((int)piVar24 + 0x46) = (0xff - (ushort)*(byte *)((int)piVar24 + 0x3d)) * 0x10;
    *(ushort *)(piVar24 + 0x12) = (0xff - (ushort)*(byte *)((int)piVar24 + 0x3e)) * 0x10;
    *(undefined1 *)((int)piVar24 + 0x42) = 0;
    *(undefined1 *)((int)piVar24 + 0x43) = 8;
    *(undefined2 *)((int)piVar24 + 0x36) = 0xa0;
  }
LAB_001ed4c4:
  iVar17 = iVar17 + 1;
  piVar23 = piVar23 + 0x13;
  if (0x6d < iVar17) goto code_r0x001ed4d4;
  goto LAB_001ed054;
code_r0x001ed4d4:
  iVar15 = FUN_0037571c(iStack_70);
  if (iVar15 < 1) {
    return;
  }
  iVar20 = FUN_0037571c(iStack_70);
  uVar7 = uRam001ed87c;
  iVar15 = iRam001ed644;
  uVar30 = uRam001ed634;
  pcVar13 = pcRam001ed630;
  if (2 < iVar20) {
    return;
  }
  cVar2 = *pcRam001ed630;
  if (cVar2 == '\x01') {
    uVar21 = (uint)*(ushort *)(pcRam001ed630 + 2);
    iVar20 = uVar21 - uRam001ed63c;
    uVar29 = uRam001ed640;
    if (uVar21 == uRam001ed63c) {
LAB_001ed64c:
      *(undefined4 *)(param_1 + 0x49d4) = uVar29;
      *(undefined4 *)(param_1 + 0x49d8) = uVar32;
      *(undefined4 *)(iRam001ed644 + param_1) = 0x3c;
      goto LAB_001ed794;
    }
    if ((int)uVar21 < (int)uRam001ed63c) {
      if (uVar21 == 0x78) {
        *(float *)(param_1 + 0x49d4) = fVar4;
        *(undefined4 *)(param_1 + 0x49d8) = uVar32;
        *(undefined4 *)(iRam001ed644 + param_1) = 0x3c;
      }
      else if (uVar21 < 0x79) {
        if (uVar21 == 0) {
          *(undefined4 *)(param_1 + 0x49d4) = uRam001ed648;
          *(undefined4 *)(param_1 + 0x49d8) = uVar32;
          *(undefined4 *)(iRam001ed644 + param_1) = 0;
        }
        else if (uVar21 == 10) {
          *(float *)(param_1 + 0x49d4) = fVar4;
          *(undefined4 *)(param_1 + 0x49d8) = uVar32;
          *(undefined4 *)(iRam001ed644 + param_1) = 0x5a;
        }
      }
      else if (uVar21 == 0x10e || uVar21 == 0x1f2) {
        *(undefined4 *)(param_1 + 0x49d4) = uRam001ed640;
        *(undefined4 *)(param_1 + 0x49d8) = uVar32;
        *(undefined4 *)(iRam001ed644 + param_1) = 0x5a;
      }
      goto LAB_001ed794;
    }
    if (iVar20 == 0x78) {
      *(undefined4 *)(param_1 + 0x49d4) = uRam001ed640;
      *(undefined4 *)(param_1 + 0x49d8) = uVar32;
      *(undefined4 *)(iRam001ed644 + param_1) = 0x96;
      goto LAB_001ed794;
    }
    if (iVar20 == 0x11d) {
      *(float *)(param_1 + 0x49d4) = fVar4;
      *(undefined4 *)(param_1 + 0x49d8) = uVar32;
      *(undefined4 *)(iVar15 + param_1) = 10;
      goto LAB_001ed794;
    }
    if (iVar20 == 0x158) {
      *(undefined4 *)(param_1 + 0x49d4) = uVar8;
      *(undefined4 *)(param_1 + 0x49d8) = uVar32;
      *(undefined4 *)(iRam001ed644 + param_1) = 0x5a;
      goto LAB_001ed794;
    }
    if (iVar20 != 0x251) goto LAB_001ed794;
  }
  else {
    if (cVar2 != '\x02') {
      if (cVar2 == '\0') {
        return;
      }
      goto LAB_001ed794;
    }
    uVar1 = *(ushort *)(pcRam001ed630 + 2);
    uVar29 = uRam001ed638;
    if (uVar1 == 0x208) goto LAB_001ed64c;
    if (uVar1 < 0x209) {
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x49d4) = uRam001ed880;
        *(undefined4 *)(param_1 + 0x49d8) = uVar7;
        *(undefined4 *)(iRam001ed644 + param_1) = 0;
      }
      else if (uVar1 == 0x104) {
        *(undefined4 *)(param_1 + 0x49d4) = uVar32;
        *(undefined4 *)(param_1 + 0x49d8) = uVar7;
        *(undefined4 *)(iRam001ed644 + param_1) = 0x5a;
      }
      else if (uVar1 == 0x15e) {
        *(undefined4 *)(param_1 + 0x49d4) = uVar32;
        *(undefined4 *)(param_1 + 0x49d8) = uVar7;
        *(undefined4 *)(iRam001ed644 + param_1) = 0x96;
      }
      goto LAB_001ed794;
    }
    if (uVar1 == 0x247) {
      *(undefined4 *)(param_1 + 0x49d4) = uRam001ed638;
      *(undefined4 *)(param_1 + 0x49d8) = uVar32;
      *(undefined4 *)(iVar15 + param_1) = 0x46;
      goto LAB_001ed794;
    }
    if (uVar1 == 0x293) {
      *(undefined4 *)(param_1 + 0x49d4) = uVar32;
      *(undefined4 *)(param_1 + 0x49d8) = uVar32;
      *(undefined4 *)(iRam001ed644 + param_1) = 0x3c;
      goto LAB_001ed794;
    }
    if (uVar1 != 0x328) goto LAB_001ed794;
  }
  *(undefined4 *)(param_1 + 0x49d8) = uRam001ed634;
  *(undefined4 *)(iRam001ed644 + param_1) = 0xffffffff;
LAB_001ed794:
  iVar15 = FUN_0036c5bc(iStack_70,0xffffffff);
  if (*(int *)(param_1 + 0x49dc) < 0) {
    FUN_00367c48(iVar15);
    *(undefined4 *)(iVar15 + 0x144) = uVar30;
  }
  else {
    if (*(int *)(param_1 + 0x49dc) == 0) {
      func_0x00367c54(iVar15);
      *(undefined4 *)(param_1 + 0x49cc) = *(undefined4 *)(param_1 + 0x49d4);
      *(undefined4 *)(param_1 + 0x49d0) = *(undefined4 *)(param_1 + 0x49d8);
      func_0x00367c60(iVar15);
      uVar32 = *(undefined4 *)(param_1 + 0x49d0);
    }
    else {
      func_0x00367c54(iVar15);
      fVar26 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x49dc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      func_0x00373500(*(undefined4 *)(param_1 + 0x49d4),fVar5 / fVar26,
                      *(undefined4 *)(param_1 + 0x49d4),param_1 + 0x49cc);
      fVar26 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x49dc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      func_0x00373500(*(undefined4 *)(param_1 + 0x49d8),fVar5 / fVar26,
                      *(undefined4 *)(param_1 + 0x49d8),param_1 + 0x49d0);
      func_0x00367c60(*(undefined4 *)(param_1 + 0x49cc),iVar15);
      uVar32 = *(undefined4 *)(param_1 + 0x49d0);
    }
    *(undefined4 *)(iVar15 + 0x144) = uVar32;
  }
  *(short *)(pcVar13 + 2) = *(short *)(pcVar13 + 2) + 1;
  return;
}

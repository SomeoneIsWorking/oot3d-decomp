// OoT3D decomp @ 0011393c  name=FUN_0011393c  size=2012

void FUN_0011393c(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  short sVar17;
  short sVar18;
  undefined2 uVar19;
  int iVar20;
  char *pcVar21;
  char *pcVar22;
  int iVar23;
  short sVar24;
  uint in_fpscr;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float local_70;
  float local_6c;
  undefined4 local_68;

  iVar16 = DAT_00113c94;
  fVar15 = DAT_00113c90;
  fVar14 = DAT_00113c8c;
  uVar13 = DAT_00113c88;
  uVar12 = DAT_00113c84;
  uVar11 = DAT_00113c80;
  uVar10 = DAT_00113c7c;
  uVar9 = DAT_00113c78;
  fVar8 = DAT_00113c74;
  fVar7 = DAT_00113c70;
  fVar6 = DAT_00113c6c;
  iVar5 = DAT_00113c68;
  fVar4 = DAT_00113c64;
  sVar24 = 0;
  iVar23 = *(int *)(param_1 + 0x20ac);
  pcVar22 = *(char **)(DAT_00113c60 + param_1);
  local_6c = DAT_00113c64;
  local_70 = DAT_00113c64;
  do {
    fVar26 = DAT_00113c98;
    cVar2 = *pcVar22;
    if (cVar2 != '\0') {
      *(short *)(pcVar22 + 2) = *(short *)(pcVar22 + 2) + 1;
      fVar29 = *(float *)(pcVar22 + 4) + *(float *)(pcVar22 + 0x10);
      *(float *)(pcVar22 + 4) = fVar29;
      fVar25 = *(float *)(pcVar22 + 8) + *(float *)(pcVar22 + 0x14);
      *(float *)(pcVar22 + 8) = fVar25;
      fVar28 = *(float *)(pcVar22 + 0xc) + *(float *)(pcVar22 + 0x18);
      *(float *)(pcVar22 + 0xc) = fVar28;
      *(float *)(pcVar22 + 0x10) = *(float *)(pcVar22 + 0x10) + *(float *)(pcVar22 + 0x1c) * fVar26;
      *(float *)(pcVar22 + 0x14) = *(float *)(pcVar22 + 0x14) + *(float *)(pcVar22 + 0x20) * fVar26;
      *(float *)(pcVar22 + 0x18) = *(float *)(pcVar22 + 0x18) + *(float *)(pcVar22 + 0x24) * fVar26;
      uVar27 = DAT_00114180;
      fVar26 = DAT_00113ca0;
      if (cVar2 == '\t') {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar4 <= fVar25) << 0x1d;
        *(float *)(pcVar22 + 0x44) = *(float *)(pcVar22 + 0x44) + DAT_00113c9c;
        *(float *)(pcVar22 + 0x48) = *(float *)(pcVar22 + 0x48) + fVar6;
        if (!SUB41(in_fpscr >> 0x1d,0)) goto LAB_00113e6c;
      }
      else if (cVar2 == '\x01') {
        fVar25 = (float)FUN_00371e50(DAT_00113ca0);
        fVar25 = fVar25 + fVar26;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar25 < fVar4) << 0x1f |
                (uint)(fVar25 == fVar4) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar25) || NAN(fVar4)) << 0x1c;
        bVar3 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar25 = (float)FUN_00371e50(fVar26);
          fVar26 = (fVar25 + fVar26) * DAT_00113ca4 * fVar7 - fVar6;
        }
        else {
          fVar25 = (float)FUN_00371e50(fVar26);
          fVar26 = fVar6 + (fVar25 + fVar26) * DAT_00113ca4 * fVar7;
        }
        fVar25 = DAT_00113ca4;
        fVar26 = (float)VectorSignedToFloat((int)fVar26,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(pcVar22 + 0x3c) = fVar26 + *(float *)(pcVar22 + 0x3c);
        fVar26 = (float)VectorSignedToFloat((int)*(short *)(pcVar22 + 0x30),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (*(short *)(pcVar22 + 0x30) < 1) {
          fVar26 = fVar26 * fVar25 * fVar7 - fVar6;
        }
        else {
          fVar26 = fVar6 + fVar26 * fVar25 * fVar7;
        }
        sVar18 = *(short *)(pcVar22 + 0x2e) - (short)(int)fVar26;
        *(short *)(pcVar22 + 0x2e) = sVar18;
        if (sVar18 < 1) {
          pcVar22[0x2e] = '\0';
          pcVar22[0x2f] = '\0';
          *pcVar22 = '\0';
        }
        *(short *)(pcVar22 + 0x2c) = *(short *)(pcVar22 + 0x2e);
        if (0xff < *(short *)(pcVar22 + 0x2e)) {
          pcVar22[0x2c] = -1;
          pcVar22[0x2d] = '\0';
        }
      }
      else if (cVar2 == '\b') {
        iVar20 = *(int *)(iVar16 + 0x48);
        fVar29 = *(float *)(iVar20 + 0xbac) - fVar29;
        fVar25 = *(float *)(iVar20 + 0xbb0) - fVar25;
        fVar28 = *(float *)(iVar20 + 0xbb4) - fVar28;
        uVar27 = FUN_003696ec(fVar29,fVar28);
        fVar26 = (float)FUN_003696ec(fVar25,SQRT(fVar29 * fVar29 + fVar28 * fVar28));
        local_68 = *(undefined4 *)(pcVar22 + 0x38);
        FUN_003735e8(uVar27,&local_a0,0);
        FUN_00369014(-fVar26,&local_a0,1);
        FUN_003735ac(pcVar22 + 0x10,&local_a0,&local_70);
        FUN_00373500(uVar11,fVar15,fVar6,pcVar22 + 0x38);
        sVar17 = *(short *)(pcVar22 + 0x2c) + 7;
        *(short *)(pcVar22 + 0x2c) = sVar17;
        sVar18 = sVar17;
        if (0xff < sVar17) {
          sVar18 = 0xff;
        }
        if (0xff < sVar17) {
          *(short *)(pcVar22 + 0x2c) = sVar18;
        }
        if (((int)SQRT(fVar29 * fVar29 + fVar25 * fVar25 + fVar28 * fVar28) < iVar5) ||
           (0x69 < *(ushort *)(pcVar22 + 2))) goto LAB_00113e6c;
      }
      else if (cVar2 == '\x02') {
        fVar25 = (float)FUN_00371e50(DAT_00113ca0);
        fVar25 = fVar25 + fVar26;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar25 < fVar4) << 0x1f |
                (uint)(fVar25 == fVar4) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar25) || NAN(fVar4)) << 0x1c;
        bVar3 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar25 = (float)FUN_00371e50(fVar26);
          fVar26 = (fVar25 + fVar26) * DAT_00113ca4 * fVar7 - fVar6;
        }
        else {
          fVar25 = (float)FUN_00371e50(fVar26);
          fVar26 = fVar6 + (fVar25 + fVar26) * DAT_00113ca4 * fVar7;
        }
        fVar25 = DAT_00113ca4;
        fVar26 = (float)VectorSignedToFloat((int)fVar26,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(pcVar22 + 0x3c) = fVar26 + *(float *)(pcVar22 + 0x3c);
        fVar26 = (float)VectorSignedToFloat((int)*(short *)(pcVar22 + 0x30),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (*(short *)(pcVar22 + 0x30) < 1) {
          fVar26 = fVar26 * fVar25 * fVar7 - fVar6;
        }
        else {
          fVar26 = fVar6 + fVar26 * fVar25 * fVar7;
        }
        sVar18 = *(short *)(pcVar22 + 0x2e) - (short)(int)fVar26;
        *(short *)(pcVar22 + 0x2e) = sVar18;
        if (sVar18 < 1) {
          pcVar22[0x2e] = '\0';
          pcVar22[0x2f] = '\0';
          *pcVar22 = '\0';
        }
        *(short *)(pcVar22 + 0x2c) = *(short *)(pcVar22 + 0x2e);
        if (0xff < *(short *)(pcVar22 + 0x2e)) {
          pcVar22[0x2c] = -1;
          pcVar22[0x2d] = '\0';
        }
        pcVar21 = pcVar22 + 0x38;
        fVar26 = *(float *)(pcVar22 + 0x40);
        fVar25 = *(float *)(pcVar22 + 0x40) * fVar8;
LAB_0011405c:
        FUN_00373500(fVar26,fVar15,fVar25,pcVar21);
      }
      else if (cVar2 == '\x03') {
        if (*(short *)(pcVar22 + 0x2e) == 0) {
          fVar26 = (float)FUN_00371e50(uVar9);
          iVar20 = (int)(short)((short)(int)fVar26 + 1);
          fVar26 = (float)FUN_003738a8(uVar10);
          *(float *)(pcVar22 + 4) =
               fVar26 + *(float *)(*(int *)(iVar16 + 0x48) + iVar20 * 0xc + 0xc20);
          fVar26 = (float)FUN_003738a8(uVar10);
          *(float *)(pcVar22 + 8) =
               fVar26 + *(float *)(*(int *)(iVar16 + 0x48) + iVar20 * 0xc + 0xc24);
          fVar26 = (float)FUN_003738a8(uVar10);
          *(float *)(pcVar22 + 0xc) =
               fVar26 + *(float *)(*(int *)(iVar16 + 0x48) + iVar20 * 0xc + 0xc28);
        }
        else {
          fVar26 = (float)FUN_00371e50(uVar12);
          fVar25 = (float)FUN_003738a8(uVar11);
          iVar20 = iVar23 + (short)(int)fVar26 * 0xc;
          *(float *)(pcVar22 + 4) = fVar25 + *(float *)(iVar20 + 0x2340);
          fVar26 = (float)FUN_003738a8(uVar13);
          *(float *)(pcVar22 + 8) = fVar26 + *(float *)(iVar20 + 0x2344);
          fVar26 = (float)FUN_003738a8(uVar11);
          *(float *)(pcVar22 + 0xc) = fVar26 + *(float *)(iVar20 + 0x2348);
        }
        fVar26 = DAT_00113ca0;
        fVar25 = (float)FUN_00371e50(DAT_00113ca0);
        *(float *)(pcVar22 + 0x3c) = fVar25 + fVar26 + *(float *)(pcVar22 + 0x3c);
        if (0x1e < *(ushort *)(pcVar22 + 2)) {
LAB_00113e6c:
          *pcVar22 = '\0';
        }
      }
      else if (cVar2 == '\x04') {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(pcVar22 + 0x3c) == fVar4) << 0x1e;
        if (SUB41(in_fpscr >> 0x1e,0)) {
          FUN_0036c5bc(param_1,0);
          uVar27 = FUN_00368fec();
          fVar26 = (float)VectorSignedToFloat(uVar27,(byte)(in_fpscr >> 0x15) & 3);
          fVar26 = fVar26 * fVar14 * DAT_00114160;
        }
        *(float *)(pcVar22 + 0x44) = fVar26;
        if (0x18 < *(ushort *)(pcVar22 + 2)) goto LAB_00113e6c;
      }
      else if (cVar2 == '\x05') {
        *(short *)(pcVar22 + 0x30) = *(short *)(pcVar22 + 0x30) + 1;
        sVar18 = *(short *)(pcVar22 + 0x2e);
        if (sVar18 == 0) {
          sVar18 = *(short *)(pcVar22 + 0x2c);
          *(short *)(pcVar22 + 0x2c) = sVar18 + 0x11;
          if (0xff < (short)(sVar18 + 0x11)) {
            pcVar22[0x2c] = -1;
            pcVar22[0x2d] = '\0';
            uVar19 = 1;
LAB_00113f24:
            *(undefined2 *)(pcVar22 + 0x2e) = uVar19;
          }
        }
        else {
          if (sVar18 == 1) {
            uVar19 = 2;
            goto LAB_00113f24;
          }
          if ((sVar18 == 2) &&
             (sVar18 = *(short *)(pcVar22 + 0x2c), *(short *)(pcVar22 + 0x2c) = sVar18 + -0x11,
             (short)(sVar18 + -0x11) < 0)) {
            pcVar22[0x2c] = '\0';
            pcVar22[0x2d] = '\0';
            *pcVar22 = '\0';
          }
        }
        FUN_00373500(*(undefined4 *)(pcVar22 + 0x38),fVar15,DAT_00114164,pcVar22 + 0x34);
        FUN_00373500(DAT_0011416c,fVar15,DAT_00114168,pcVar22 + 0x40);
      }
      else {
        if (cVar2 == '\x06') {
          if (sVar24 == 0) {
            local_a0 = DAT_00114174;
            uStack_9c = DAT_00114170;
            FUN_0037547c(DAT_00114178,0,4,DAT_00114174);
          }
          *(short *)(pcVar22 + 0x30) = *(short *)(pcVar22 + 0x30) + 1;
          sVar18 = *(short *)(pcVar22 + 0x2e);
          if (sVar18 == 0) {
            sVar18 = *(short *)(pcVar22 + 0x2c);
            *(short *)(pcVar22 + 0x2c) = sVar18 + 0x43;
            if (0xff < (short)(sVar18 + 0x43)) {
              pcVar22[0x2c] = -1;
              pcVar22[0x2d] = '\0';
              uVar19 = 1;
LAB_0011400c:
              *(undefined2 *)(pcVar22 + 0x2e) = uVar19;
            }
          }
          else if (sVar18 == 1) {
            if (0x1d < *(ushort *)(pcVar22 + 2)) {
              uVar19 = 2;
              goto LAB_0011400c;
            }
          }
          else if ((sVar18 == 2) &&
                  (sVar18 = *(short *)(pcVar22 + 0x2c), *(short *)(pcVar22 + 0x2c) = sVar18 + -0x14,
                  (short)(sVar18 + -0x14) < 0)) {
            pcVar22[0x2c] = '\0';
            pcVar22[0x2d] = '\0';
            *pcVar22 = '\0';
          }
          FUN_00373500(*(undefined4 *)(pcVar22 + 0x38),fVar15,DAT_0011417c,pcVar22 + 0x34);
          pcVar21 = pcVar22 + 0x40;
          fVar26 = fVar15;
          fVar25 = DAT_00114168;
          goto LAB_0011405c;
        }
        if (cVar2 == '\a') {
          *(short *)(pcVar22 + 0x30) = *(short *)(pcVar22 + 0x30) + 1;
          sVar18 = *(short *)(pcVar22 + 0x2c);
          *(short *)(pcVar22 + 0x2c) = sVar18 + -0x14;
          if ((short)(sVar18 + -0x14) < 0) {
            pcVar22[0x2c] = '\0';
            pcVar22[0x2d] = '\0';
            *pcVar22 = '\0';
          }
          FUN_00373500(*(undefined4 *)(pcVar22 + 0x38),fVar15,uVar27,pcVar22 + 0x34);
          if ((*(ushort *)(pcVar22 + 2) < 0xe1) &&
             ((int)ABS(*(float *)(iVar23 + 0x2c)) < DAT_00114184)) {
            fVar25 = *(float *)(pcVar22 + 4) - *(float *)(iVar23 + 0x28);
            fVar26 = *(float *)(pcVar22 + 0xc) - *(float *)(iVar23 + 0x30);
            fVar26 = SQRT(fVar25 * fVar25 + fVar26 * fVar26);
            uVar1 = in_fpscr & 0xfffffff;
            in_fpscr = uVar1 | (uint)(fVar26 <= *(float *)(pcVar22 + 0x34) * DAT_00114188) << 0x1d;
            if (!SUB41(in_fpscr >> 0x1d,0)) {
              fVar25 = *(float *)(pcVar22 + 0x34) * DAT_0011418c;
              uVar1 = uVar1 | (uint)(fVar25 < fVar26) << 0x1f | (uint)(fVar25 == fVar26) << 0x1e;
              in_fpscr = uVar1 | (uint)(NAN(fVar25) || NAN(fVar26)) << 0x1c;
              bVar3 = (byte)(uVar1 >> 0x18);
              if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                pcVar22[2] = -0x1f;
                pcVar22[3] = '\0';
                FUN_00368fc0(DAT_00114190,fVar4,param_1,*(int *)(iVar16 + 0x48),
                             (int)*(short *)(*(int *)(iVar16 + 0x48) + 0x92),0x20);
              }
            }
          }
        }
      }
    }
    sVar24 = sVar24 + 1;
    pcVar22 = pcVar22 + 0x4c;
    if (199 < sVar24) {
      return;
    }
  } while( true );
}

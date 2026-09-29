// OoT3D decomp @ 001e5974  name=FUN_001e5974  size=2532

void FUN_001e5974(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  short sVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  ushort *puVar15;
  undefined4 uVar16;
  short sVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  bool bVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;

  uVar16 = DAT_001e5c80;
  sVar17 = 0;
  iVar19 = *(int *)(param_1 + 0x124);
  iVar20 = *(int *)(DAT_001e5c7c + param_2);
  *(short *)(param_1 + 0xace) = *(short *)(param_1 + 0xace) + 1;
  FUN_0037572c(uVar16,param_1);
  iVar12 = 0;
  do {
    iVar14 = param_1 + iVar12 * 2;
    sVar11 = *(short *)(iVar14 + 0xae2);
    iVar12 = (int)(short)((short)iVar12 + 1);
    if (sVar11 != 0) {
      *(short *)(iVar14 + 0xae2) = sVar11 + -1;
    }
  } while (iVar12 < 5);
  FUN_00365860(param_1);
  FUN_0036b96c(param_1);
  fVar26 = DAT_001e5c90;
  fVar24 = DAT_001e5c84;
  sVar11 = *(short *)(param_1 + 0xad2) + 1;
  *(short *)(param_1 + 0xad2) = sVar11;
  if (0xe < sVar11) {
    *(undefined2 *)(param_1 + 0xad2) = 0;
  }
  uVar3 = DAT_001e5c9c;
  uVar18 = DAT_001e5c98;
  fVar25 = DAT_001e5c94;
  uVar16 = *(undefined4 *)(param_1 + 0x2c);
  uVar21 = *(undefined4 *)(param_1 + 0x30);
  iVar12 = param_1 + *(short *)(param_1 + 0xad2) * 0xc;
  *(undefined4 *)(iVar12 + 0xc20) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar12 + 0xc24) = uVar16;
  *(undefined4 *)(iVar12 + 0xc28) = uVar21;
  fVar9 = DAT_001e5cbc;
  fVar8 = DAT_001e5cb8;
  uVar7 = DAT_001e5cb4;
  fVar6 = DAT_001e5cb0;
  fVar27 = DAT_001e5cac;
  fVar5 = DAT_001e5ca8;
  uVar4 = DAT_001e5ca4;
  fVar28 = DAT_001e5c84;
  fVar23 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + *(short *)(param_1 + 0xad2) * 0xc + 0xd40) = fVar23 * fVar24 * DAT_001e5c88;
  uVar16 = DAT_001e5c8c;
  fVar24 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + *(short *)(param_1 + 0xad2) * 0xc + 0xd44) = fVar24 * fVar28 * DAT_001e5c88;
  uVar10 = DAT_001e5cc0;
  uVar21 = DAT_001e5ca0;
  sVar11 = *(short *)(param_1 + 0xaee);
  if (sVar11 == 10) {
    *(undefined2 *)(param_1 + 0xaee) = 0xb;
    *(undefined4 *)(param_1 + 0x6c) = uVar21;
    *(undefined4 *)(param_1 + 0xaf8) = uVar16;
    *(undefined2 *)(param_1 + 0xae2) = 0x15;
    uVar16 = DAT_001e6134;
    *(undefined4 *)(param_1 + 0xfcc) = uVar7;
    *(undefined4 *)(param_1 + 0xfd0) = uVar21;
    *(undefined4 *)(param_1 + 0xfd4) = uVar16;
    uVar16 = *(undefined4 *)(iVar20 + 0x2c);
    uVar21 = *(undefined4 *)(iVar20 + 0x30);
    *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(iVar20 + 0x28);
    *(undefined4 *)(param_1 + 0xb28) = uVar16;
    *(undefined4 *)(param_1 + 0xb2c) = uVar21;
    fVar24 = (float)FUN_003696ec(*(float *)(param_1 + 0xb24) - *(float *)(param_1 + 0x28),
                                 *(float *)(param_1 + 0xb2c) - *(float *)(param_1 + 0x30));
    *(short *)(param_1 + 0xbe) =
         (short)(int)(fVar24 * fVar5) + *(short *)(param_1 + 0x1c) * 0x2000 + 0x4000;
LAB_001e5ea0:
    if (*(short *)(param_1 + 0xae2) != 0) {
      uVar16 = *(undefined4 *)(iVar20 + 0x2c);
      uVar21 = *(undefined4 *)(iVar20 + 0x30);
      *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(iVar20 + 0x28);
      *(undefined4 *)(param_1 + 0xb28) = uVar16;
      *(undefined4 *)(param_1 + 0xb2c) = uVar21;
      fVar29 = *(float *)(param_1 + 0xb24) - *(float *)(param_1 + 0x28);
      fVar24 = *(float *)(param_1 + 0xb28);
      fVar25 = *(float *)(param_1 + 0x2c);
      fVar23 = *(float *)(param_1 + 0xb2c) - *(float *)(param_1 + 0x30);
      fVar28 = (float)FUN_003696ec(fVar29,fVar23);
      fVar24 = (float)FUN_003696ec((fVar24 + fVar8) - fVar25,SQRT(fVar29 * fVar29 + fVar23 * fVar23)
                                  );
      *(short *)(param_1 + 0xbc) = (short)(int)(fVar24 * fVar5);
      FUN_00370084(param_1 + 0xbe,(int)(short)(int)(fVar28 * fVar5),1,
                   (int)(short)(int)*(float *)(param_1 + 0x1074));
      FUN_00373500(uVar3,uVar4,uVar18,param_1 + 0x1074);
    }
    fVar24 = SQRT(*(float *)(param_1 + 0x94)) * fVar9 * fVar27;
    if (DAT_001e6138 < (int)fVar24) {
      fVar24 = DAT_001e613c;
    }
    fVar28 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xace) * 0x3400));
    fVar25 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x34) = (short)(int)(fVar25 + fVar28 * fVar24 * fVar27);
    fVar28 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xace) * 0x1a00));
    uVar16 = DAT_001e6140;
    fVar25 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x36) = (short)(int)(fVar25 + fVar28 * fVar24);
    if (((*(char *)(iVar20 + 0x2227) == '\0') || (*(char *)(iVar20 + 0x2226) < '\x18')) ||
       (DAT_001e6144 <= *(int *)(param_1 + 0x98))) {
      if (((*(byte *)(param_1 + 0xf9d) & 2) == 0) ||
         ((*(byte *)(param_1 + 0xf9d) = *(byte *)(param_1 + 0xf9d) & 0xfd,
          (**(uint **)(param_1 + 0xfc8) & 0x100000) != 0 &&
          (iVar12 = FUN_00351388(param_2), iVar12 == 0)))) {
        FUN_0037632c(param_1);
        if (*(short *)(param_1 + 0xae4) == 0) {
          FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0xf8c);
        }
        fVar28 = *(float *)(iVar20 + 0x28) - *(float *)(param_1 + 0x28);
        fVar24 = (*(float *)(iVar20 + 0x2c) + fVar8) - *(float *)(param_1 + 0x2c);
        fVar26 = *(float *)(iVar20 + 0x30) - *(float *)(param_1 + 0x30);
        if ((int)SQRT(fVar28 * fVar28 + fVar26 * fVar26 + fVar24 * fVar24) < DAT_001e63c0) {
          *(undefined2 *)(param_1 + 0xaee) = 1;
          *(float *)(param_1 + 0x6c) = fVar6;
          if (*(short *)(iVar19 + 0xae6) != 0) goto LAB_001e6328;
          FUN_00368fc0(DAT_001e63c4,param_2,param_1,(int)*(short *)(param_1 + 0x36),0x50);
          FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_001e63c8);
          *(undefined2 *)(iVar19 + 0xae6) = 0x1e;
          puVar15 = (ushort *)(iVar19 + 0xe5e);
          iVar12 = 9;
          bVar1 = DAT_001e63cc[1];
          pbVar13 = DAT_001e63cc;
          do {
            bVar2 = pbVar13[2];
            iVar12 = iVar12 + -1;
            puVar15[1] = (ushort)bVar1;
            bVar1 = pbVar13[3];
            puVar15 = puVar15 + 2;
            *puVar15 = (ushort)bVar2;
            pbVar13 = pbVar13 + 2;
          } while (iVar12 != 0);
          *(undefined2 *)(iVar19 + 0xc1a) = 0;
          uVar16 = DAT_001e63d0;
          *(undefined2 *)(iVar19 + 0xc1c) = 0x5a;
          *(undefined4 *)(iVar19 + 0xe84) = uVar16;
          sVar17 = 0x28;
        }
        goto LAB_001e6264;
      }
      *(undefined2 *)(param_1 + 0xaee) = 0xc;
      *(undefined4 *)(param_1 + 0x6c) = uVar16;
      FUN_00365860(param_1);
      FUN_0036b96c(param_1);
      fVar24 = (float)FUN_003738a8(fVar26);
      *(float *)(param_1 + 0xb24) = fVar24 + *(float *)(iVar19 + 0xb30);
      fVar24 = (float)FUN_003738a8(fVar9);
      *(float *)(param_1 + 0xb28) = fVar24 + *(float *)(iVar19 + 0xb34);
      fVar26 = (float)FUN_003738a8(fVar26);
      fVar24 = DAT_001e6148;
      fVar26 = fVar26 + *(float *)(iVar19 + 0xb38);
      *(float *)(param_1 + 0xb24) =
           *(float *)(param_1 + 0xb24) +
           (*(float *)(param_1 + 0xb24) - *(float *)(param_1 + 0x28)) * DAT_001e6148;
      *(float *)(param_1 + 0xb28) =
           *(float *)(param_1 + 0xb28) +
           (*(float *)(param_1 + 0xb28) - *(float *)(param_1 + 0x2c)) * fVar24;
      *(float *)(param_1 + 0xb2c) = fVar26 + (fVar26 - *(float *)(param_1 + 0x30)) * fVar24;
    }
    else {
      *(undefined2 *)(param_1 + 0xaee) = 0xc;
      *(undefined4 *)(param_1 + 0x6c) = uVar16;
      FUN_00365860(param_1);
      FUN_0036b96c(param_1);
      uVar16 = *(undefined4 *)(iVar19 + 0xb34);
      uVar18 = *(undefined4 *)(iVar19 + 0xb38);
      *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(iVar19 + 0xb30);
      *(undefined4 *)(param_1 + 0xb28) = uVar16;
      *(undefined4 *)(param_1 + 0xb2c) = uVar18;
    }
    sVar17 = 10;
LAB_001e6264:
    if (10 < *(short *)(param_1 + 0xaee)) {
      fVar24 = fVar6;
      if (*(short *)(param_1 + 0xaee) == 0xc) {
        fVar24 = DAT_001e63d4;
      }
      fVar24 = fVar24 + DAT_001e63d8;
      fVar26 = ABS(*(float *)(param_1 + 0x28));
      bVar22 = NAN(fVar26) || NAN(fVar24);
      if (fVar26 <= fVar24) {
        fVar26 = ABS(*(float *)(param_1 + 0x30));
        bVar22 = NAN(fVar26) || NAN(fVar24);
      }
      if (((fVar26 != fVar24 && fVar26 < fVar24 == bVar22) || (*(float *)(param_1 + 0x2c) < fVar6))
         || (DAT_001e63dc < (int)*(float *)(param_1 + 0x2c))) {
        *(undefined2 *)(param_1 + 0xaee) = 1;
        *(float *)(param_1 + 0x6c) = fVar6;
        sVar17 = 10;
        FUN_003544a4(param_1,param_2,param_1 + 0x28);
        local_68 = 0;
        local_64 = 400;
        FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,iVar19,param_2,0xe8,0,0);
        goto LAB_001e6330;
      }
    }
  }
  else {
    if (10 < sVar11) {
      if (sVar11 == 0xb) goto LAB_001e5ea0;
      if (sVar11 == 0xc) {
        *(undefined4 *)(param_1 + 0x6c) = DAT_001e5ca0;
        fVar30 = *(float *)(param_1 + 0xb24) - *(float *)(param_1 + 0x28);
        fVar24 = *(float *)(param_1 + 0xb28);
        fVar23 = *(float *)(param_1 + 0x2c);
        fVar29 = *(float *)(param_1 + 0xb2c) - *(float *)(param_1 + 0x30);
        fVar28 = (float)FUN_003696ec(fVar30,fVar29);
        fVar29 = SQRT(fVar30 * fVar30 + fVar29 * fVar29);
        fVar24 = (float)FUN_003696ec(fVar24 - fVar23,fVar29);
        fVar27 = fVar29 * fVar26 * fVar27;
        if (DAT_001e5cc4 < (int)fVar27) {
          fVar27 = fVar25;
        }
        fVar26 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xace) * 0x2200));
        fVar25 = (float)VectorSignedToFloat((int)(short)(int)(fVar28 * fVar5),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar28 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xace) * 0x1800));
        fVar24 = (float)VectorSignedToFloat((int)(short)(int)(fVar24 * fVar5),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x34) = (short)(int)(fVar24 + fVar28 * fVar27);
        *(short *)(param_1 + 0x36) = (short)(int)(fVar25 + fVar26 * fVar27);
        fVar28 = *(float *)(iVar19 + 0xb30) - *(float *)(param_1 + 0x28);
        fVar24 = *(float *)(iVar19 + 0xb34) - *(float *)(param_1 + 0x2c);
        fVar26 = *(float *)(iVar19 + 0xb38) - *(float *)(param_1 + 0x30);
        if ((int)SQRT(fVar28 * fVar28 + fVar26 * fVar26 + fVar24 * fVar24) < DAT_001e5cc8) {
          FUN_00354368(iVar19,param_2);
          *(undefined2 *)(param_1 + 0xae2) = 0xe1;
          *(undefined2 *)(param_1 + 0xaee) = 1;
          sVar17 = 0x28;
          *(float *)(param_1 + 0x6c) = fVar6;
          goto LAB_001e6330;
        }
      }
      goto LAB_001e6264;
    }
    if (sVar11 != 0) {
      if ((sVar11 == 1) &&
         (FUN_0036fc20(uVar4,param_1 + 0xaf8), *(float *)(param_1 + 0xaf8) == fVar6)) {
        FUN_00374428(param_1);
      }
      goto LAB_001e6264;
    }
    *(undefined4 *)(param_1 + 0x6c) = DAT_001e5cc0;
    FUN_00373500(uVar16,uVar4,uVar10,param_1 + 0xaf8);
    fVar29 = *(float *)(iVar19 + 0xbac) - *(float *)(param_1 + 0x28);
    fVar23 = *(float *)(iVar19 + 0xbb0) - *(float *)(param_1 + 0x2c);
    fVar28 = *(float *)(iVar19 + 0xbb4) - *(float *)(param_1 + 0x30);
    fVar24 = (float)FUN_003696ec(fVar29,fVar28);
    fVar30 = fVar29 * fVar29 + fVar28 * fVar28;
    fVar29 = SQRT(fVar30);
    fVar28 = (float)FUN_003696ec(fVar23,fVar29);
    fVar27 = fVar29 * fVar26 * fVar27;
    if (DAT_001e5cc4 < (int)fVar27) {
      fVar27 = fVar25;
    }
    fVar26 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xace) * 0x2200));
    fVar28 = (float)VectorSignedToFloat((int)(short)(int)(fVar28 * fVar5),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x34) = (short)(int)(fVar28 + fVar26 * fVar27);
    FUN_00370084(param_1 + 0xbe,(int)(short)(int)(fVar24 * fVar5),1,
                 (int)(short)(int)*(float *)(param_1 + 0x1074));
    FUN_00373500(uVar3,uVar4,uVar18,param_1 + 0x1074);
    fVar24 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xace) * 0x1a00));
    fVar26 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x36) = (short)(int)(fVar26 + fVar24 * fVar27);
    if (DAT_001e5cc8 <= (int)SQRT(fVar30 + fVar23 * fVar23)) goto LAB_001e6264;
    *(undefined2 *)(param_1 + 0xaee) = 1;
    *(float *)(param_1 + 0x6c) = fVar6;
  }
LAB_001e6328:
  if (sVar17 == 0) {
    return;
  }
LAB_001e6330:
  FUN_00375c44(param_2,param_1 + 0x28,0x50,DAT_001e63e0);
  fVar24 = DAT_001e63e4;
  sVar11 = 0;
  if (sVar17 != 0) {
    do {
      local_68 = FUN_003738a8(fVar8);
      local_64 = FUN_003738a8(fVar8);
      local_60 = FUN_003738a8(fVar8);
      fVar26 = (float)FUN_00371e50(fVar9);
      FUN_00366f60(fVar26 + fVar24,uVar7,param_2,param_1 + 0x28,&local_68,DAT_001e63e8,0x1e);
      sVar11 = sVar11 + 1;
    } while (sVar11 < sVar17);
  }
  return;
}

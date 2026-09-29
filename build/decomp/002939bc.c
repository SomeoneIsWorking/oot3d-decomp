// OoT3D decomp @ 002939bc  name=FUN_002939bc  size=2256

void FUN_002939bc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;

  if (*(int *)(param_1 + 0x1d4) == 3) {
    uVar14 = *(byte *)(param_1 + 0x9ea) + 5;
    if (0xff < uVar14) {
      uVar14 = 0xff;
    }
    *(char *)(param_1 + 0x9ea) = (char)uVar14;
    iVar15 = *(byte *)(param_1 + 0x9eb) - 5;
    if (iVar15 < 0x32) {
      iVar15 = 0x32;
    }
    *(char *)(param_1 + 0x9eb) = (char)iVar15;
    uVar14 = *(byte *)(param_1 + 0x9ec) - 5;
    if ((int)uVar14 < 0) {
      uVar14 = 0;
    }
  }
  else if (*(int *)(param_1 + 0x1d4) == 5) {
    uVar14 = *(byte *)(param_1 + 0x9ea) + 5;
    if (0x50 < uVar14) {
      uVar14 = 0x50;
    }
    *(char *)(param_1 + 0x9ea) = (char)uVar14;
    uVar14 = *(byte *)(param_1 + 0x9eb) + 5;
    if (0xff < uVar14) {
      uVar14 = 0xff;
    }
    *(char *)(param_1 + 0x9eb) = (char)uVar14;
    uVar14 = *(byte *)(param_1 + 0x9ec) + 5;
    if (0xe1 < uVar14) {
      uVar14 = 0xe1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1d4) == 4) {
      if ((*(ushort *)(param_1 + 0x11a) & 2) == 0) {
        *(undefined1 *)(param_1 + 0x9ea) = 0x50;
        *(undefined1 *)(param_1 + 0x9eb) = 0xff;
        *(undefined1 *)(param_1 + 0x9ec) = 0xe1;
      }
      else {
        *(undefined1 *)(param_1 + 0x9ea) = 0;
        *(undefined1 *)(param_1 + 0x9eb) = 0;
        *(undefined1 *)(param_1 + 0x9ec) = 0;
      }
      goto LAB_00293b24;
    }
    uVar14 = *(byte *)(param_1 + 0x9ea) + 5;
    if (0xff < uVar14) {
      uVar14 = 0xff;
    }
    *(char *)(param_1 + 0x9ea) = (char)uVar14;
    uVar14 = *(byte *)(param_1 + 0x9eb) + 5;
    if (0xff < uVar14) {
      uVar14 = 0xff;
    }
    *(char *)(param_1 + 0x9eb) = (char)uVar14;
    uVar14 = (uint)*(byte *)(param_1 + 0x9ec);
    if (uVar14 < 0x65) {
      uVar14 = uVar14 + 5;
      if (0x99 < uVar14) goto LAB_00293b0c;
    }
    else {
      uVar14 = uVar14 - 5;
      if ((int)uVar14 < 0x99) {
LAB_00293b0c:
        uVar14 = 0x99;
      }
    }
  }
  *(char *)(param_1 + 0x9ec) = (char)uVar14;
LAB_00293b24:
  if ((*(byte *)(param_1 + 0x9e5) & 0x80) == 0) {
    FUN_0037266c();
  }
  else {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),8);
  }
  cVar1 = *(char *)(param_1 + 0x9e0);
  if (cVar1 == '\0') {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),9);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
  }
  else if (cVar1 == '\x01') {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),9);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
  }
  else if (cVar1 == '\x02') {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),9);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
  }
  else if (cVar1 == '\x03') {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),9);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),7);
  }
  fVar3 = DAT_00293f08;
  local_64 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x9ea),(byte)(in_fpscr >> 0x15) & 3);
  local_64 = local_64 * DAT_00293f08;
  local_60 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x9eb),(byte)(in_fpscr >> 0x15) & 3);
  local_60 = local_60 * DAT_00293f08;
  local_5c = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x9ec),(byte)(in_fpscr >> 0x15) & 3);
  local_5c = local_5c * DAT_00293f08;
  local_58 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x9ed),(byte)(in_fpscr >> 0x15) & 3);
  local_58 = local_58 * DAT_00293f08;
  FUN_00357388(param_1,&local_64,3,1);
  FUN_00357388(param_1,&local_64,4,2);
  if (*(char *)(param_1 + 0x9ed) == '\0') {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),9);
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_00293f10,DAT_00293f0c,param_1,0);
  iVar15 = DAT_00293f14;
  if ((*(int *)(param_1 + 0x9dc) == DAT_00293f14) && (0xb < *(short *)(param_1 + 0x9e6))) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
    *(undefined1 *)(*(int *)(param_1 + 0x978) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x978),param_1 + 0xac8);
    FUN_00372170(*(undefined4 *)(param_1 + 0x978),0);
  }
  uVar13 = DAT_002942dc;
  uVar12 = DAT_002942d8;
  uVar11 = DAT_002942d4;
  fVar10 = DAT_002942d0;
  fVar9 = DAT_002942cc;
  iVar8 = DAT_002942c8;
  fVar7 = DAT_002942c4;
  fVar6 = DAT_00293f30;
  fVar5 = DAT_00293f2c;
  fVar4 = DAT_00293f28;
  iVar17 = *(int *)(param_1 + 0x9dc);
  uVar14 = 0;
  fVar21 = DAT_00293f1c;
  if (iVar17 == DAT_00293f18) {
    iVar17 = (int)*(short *)(param_1 + 0x9e6);
    if (iVar17 < 0x30) {
      fVar21 = (float)VectorSignedToFloat(iVar17,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar17 < 1) {
        fVar21 = fVar21 * DAT_00293f28 * DAT_00293f2c - DAT_00293f30;
      }
      else {
        fVar21 = DAT_00293f30 + fVar21 * DAT_00293f28 * DAT_00293f2c;
      }
      iVar17 = (0x20 - (int)fVar21) * 0xff;
      uVar14 = (iVar17 + ((uint)(iVar17 >> 0x1f) >> 0x1b)) * 0x80000 >> 0x18;
      fVar21 = DAT_00293f34;
    }
    else {
      fVar22 = (float)VectorSignedToFloat(iVar17,(byte)(in_fpscr >> 0x15) & 3);
      iVar17 = ((int)(DAT_00293f30 + fVar22 * DAT_00293f28 * DAT_00293f2c) + -0x20) * 0xff;
      uVar14 = (iVar17 + ((uint)(iVar17 >> 0x1f) >> 0x1b)) * 0x80000 >> 0x18;
    }
  }
  else if (iVar17 == DAT_00293f20) {
    fVar22 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(param_1 + 0x9e6) < 1) {
      fVar22 = fVar22 * DAT_00293f28 * DAT_00293f2c - DAT_00293f30;
    }
    else {
      fVar22 = DAT_00293f30 + fVar22 * DAT_00293f28 * DAT_00293f2c;
    }
    iVar17 = (0x20 - (int)fVar22) * 0xff;
    uVar14 = (iVar17 + ((uint)(iVar17 >> 0x1f) >> 0x1b)) * 0x80000 >> 0x18;
  }
  else if (iVar17 == DAT_00293f24) {
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(param_1 + 0x9e6) < 1) {
      fVar21 = fVar21 * DAT_00293f28 * DAT_00293f2c - DAT_00293f30;
    }
    else {
      fVar21 = DAT_00293f30 + fVar21 * DAT_00293f28 * DAT_00293f2c;
    }
    iVar17 = (0x20 - (int)fVar21) * 0xff;
    uVar14 = (iVar17 + ((uint)(iVar17 >> 0x1f) >> 0x1b)) * 0x80000 >> 0x18;
    fVar21 = DAT_002942bc;
  }
  else if (iVar17 != DAT_002942c0) {
    fVar21 = *(float *)(param_1 + 0x54) * DAT_00293f30;
  }
  iVar17 = 0;
  if (*(char *)(param_1 + 0x9e4) != '\0') {
    do {
      iVar16 = *(int *)(param_1 + 0x9dc);
      bVar20 = iVar16 != DAT_00293f18;
      iVar18 = DAT_00293f18;
      if (bVar20) {
        iVar18 = DAT_00293f20;
      }
      iVar2 = iVar18;
      if (bVar20 && iVar16 != iVar18) {
        iVar2 = DAT_00293f24;
      }
      if ((bVar20 && iVar16 != iVar18) && iVar16 != iVar2) {
        uVar14 = (8 - iVar17) * 0x1f & 0xff;
      }
      if (uVar14 != 0) {
        iVar18 = param_1 + iVar17 * 0xc;
        local_88 = *(undefined4 *)(iVar18 + 0x9f0);
        local_78 = *(undefined4 *)(iVar18 + 0x9f4);
        local_68 = *(undefined4 *)(iVar18 + 0x9f8);
        local_8c = 0.0;
        local_90 = 0.0;
        local_94 = 1.0;
        local_84 = 0.0;
        local_80 = 1.0;
        local_70 = 0.0;
        local_6c = 1.0;
        local_7c = 0.0;
        local_74 = 0.0;
        FUN_00371fac(&local_94,param_2 + 0x2fc);
        if (*(int *)(param_1 + 0x9dc) == iVar15) {
          fVar21 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),
                                              (byte)(in_fpscr >> 0x15) & 3);
          if (*(short *)(param_1 + 0x9e6) < 1) {
            fVar21 = fVar21 * fVar4 * fVar5 - fVar6;
          }
          else {
            fVar21 = fVar6 + fVar21 * fVar4 * fVar5;
          }
          fVar21 = (float)VectorSignedToFloat((int)fVar21 - iVar17,(byte)(in_fpscr >> 0x15) & 3);
          fVar22 = fVar6 + fVar21 * fVar7;
          fVar21 = fVar6;
          if ((0x3effffff < (int)fVar22) && (fVar21 = fVar22, iVar8 < (int)fVar22)) {
            fVar21 = fVar9;
          }
          fVar21 = fVar21 * fVar10;
        }
        local_94 = local_94 * fVar21;
        local_84 = local_84 * fVar21;
        local_74 = local_74 * fVar21;
        local_90 = local_90 * fVar21;
        local_80 = local_80 * fVar21;
        local_70 = local_70 * fVar21;
        local_8c = local_8c * fVar21;
        local_7c = local_7c * fVar21;
        local_6c = local_6c * fVar21;
        iVar16 = FUN_003695f8();
        piVar19 = (int *)(iVar18 + 0x97c);
        if (iVar16 == 0) {
          *(undefined4 *)(*(int *)(iVar18 + 0x984) + 0xc) = uVar11;
        }
        else {
          *(undefined4 *)(*(int *)(iVar18 + 0x984) + 0xc) = uVar12;
        }
        FUN_00373bec(*(undefined4 *)(iVar18 + 0x984));
        fVar22 = (float)VectorUnsignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00357ef8(uVar13,uVar13,uVar13,fVar22 * fVar3,piVar19);
        *(undefined1 *)(*piVar19 + 0xac) = 1;
        FUN_003721e0(*piVar19,&local_94);
        FUN_00372170(*piVar19,1);
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < (int)(uint)*(byte *)(param_1 + 0x9e4));
  }
  return;
}

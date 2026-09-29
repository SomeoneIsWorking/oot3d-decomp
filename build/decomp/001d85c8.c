// OoT3D decomp @ 001d85c8  name=FUN_001d85c8  size=1708

void FUN_001d85c8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  short sVar11;
  int iVar12;
  uint in_fpscr;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  fVar8 = DAT_001d897c;
  FUN_00373500((undefined4 *)(param_1 + 0xc58));
  uVar15 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0xc58),3);
  *(char *)(param_1 + 0xd0) = (char)uVar15;
  uVar15 = DAT_001d898c;
  fVar16 = *(float *)(param_1 + 0x1e4);
  uVar14 = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar8) << 0x1e;
  if ((!SUB41(uVar14 >> 0x1e,0)) && (*(int *)(param_1 + 0x1d4) == 10)) {
    uVar14 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar8) << 0x1f | (uint)(fVar16 == fVar8) << 0x1e
    ;
    uVar13 = uVar14 | (uint)(NAN(fVar16) || NAN(fVar8)) << 0x1c;
    bVar3 = (byte)(uVar14 >> 0x18);
    if ((!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar13 >> 0x1c) & 1)) &&
       (*(int *)(param_1 + 0x1e0) == 0x41600000)) {
      if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
        FUN_00371af0(DAT_001d8990,DAT_001d898c,0x3c);
      }
      else {
        FUN_00375bcc(param_1,DAT_001d898c);
      }
    }
    uVar14 = uVar13 & 0xfffffff | (uint)(fVar8 <= *(float *)(param_1 + 0x1e4)) << 0x1d;
    if (!SUB41(uVar14 >> 0x1d,0)) {
      if (*(int *)(param_1 + 0x1e0) == 0x3f800000) {
        FUN_00375bcc(param_1,DAT_001d8994);
      }
      if (*(int *)(param_1 + 0x1e0) == 0x42200000) {
        FUN_00375bcc(param_1,uVar15);
      }
    }
  }
  FUN_00370734(param_1 + 0x1a4);
  iVar6 = DAT_001d8998;
  uVar15 = *(undefined4 *)(param_1 + 0x6c);
  if (*(short *)(param_1 + 0xbc0) != 0) {
    *(float *)(param_1 + 0x6c) = fVar8;
  }
  if (*(int *)(param_1 + 0xbbc) != iVar6) {
    FUN_00376864(param_1);
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar15;
  FUN_00376340(*(float *)(param_1 + 0xc2c) * DAT_001d89a0,*(float *)(param_1 + 0xc28) * DAT_001d899c
               ,fVar8,param_2,param_1,5);
  if ((*(short *)(param_1 + 0xbc0) == 0) &&
     (iVar12 = *(int *)(param_2 + 0x20ac), (*(ushort *)(param_1 + 0x1c) & 0x1f) != 2)) {
    if (*(char *)(iVar12 + 0x2488) < '\x01') {
      *(byte *)(param_1 + 0xbfa) = *(byte *)(param_1 + 0xbfa) | 8;
    }
    iVar5 = *(int *)(param_1 + 0xbbc);
    iVar2 = DAT_001d89a4;
    if (iVar5 != DAT_001d89a4) {
      iVar2 = DAT_001d89a8;
    }
    if ((iVar5 == DAT_001d89a4 || iVar5 == iVar2) || iVar5 == iVar6) {
      if ((*(byte *)(param_1 + 0xbf9) & 2) == 0) {
        if ((*(char *)(iVar12 + 0x2488) < '\x01') && ((*(byte *)(param_1 + 0xbfb) & 1) != 0)) {
          *(byte *)(param_1 + 0xbfb) = *(byte *)(param_1 + 0xbfb) & 0xfe;
          fVar8 = DAT_001d89b0;
          if (*(int *)(param_1 + 0xbbc) != iVar6) {
            fVar8 = *(float *)(param_1 + 0x6c) * DAT_001d89b0;
          }
          (**(code **)(DAT_001d89b4 + param_2))(param_2,0xfffffffc);
          FUN_00374bb8(fVar8,DAT_001d89b8,param_2,param_1,(int)*(short *)(param_1 + 0x92));
          FUN_00375bcc(iVar12,DAT_001d89bc);
          *(byte *)(param_1 + 0xbfa) = *(byte *)(param_1 + 0xbfa) & 0xf7;
        }
      }
      else {
        FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001d89ac);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfeffffff;
        *(byte *)(param_1 + 0xbf9) = *(byte *)(param_1 + 0xbf9) & 0xfd;
        FUN_0033dccc(param_1,param_2);
      }
    }
  }
  (**(code **)(param_1 + 0xbbc))(param_1,param_2);
  if (*(char *)(param_1 + 0xc49) == '\x01') {
    FUN_00370f5c(param_2,param_1 + 0xc5e,param_1 + 0xc84,0x13);
  }
  iVar6 = DAT_001d89c4;
  iVar12 = *(int *)(param_2 + 0x20ac);
  if (*(int *)(param_1 + 0xbbc) != DAT_001d89c0) {
    uVar15 = *(undefined4 *)(iVar12 + 0x2c);
    uVar10 = *(undefined4 *)(iVar12 + 0x30);
    *(undefined4 *)(param_1 + 0xbd8) = *(undefined4 *)(iVar12 + 0x28);
    *(undefined4 *)(param_1 + 0xbdc) = uVar15;
    *(undefined4 *)(param_1 + 0xbe0) = uVar10;
    *(undefined4 *)(param_1 + 0xbd4) =
         *(undefined4 *)
          (iVar6 + (*(ushort *)(param_1 + 0x1c) & 0x1f) * 8 + *(int *)(DAT_001d89c8 + 4) * 4);
    FUN_0034c664(param_1,param_1 + 0xbc0,4,(int)*(short *)(param_1 + 0xcaa));
  }
  if ((*(int *)(param_1 + 0xbbc) != DAT_001d89cc) && (*(char *)(param_1 + 0xc47) == '\x01')) {
    if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
      if ((*(byte *)(param_1 + 0xbfb) & 1) != 0) goto LAB_001d89e4;
    }
    else {
      if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 0) {
LAB_001d89e4:
        iVar6 = FUN_0036bc98(param_1,param_2);
        if (iVar6 == 0) {
          if (*(short *)(param_1 + 0xbc0) == 0) {
            iVar6 = FUN_0036bb28(*(undefined4 *)(param_1 + 0xc50),param_1,param_2);
            if (iVar6 != 0) {
              uVar4 = FUN_00195364(param_2,param_1);
              *(undefined2 *)(param_1 + 0x116) = uVar4;
            }
          }
          else {
            uVar4 = FUN_00194a3c(param_2,param_1);
            *(undefined2 *)(param_1 + 0xbc0) = uVar4;
          }
          goto LAB_001d8b80;
        }
        *(undefined2 *)(param_1 + 0xbc0) = 1;
      }
      else {
        iVar6 = FUN_00342714(*(undefined4 *)(param_1 + 0xc50),param_2,param_1,param_1 + 0xbc0,
                             DAT_001d89d4,DAT_001d89d0);
        if (iVar6 == 0) goto LAB_001d8b80;
      }
      iVar6 = DAT_001d8cf4;
      if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
        sVar11 = (short)DAT_001d8cd8;
        if (*(char *)(DAT_001d89c8 + 0x52) == '\0') {
          uVar13 = (uint)*(byte *)((uint)*(byte *)(DAT_001d8cdc + 0x2d) + DAT_001d8ce0);
          if (uVar13 == 0x37) {
            iVar6 = FUN_0036bc84(param_2);
            if (iVar6 == 0xf) {
              iVar6 = FUN_0033dcbc();
              if (iVar6 < 3) {
LAB_001d8aec:
                sVar11 = (short)DAT_001d8ce8;
              }
            }
            else {
              iVar6 = FUN_0033dcbc();
              if (iVar6 < 3) goto LAB_001d8aec;
              sVar11 = (short)DAT_001d8ce4;
            }
            goto LAB_001d8a90;
          }
          if (3 < uVar13 - 0x34) {
            sVar11 = (short)DAT_001d8cf8;
            if (0x33 < uVar13) {
              *(short *)(param_1 + 0x116) = sVar11;
              *(short *)(iVar6 + iVar12) = sVar11;
              goto LAB_001d8b80;
            }
            iVar6 = FUN_0036bc84(param_2);
            if (iVar6 == 0xb) {
              if ((*(ushort *)(DAT_001d8cfc + 0x26) & 0x10) == 0) {
                sVar11 = sVar11 + 1;
              }
              else {
                sVar11 = (short)DAT_001d8d00;
              }
            }
            goto LAB_001d8a90;
          }
          iVar6 = FUN_0036bc84(param_2);
          uVar13 = DAT_001d8cec;
          uVar7 = DAT_001d8cec;
          if (iVar6 != 0xe) {
            uVar7 = DAT_001d8cec - 1;
          }
          *(short *)(param_1 + 0x116) = (short)uVar7;
          if ((uVar7 & 0xffff) == uVar13) {
            *(undefined2 *)(DAT_001d8cf0 + 0x62) = 0;
          }
        }
        else {
          iVar6 = FUN_0036bc84(param_2);
          if (iVar6 == 0xf) {
            sVar11 = sVar11 + -0x5b;
          }
LAB_001d8a90:
          *(short *)(param_1 + 0x116) = sVar11;
        }
        *(undefined2 *)(DAT_001d8cf4 + iVar12) = *(undefined2 *)(param_1 + 0x116);
      }
    }
  }
LAB_001d8b80:
  cVar1 = *(char *)(param_1 + 0xc4b);
  if (cVar1 == '\x01') {
    *(undefined2 *)(param_1 + 0xc5c) = 0;
    *(undefined1 *)(param_1 + 0xc4c) = 0;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        *(undefined2 *)(param_1 + 0xc5c) = 0;
        *(undefined1 *)(param_1 + 0xc4c) = 0;
        *(undefined1 *)(param_1 + 0xc4d) = 1;
      }
      else if (((*(short *)(param_1 + 0xc5c) == 0) ||
               (sVar11 = *(short *)(param_1 + 0xc5c) + -1, *(short *)(param_1 + 0xc5c) = sVar11,
               sVar11 == 0)) &&
              (bVar3 = *(char *)(param_1 + 0xc4c) + 1, *(byte *)(param_1 + 0xc4c) = bVar3, 3 < bVar3
              )) {
                    /* WARNING: Subroutine does not return */
        FUN_003702c8(0x1e);
      }
      goto LAB_001d8bfc;
    }
    *(undefined2 *)(param_1 + 0xc5c) = 0;
    *(undefined1 *)(param_1 + 0xc4c) = 1;
  }
  *(undefined1 *)(param_1 + 0xc4d) = 0;
LAB_001d8bfc:
  iVar6 = DAT_001d8d04;
  fVar8 = *(float *)(param_1 + 0x28);
  fVar16 = *(float *)(param_1 + 0x2c);
  fVar9 = *(float *)(param_1 + 0x30);
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(DAT_001d8d04 +
                                                      (*(ushort *)(param_1 + 0x1c) & 0x1f) * 10 + 4)
                                      ,(byte)(uVar14 >> 0x15) & 3);
  fVar17 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar8 = fVar8 + fVar19 * fVar17;
  fVar17 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + (*(ushort *)(param_1 + 0x1c) & 0x1f) *
                                                              10 + 2),(byte)(uVar14 >> 0x15) & 3);
  *(float *)(param_1 + 0xc34) = fVar8;
  *(float *)(param_1 + 0xc38) = fVar16 + fVar18;
  *(float *)(param_1 + 0xc3c) = fVar9 + fVar19 * fVar17;
  FUN_003762a4(param_2);
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0xbe8);
  return;
}

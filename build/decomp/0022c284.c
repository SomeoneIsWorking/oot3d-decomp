// OoT3D decomp @ 0022c284  name=FUN_0022c284  size=4976

/* WARNING: Removing unreachable block (ram,0x0022cddc) */
/* WARNING: Removing unreachable block (ram,0x0022ce4c) */
/* WARNING: Removing unreachable block (ram,0x0022ce80) */

void FUN_0022c284(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  int aiStack_a8 [12];
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;

  fVar26 = DAT_0022c69c;
  fVar24 = DAT_0022c698;
  local_6c = param_2 + 0x2000;
  iVar16 = *(int *)(param_2 + 0x20ac);
  *(char *)(param_1 + 0x1a8) = *(char *)(param_1 + 0x1a8) + '\x01';
  fVar27 = DAT_0022c6bc;
  fVar30 = DAT_0022c6b8;
  uVar4 = DAT_0022c6b4;
  iVar15 = DAT_0022c6b0;
  uVar3 = DAT_0022c6ac;
  fVar25 = DAT_0022c6a8;
  uVar21 = DAT_0022c6a4;
  fVar20 = DAT_0022c6a0;
  local_68 = local_6c;
  switch(*(undefined1 *)(param_1 + 0x1ac)) {
  case 0:
    if (*(short *)(param_1 + 0x1b2) != 0) {
      *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + -1;
    }
    if ((*(short *)(param_1 + 0x1f2) != 0) &&
       (sVar2 = *(short *)(param_1 + 0x1f2) + -1, *(short *)(param_1 + 0x1f2) = sVar2, sVar2 == 1))
    {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    }
    if (*(short *)(param_1 + 0x1ae) == -1) {
      if (*(char *)(param_1 + 500) == '\0') {
        if (*(char *)(param_1 + 0x1f5) == '\0') {
          if ((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x27ffU <=
              DAT_0022c6c0) {
            iVar15 = FUN_00271d70(param_1,param_2);
            if (iVar15 == 0) {
              FUN_0036bb28(DAT_0022c6c4,param_1,param_2);
            }
            else {
              *(undefined1 *)(param_1 + 500) = 1;
            }
          }
        }
        else {
          *(char *)(param_1 + 0x1f5) = *(char *)(param_1 + 0x1f5) + -1;
        }
      }
      else {
        iVar15 = FUN_00369a48(param_1,param_2);
        if (iVar15 != 0) {
          *(undefined1 *)(param_1 + 500) = 0;
          *(undefined1 *)(param_1 + 0x1f5) = 0x1e;
        }
      }
    }
    if (((*(short *)(param_1 + 0x1b2) == 0) && ((*(byte *)(param_1 + 0x209) & 2) != 0)) &&
       (*(int *)(param_1 + 0x98) <= DAT_0022c6c8)) {
      *(byte *)(param_1 + 0x209) = *(byte *)(param_1 + 0x209) & 0xfd;
      *(undefined2 *)(param_1 + 0x1b2) = 9;
      aiStack_a8[0] = (int)*(short *)(param_1 + 0xc0);
      aiStack_a8[1] = 0xffffffdd;
      iVar15 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                            *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x141,
                            (int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe));
      if (iVar15 != 0) {
        bVar17 = (**(uint **)(param_1 + 0x234) & 0x700) == 0;
        if (bVar17) {
          *(undefined1 *)(param_1 + 0x1ec) = 0;
        }
        if (!bVar17) {
          *(undefined1 *)(param_1 + 0x1ec) =
               *(undefined1 *)(DAT_0022c6d0 + *(char *)(DAT_0022c6cc + iVar16));
        }
        if (0x8000 < (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4000U
           ) {
          if (*(char *)(param_1 + 0x1ec) == '\x04') {
            *(undefined1 *)(param_1 + 0x1ec) = 3;
          }
          else if (*(char *)(param_1 + 0x1ec) == '\x01') {
            *(undefined1 *)(param_1 + 0x1ec) = 5;
          }
        }
        iVar16 = DAT_0022c6d4;
        uVar6 = *(ushort *)(param_1 + 0x1ae) &
                *(ushort *)(DAT_0022c6d4 + (uint)*(byte *)(param_1 + 0x1ec) * 2);
        *(ushort *)(iVar15 + 0x1ae) = uVar6;
        iVar10 = DAT_0022c6d8;
        if (uVar6 == 0) goto LAB_0022d788;
        uVar14 = 0;
        *(undefined1 *)(iVar15 + 0x1b0) = 0;
        do {
          iVar11 = uVar14 * 2;
          uVar14 = uVar14 + 1 & 0xff;
          if ((*(ushort *)(iVar10 + iVar11) & uVar6) != 0) {
            *(char *)(iVar15 + 0x1b0) = *(char *)(iVar15 + 0x1b0) + '\x01';
          }
        } while (uVar14 < 0xb);
        uVar6 = *(ushort *)(param_1 + 0x1ae) &
                ~*(ushort *)(iVar16 + (uint)*(byte *)(param_1 + 0x1ec) * 2);
        *(ushort *)(param_1 + 0x1ae) = uVar6;
        if ((uVar6 & 0x3ff) == 0) {
          *(undefined2 *)(param_1 + 0x1f2) = 0xf;
        }
        uVar6 = *(ushort *)(iVar15 + 0x1ae);
        if ((uVar6 & 1) == 0 || (uVar6 & 0x80) == 0) {
          if ((uVar6 & 2) == 0 || (uVar6 & 8) == 0) {
            if ((uVar6 & 4) == 0 || (uVar6 & 0x10) == 0) {
              if ((uVar6 & 0x40) == 0 || (uVar6 & 0x80) == 0) {
                if ((uVar6 & 1) == 0) {
LAB_0022c5d8:
                  if ((uVar6 & 0x40) != 0 && (uVar6 & 8) != 0) {
                    *(undefined1 *)(iVar15 + 0x1ed) = 6;
                    goto LAB_0022c684;
                  }
                  if ((uVar6 & 4) == 0 || (uVar6 & 0x20) == 0) {
                    if ((uVar6 & 0x10) == 0 || (uVar6 & 0x80) == 0) {
                      if ((uVar6 & 1) == 0) {
                        if ((uVar6 & 2) == 0) {
                          if ((uVar6 & 4) == 0) {
                            if ((uVar6 & 0x20) == 0) {
                              if ((uVar6 & 0x40) == 0) {
                                if ((uVar6 & 8) == 0) {
                                  if ((uVar6 & 0x10) != 0) {
                                    *(undefined1 *)(iVar15 + 0x1ed) = 0xf;
                                    goto LAB_0022c684;
                                  }
                                  if ((uVar6 & 0x80) == 0) {
                                    if ((uVar6 & 0x100) == 0) {
                                      if ((uVar6 & 0x200) == 0) goto LAB_0022c580;
                                      uVar5 = 0x12;
                                    }
                                    else {
                                      uVar5 = 0x11;
                                    }
                                  }
                                  else {
                                    uVar5 = 0x10;
                                  }
                                }
                                else {
                                  uVar5 = 0xe;
                                }
                              }
                              else {
                                uVar5 = 0xd;
                              }
                            }
                            else {
                              uVar5 = 0xc;
                            }
                          }
                          else {
                            uVar5 = 0xb;
                          }
                        }
                        else {
                          uVar5 = 10;
                        }
                      }
                      else {
                        uVar5 = 9;
                      }
                    }
                    else {
                      uVar5 = 8;
                    }
                  }
                  else {
                    uVar5 = 7;
                  }
                }
                else if ((uVar6 & 0x20) == 0) {
                  if ((uVar6 & 2) == 0) goto LAB_0022c5d8;
                  uVar5 = 5;
                }
                else {
                  uVar5 = 4;
                }
              }
              else {
                uVar5 = 3;
              }
            }
            else {
              uVar5 = 2;
            }
          }
          else {
            uVar5 = 1;
          }
          *(undefined1 *)(iVar15 + 0x1ed) = uVar5;
        }
        else {
LAB_0022c580:
          *(undefined1 *)(iVar15 + 0x1ed) = 0;
        }
LAB_0022c684:
        fVar25 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_003735e8(fVar25 * fVar24 * fVar26,aiStack_a8,0);
        iVar16 = DAT_0022cad4;
        FUN_003735ac(&local_78,aiStack_a8,DAT_0022cad4 + (uint)*(byte *)(iVar15 + 0x1ed) * 0xc);
        *(float *)(iVar15 + 0x28) = *(float *)(iVar15 + 0x28) + local_78;
        *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) + local_74;
        *(float *)(iVar15 + 0x30) = *(float *)(iVar15 + 0x30) + local_70;
        pfVar7 = (float *)(iVar16 + (uint)*(byte *)(iVar15 + 0x1ed) * 0xc);
        *(float *)(iVar15 + 0x1b4) = -*pfVar7 / *(float *)(param_1 + 0x54);
        *(float *)(iVar15 + 0x1b8) = -pfVar7[1] / *(float *)(param_1 + 0x54);
        puVar8 = (undefined4 *)(iVar16 + 0xe4 + (uint)*(byte *)(iVar15 + 0x1ed) * 0xc);
        *(float *)(iVar15 + 0x1bc) = -pfVar7[2] / *(float *)(param_1 + 0x54);
        *(undefined4 *)(iVar15 + 0x1d4) = *puVar8;
        *(undefined4 *)(iVar15 + 0x1d8) = puVar8[1];
        *(undefined1 *)(iVar15 + 0x1ac) = 1;
        *(undefined4 *)(iVar15 + 0x70) = uVar4;
        fVar24 = (float)FUN_003738a8(DAT_0022cad8);
        *(short *)(iVar15 + 0x36) = *(short *)(param_1 + 0x92) + (short)(int)fVar24 + -0x8000;
        fVar24 = (float)FUN_00371e50(fVar20);
        *(float *)(iVar15 + 100) = fVar24 + fVar27;
        fVar24 = (float)FUN_00371e50(fVar20);
        *(float *)(iVar15 + 0x6c) = fVar24 + fVar27;
        uVar3 = DAT_0022cae0;
        uVar21 = DAT_0022cadc;
        if (*(byte *)(iVar15 + 0x1b0) < 4) {
          fVar24 = (float)FUN_00371e50(DAT_0022cae0);
          *(short *)(iVar15 + 0x1ce) = (short)(int)fVar24 + 3;
          fVar24 = (float)FUN_00371e50(uVar3);
          *(short *)(iVar15 + 0x1d0) = (short)(int)fVar24 + 3;
        }
        else {
          fVar24 = (float)FUN_00371e50(DAT_0022cadc);
          *(short *)(iVar15 + 0x1ce) = (short)(int)fVar24 + 6;
          fVar24 = (float)FUN_00371e50(uVar21);
          *(short *)(iVar15 + 0x1d0) = (short)(int)fVar24 + 6;
        }
        fVar24 = (float)FUN_003738a8(DAT_0022cae4);
        *(short *)(iVar15 + 0x1c8) = (short)(int)fVar24;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
    fVar24 = DAT_0022caec;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar24;
    FUN_0037632c(param_1,param_1 + 0x1f8);
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1f8);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1f8);
    if (DAT_0022c6c8 < *(int *)(param_1 + 0x98)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(undefined2 *)(param_1 + 0x1ae) = 0xffff;
    }
    sVar2 = *(short *)(param_1 + 0x1ee);
    if (sVar2 != 0) {
      if (sVar2 < 8) {
        sVar1 = *(short *)(param_1 + 0x1f0) + -0x41;
        *(short *)(param_1 + 0x1f0) = sVar1;
        if (sVar1 < 0) {
          *(undefined2 *)(param_1 + 0x1f0) = 0;
        }
      }
      else {
        sVar1 = *(short *)(param_1 + 0x1f0) + 0xff;
        *(short *)(param_1 + 0x1f0) = sVar1;
        if (0xff < sVar1) {
          *(undefined2 *)(param_1 + 0x1f0) = 0xff;
        }
      }
      *(short *)(param_1 + 0x1ee) = sVar2 + -1;
    }
    break;
  case 1:
  case 2:
    FUN_00376864(param_1);
    FUN_00376340(DAT_0022caf0,DAT_0022caf0,uVar21,param_2,param_1,5);
    fVar26 = *(float *)(param_1 + 0x2c);
    fVar24 = *(float *)(param_1 + 0x30);
    uVar6 = *(ushort *)(param_1 + 0x90);
    uVar31 = *(undefined4 *)(param_1 + 0x28);
    uVar32 = *(undefined4 *)(param_1 + 0x88);
    *(float *)(param_1 + 0x30) =
         fVar24 + (fVar26 - *(float *)(param_1 + 0x84)) * DAT_0022caf4 * DAT_0022caf8;
    FUN_00376340(DAT_0022cadc,DAT_0022cadc,uVar21,param_2,param_1,4);
    iVar10 = *(int *)(param_1 + 0x7c);
    if (iVar10 != 0) {
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 10),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar22 = fVar22 * DAT_0022cafc;
      fVar28 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar28 = fVar28 * DAT_0022cafc;
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xe),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar23 = (float)FUN_003696ec(-(fVar23 * DAT_0022cafc) * fVar28,iVar15);
      *(float *)(param_1 + 0x1e0) = -fVar23;
      uVar19 = FUN_003696ec(-fVar22 * fVar28,iVar15);
      *(undefined4 *)(param_1 + 0x1e8) = uVar19;
    }
    *(undefined4 *)(param_1 + 0x28) = uVar31;
    *(float *)(param_1 + 0x2c) = fVar26;
    *(float *)(param_1 + 0x30) = fVar24;
    *(ushort *)(param_1 + 0x90) = uVar6;
    *(undefined4 *)(param_1 + 0x88) = uVar32;
    uVar13 = (undefined2)DAT_0022cb00;
    if (*(char *)(param_1 + 0x1cc) == '\0') {
      *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) - *(short *)(param_1 + 0x1c6);
      *(short *)(param_1 + 0x1c6) = *(short *)(param_1 + 0x1c6) + -0xc00;
      if ((-1 < *(short *)(param_1 + 0x1c0)) && ((uVar6 & 1) != 0)) goto LAB_0022cac8;
LAB_0022cb2c:
      if (*(short *)(param_1 + 0x1c6) < -0x1200) {
        *(undefined2 *)(param_1 + 0x1c6) = uVar13;
      }
    }
    else {
      *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + *(short *)(param_1 + 0x1c6);
      *(short *)(param_1 + 0x1c6) = *(short *)(param_1 + 0x1c6) + -0xc00;
      if ((0 < *(short *)(param_1 + 0x1c0)) || ((uVar6 & 1) == 0)) goto LAB_0022cb2c;
LAB_0022cac8:
      *(undefined2 *)(param_1 + 0x1c0) = 0;
      *(undefined2 *)(param_1 + 0x1c6) = 0;
    }
    if (*(char *)(param_1 + 0x1cd) == '\0') {
      *(short *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) - *(short *)(param_1 + 0x1ca);
      *(short *)(param_1 + 0x1ca) = *(short *)(param_1 + 0x1ca) + -0xc00;
      if ((-1 < *(short *)(param_1 + 0x1c4)) && ((uVar6 & 1) != 0)) goto LAB_0022cb74;
LAB_0022cba8:
      if (*(short *)(param_1 + 0x1ca) < -0x1200) {
        *(undefined2 *)(param_1 + 0x1ca) = uVar13;
      }
    }
    else {
      *(short *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) + *(short *)(param_1 + 0x1ca);
      *(short *)(param_1 + 0x1ca) = *(short *)(param_1 + 0x1ca) + -0xc00;
      if ((0 < *(short *)(param_1 + 0x1c4)) || ((uVar6 & 1) == 0)) goto LAB_0022cba8;
LAB_0022cb74:
      *(undefined2 *)(param_1 + 0x1c4) = 0;
      *(undefined2 *)(param_1 + 0x1ca) = 0;
    }
    uVar31 = DAT_0022d018;
    if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar25;
      FUN_00375bcc(param_1,uVar31);
    }
    if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
      *(undefined1 *)(param_1 + 0x1ac) = 4;
      FUN_00375bcc(param_1,DAT_0022d01c);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
      *(undefined2 *)(param_1 + 0x1d0) = 0;
      *(undefined2 *)(param_1 + 0x1ce) = 0;
      FUN_0036e670(param_2,param_1 + 0x28,0,0,0,(uint)*(byte *)(param_1 + 0x1b0) * 0x14 + 300);
      FUN_00362068(param_2,param_1 + 0x28,0x96,DAT_0022d020,0);
      FUN_00362068(param_2,param_1 + 0x28,300,800,5);
      fVar24 = DAT_0022d024;
      *(float *)(param_1 + 100) = DAT_0022d024;
      *(float *)(param_1 + 0x70) = fVar24;
      return;
    }
    if ((uVar6 & 1) == 0) {
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0x1c8);
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + *(short *)(param_1 + 0x1dc) * 2000;
    }
    else {
      if (*(char *)(param_1 + 0x1d2) == '\0') {
        *(undefined1 *)(param_1 + 0x1d2) = 1;
        *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_0022d028;
        fVar24 = (float)FUN_003738a8(DAT_0022d02c);
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(int)fVar24;
      }
      else {
        *(float *)(param_1 + 100) = DAT_0022d024;
      }
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * DAT_0022d030;
      if ((*(short *)(param_1 + 0x1c0) == 0) && (*(short *)(param_1 + 0x1ce) != 0)) {
        *(short *)(param_1 + 0x1c6) = *(short *)(param_1 + 0x1ce) * 0x300;
        if ((*(short *)(param_1 + 0x1ce) != 0) &&
           (sVar2 = *(short *)(param_1 + 0x1ce) + -5, *(short *)(param_1 + 0x1ce) = sVar2, sVar2 < 1
           )) {
          *(undefined2 *)(param_1 + 0x1ce) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if ((*(short *)(param_1 + 0x1c4) == 0) && (*(short *)(param_1 + 0x1d0) != 0)) {
        *(short *)(param_1 + 0x1ca) = *(short *)(param_1 + 0x1d0) * 0x300;
        if ((*(short *)(param_1 + 0x1d0) != 0) &&
           (sVar2 = *(short *)(param_1 + 0x1d0) + -5, *(short *)(param_1 + 0x1d0) = sVar2, sVar2 < 1
           )) {
          *(undefined2 *)(param_1 + 0x1d0) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      FUN_00370084(param_1 + 0xbc,(int)(short)(*(short *)(param_1 + 0x1dc) << 0xe),1,0x2000);
    }
    if ((*(short *)(param_1 + 0x1aa) == 0) ||
       (sVar2 = *(short *)(param_1 + 0x1aa) + -1, *(short *)(param_1 + 0x1aa) = sVar2, sVar2 == 0))
    {
      *(undefined1 *)(param_1 + 0x1ac) = 3;
    }
  case 3:
  case 4:
    if (*(short *)(*(int *)(param_1 + 0x124) + 0x1ae) == -1) {
      FUN_00374428(param_1);
    }
    fVar23 = DAT_0022d040;
    fVar26 = DAT_0022d03c;
    FUN_00373500(DAT_0022d040,iVar15,DAT_0022d03c,param_1 + 0xc4);
    uVar31 = DAT_0022d044;
    fVar24 = DAT_0022d024;
    if (*(char *)(param_1 + 0x1ac) == '\x04') {
      if (((DAT_0022d024 < *(float *)(iVar16 + 0x6c)) &&
          (*(float *)(iVar16 + 0x2c) < *(float *)(param_1 + 0x2c))) &&
         (*(int *)(param_1 + 0x94) < DAT_0022d048)) {
        FUN_00373500(*(float *)(iVar16 + 0x6c),iVar15,DAT_0022d044,param_1 + 0x6c);
        iVar16 = *(int *)(param_1 + 0x6c);
        if (0x3f800000 < *(int *)(param_1 + 0x6c)) {
          iVar16 = iVar15;
        }
        *(int *)(param_1 + 0x6c) = iVar16;
        iVar16 = FUN_00375a18(param_1 + 0x36,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),1,
                              0x1000,0);
        if (iVar16 < 1) {
          *(short *)(param_1 + 0x1c8) = (short)(int)(*(float *)(param_1 + 0x6c) * DAT_0022d42c);
        }
        else {
          *(short *)(param_1 + 0x1c8) = (short)(int)(*(float *)(param_1 + 0x6c) * DAT_0022d04c);
        }
      }
      if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
        *(float *)(param_1 + 0x6c) = fVar24;
      }
      FUN_00376864(param_1);
      if (*(float *)(param_1 + 0x6c) != fVar24) {
        FUN_00376340(DAT_0022d430,DAT_0022d430,uVar21,param_2,param_1,5);
        if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
          *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar25;
          if (*(short *)(param_1 + 0x1c8) < 1) {
            uVar13 = 2000;
          }
          else {
            uVar13 = (undefined2)DAT_0022d434;
          }
          *(undefined2 *)(param_1 + 0x1c8) = uVar13;
        }
        FUN_0036fc20(iVar15,DAT_0022d438,param_1 + 0x6c);
      }
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0x1c8);
      FUN_00370084(param_1 + 0x1c8,0,1,0x3a);
      FUN_00370084(param_1 + 0xbc,(int)(short)(*(short *)(param_1 + 0x1dc) << 0xe),2,0x1000);
      fVar20 = (float)FUN_002cfca0((int)(short)((ushort)*(byte *)(param_1 + 0x1a8) *
                                               (short)DAT_0022d43c));
      fVar24 = DAT_0022d440;
      FUN_00370084(param_1 + 0x1c0,(int)(short)(int)(fVar20 * DAT_0022d440),2,0x1000);
      fVar20 = (float)FUN_00338f60((int)(short)((ushort)*(byte *)(param_1 + 0x1a8) *
                                               (short)DAT_0022d444));
      FUN_00370084(param_1 + 0x1c4,(int)(short)(int)(fVar20 * fVar24),2,0x1000);
      FUN_0036fc20(uVar3,uVar31,param_1 + 0x1e0);
      FUN_0036fc20(uVar3,uVar31,param_1 + 0x1e8);
      if ((int)ABS(*(float *)(param_1 + 0x6c)) < 0x3f800001) {
        if ((int)ABS(*(float *)(param_1 + 0x6c)) < 0x3f000001) {
          uVar9 = 0xb;
        }
        else {
          uVar9 = 5;
        }
      }
      else {
        uVar9 = 0;
      }
      uVar14 = (uint)*(byte *)(param_1 + 0x1a8);
      if ((uVar9 & *(byte *)(param_1 + 0x1a8)) == 0) {
        FUN_00362068(param_2,param_1 + 0x28);
        uVar14 = extraout_r1_00;
      }
    }
    else {
      uVar14 = extraout_r1;
      if ((*(char *)(local_6c + 0x8e) != '\0') &&
         (uVar14 = DAT_0022d448, (int)*(float *)(param_1 + 0x94) < (int)DAT_0022d448)) {
        *(undefined1 *)(param_1 + 0x1ac) = 1;
        *(undefined4 *)(param_1 + 0x70) = uVar4;
        fVar30 = (fVar23 - SQRT(*(float *)(param_1 + 0x94))) * fVar30;
        fVar24 = (float)FUN_003738a8(DAT_0022d44c);
        *(short *)(param_1 + 0x36) = (short)(int)fVar24;
        uVar3 = DAT_0022d450;
        uVar21 = DAT_0022d430;
        if (*(byte *)(param_1 + 0x1b0) < 4) {
          fVar24 = (float)FUN_00371e50(DAT_0022d450);
          *(short *)(param_1 + 0x1ce) = (short)(int)fVar24 + 3;
          fVar24 = (float)FUN_00371e50(uVar3);
          *(short *)(param_1 + 0x1d0) = (short)(int)fVar24 + 3;
          *(float *)(param_1 + 100) = fVar30 + fVar27;
          uVar21 = FUN_00371e50(DAT_0022d454);
          *(undefined4 *)(param_1 + 0x6c) = uVar21;
        }
        else {
          fVar24 = (float)FUN_00371e50(DAT_0022d430);
          *(short *)(param_1 + 0x1ce) = (short)(int)fVar24 + 6;
          fVar24 = (float)FUN_00371e50(uVar21);
          *(short *)(param_1 + 0x1d0) = (short)(int)fVar24 + 6;
          *(float *)(param_1 + 100) = fVar30 + fVar20;
          uVar21 = FUN_00371e50(iVar15);
          *(undefined4 *)(param_1 + 0x6c) = uVar21;
        }
        fVar24 = (float)FUN_003738a8(DAT_0022d458);
        *(short *)(param_1 + 0x1c8) = (short)(int)fVar24;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
    fVar24 = DAT_0022d464;
    fVar25 = DAT_0022d460;
    fVar20 = DAT_0022d45c;
    uVar31 = DAT_0022d458;
    uVar3 = DAT_0022d450;
    uVar21 = DAT_0022d430;
    if (*(short *)(param_1 + 0x1ce) == 0) {
      for (iVar15 = *(int *)(local_68 + 0xb4); iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x130)) {
        if ((*(short *)(iVar15 + 0x1c) == 1) &&
           (fVar22 = *(float *)(param_1 + 0x28) - *(float *)(iVar15 + 0x28),
           fVar29 = *(float *)(param_1 + 0x2c) - *(float *)(iVar15 + 0x2c),
           fVar28 = *(float *)(param_1 + 0x30) - *(float *)(iVar15 + 0x30),
           fVar22 = SQRT(fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28), uVar14 = DAT_0022d468
           , (int)fVar22 < (int)DAT_0022d468)) {
          *(undefined1 *)(param_1 + 0x1ac) = 1;
          *(undefined4 *)(param_1 + 0x70) = uVar4;
          fVar30 = (fVar23 - fVar22) * fVar30;
          fVar23 = (float)FUN_003696ec();
          *(short *)(param_1 + 0x36) = (short)(int)(fVar23 * fVar20);
          if (*(byte *)(param_1 + 0x1b0) < 4) {
            fVar20 = (float)FUN_00371e50(uVar3);
            *(short *)(param_1 + 0x1ce) = (short)(int)fVar20 + 3;
            fVar20 = (float)FUN_00371e50(uVar3);
            *(short *)(param_1 + 0x1d0) = (short)(int)fVar20 + 3;
            *(float *)(param_1 + 100) = fVar30 + fVar26;
          }
          else {
            fVar24 = (float)FUN_00371e50(uVar21);
            *(short *)(param_1 + 0x1ce) = (short)(int)fVar24 + 6;
            fVar24 = (float)FUN_00371e50(uVar21);
            *(short *)(param_1 + 0x1d0) = (short)(int)fVar24 + 6;
            *(float *)(param_1 + 100) = fVar30 + fVar25;
            fVar24 = fVar27;
          }
          *(float *)(param_1 + 0x6c) = fVar30 + fVar24;
          fVar24 = (float)FUN_003738a8(uVar31);
          *(short *)(param_1 + 0x1c8) = (short)(int)fVar24;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
      }
    }
    uVar9 = (uint)*(byte *)(param_1 + 0x1f6);
    if (uVar9 == 0) {
      if (*(short *)(DAT_0022d79c + param_2) == 1) {
        *(undefined1 *)(param_1 + 0x1f6) = 1;
      }
      return;
    }
    bVar17 = uVar9 == 1;
    if (bVar17) {
      uVar9 = param_2 + 0x2b00;
      uVar14 = (uint)*(ushort *)(param_2 + 0x2b7e);
    }
    bVar18 = bVar17 && uVar14 == 4;
    if (bVar17 && uVar14 == 4) {
      bVar18 = *(short *)(uVar9 + 0x82) == 8;
    }
    if (bVar18) {
      *(undefined1 *)(param_1 + 0x1ac) = 5;
      *(undefined2 *)(param_1 + 0x1ce) = 1;
      FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_0022d798);
      return;
    }
    break;
  case 5:
    iVar16 = *(int *)(param_1 + 0x124);
    if (*(short *)(iVar16 + 0x1ae) == -1) {
      FUN_00374428(param_1);
    }
    fVar25 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 0xbe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_003735e8(fVar25 * fVar24 * fVar26,aiStack_a8,0);
    FUN_003735ac(&local_78,aiStack_a8,DAT_0022cad4 + (uint)*(byte *)(param_1 + 0x1ed) * 0xc);
    fVar24 = DAT_0022d7a0;
    fVar26 = (float)FUN_0036e168(*(float *)(iVar16 + 0x28) + local_78,iVar15,param_1 + 0x28);
    fVar25 = (float)FUN_0036e168(*(float *)(iVar16 + 0x2c) + local_74,iVar15,param_1 + 0x2c);
    fVar27 = (float)FUN_0036e168(*(float *)(iVar16 + 0x30) + local_70,iVar15,param_1 + 0x30);
    iVar10 = FUN_00375a18(param_1 + 0xbc,(int)*(short *)(iVar16 + 0xbc),1,0x200,0);
    iVar11 = FUN_00375a18(param_1 + 0xbe,(int)*(short *)(iVar16 + 0xbe),1,0x200,0);
    iVar12 = FUN_00375a18(param_1 + 0xc0,(int)*(short *)(iVar16 + 0xc0),1,0x200,0);
    FUN_00370084(param_1 + 0x1c0,0,1,0x200);
    FUN_00370084(param_1 + 0x1c4,0,1,0x200);
    FUN_0036fc20(iVar15,fVar30,param_1 + 0x1e0);
    FUN_0036fc20(iVar15,fVar30,param_1 + 0x1e8);
    FUN_0036fc20(iVar15,fVar20,param_1 + 0xc4);
    if (fVar26 + fVar25 + fVar27 == fVar24) {
      bVar17 = false;
      if (*(short *)(param_1 + 0x1c0) + iVar10 + iVar11 + iVar12 + (int)*(short *)(param_1 + 0x1c4)
          == 0) {
        bVar17 = *(float *)(param_1 + 0x1e0) == fVar24;
      }
      bVar18 = false;
      if (bVar17) {
        bVar18 = *(float *)(param_1 + 0x1e8) == fVar24;
      }
      if (bVar18) {
        *(ushort *)(iVar16 + 0x1ae) = *(ushort *)(iVar16 + 0x1ae) | *(ushort *)(param_1 + 0x1ae);
        *(uint *)(iVar16 + 4) = *(uint *)(iVar16 + 4) | 1;
        iVar15 = param_1;
LAB_0022d788:
        FUN_00374428(iVar15);
        return;
      }
    }
  }
  return;
}

// OoT3D decomp @ 0012f508  name=FUN_0012f508  size=2644

void FUN_0012f508(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [12];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 local_38;

  iVar8 = 0;
  bVar11 = (*(byte *)(param_1 + 0x20a) & 2) == 0;
  iVar9 = (int)(short)(*(short *)(param_1 + 0x82) - *(short *)(param_1 + 0x36));
  if (!bVar11) {
    *(byte *)(param_1 + 0x20a) = *(byte *)(param_1 + 0x20a) & 0xfd;
    sVar6 = FUN_003758b0(*(float *)(param_1 + 0x30) - *(float *)(*(int *)(param_1 + 0x204) + 0x30),
                         *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x204) + 0x28));
    iVar8 = (int)(short)(sVar6 + *(short *)(param_1 + 0x36));
  }
  fVar4 = DAT_0012f8b8;
  pfVar10 = (float *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x209) & 2) != 0) {
    local_4c = *pfVar10;
    local_48 = *(float *)(param_1 + 0x2c);
    local_44 = *(float *)(param_1 + 0x30);
    *(byte *)(param_1 + 0x209) = *(byte *)(param_1 + 0x209) & 0xfd;
    FUN_00375ed8(param_1,0,0xfa,0,0xfa);
    uVar5 = DAT_0012f8c0;
    fVar16 = DAT_0012f8bc;
    local_48 = local_48 + DAT_0012f8bc;
    local_44 = local_44 + DAT_0012f8bc;
    FUN_0035e710(DAT_0012f8c0,param_2,param_1,&local_4c,0x96,0x96,0x96,0xfa,0xeb,0xf5,0xff);
    local_4c = local_4c + fVar16;
    local_44 = local_44 - fVar4;
    FUN_0035e710(uVar5,param_2,param_1,&local_4c,0x96,0x96,0x96,0xfa,0xeb,0xf5,0xff);
    local_4c = local_4c - fVar4;
    FUN_0035e710(uVar5,param_2,param_1,&local_4c,0x96,0x96,0x96,0xfa,0xeb,0xf5,0xff);
  }
  if (*(short *)(param_1 + 0x11a) == 0) {
    if (0 < *(int *)(param_1 + 0x1a4)) {
      *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + -1;
    }
    uVar13 = *(uint *)(param_1 + 0x98);
    bVar12 = uVar13 == DAT_0012f8c4;
    uVar7 = DAT_0012f8c4;
    if ((int)uVar13 <= (int)DAT_0012f8c4) {
      uVar7 = *(uint *)(param_1 + 0x1a4);
    }
    bVar2 = !bVar12;
    uVar3 = uVar13 - DAT_0012f8c4;
    if (!bVar2 || (int)DAT_0012f8c4 > (int)uVar13) {
      bVar12 = uVar7 == 0;
      uVar3 = uVar7;
    }
    if ((bVar12 || (int)uVar3 < 0 !=
                   ((bVar2 && (int)DAT_0012f8c4 <= (int)uVar13) && SBORROW4(uVar13,DAT_0012f8c4)))
       && (uVar13 = *(uint *)(param_1 + 0x9c), (int)uVar13 <= DAT_0012f8c8)) {
      if ((*(ushort *)(param_1 + 0x1c) & 0x30) == 0) {
        sVar6 = *(short *)(param_1 + 0x1aa);
        if ((short)(sVar6 - *(short *)(param_1 + 0x92)) < 0) {
          sVar6 = sVar6 + 0x4000;
        }
        else {
          sVar6 = sVar6 + -0x4000;
        }
      }
      else {
        sVar6 = *(short *)(param_1 + 0x92);
      }
      (**(code **)(DAT_0012f8cc + param_2))(param_2,0xfffffffc);
      FUN_0035e6e0(DAT_0012f8d0,DAT_0012f8d0,param_2,param_1,(int)sVar6);
      uVar13 = 0x17;
      *(undefined4 *)(param_1 + 0x1a4) = 0x17;
    }
    fVar15 = DAT_0012fc30;
    uVar7 = DAT_0012fc2c;
    fVar16 = DAT_0012f8d8;
    uVar5 = DAT_0012f8d4;
    uVar1 = *(ushort *)(param_1 + 0x1c);
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) == 0) {
        if (*(float *)(param_1 + 0x1ac) == DAT_0012f8d8) {
          if ((*(float *)(param_1 + 0x28) == *(float *)(param_1 + 8)) &&
             (*(float *)(param_1 + 0x30) == *(float *)(param_1 + 0x10))) {
            *(float *)(param_1 + 0x1ac) = DAT_0012f8d8;
            *(ushort *)(param_1 + 0x1aa) =
                 (*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0x36)) + 0x2000U & 0xc000;
            if (*(int *)(param_1 + 0x98) < DAT_0012ffb4) {
              *(undefined4 *)(param_1 + 0x1ac) = DAT_0012ffb8;
            }
          }
          else {
            sVar6 = FUN_003758b0(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30),
                                 *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28));
            uVar1 = sVar6 + 0x2000U & 0xc000;
            *(ushort *)(param_1 + 0x1aa) = uVar1;
            uVar18 = DAT_0012ffbc;
            if (uVar1 == 0x8000) {
              if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
                if (bVar11) goto LAB_0012fea8;
                uVar13 = iVar8 + 0x1fff;
              }
              else {
                uVar13 = (int)*(short *)(param_1 + 0x82) + ((int)DAT_0012fc38 >> 1);
              }
              if (uVar13 <= DAT_0012fc38) goto LAB_0012fedc;
            }
            else if (uVar1 == 0xc000) {
              uVar13 = (uint)*(ushort *)(param_1 + 0x90);
              if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
                if (!bVar11) {
                  uVar13 = iVar8 - 0x2001;
                }
                bVar12 = uVar7 <= uVar13;
joined_r0x0012fea4:
                if (!bVar11 && !bVar12) goto LAB_0012fedc;
              }
              else {
                uVar13 = (int)*(short *)(param_1 + 0x82) - 0x2001;
joined_r0x0012fe8c:
                if (uVar13 < uVar7) goto LAB_0012fedc;
              }
            }
            else if (uVar1 == 0) {
              uVar13 = (uint)*(ushort *)(param_1 + 0x90);
              if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
                if (!bVar11) {
                  uVar13 = iVar8 + 0x6000;
                }
                bVar12 = uVar13 < 0xc001;
                goto joined_r0x0012fea4;
              }
              if (0xc000 < (int)*(short *)(param_1 + 0x82) + 0x6000U) goto LAB_0012fedc;
            }
            else if (uVar1 == 0x4000) {
              uVar13 = (uint)*(ushort *)(param_1 + 0x90);
              if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
                uVar13 = (int)*(short *)(param_1 + 0x82) + 0x5fff;
                goto joined_r0x0012fe8c;
              }
              if (!bVar11) {
                uVar13 = iVar8 + 0x5fff;
              }
              if (!bVar11 && uVar13 < uVar7) goto LAB_0012fedc;
            }
LAB_0012fea8:
            FUN_0036e168(*(undefined4 *)(param_1 + 8),uVar5,DAT_0012ffbc,fVar16,param_1 + 0x28);
            FUN_0036e168(*(undefined4 *)(param_1 + 0x10),uVar5,uVar18,fVar16,param_1 + 0x30);
          }
        }
        else {
          sVar6 = *(short *)(param_1 + 0x1aa);
          if (sVar6 == -0x8000) {
            if ((uVar1 & 2) == 0) {
              *(float *)(param_1 + 0x1ac) = DAT_0012f8d8;
            }
            else if (((*(ushort *)(param_1 + 0x90) & 8) != 0) && (iVar9 + 0x1fffU <= DAT_0012fc38))
            goto LAB_0012facc;
            if (!bVar11) {
              bVar11 = *(float *)(param_1 + 0x1ac) == fVar16;
            }
            if ((bVar11) || (DAT_0012fc38 < iVar8 + 0x1fffU)) {
              if (*(float *)(param_1 + 0x1ac) != fVar16) {
                if (*(float *)(param_1 + 0x1ac) == fVar15) {
                  FUN_00375bcc(param_1,DAT_0012f8e8);
                }
                uVar18 = FUN_0036e168(*(undefined4 *)(param_1 + 0x1dc),uVar5,
                                      *(undefined4 *)(param_1 + 500),fVar16,param_1 + 0x30);
                *(undefined4 *)(param_1 + 0x1ac) = uVar18;
                fVar15 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x1d4),uVar5,
                                             *(undefined4 *)(param_1 + 0x1ec),fVar16,param_1 + 0x28)
                ;
                *(float *)(param_1 + 0x1ac) = fVar15 + *(float *)(param_1 + 0x1ac);
              }
            }
            else {
LAB_0012facc:
              *(float *)(param_1 + 0x1ac) = fVar16;
            }
          }
          else if (sVar6 == -0x4000) {
            if ((uVar1 & 8) == 0) {
              *(float *)(param_1 + 0x1ac) = DAT_0012f8d8;
            }
            else {
              uVar13 = *(ushort *)(param_1 + 0x90) & 8;
              bVar12 = (*(ushort *)(param_1 + 0x90) & 8) != 0;
              if (bVar12) {
                uVar13 = iVar9 - 0x2001;
              }
              if (bVar12 && uVar13 < DAT_0012fc2c) goto LAB_0012facc;
            }
            bVar12 = true;
            if (!bVar11) {
              bVar11 = *(float *)(param_1 + 0x1ac) == fVar16;
              bVar12 = fVar16 <= *(float *)(param_1 + 0x1ac);
            }
            if (!bVar11) {
              bVar12 = uVar7 <= iVar8 - 0x2001U;
            }
            if (!bVar12) goto LAB_0012facc;
            if (*(float *)(param_1 + 0x1ac) != fVar16) {
              if (*(float *)(param_1 + 0x1ac) == fVar15) {
                FUN_00375bcc(param_1,DAT_0012f8e8);
              }
              uVar18 = FUN_0036e168(*(undefined4 *)(param_1 + 0x1bc),uVar5,
                                    *(undefined4 *)(param_1 + 0x1e0),fVar16,param_1 + 0x28);
              *(undefined4 *)(param_1 + 0x1ac) = uVar18;
              fVar15 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x1c4),uVar5,
                                           *(undefined4 *)(param_1 + 0x1e8),fVar16,param_1 + 0x30);
              *(float *)(param_1 + 0x1ac) = fVar15 + *(float *)(param_1 + 0x1ac);
            }
          }
          else if (sVar6 == 0) {
            if ((uVar1 & 1) == 0) {
LAB_0012fa34:
              *(float *)(param_1 + 0x1ac) = DAT_0012f8d8;
            }
            else {
              uVar13 = *(ushort *)(param_1 + 0x90) & 8;
              bVar12 = (*(ushort *)(param_1 + 0x90) & 8) != 0;
              if (bVar12) {
                uVar13 = iVar9 + 0x6000;
              }
              if (bVar12 && 0xc000 < uVar13) goto LAB_0012fa34;
            }
            bVar12 = true;
            if (!bVar11) {
              bVar11 = *(float *)(param_1 + 0x1ac) == fVar16;
              bVar12 = fVar16 <= *(float *)(param_1 + 0x1ac);
            }
            if (!bVar11) {
              bVar12 = 0xbfff < iVar8 + 0x6000U;
              bVar11 = iVar8 + 0x6000U == 0xc000;
            }
            if (bVar12 && !bVar11) {
              *(float *)(param_1 + 0x1ac) = fVar16;
            }
            if (*(float *)(param_1 + 0x1ac) != fVar16) {
              if (*(float *)(param_1 + 0x1ac) == fVar15) {
                FUN_00375bcc(param_1,DAT_0012f8e8);
              }
              uVar18 = DAT_0012fc34;
              uVar17 = FUN_0035e6a0(*(undefined4 *)(param_1 + 0x1d0),uVar5,
                                    *(undefined4 *)(param_1 + 500),fVar16,DAT_0012fc34,
                                    param_1 + 0x30);
              *(undefined4 *)(param_1 + 0x1ac) = uVar17;
              fVar15 = (float)FUN_0035e6a0(*(undefined4 *)(param_1 + 0x1c8),uVar5,
                                           *(undefined4 *)(param_1 + 0x1ec),fVar16,uVar18,
                                           param_1 + 0x28);
              *(float *)(param_1 + 0x1ac) = fVar15 + *(float *)(param_1 + 0x1ac);
            }
          }
          else if (sVar6 == 0x4000) {
            if ((uVar1 & 4) == 0) {
              *(float *)(param_1 + 0x1ac) = DAT_0012f8d8;
            }
            else {
              uVar13 = *(ushort *)(param_1 + 0x90) & 8;
              bVar12 = (*(ushort *)(param_1 + 0x90) & 8) != 0;
              if (bVar12) {
                uVar13 = iVar9 + 0x5fff;
              }
              if (bVar12 && uVar13 < DAT_0012fc2c) goto LAB_0012facc;
            }
            bVar12 = true;
            if (!bVar11) {
              bVar11 = *(float *)(param_1 + 0x1ac) == fVar16;
              bVar12 = fVar16 <= *(float *)(param_1 + 0x1ac);
            }
            if (!bVar11) {
              bVar12 = 0x3fff < iVar8 + 0x5fffU;
            }
            if (!bVar12) goto LAB_0012facc;
            if (*(float *)(param_1 + 0x1ac) != fVar16) {
              if (*(float *)(param_1 + 0x1ac) == fVar15) {
                FUN_00375bcc(param_1,DAT_0012f8e8);
              }
              uVar18 = FUN_0036e168(*(undefined4 *)(param_1 + 0x1b0),uVar5,
                                    *(undefined4 *)(param_1 + 0x1e0),fVar16,param_1 + 0x28);
              *(undefined4 *)(param_1 + 0x1ac) = uVar18;
              fVar15 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x1b8),uVar5,
                                           *(undefined4 *)(param_1 + 0x1e8),fVar16,param_1 + 0x30);
              *(float *)(param_1 + 0x1ac) = fVar15 + *(float *)(param_1 + 0x1ac);
            }
          }
          iVar8 = FUN_0035e600(DAT_0012ffb0,param_1,param_2,
                               (int)(short)(*(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x1aa)
                                           ));
          if (iVar8 == 0) {
            *(float *)(param_1 + 0x1ac) = fVar16;
          }
        }
      }
      else {
        fVar15 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1aa));
        uVar13 = in_fpscr & 0xfffffff | (uint)(fVar16 <= fVar15) << 0x1d;
        fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1a8),
                                            (byte)(uVar13 >> 0x15) & 3);
        if (*(short *)(param_1 + 0x1a8) < 1) {
          fVar15 = fVar15 * DAT_0012fc1c * DAT_0012fc20 - DAT_0012fc24;
        }
        else {
          fVar15 = DAT_0012fc24 + fVar15 * DAT_0012fc1c * DAT_0012fc20;
        }
        *(short *)(param_1 + 0x1aa) = (short)(int)fVar15 + *(short *)(param_1 + 0x1aa);
        if ((!SUB41(uVar13 >> 0x1d,0)) && (fVar15 = (float)FUN_002cfca0(), fVar16 <= fVar15)) {
          FUN_00375bcc(param_1,DAT_0012fc28);
        }
        fVar16 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1aa));
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar16 * *(float *)(param_1 + 0x1ac);
        fVar16 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x1aa));
        *(float *)(param_1 + 0x30) =
             *(float *)(param_1 + 0x10) + fVar16 * *(float *)(param_1 + 0x1ac);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
        *(float *)(param_1 + 0x108) = *pfVar10;
        *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x30);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1ac) = DAT_0012f8d4;
      bVar12 = (*(ushort *)(param_1 + 0x90) & 8) != 0;
      uVar7 = *(ushort *)(param_1 + 0x90) & 8;
      if (bVar12) {
        uVar13 = iVar9 + 0x5fff;
        uVar7 = DAT_0012f8dc;
      }
      if (bVar12 && uVar7 < uVar13) {
        *(float *)(param_1 + 0x1ac) = fVar16;
      }
      if (*(float *)(param_1 + 0x1ac) != fVar16) {
        fVar14 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
        fVar15 = DAT_0012f8e0;
        local_4c = *(float *)(param_1 + 0x28) + fVar14 * DAT_0012f8e0;
        fVar14 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
        local_44 = *(float *)(param_1 + 0x30) + fVar14 * fVar15;
        local_48 = *(float *)(param_1 + 0x2c);
        iVar8 = FUN_00369f9c(param_2 + 0xa98,param_1 + 0x28,&local_4c,auStack_58,auStack_5c,1,1,0,1,
                             auStack_60);
        if (iVar8 != 0) {
          *(float *)(param_1 + 0x1ac) = fVar16;
        }
      }
      if (!bVar11) {
        bVar11 = *(float *)(param_1 + 0x1ac) == fVar16;
      }
      if (!bVar11) {
        sVar6 = FUN_003758b0(*(float *)(*(int *)(param_1 + 0x204) + 0x30) -
                             *(float *)(param_1 + 0x30),
                             *(float *)(*(int *)(param_1 + 0x204) + 0x28) -
                             *(float *)(param_1 + 0x28));
        if ((int)(short)(sVar6 - *(short *)(param_1 + 0x36)) + 0xfffU <= DAT_0012f8e4) {
          *(float *)(param_1 + 0x1ac) = fVar16;
        }
      }
      uVar5 = DAT_0012f8e8;
      if (*(float *)(param_1 + 0x1ac) == fVar16) {
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x8000;
        FUN_00375bcc(param_1,uVar5);
      }
    }
LAB_0012fedc:
    FUN_00376864(param_1);
    if ((*(ushort *)(param_1 + 0x1c) & 0x10) != 0) {
      local_40 = *pfVar10;
      uStack_3c = *(undefined4 *)(param_1 + 0x2c);
      local_38 = *(undefined4 *)(param_1 + 0x30);
    }
    FUN_00376340(DAT_0012ffc0,fVar4,fVar4,param_2,param_1,0x1d);
    if ((*(ushort *)(param_1 + 0x1c) & 0x10) != 0) {
      *(float *)(param_1 + 0x28) = local_40;
      *(undefined4 *)(param_1 + 0x30) = local_38;
    }
    if (*(short *)(param_1 + 0x11a) == 0) {
      *(byte *)(param_1 + 0x20a) = *(byte *)(param_1 + 0x20a) & 0xf7 | 4;
      goto LAB_0012ff64;
    }
  }
  *(byte *)(param_1 + 0x20a) = *(byte *)(param_1 + 0x20a) & 0xfb | 8;
LAB_0012ff64:
  FUN_0037632c(param_1,param_1 + 0x1f8);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1f8);
  if (*(short *)(param_1 + 0x11a) == 0) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1f8);
  }
  return;
}

// OoT3D decomp @ 00257c78  name=FUN_00257c78  size=816

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00257c78(int param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int extraout_r2;
  undefined2 extraout_r3;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ushort auStack_38 [4];
  undefined4 local_30;
  float local_24;
  float local_20;
  float local_1c;

  iVar3 = *(int *)(param_2 + 0x12c0);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x13c);
  }
  if (iVar3 == 0 || iVar4 == 0) {
    *(undefined4 *)(param_2 + 0x12c0) = 0;
  }
  iVar4 = *(int *)(param_2 + 0x12c0);
  *(int *)(param_2 + 0x16f8) = iVar4;
  if (iVar4 != 0) {
    local_30 = *(undefined4 *)(DAT_00257e84 + *(int *)(DAT_00257e80 + 4) * 0x134 + 0x54);
    uVar5 = FUN_003478bc(*(undefined4 *)(param_2 + 0x27c),9);
    FUN_003735ac(&local_24,uVar5,&local_30);
    fVar14 = *(float *)(iVar4 + 0x3c) - local_24;
    fVar13 = *(float *)(iVar4 + 0x44) - local_1c;
    uVar2 = FUN_003758b0(SQRT(fVar14 * fVar14 + fVar13 * fVar13),local_20 - *(float *)(iVar4 + 0x40)
                        );
    iVar4 = FUN_003758b0(*(float *)(iVar4 + 0x30) - local_1c,*(float *)(iVar4 + 0x28) - local_24);
    *(short *)(param_2 + 0x4a) = (short)iVar4;
    *(undefined2 *)(param_2 + 0x48) = uVar2;
    *(ushort *)(param_2 + 0x174a) = *(ushort *)(param_2 + 0x174a) | 2;
    iVar4 = iVar4 - *(short *)(param_2 + 0xbe);
    if (iVar4 < 0x8000) {
      if (iVar4 < -0x7fff) {
        iVar4 = iVar4 + 0xffff;
      }
    }
    else {
      iVar4 = iVar4 + -0xffff;
    }
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = -iVar4;
    }
    if (DAT_00257e8c < iVar3) {
      iVar3 = iVar4;
      if (iVar4 < 0) {
        iVar3 = -iVar4;
      }
      fVar13 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      iVar4 = (int)((DAT_00257e90 / fVar13) * fVar14);
    }
    *(short *)(param_2 + 0xbe) = *(short *)(param_2 + 0xbe) + (short)iVar4;
  }
  uVar5 = DAT_0034d610;
  uVar6 = *(uint *)(param_2 + 0x1710);
  bVar11 = (uVar6 & 0x8000000) != 0;
  if (bVar11) {
    uVar6 = (uint)*(byte *)(param_2 + 0x1a7);
  }
  if (bVar11 && uVar6 != 1) {
    *(undefined4 *)(param_2 + 0x70) = DAT_0034d610;
    if (*(char *)(param_2 + 0x2237) != '\0') {
      iVar4 = FUN_0036b4ec(param_2 + 0x254,param_1,0);
      if (iVar4 != 0) {
        if (*(char *)(param_2 + 0x2237) == '\x01') {
          FUN_00360190(DAT_0034d624,uVar5,uVar5,DAT_0034d620,param_2 + 0x254,param_1,0x34,0);
        }
        else {
          FUN_00359aa0(param_2 + 0x254,param_1,0x34);
        }
      }
      FUN_0034b17c(param_2);
      uVar6 = FUN_0034ad70(uVar5,param_2,param_2 + 0x221c,(int)*(short *)(param_2 + 0xbe));
      return uVar6;
    }
    iVar4 = FUN_00358bf4(param_1,param_2,0);
    if (iVar4 == 0) {
      FUN_0034b288(ABS(*(float *)(param_2 + 100)),param_1,param_2,0);
      FUN_00370378(param_2 + 0x175c,DAT_0034d618,800);
      uVar6 = FUN_0034ad70(DAT_0034d61c,param_2,param_2 + 100,(int)*(short *)(param_2 + 0x2220));
      return uVar6;
    }
    *(undefined1 *)(DAT_0034d614 + param_2) = 1;
    return 1;
  }
  FUN_0036b4ec(param_2 + 0x254,param_1);
  uVar6 = FUN_0034d4b0(param_2);
  fVar13 = DAT_0034d070;
  bVar11 = uVar6 == 0;
  if (bVar11) {
    uVar6 = *(uint *)(param_2 + 0x1710);
  }
  if (bVar11 && (uVar6 & 0x800) == 0) {
    uVar6 = 0;
    if ((*(int *)(param_2 + 0x12b0) != 0) &&
       (uVar6 = (uint)*(ushort *)(*(int *)(param_2 + 0x12b0) + 0x116), uVar6 == 0xffff)) {
      uVar6 = FUN_00354894(param_2,param_1);
      return uVar6;
    }
    return uVar6;
  }
  if ((((*(uint *)(param_2 + 0x1710) & 0x800000) == 0) && (*(int *)(param_2 + 0x124) != 0)) &&
     (iVar4 = FUN_00355a60(param_2), iVar4 != 0)) {
    FUN_0036055c(param_1,param_2,DAT_0034d074,1);
    *(byte *)(param_2 + 0x172a) = *(byte *)(param_2 + 0x172a) | 0x80;
    FUN_003604f0(param_2 + 0x254,param_1,0x100);
    FUN_003603f8(param_1,param_2,0x9b);
    iVar4 = DAT_0034d07c;
    *(float *)(param_2 + 0x6c) = fVar13;
    *(float *)(param_2 + 0x221c) = fVar13;
    uVar5 = DAT_0034d078;
    *(undefined1 *)(param_2 + 0x1749) = 0;
    *(undefined4 *)(iVar4 + 0xcc) = uVar5;
    iVar3 = DAT_0034d080;
    *(undefined1 *)(iVar4 + 0xd4) = 0;
    *(undefined2 *)(iVar3 + param_2) = *(undefined2 *)(param_2 + 0xbe);
    *(ushort *)(param_2 + 0x90) = *(ushort *)(param_2 + 0x90) & 0xfffe;
    *(undefined1 *)(param_2 + 0x227f) = 0;
    *(ushort *)(param_2 + 0x174a) = *(ushort *)(param_2 + 0x174a) | 0x43;
    if (*(char *)(param_2 + 2) == '\x02') {
      FUN_0036f59c(param_2,DAT_0034d084 + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4));
      return 1;
    }
    FUN_0036aeb4(param_2 + 0x28);
    return 1;
  }
  iVar3 = DAT_0034d09c;
  iVar4 = DAT_0034d090;
  if ((*(int *)(param_2 + 0x1708) != DAT_0034d088) ||
     (((*(uint *)(param_2 + 0x1710) & 0x100) != 0 &&
      (*(char *)(param_2 + 0x1aa) == -4 || *(char *)(param_2 + 0x1aa) == -1)))) {
    iVar8 = *(int *)(param_2 + 0x2210);
    if (iVar8 == DAT_0034d08c) {
      uVar6 = (uint)*(byte *)(param_2 + 0x1aa);
      if (uVar6 < 0xfe) {
        if (uVar6 == 0xfc) {
          cVar1 = '\x01';
        }
        else if (uVar6 == 0x59) {
          cVar1 = '\x02';
        }
        else {
          cVar1 = *(char *)(DAT_0034d090 + uVar6);
        }
      }
      else {
        cVar1 = '\0';
      }
      if (cVar1 != *(char *)(param_2 + 0x1a9)) goto LAB_0034d300;
    }
    if (*(char *)(param_2 + 2) != '\x02') goto LAB_0034d2d8;
    uVar6 = *(uint *)(param_2 + 0x1710);
    if ((uVar6 & 0x100) == 0) {
      if ((*(uint *)(param_2 + 0x29b8) & 0x1000000) == 0) {
        if ((*(char *)(param_2 + 0x1a9) == *(char *)(param_2 + 0x1ac)) || ((uVar6 & 0x400000) != 0))
        {
LAB_0034ce58:
          if (*(short *)(DAT_0034d09c + 0x44) != 0) {
            uVar6 = FUN_0037571c(param_1);
            bVar11 = uVar6 == 0;
            if (bVar11) {
              uVar6 = (uint)*(byte *)(param_2 + 0x12bc);
            }
            bVar12 = bVar11 && uVar6 == 0;
            if (bVar11 && uVar6 == 0) {
              uVar6 = param_1 + 0x5c00;
              bVar12 = *(char *)(param_1 + 0x5c74) == '\0';
            }
            if ((((!bVar12) || (*(short *)(DAT_0034d0a0 + param_1) != 0)) ||
                (*(char *)(uVar6 + 0x2d) == '\x14')) || (*(short *)(DAT_0034d0a4 + 0x5e) == 10))
            goto LAB_0034d2d8;
            if (*(byte *)(param_2 + 0x1b7) != 0) {
              uVar6 = (uint)*(byte *)(iVar3 + 0x81);
              iVar8 = *(byte *)(param_2 + 0x1b7) + 0x39;
              if (uVar6 < 0xfe) {
                if (uVar6 == 0xfc) {
                  iVar9 = 1;
                }
                else if (uVar6 == 0x59) {
                  iVar9 = 2;
                }
                else {
                  iVar9 = (int)*(char *)(iVar4 + uVar6);
                }
                if (iVar9 == iVar8) goto LAB_0034cf7c;
              }
              uVar6 = (uint)*(byte *)(iVar3 + 0x82);
              if (uVar6 < 0xfe) {
                if (uVar6 == 0xfc) {
                  iVar9 = 1;
                }
                else if (uVar6 == 0x59) {
                  iVar9 = 2;
                }
                else {
                  iVar9 = (int)*(char *)(iVar4 + uVar6);
                }
                if (iVar9 == iVar8) goto LAB_0034cf7c;
              }
              uVar6 = (uint)*(byte *)(iVar3 + 0x83);
              if (uVar6 < 0xfe) {
                if (uVar6 == 0xfc) {
                  iVar9 = 1;
                }
                else if (uVar6 == 0x59) {
                  iVar9 = 2;
                }
                else {
                  iVar9 = (int)*(char *)(iVar4 + uVar6);
                }
                if (iVar9 == iVar8) goto LAB_0034cf7c;
              }
              uVar6 = (uint)*(byte *)(iVar3 + 0x84);
              if (uVar6 < 0xfe) {
                if (uVar6 == 0xfc) {
                  iVar9 = 1;
                }
                else if (uVar6 == 0x59) {
                  iVar9 = 2;
                }
                else {
                  iVar9 = (int)*(char *)(iVar4 + uVar6);
                }
                if (iVar9 == iVar8) goto LAB_0034cf7c;
              }
              *(undefined1 *)(param_2 + 0x1b7) = 0;
            }
LAB_0034cf7c:
            if ((*(uint *)(param_2 + 0x1710) & DAT_0034d0a8) == 0) {
              uVar15 = FUN_0034d4b0(param_2);
              iVar8 = (int)((ulonglong)uVar15 >> 0x20);
              if ((int)uVar15 == 0) {
                iVar7 = (int)*(char *)(param_2 + 0x1ac);
                iVar9 = extraout_r2;
                if (iVar7 < 2) {
LAB_0034d120:
                  uVar6 = 0;
                  auStack_38[0] = (ushort)*DAT_0034d48c;
                  auStack_38[1] = (short)*DAT_0034d490;
                    /* WARNING: Ignoring partial resolution of indirect */
                  local_30._0_2_ = (short)iVar9;
                    /* WARNING: Ignoring partial resolution of indirect */
                  local_30._2_2_ = extraout_r3;
                  auStack_38[2] = (short)*DAT_0034d494;
                  auStack_38[3] = (short)iVar8;
                  while ((*(uint *)(*(int *)(param_2 + 0x29c8) + 4) & (uint)auStack_38[uVar6]) == 0
                         || 2 < (int)uVar6) {
                    if (uVar6 == 3) {
                      iVar3 = FUN_00349504();
joined_r0x0034d1c4:
                      if (iVar3 != 0) break;
                    }
                    else {
                      if (uVar6 == 4) {
                        iVar3 = FUN_003494f4();
                        goto joined_r0x0034d1c4;
                      }
                      if (uVar6 == 5) {
                        iVar3 = FUN_002c3a90();
                        goto joined_r0x0034d1c4;
                      }
                    }
                    if (((*(int *)(param_2 + 0x29e8) != 0) && (*(uint *)(param_2 + 0x29e4) == uVar6)
                        ) || (uVar6 = uVar6 + 1, 5 < uVar6)) break;
                  }
                  iVar3 = FUN_002c3970(param_1,uVar6);
                  if (iVar3 < 0xfe) {
                    iVar4 = FUN_002c3a90();
                    if (iVar4 != 0) {
                      FUN_0048ba64();
                    }
                    *(char *)(param_2 + 0x1a8) = (char)uVar6;
                    FUN_0034d688(param_1,param_2,iVar3);
                  }
                  else {
                    uVar6 = 0;
                    do {
                      if ((**(uint **)(param_2 + 0x29c8) & (uint)auStack_38[uVar6]) != 0 &&
                          (int)uVar6 < 3) break;
                      if (uVar6 == 3) {
                        iVar3 = FUN_002c3960();
joined_r0x0034d258:
                        if (iVar3 != 0) break;
                      }
                      else if (uVar6 == 4) {
                        iVar3 = FUN_002c3950();
                        goto joined_r0x0034d258;
                      }
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < 6);
                    iVar3 = FUN_002c3970(param_1,uVar6);
                    if (iVar3 < 0xfe) {
                      if (iVar3 == 0xfc) {
                        cVar1 = '\x01';
                      }
                      else if (iVar3 == 0x59) {
                        cVar1 = '\x02';
                      }
                      else {
                        cVar1 = *(char *)(iVar4 + iVar3);
                      }
                      if (cVar1 == *(char *)(param_2 + 0x1a9)) {
                        *(undefined4 *)(DAT_0034d498 + 0x50) = 1;
                      }
                    }
                  }
                }
                else {
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x56f);
                  if ((uVar6 != 0xff) && (uVar6 = (uint)*(byte *)(iVar3 + 0x80), uVar6 == 0x55)) {
                    uVar6 = 0x3d;
                  }
                  iVar9 = DAT_0034d0ac;
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar4 + uVar6);
                    }
                    if (iVar8 == iVar7) goto LAB_0034d120;
                  }
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x570);
                  if (uVar6 != 0xff) {
                    uVar6 = (uint)*(byte *)(iVar3 + 0x81);
                  }
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar4 + uVar6);
                    }
                    if (iVar8 == iVar7) goto LAB_0034d120;
                  }
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x571);
                  if (uVar6 != 0xff) {
                    uVar6 = (uint)*(byte *)(iVar3 + 0x82);
                  }
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar4 + uVar6);
                    }
                    if (iVar8 == iVar7) goto LAB_0034d120;
                  }
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x572);
                  if (uVar6 != 0xff) {
                    uVar6 = (uint)*(byte *)(iVar3 + 0x83);
                  }
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar4 + uVar6);
                    }
                    if (iVar8 == iVar7) goto LAB_0034d120;
                  }
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x573);
                  if (uVar6 != 0xff) {
                    uVar6 = (uint)*(byte *)(iVar3 + 0x84);
                  }
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar4 + uVar6);
                    }
                    if (iVar8 == iVar7) goto LAB_0034d120;
                  }
                  FUN_0034d688(param_1,param_2,0xff);
                }
              }
            }
LAB_0034d2d8:
            if ((*(uint *)(param_2 + 0x1710) & 0x100) != 0) goto LAB_0034d2e4;
          }
        }
        else if ((uVar6 & 0x8000000) != 0) {
          iVar9 = DAT_0034d094;
          if (iVar8 != DAT_0034d094) {
            iVar9 = DAT_0034d098;
          }
          if (iVar8 == DAT_0034d094 || iVar8 == iVar9) goto LAB_0034ce58;
        }
      }
    }
    else {
LAB_0034d2e4:
      FUN_0032b45c(param_2,param_1);
    }
    if (*(int *)(param_2 + 0x1708) == DAT_0034d49c) {
      return 1;
    }
  }
LAB_0034d300:
  iVar4 = (**(code **)(param_2 + 0x2210))(param_2,param_1);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(float *)(param_2 + 0x2214) == fVar13) {
    iVar4 = FUN_0034d628(param_2);
    if (*(int *)(param_2 + 0x284) == iVar4) {
LAB_0034d418:
      if (*(float *)(param_2 + 0x221c) == fVar13) {
        FUN_002c3920(param_1,param_2 + 0x254,*(undefined4 *)(param_2 + 0x2cc),
                     *(undefined4 *)(param_2 + 0x17dc));
        return 1;
      }
    }
    else {
      iVar4 = 0;
      piVar10 = DAT_0034d4a0;
      do {
        if (*(int *)(param_2 + 0x284) == *piVar10) {
          if (iVar4 != -1) goto LAB_0034d418;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar4 < 0x1e);
    }
    FUN_0035e9fc(param_1,param_2 + 0x254,*(undefined4 *)(param_2 + 0x2cc),
                 *(undefined4 *)(param_2 + 0x17dc));
    return 1;
  }
  iVar4 = FUN_0034d628(param_2);
  if (*(int *)(param_2 + 0x284) == iVar4) {
LAB_0034d364:
    if (*(float *)(param_2 + 0x221c) == fVar13) goto LAB_0034d394;
  }
  else {
    iVar4 = 0;
    piVar10 = DAT_0034d4a0;
    do {
      if (*(int *)(param_2 + 0x284) == *piVar10) {
        if (iVar4 != -1) goto LAB_0034d364;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar4 < 0x1e);
  }
  FUN_004895e4(param_1,param_2 + 0x254,*(undefined4 *)(param_2 + 0x17dc),
               *(undefined4 *)(param_2 + 0x2cc));
LAB_0034d394:
  FUN_003705a0(fVar13,DAT_0034d4a8,param_2 + 0x2214);
  FUN_00489590(DAT_0034d4ac - *(float *)(param_2 + 0x2214),param_1,param_2 + 0x254,
               *(undefined4 *)(param_2 + 0x2cc),*(undefined4 *)(param_2 + 0x17dc));
  return 1;
}

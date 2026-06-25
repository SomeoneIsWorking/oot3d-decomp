// OoT3D decomp @ 0034cc78  name=FUN_0034cc78  size=2004

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0034cc78(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined2 uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  ushort local_38 [6];
  
  fVar2 = DAT_0034d070;
  if ((((*(uint *)(param_1 + 0x1710) & 0x800000) == 0) && (*(int *)(param_1 + 0x124) != 0)) &&
     (iVar5 = FUN_00355a60(param_1), iVar5 != 0)) {
    FUN_0036055c(param_2,param_1,DAT_0034d074,1);
    *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) | 0x80;
    FUN_003604f0(param_1 + 0x254,param_2,0x100);
    FUN_003603f8(param_2,param_1,0x9b);
    iVar5 = DAT_0034d07c;
    *(float *)(param_1 + 0x6c) = fVar2;
    *(float *)(param_1 + 0x221c) = fVar2;
    uVar3 = DAT_0034d078;
    *(undefined *)(param_1 + 0x1749) = 0;
    *(undefined4 *)(iVar5 + 0xcc) = uVar3;
    iVar7 = DAT_0034d080;
    *(undefined *)(iVar5 + 0xd4) = 0;
    *(undefined2 *)(iVar7 + param_1) = *(undefined2 *)(param_1 + 0xbe);
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
    *(undefined *)(param_1 + 0x227f) = 0;
    *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 0x43;
    if (*(char *)(param_1 + 2) == '\x02') {
      FUN_0036f59c(param_1,DAT_0034d084 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
      return 1;
    }
    FUN_0036aeb4(param_1 + 0x28);
    return 1;
  }
  iVar7 = DAT_0034d09c;
  iVar5 = DAT_0034d090;
  if ((*(int *)(param_1 + 0x1708) != DAT_0034d088) ||
     (((*(uint *)(param_1 + 0x1710) & 0x100) != 0 &&
      (*(char *)(param_1 + 0x1aa) == -4 || *(char *)(param_1 + 0x1aa) == -1)))) {
    iVar8 = *(int *)(param_1 + 0x2210);
    if (iVar8 == DAT_0034d08c) {
      uVar6 = (uint)*(byte *)(param_1 + 0x1aa);
      if (uVar6 < 0xfe) {
        if (uVar6 == 0xfc) {
          cVar4 = '\x01';
        }
        else if (uVar6 == 0x59) {
          cVar4 = '\x02';
        }
        else {
          cVar4 = *(char *)(DAT_0034d090 + uVar6);
        }
      }
      else {
        cVar4 = '\0';
      }
      if (cVar4 != *(char *)(param_1 + 0x1a9)) goto LAB_0034d300;
    }
    if (*(char *)(param_1 + 2) != '\x02') goto LAB_0034d2d8;
    uVar6 = *(uint *)(param_1 + 0x1710);
    if ((uVar6 & 0x100) == 0) {
      if ((*(uint *)(param_1 + 0x29b8) & 0x1000000) == 0) {
        iVar10 = (int)*(char *)(param_1 + 0x1a9);
        iVar12 = (int)*(char *)(param_1 + 0x1ac);
        if ((iVar10 == iVar12) || ((uVar6 & 0x400000) != 0)) {
LAB_0034ce58:
          if (*(short *)(DAT_0034d09c + 0x44) != 0) {
            uVar6 = FUN_0037571c(param_2);
            uVar11 = (undefined2)iVar12;
            bVar13 = uVar6 == 0;
            if (bVar13) {
              uVar6 = (uint)*(byte *)(param_1 + 0x12bc);
            }
            bVar14 = bVar13 && uVar6 == 0;
            if (bVar13 && uVar6 == 0) {
              uVar6 = param_2 + 0x5c00;
              bVar14 = *(char *)(param_2 + 0x5c74) == '\0';
            }
            if ((((!bVar14) || (*(short *)(DAT_0034d0a0 + param_2) != 0)) ||
                (*(char *)(uVar6 + 0x2d) == '\x14')) || (*(short *)(DAT_0034d0a4 + 0x5e) == 10))
            goto LAB_0034d2d8;
            if (*(byte *)(param_1 + 0x1b7) != 0) {
              uVar6 = (uint)*(byte *)(iVar7 + 0x81);
              iVar8 = *(byte *)(param_1 + 0x1b7) + 0x39;
              if (uVar6 < 0xfe) {
                if (uVar6 == 0xfc) {
                  iVar12 = 1;
                }
                else if (uVar6 == 0x59) {
                  iVar12 = 2;
                }
                else {
                  iVar12 = (int)*(char *)(iVar5 + uVar6);
                }
                if (iVar12 == iVar8) goto LAB_0034cf7c;
              }
              uVar6 = (uint)*(byte *)(iVar7 + 0x82);
              if (uVar6 < 0xfe) {
                if (uVar6 == 0xfc) {
                  iVar12 = 1;
                }
                else if (uVar6 == 0x59) {
                  iVar12 = 2;
                }
                else {
                  iVar12 = (int)*(char *)(iVar5 + uVar6);
                }
                if (iVar12 == iVar8) goto LAB_0034cf7c;
              }
              uVar6 = (uint)*(byte *)(iVar7 + 0x83);
              if (uVar6 < 0xfe) {
                if (uVar6 == 0xfc) {
                  iVar12 = 1;
                }
                else if (uVar6 == 0x59) {
                  iVar12 = 2;
                }
                else {
                  iVar12 = (int)*(char *)(iVar5 + uVar6);
                }
                if (iVar12 == iVar8) goto LAB_0034cf7c;
              }
              uVar6 = (uint)*(byte *)(iVar7 + 0x84);
              if (uVar6 < 0xfe) {
                if (uVar6 == 0xfc) {
                  iVar12 = 1;
                }
                else if (uVar6 == 0x59) {
                  iVar12 = 2;
                }
                else {
                  iVar12 = (int)*(char *)(iVar5 + uVar6);
                }
                if (iVar12 == iVar8) goto LAB_0034cf7c;
              }
              *(undefined *)(param_1 + 0x1b7) = 0;
            }
LAB_0034cf7c:
            if ((*(uint *)(param_1 + 0x1710) & DAT_0034d0a8) == 0) {
              uVar15 = FUN_0034d4b0(param_1);
              iVar8 = (int)((ulonglong)uVar15 >> 0x20);
              if ((int)uVar15 == 0) {
                iVar12 = (int)*(char *)(param_1 + 0x1ac);
                if (iVar12 < 2) {
LAB_0034d120:
                  uVar6 = 0;
                  local_38[0] = (ushort)*DAT_0034d48c;
                  local_38[1] = (short)*DAT_0034d490;
                  local_38[4] = (short)iVar10;
                  local_38[5] = uVar11;
                  local_38[2] = (short)*DAT_0034d494;
                  local_38[3] = (short)iVar8;
                  while( true ) {
                    bVar13 = false;
                    bVar14 = (*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & (uint)local_38[uVar6]) !=
                             0;
                    if (bVar14) {
                      bVar13 = (int)(uVar6 - 3) < 0;
                    }
                    if (bVar13 != (bVar14 && SBORROW4(uVar6,3))) break;
                    if (uVar6 == 3) {
                      iVar7 = FUN_00349504();
joined_r0x0034d1c4:
                      if (iVar7 != 0) break;
                    }
                    else {
                      if (uVar6 == 4) {
                        iVar7 = FUN_003494f4();
                        goto joined_r0x0034d1c4;
                      }
                      if (uVar6 == 5) {
                        iVar7 = FUN_002c3a90();
                        goto joined_r0x0034d1c4;
                      }
                    }
                    if (((*(int *)(param_1 + 0x29e8) != 0) && (*(uint *)(param_1 + 0x29e4) == uVar6)
                        ) || (uVar6 = uVar6 + 1, 5 < uVar6)) break;
                  }
                  iVar7 = FUN_002c3970(param_2,uVar6);
                  if (iVar7 < 0xfe) {
                    iVar5 = FUN_002c3a90();
                    if (iVar5 != 0) {
                      FUN_0048ba64();
                    }
                    *(char *)(param_1 + 0x1a8) = (char)uVar6;
                    FUN_0034d688(param_2,param_1,iVar7);
                  }
                  else {
                    uVar6 = 0;
                    do {
                      bVar13 = false;
                      bVar14 = (**(uint **)(param_1 + 0x29c8) & (uint)local_38[uVar6]) != 0;
                      if (bVar14) {
                        bVar13 = (int)(uVar6 - 3) < 0;
                      }
                      if (bVar13 != (bVar14 && SBORROW4(uVar6,3))) break;
                      if (uVar6 == 3) {
                        iVar7 = FUN_002c3960();
joined_r0x0034d258:
                        if (iVar7 != 0) break;
                      }
                      else if (uVar6 == 4) {
                        iVar7 = FUN_002c3950();
                        goto joined_r0x0034d258;
                      }
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < 6);
                    iVar7 = FUN_002c3970(param_2,uVar6);
                    if (iVar7 < 0xfe) {
                      if (iVar7 == 0xfc) {
                        cVar4 = '\x01';
                      }
                      else if (iVar7 == 0x59) {
                        cVar4 = '\x02';
                      }
                      else {
                        cVar4 = *(char *)(iVar5 + iVar7);
                      }
                      if (cVar4 == *(char *)(param_1 + 0x1a9)) {
                        *(undefined4 *)(DAT_0034d498 + 0x50) = 1;
                      }
                    }
                  }
                }
                else {
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x56f);
                  if ((uVar6 != 0xff) && (uVar6 = (uint)*(byte *)(iVar7 + 0x80), uVar6 == 0x55)) {
                    uVar6 = 0x3d;
                  }
                  iVar10 = DAT_0034d0ac;
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar5 + uVar6);
                    }
                    if (iVar8 == iVar12) goto LAB_0034d120;
                  }
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x570);
                  if (uVar6 != 0xff) {
                    uVar6 = (uint)*(byte *)(iVar7 + 0x81);
                  }
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar5 + uVar6);
                    }
                    if (iVar8 == iVar12) goto LAB_0034d120;
                  }
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x571);
                  if (uVar6 != 0xff) {
                    uVar6 = (uint)*(byte *)(iVar7 + 0x82);
                  }
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar5 + uVar6);
                    }
                    if (iVar8 == iVar12) goto LAB_0034d120;
                  }
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x572);
                  if (uVar6 != 0xff) {
                    uVar6 = (uint)*(byte *)(iVar7 + 0x83);
                  }
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar5 + uVar6);
                    }
                    if (iVar8 == iVar12) goto LAB_0034d120;
                  }
                  uVar6 = (uint)*(byte *)(DAT_0034d0ac + 0x573);
                  if (uVar6 != 0xff) {
                    uVar6 = (uint)*(byte *)(iVar7 + 0x84);
                  }
                  if (uVar6 < 0xfe) {
                    if (uVar6 == 0xfc) {
                      iVar8 = 1;
                    }
                    else if (uVar6 == 0x59) {
                      iVar8 = 2;
                    }
                    else {
                      iVar8 = (int)*(char *)(iVar5 + uVar6);
                    }
                    if (iVar8 == iVar12) goto LAB_0034d120;
                  }
                  FUN_0034d688(param_2,param_1,0xff);
                }
              }
            }
LAB_0034d2d8:
            if ((*(uint *)(param_1 + 0x1710) & 0x100) != 0) goto LAB_0034d2e4;
          }
        }
        else if ((uVar6 & 0x8000000) != 0) {
          iVar1 = DAT_0034d094;
          if (iVar8 != DAT_0034d094) {
            iVar1 = DAT_0034d098;
          }
          if (iVar8 == DAT_0034d094 || iVar8 == iVar1) goto LAB_0034ce58;
        }
      }
    }
    else {
LAB_0034d2e4:
      FUN_0032b45c(param_1,param_2);
    }
    if (*(int *)(param_1 + 0x1708) == DAT_0034d49c) {
      return 1;
    }
  }
LAB_0034d300:
  iVar5 = (**(code **)(param_1 + 0x2210))(param_1,param_2);
  if (iVar5 == 0) {
    return 0;
  }
  if (*(float *)(param_1 + 0x2214) == fVar2) {
    iVar5 = FUN_0034d628(param_1);
    if (*(int *)(param_1 + 0x284) == iVar5) {
LAB_0034d418:
      if (*(float *)(param_1 + 0x221c) == fVar2) {
        FUN_002c3920(param_2,param_1 + 0x254,*(undefined4 *)(param_1 + 0x2cc),
                     *(undefined4 *)(param_1 + 0x17dc));
        return 1;
      }
    }
    else {
      iVar5 = 0;
      piVar9 = DAT_0034d4a0;
      do {
        if (*(int *)(param_1 + 0x284) == *piVar9) {
          if (iVar5 != -1) goto LAB_0034d418;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar5 < 0x1e);
    }
    FUN_0035e9fc(param_2,param_1 + 0x254,*(undefined4 *)(param_1 + 0x2cc),
                 *(undefined4 *)(param_1 + 0x17dc),DAT_0034d4a4);
    return 1;
  }
  iVar5 = FUN_0034d628(param_1);
  if (*(int *)(param_1 + 0x284) == iVar5) {
LAB_0034d364:
    if (*(float *)(param_1 + 0x221c) == fVar2) goto LAB_0034d394;
  }
  else {
    iVar5 = 0;
    piVar9 = DAT_0034d4a0;
    do {
      if (*(int *)(param_1 + 0x284) == *piVar9) {
        if (iVar5 != -1) goto LAB_0034d364;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar5 < 0x1e);
  }
  FUN_004895e4(param_2,param_1 + 0x254,*(undefined4 *)(param_1 + 0x17dc),
               *(undefined4 *)(param_1 + 0x2cc),DAT_0034d4a4);
LAB_0034d394:
  FUN_003705a0(fVar2,DAT_0034d4a8,param_1 + 0x2214);
  FUN_00489590(DAT_0034d4ac - *(float *)(param_1 + 0x2214),param_2,param_1 + 0x254,
               *(undefined4 *)(param_1 + 0x2cc),*(undefined4 *)(param_1 + 0x17dc));
  return 1;
}


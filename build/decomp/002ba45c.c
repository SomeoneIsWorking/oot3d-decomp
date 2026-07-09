// OoT3D decomp @ 002ba45c  name=FUN_002ba45c  size=2400

void FUN_002ba45c(int param_1,int *param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 int param_7,int param_8,undefined4 param_9,int param_10,int param_11)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  ushort *puVar12;
  uint *puVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  ushort *puVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  
  if (*param_2 != 0) {
    uVar4 = param_2[3];
    bVar26 = uVar4 == param_4;
    if (bVar26) {
      uVar4 = param_2[4];
    }
    bVar27 = bVar26 && uVar4 == param_5;
    if (bVar26 && uVar4 == param_5) {
      bVar27 = param_2[5] == param_6;
    }
    if (bVar27) {
      iVar5 = *(int *)(param_1 + 0x2c);
      bVar26 = iVar5 == param_11;
      if (bVar26) {
        iVar5 = param_2[0xd];
      }
      bVar27 = bVar26 && iVar5 == param_3;
      if (bVar26 && iVar5 == param_3) {
        bVar27 = param_2[6] == param_7;
      }
      if (bVar27) goto LAB_002ba53c;
    }
    FUN_00303738(*(undefined4 *)(param_1 + 0x2c),param_2);
    if (*param_2 != 0) goto LAB_002ba53c;
  }
  FUN_00302bcc(param_4,param_5,param_6,param_7,param_3,param_9,param_2);
  iVar5 = FUN_0045700c(param_11,param_2);
  if (iVar5 == 0) {
    return;
  }
LAB_002ba53c:
  if (param_8 != 0) {
    local_54 = param_2[8];
    local_58 = param_3;
    if (*(char *)(param_1 + 0x30) != '\0') {
      iVar5 = param_2[0xe] * param_4 * param_5;
      local_54 = (int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1d)) >> 3;
      local_58 = 1;
    }
    param_2[2] = param_8;
    if ((param_11 == 0x1010000 || param_11 == 0x1020000) || param_11 == 0x1030000) {
      if (param_10 == 0) {
        local_64 = 0;
        local_5c = 0;
        local_60 = param_5;
        if (0 < local_58) {
          do {
            uVar4 = 4;
            puVar20 = (uint *)(param_8 + local_64);
            iVar22 = param_2[1] + local_64;
            iVar5 = param_2[7];
            bVar26 = false;
            switch(iVar5) {
            case 0:
              break;
            case 1:
              uVar4 = 3;
              break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
              uVar4 = 2;
              break;
            case 7:
            case 8:
            case 9:
              uVar4 = 1;
              break;
            case 10:
            case 0xb:
              uVar4 = 1;
              bVar26 = true;
              break;
            case 0xc:
            case 0xd:
switchD_002ba648_caseD_c:
              param_6 = 0;
              iVar19 = (int)(param_4 + ((uint)((int)param_4 >> 0x1f) >> 0x1e)) >> 2;
              uVar25 = 0;
              uVar4 = (int)(local_60 + ((uint)((int)local_60 >> 0x1f) >> 0x1e)) >> 2;
              if (uVar4 != 0) {
                do {
                  if (iVar19 != 0) {
                    uVar6 = 0;
                    iVar16 = 0;
                    iVar18 = 0;
                    iVar21 = iVar19;
                    do {
                      uVar10 = (uVar6 & 1) + (uVar25 & 1) * 2 +
                               ((uVar6 >> 1) + ((uVar25 >> 1) * iVar19 >> 1)) * 4;
                      if ((uVar10 < iVar19 * uVar4) && (uVar25 * iVar19 + uVar6 < iVar19 * uVar4)) {
                        if (iVar5 == 0xc) {
                          iVar24 = iVar16 + uVar25 * iVar19 * 2;
                          puVar11 = (uint *)(iVar22 + uVar10 * 8);
                          *puVar11 = puVar20[iVar24];
                          puVar11[1] = puVar20[iVar24 + 1];
                        }
                        else {
                          iVar24 = iVar18 + uVar25 * iVar19 * 4;
                          puVar11 = (uint *)(iVar22 + uVar10 * 0x10);
                          *puVar11 = puVar20[iVar24];
                          puVar11[1] = puVar20[iVar24 + 1];
                          puVar11[2] = puVar20[iVar24 + 2];
                          puVar11[3] = puVar20[iVar24 + 3];
                        }
                      }
                      iVar21 = iVar21 + -1;
                      iVar16 = iVar16 + 2;
                      iVar18 = iVar18 + 4;
                      uVar6 = uVar6 + 1;
                    } while (iVar21 != 0);
                  }
                  uVar25 = uVar25 + 1;
                } while (uVar25 < uVar4);
              }
              goto LAB_002bac8c;
            default:
              if (iVar5 == 0xc || iVar5 == 0xd) goto switchD_002ba648_caseD_c;
            }
            iVar21 = 0;
            iVar19 = param_4 * local_60 * uVar4;
            if (bVar26) {
              iVar19 = iVar19 / 2;
            }
            if ((code *)*puRam002bae38 == (code *)0x0) {
              puVar11 = (uint *)0x0;
            }
            else {
              puVar11 = (uint *)(*(code *)*puRam002bae38)(0x10000,0x100,0,iVar19);
            }
            switch(iVar5) {
            case 0:
              iVar5 = param_4 * local_60;
              if (iVar5 < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = param_4 & local_60 & 1;
              }
              if (uVar25 == 1) {
                uVar6 = *puVar20;
                *puVar11 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                           | uVar6 >> 0x18;
              }
              if (iVar5 - uVar25 != 0 && (int)uVar25 <= iVar5) {
                do {
                  uVar6 = puVar20[uVar25];
                  puVar11[uVar25] =
                       uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18;
                  uVar6 = uVar25 + 2;
                  uVar10 = puVar20[uVar25 + 1];
                  puVar11[uVar25 + 1] =
                       uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                       | uVar10 >> 0x18;
                  uVar25 = uVar6;
                } while (iVar5 - uVar6 != 0 && (int)uVar6 <= iVar5);
              }
              break;
            case 1:
              iVar5 = param_4 * local_60;
              if (0 < iVar5) {
                puVar9 = puVar11;
                puVar12 = (ushort *)((int)puVar20 + 2);
                pbVar8 = (byte *)((int)puVar20 + 1);
                do {
                  bVar2 = *pbVar8;
                  uVar25 = *puVar20;
                  param_6 = (uint)(byte)uVar25;
                  *(byte *)puVar9 = (byte)*puVar12;
                  *(byte *)((int)puVar9 + 1) = bVar2;
                  iVar5 = iVar5 + -1;
                  *(byte *)((int)puVar9 + 2) = (byte)uVar25;
                  puVar9 = (uint *)((int)puVar9 + 3);
                  puVar12 = (ushort *)((int)puVar12 + 3);
                  puVar20 = (uint *)((int)puVar20 + 3);
                  pbVar8 = pbVar8 + 3;
                } while (iVar5 != 0);
              }
              break;
            case 2:
            case 3:
            case 4:
              iVar5 = param_4 * local_60;
              if (iVar5 < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = param_4 & local_60 & 1;
              }
              if (uVar25 == 1) {
                *(ushort *)puVar11 = (ushort)*puVar20;
              }
              if (iVar5 - uVar25 != 0 && (int)uVar25 <= iVar5) {
                do {
                  puVar17 = (ushort *)((int)puVar20 + uVar25 * 2);
                  puVar12 = (ushort *)((int)puVar11 + uVar25 * 2);
                  uVar25 = uVar25 + 2;
                  *puVar12 = *puVar17;
                  puVar12[1] = puVar17[1];
                } while (iVar5 - uVar25 != 0 && (int)uVar25 <= iVar5);
              }
              break;
            case 5:
            case 6:
              iVar5 = param_4 * local_60;
              if (iVar5 < 1) {
                uVar25 = 0;
              }
              else {
                uVar25 = param_4 & local_60 & 1;
              }
              if (uVar25 == 1) {
                *(ushort *)puVar11 = (ushort)*puVar20 << 8 | (ushort)*puVar20 >> 8;
              }
              if (iVar5 - uVar25 != 0 && (int)uVar25 <= iVar5) {
                do {
                  puVar17 = (ushort *)((int)puVar20 + uVar25 * 2);
                  puVar12 = (ushort *)((int)puVar11 + uVar25 * 2);
                  uVar3 = *puVar17;
                  uVar25 = uVar25 + 2;
                  *puVar12 = uVar3 << 8 | uVar3 >> 8;
                  uVar3 = puVar17[1];
                  puVar12[1] = uVar3 << 8 | uVar3 >> 8;
                } while (iVar5 - uVar25 != 0 && (int)uVar25 <= iVar5);
              }
              break;
            case 7:
            case 8:
            case 9:
              if (0 < (int)(param_4 * local_60)) {
                puVar9 = (uint *)((int)puVar20 + -1);
                puVar13 = (uint *)((int)puVar11 + -1);
                if ((param_4 & local_60 & 1) != 0) {
                  *(byte *)puVar11 = (byte)*puVar20;
                  puVar9 = puVar20;
                  puVar13 = puVar11;
                }
                bVar2 = *(byte *)((int)puVar9 + 1);
                for (iVar5 = (int)(param_4 * local_60) >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
                  bVar1 = *(byte *)((int)puVar9 + 2);
                  *(byte *)((int)puVar13 + 1) = bVar2;
                  bVar2 = *(byte *)((int)puVar9 + 3);
                  puVar13 = (uint *)((int)puVar13 + 2);
                  *(byte *)puVar13 = bVar1;
                  puVar9 = (uint *)((int)puVar9 + 2);
                }
              }
              break;
            case 10:
            case 0xb:
              iVar5 = param_4 * local_60;
              if (1 < iVar5) {
                iVar5 = iVar5 - (iVar5 >> 0x1f);
                puVar9 = (uint *)((int)puVar20 + -1);
                puVar13 = (uint *)((int)puVar11 + -1);
                if (iVar5 * 0x40000000 < 0) {
                  *(byte *)puVar11 = (byte)*puVar20;
                  puVar9 = puVar20;
                  puVar13 = puVar11;
                }
                bVar2 = *(byte *)((int)puVar9 + 1);
                for (iVar5 = iVar5 >> 2; iVar5 != 0; iVar5 = iVar5 + -1) {
                  bVar1 = *(byte *)((int)puVar9 + 2);
                  *(byte *)((int)puVar13 + 1) = bVar2;
                  bVar2 = *(byte *)((int)puVar9 + 3);
                  puVar13 = (uint *)((int)puVar13 + 2);
                  *(byte *)puVar13 = bVar1;
                  puVar9 = (uint *)((int)puVar9 + 2);
                }
              }
            }
            uVar25 = 0;
            if (local_60 != 0) {
              do {
                iVar5 = FUN_00339384(uVar25 * local_60,local_60);
                param_6 = (local_60 - uVar25) - 1;
                uVar6 = 0;
                if (param_4 != 0) {
                  do {
                    uVar23 = uVar6 + iVar21;
                    uVar10 = ((uVar23 >> 3) + ((param_6 >> 3) * param_4 >> 3)) * 0x40;
                    iVar19 = FUN_00339384(uVar6 * param_4,param_4);
                    uVar14 = 0;
                    uVar7 = 1;
                    do {
                      uVar14 = uVar14 + 1;
                      uVar10 = ((uVar23 & uVar7) + (param_6 & uVar7) * 2) * uVar7 + uVar10;
                      uVar7 = 1 << (uVar14 & 0xff);
                    } while ((int)uVar7 < 8);
                    uVar7 = iVar5 * param_4 + iVar19;
                    bVar28 = uVar10 <= param_4 * local_60;
                    bVar27 = param_4 * local_60 == uVar10;
                    if (bVar28 && !bVar27) {
                      bVar28 = uVar7 <= param_4 * local_60;
                      bVar27 = param_4 * local_60 == uVar7;
                    }
                    if (bVar28 && !bVar27) {
                      if (bVar26) {
                        pbVar8 = (byte *)(iVar22 + (uVar10 * uVar4 >> 1));
                        bVar2 = *(byte *)((int)puVar11 + (uVar7 * uVar4 >> 1));
                        if ((uVar6 & 1) == 0) {
                          *pbVar8 = bVar2 & 0xf | *pbVar8 & 0xf0;
                        }
                        else {
                          *pbVar8 = bVar2 & 0xf0 | *pbVar8 & 0xf;
                        }
                      }
                      else {
                        pbVar8 = (byte *)(uVar10 * uVar4 + iVar22);
                        puVar20 = (uint *)(uVar7 * uVar4 + (int)puVar11);
                        if (uVar4 != 0) {
                          puVar9 = (uint *)((int)puVar20 + -1);
                          pbVar15 = pbVar8 + -1;
                          if ((uVar4 & 1) != 0) {
                            *pbVar8 = (byte)*puVar20;
                            puVar9 = puVar20;
                            pbVar15 = pbVar8;
                          }
                          for (iVar19 = (int)uVar4 >> 1; iVar19 != 0; iVar19 = iVar19 + -1) {
                            pbVar15[1] = *(byte *)((int)puVar9 + 1);
                            puVar9 = (uint *)((int)puVar9 + 2);
                            pbVar15 = pbVar15 + 2;
                            *pbVar15 = *(byte *)puVar9;
                          }
                        }
                      }
                    }
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < param_4);
                }
                uVar25 = uVar25 + 1;
              } while (uVar25 < local_60);
            }
            if ((code *)*puRam002bae3c != (code *)0x0) {
              (*(code *)*puRam002bae3c)(0x10000,0x100,0,puVar11);
            }
LAB_002bac8c:
            iVar5 = param_4 * local_60;
            param_4 = (int)param_4 >> 1;
            iVar5 = param_2[0xe] * iVar5;
            local_64 = local_64 + ((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1d)) >> 3);
            local_60 = (int)local_60 >> 1;
            local_5c = local_5c + 1;
          } while (local_5c < local_58);
        }
      }
      else {
        FUN_0034338c(param_2[1],param_8,local_54);
      }
    }
    else if (param_11 == 0x2010000) {
      *param_2 = param_8;
    }
    iVar5 = param_11 + -0x1020000;
    if (iVar5 == 0 || iVar5 == 0x10000) {
      FUN_002df380(*param_2,param_2[1],local_54);
    }
    else {
      bVar26 = iVar5 != 0x1000000;
      if (bVar26) {
        iVar5 = param_11 + -0x2020000;
      }
      if (!bVar26 || iVar5 == 0x10000) {
        FUN_002df380(*param_2,param_2[2],local_54);
      }
    }
    if (param_11 == 0x1010000 || param_11 == 0x2010000) {
      FUN_00453f44(*param_2,local_54);
    }
    if (*(char *)(param_1 + 0x30) != '\0') {
      iVar5 = param_2[3];
      iVar22 = param_2[4];
      switch(param_2[7]) {
      case 0:
        param_6 = 0;
        break;
      case 1:
        param_6 = 1;
        break;
      case 2:
        param_6 = 3;
        break;
      case 3:
        param_6 = 2;
        break;
      case 4:
        param_6 = 4;
      }
      iVar21 = 1;
      iVar19 = *param_2;
      if (1 < param_2[0xd]) {
        do {
          iVar16 = param_2[0xe] * iVar5 * iVar22;
          iVar16 = iVar19 + ((int)(iVar16 + ((uint)(iVar16 >> 0x1f) >> 0x1d)) >> 3);
          FUN_002df3f4(iVar19,iVar16,iVar5,iVar22,param_6);
          iVar21 = iVar21 + 1;
          iVar5 = iVar5 >> 1;
          iVar22 = iVar22 >> 1;
          iVar19 = iVar16;
        } while (iVar21 < param_2[0xd]);
      }
    }
  }
  *(int *)(param_1 + 0x2c) = param_11;
  return;
}


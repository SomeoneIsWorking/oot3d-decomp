// OoT3D decomp @ 00420f58  name=FUN_00420f58  size=4348

void FUN_00420f58(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  short *psVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  short *psVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  code *pcVar26;
  undefined4 uVar27;
  int iVar28;
  int *piVar29;
  int iVar30;
  uint local_4c;
  uint local_44;

  puVar11 = DAT_00421ec4;
  iVar4 = param_4 + *(int *)(param_4 + 4) * 4;
  pcVar26 = (code *)*DAT_00421ec4;
  piVar5 = (int *)(uint)(pcVar26 != (code *)0x0);
  if (pcVar26 != (code *)0x0) {
    piVar5 = (int *)(*pcVar26)(0x10000,0x100,0,0x24);
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    piVar5[8] = 0;
    iVar6 = 0;
    if ((code *)*puVar11 != (code *)0x0) {
      iVar6 = (*(code *)*puVar11)(0x10000,0x100,0,*(int *)(iVar4 + 0x14) << 2);
    }
    *piVar5 = iVar6;
    piVar5[1] = *(int *)(iVar4 + 0x14);
    iVar6 = 0;
    if ((code *)*puVar11 != (code *)0x0) {
      iVar6 = (*(code *)*puVar11)(0x10000,0x100,0,*(int *)(iVar4 + 0x1c) << 2);
    }
    piVar5[2] = iVar6;
    piVar5[3] = *(int *)(iVar4 + 0x1c);
    puVar12 = (undefined4 *)*piVar5;
    if (puVar12 != (undefined4 *)0x0 && iVar6 != 0) {
      puVar7 = (undefined4 *)(*(int *)(iVar4 + 0x10) + iVar4 + 8);
      if (*(uint *)(iVar4 + 0x14) != 0) {
        puVar8 = puVar7 + -1;
        puVar13 = puVar12 + -1;
        if ((*(uint *)(iVar4 + 0x14) & 1) != 0) {
          *puVar12 = *puVar7;
          puVar8 = puVar7;
          puVar13 = puVar12;
        }
        uVar18 = puVar8[1];
        for (uVar17 = *(uint *)(iVar4 + 0x14) >> 1; uVar17 != 0; uVar17 = uVar17 - 1) {
          uVar27 = puVar8[2];
          puVar13[1] = uVar18;
          uVar18 = puVar8[3];
          puVar13 = puVar13 + 2;
          *puVar13 = uVar27;
          puVar8 = puVar8 + 2;
        }
      }
      puVar12 = (undefined4 *)(*(int *)(iVar4 + 0x18) + iVar4 + 8);
      if (*(uint *)(iVar4 + 0x1c) != 0) {
        uVar17 = *(uint *)(iVar4 + 0x1c) & 1;
        puVar7 = puVar12;
        if (uVar17 == 1) {
          puVar7 = puVar12 + 2;
          *(undefined4 *)piVar5[2] = *puVar12;
        }
        if (uVar17 < *(uint *)(iVar4 + 0x1c)) {
          do {
            iVar6 = uVar17 * 4;
            *(undefined4 *)(piVar5[2] + uVar17 * 4) = *puVar7;
            puVar12 = puVar7 + 2;
            uVar17 = uVar17 + 2;
            puVar7 = puVar7 + 4;
            *(undefined4 *)(piVar5[2] + iVar6 + 4) = *puVar12;
          } while (uVar17 < *(uint *)(iVar4 + 0x1c));
        }
      }
      iVar4 = 0;
      if ((code *)*puVar11 != (code *)0x0) {
        iVar4 = (*(code *)*puVar11)(0x10000,0x100,0,*(int *)(param_4 + 4) * 0xe8);
      }
      piVar5[4] = iVar4;
      piVar5[5] = *(int *)(param_4 + 4);
      if (iVar4 != 0) {
        FUN_00343280(iVar4,*(int *)(param_4 + 4) * 0xe8);
        local_44 = 0;
        if (*(int *)(param_4 + 4) != 0) {
          do {
            iVar4 = *(int *)(param_4 + 8 + local_44 * 4) + param_4;
            *(undefined1 *)(piVar5[4] + local_44 * 0xe8) = *(undefined1 *)(iVar4 + 6);
            *(byte *)(piVar5[4] + local_44 * 0xe8 + 1) = *(byte *)(iVar4 + 7) & 1;
            *(undefined1 *)(piVar5[4] + local_44 * 0xe8 + 2) = *(undefined1 *)(iVar4 + 0x14);
            *(undefined1 *)(piVar5[4] + local_44 * 0xe8 + 3) = *(undefined1 *)(iVar4 + 0x15);
            *(undefined1 *)(piVar5[4] + local_44 * 0xe8 + 4) = *(undefined1 *)(iVar4 + 0x16);
            *(undefined1 *)(piVar5[4] + local_44 * 0xe8 + 5) = *(undefined1 *)(iVar4 + 0x17);
            *(undefined2 *)(piVar5[4] + local_44 * 0xe8 + 6) = *(undefined2 *)(iVar4 + 0x10);
            *(undefined2 *)(piVar5[4] + local_44 * 0xe8 + 8) = *(undefined2 *)(iVar4 + 0x12);
            *(undefined4 *)(piVar5[4] + local_44 * 0xe8 + 0x14) = *(undefined4 *)(iVar4 + 8);
            *(undefined4 *)(piVar5[4] + local_44 * 0xe8 + 0x18) = *(undefined4 *)(iVar4 + 0xc);
            iVar6 = *(int *)(iVar4 + 0x18) + iVar4;
            if (*(uint *)(iVar4 + 0x1c) != 0) {
              uVar17 = *(uint *)(iVar4 + 0x1c) & 1;
              uVar14 = 0;
              if (uVar17 != 0) {
                iVar19 = local_44 * 0xe8 + 0x34;
                do {
                  if (*(short *)(iVar6 + uVar14 * 0x14) == 2) {
                    *(int *)(piVar5[4] + iVar19) = *(int *)(piVar5[4] + iVar19) + 1;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar17);
              }
              if (uVar17 < *(uint *)(iVar4 + 0x1c)) {
                iVar19 = local_44 * 0xe8 + 0x34;
                do {
                  psVar20 = (short *)(iVar6 + uVar17 * 0x14);
                  if (*psVar20 == 2) {
                    *(int *)(piVar5[4] + iVar19) = *(int *)(piVar5[4] + iVar19) + 1;
                  }
                  if (psVar20[10] == 2) {
                    *(int *)(piVar5[4] + iVar19) = *(int *)(piVar5[4] + iVar19) + 1;
                  }
                  uVar17 = uVar17 + 2;
                } while (uVar17 < *(uint *)(iVar4 + 0x1c));
              }
            }
            iVar19 = local_44 * 0xe8 + 0x34;
            if (*(int *)(piVar5[4] + iVar19) != 0) {
              if ((code *)*DAT_00421ec4 == (code *)0x0) {
                iVar9 = 0;
              }
              else {
                iVar9 = (*(code *)*DAT_00421ec4)(0x10000,0x100,0,*(int *)(piVar5[4] + iVar19) << 4);
              }
              *(int *)(piVar5[4] + local_44 * 0xe8 + 0x30) = iVar9;
              if (iVar9 == 0) break;
              *(undefined4 *)(piVar5[4] + iVar19) = 0;
            }
            uVar17 = 0;
            if (*(int *)(iVar4 + 0x1c) != 0) {
              iVar28 = local_44 * 0xe8 + 0x1c;
              iVar9 = local_44 * 0xe8 + 0x30;
              do {
                psVar20 = (short *)(iVar6 + uVar17 * 0x14);
                sVar2 = *psVar20;
                if (sVar2 == 0) {
                  if (*(int *)(psVar20 + 2) != 0) {
                    *(uint *)(piVar5[4] + iVar28) =
                         *(uint *)(piVar5[4] + iVar28) | 1 << ((ushort)psVar20[1] & 0xff);
                  }
                }
                else if (sVar2 == 1) {
                  if ((ushort)psVar20[1] < 4) {
                    *(undefined4 *)
                     (piVar5[4] + local_44 * 0xe8 + (uint)(ushort)psVar20[1] * 4 + 0x20) =
                         *(undefined4 *)(psVar20 + 2);
                  }
                }
                else if (sVar2 == 2) {
                  *(uint *)(*(int *)(piVar5[4] + iVar9) + *(int *)(piVar5[4] + iVar19) * 0x10) =
                       (uint)(ushort)psVar20[1];
                  *(uint *)(*(int *)(piVar5[4] + iVar9) + *(int *)(piVar5[4] + iVar19) * 0x10 + 4) =
                       *(int *)(psVar20 + 8) << 8 | *(uint *)(psVar20 + 6) >> 0x10;
                  *(uint *)(*(int *)(piVar5[4] + iVar9) + *(int *)(piVar5[4] + iVar19) * 0x10 + 8) =
                       *(int *)(psVar20 + 6) << 0x10 | *(uint *)(psVar20 + 4) >> 8;
                  *(uint *)(*(int *)(piVar5[4] + iVar9) + *(int *)(piVar5[4] + iVar19) * 0x10 + 0xc)
                       = *(uint *)(psVar20 + 2) | *(int *)(psVar20 + 4) << 0x18;
                  *(int *)(piVar5[4] + iVar19) = *(int *)(piVar5[4] + iVar19) + 1;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(uint *)(iVar4 + 0x1c));
            }
            iVar6 = local_44 * 0xe8 + 0xc;
            *(undefined4 *)(piVar5[4] + iVar6) = 0;
            uVar17 = 0;
            do {
              if (((uint)*(ushort *)(iVar4 + 0x10) & 1 << (uVar17 & 0xff)) != 0) {
                *(int *)(piVar5[4] + iVar6) = *(int *)(piVar5[4] + iVar6) + 1;
              }
              if (((uint)*(ushort *)(iVar4 + 0x10) & 1 << (uVar17 + 1 & 0xff)) != 0) {
                *(int *)(piVar5[4] + iVar6) = *(int *)(piVar5[4] + iVar6) + 1;
              }
              uVar17 = uVar17 + 2;
            } while (uVar17 < 0x10);
            iVar6 = local_44 * 0xe8 + 0x10;
            uVar17 = 0;
            *(undefined4 *)(piVar5[4] + iVar6) = 0;
            do {
              if (((uint)*(ushort *)(iVar4 + 0x12) & 1 << (uVar17 & 0xff)) != 0) {
                *(int *)(piVar5[4] + iVar6) = *(int *)(piVar5[4] + iVar6) + 1;
              }
              if (((uint)*(ushort *)(iVar4 + 0x12) & 1 << (uVar17 + 1 & 0xff)) != 0) {
                *(int *)(piVar5[4] + iVar6) = *(int *)(piVar5[4] + iVar6) + 1;
              }
              uVar18 = DAT_00421ec8;
              uVar17 = uVar17 + 2;
            } while (uVar17 < 0x10);
            psVar20 = (short *)(*(int *)(iVar4 + 0x28) + iVar4);
            iVar6 = *(int *)(iVar4 + 0x2c);
            uVar17 = (uint)*(ushort *)(iVar4 + 0x12);
            if (iVar6 != 0) {
              puVar15 = (ushort *)(psVar20 + 1);
              psVar10 = psVar20;
              do {
                sVar2 = *psVar10;
                psVar10 = psVar10 + 4;
                if (sVar2 == 9) {
                  uVar17 = uVar17 & ~(1 << (*puVar15 & 0xff));
                }
                puVar15 = puVar15 + 4;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            puVar11 = (undefined4 *)(piVar5[4] + iVar19 + 4);
            *puVar11 = DAT_00421ec8;
            local_4c = 3;
            do {
              puVar11[1] = uVar18;
              puVar11 = puVar11 + 2;
              *puVar11 = uVar18;
              local_4c = local_4c + -1;
            } while (local_4c != 0);
            local_4c = 0;
            uVar14 = 0;
            uVar23 = 0;
            if (*(int *)(iVar4 + 0x2c) != 0) {
              do {
                iVar9 = 0;
                iVar6 = 0;
                iVar19 = 0;
                switch(psVar20[local_4c * 4]) {
                case 1:
                  iVar19 = 4;
                  break;
                case 2:
                  iVar19 = 8;
                  break;
                case 3:
                  iVar19 = 0xc;
                  break;
                case 4:
                  iVar19 = 0x10;
                  break;
                case 5:
                  iVar19 = 0xe;
                  break;
                case 6:
                  iVar19 = 0x16;
                  break;
                case 8:
                  iVar19 = 0x12;
                  break;
                case 9:
                  goto switchD_00421620_caseD_9;
                }
                uVar14 = 0;
                psVar10 = psVar20 + local_4c * 4;
                if ((ushort)psVar10[1] != 0) {
                  do {
                    if ((uVar17 >> (uVar14 & 0xff) & 1) != 0) {
                      iVar9 = iVar9 + 1;
                    }
                    uVar14 = uVar14 + 1;
                  } while ((ushort)psVar10[1] != uVar14);
                }
                uVar14 = 0;
                iVar28 = local_44 * 0xe8 + 0x54;
                iVar9 = iVar9 * 4 + 0x38;
                do {
                  if (((uint)(ushort)psVar10[2] & 1 << (uVar14 & 0xff)) != 0) {
                    iVar22 = piVar5[4] + local_44 * 0xe8;
                    iVar6 = iVar6 + 1;
                    uVar23 = *(uint *)(iVar22 + iVar9) & ~(0xff << (uVar14 << 3 & 0xff));
                    *(uint *)(iVar22 + iVar9) = uVar23;
                    *(uint *)(piVar5[4] + local_44 * 0xe8 + iVar9) =
                         uVar23 | iVar19 << (uVar14 << 3 & 0xff);
                    if (iVar19 == 0xe) {
                      iVar22 = piVar5[4];
                      uVar23 = *(uint *)(iVar22 + iVar28) | 0x200;
LAB_0042179c:
                      *(uint *)(iVar22 + iVar28) = uVar23;
                    }
                    else {
                      if (0xe < iVar19) {
                        if (iVar19 == 0x10) {
                          iVar22 = piVar5[4];
                          uVar23 = *(uint *)(iVar22 + iVar28) | 0x10000;
                        }
                        else {
                          if (iVar19 == 0x12) goto LAB_004217a4;
                          if (iVar19 != 0x16) goto LAB_004217b4;
                          iVar22 = piVar5[4];
                          uVar23 = *(uint *)(iVar22 + iVar28) | 0x400;
                        }
                        goto LAB_0042179c;
                      }
                      if (iVar19 == 2) {
                        iVar22 = piVar5[4];
                        uVar23 = *(uint *)(iVar22 + iVar28) | 1;
                        goto LAB_0042179c;
                      }
                      if (iVar19 != 4) {
                        if (iVar19 == 8) {
                          iVar22 = piVar5[4];
                          uVar23 = *(uint *)(iVar22 + iVar28) | 2;
                        }
                        else {
                          if (iVar19 != 0xc) goto LAB_004217b4;
                          iVar22 = piVar5[4];
                          uVar23 = *(uint *)(iVar22 + iVar28) | 0x100;
                        }
                        goto LAB_0042179c;
                      }
LAB_004217a4:
                      *(uint *)(piVar5[4] + iVar28) = *(uint *)(piVar5[4] + iVar28) | 0x1000000;
                    }
LAB_004217b4:
                    iVar19 = iVar19 + 1;
                  }
                  switch(*psVar10) {
                  case 3:
                  case 5:
                  case 6:
                    if (iVar6 == 2) {
LAB_00421804:
                      uVar14 = 4;
                    }
                    break;
                  case 4:
                    if (iVar6 == 1) goto LAB_00421804;
                    break;
                  case 8:
                    if (iVar6 == 3) goto LAB_00421804;
                  }
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 < 4);
switchD_00421620_caseD_9:
                local_4c = local_4c + 1;
                uVar14 = *(uint *)(iVar4 + 0x2c);
                uVar23 = local_4c;
              } while (local_4c < uVar14);
            }
            local_4c = uVar23;
            puVar11 = DAT_00421ec4;
            if (uVar14 != local_4c) break;
            if ((code *)*DAT_00421ec4 == (code *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = (*(code *)*DAT_00421ec4)(0x10000,0x100,0,*(undefined4 *)(iVar4 + 0x3c));
            }
            iVar19 = local_44 * 0xe8 + 0xe0;
            *(int *)(piVar5[4] + iVar19) = iVar6;
            if (iVar6 == 0) break;
            FUN_0034338c(iVar6,*(int *)(iVar4 + 0x38) + iVar4,*(undefined4 *)(iVar4 + 0x3c));
            *(undefined4 *)(piVar5[4] + local_44 * 0xe8 + 0xe4) = *(undefined4 *)(iVar4 + 0x3c);
            iVar6 = *(int *)(iVar4 + 0x30) + iVar4;
            if (*(uint *)(iVar4 + 0x34) != 0) {
              uVar17 = *(uint *)(iVar4 + 0x34) & 1;
              uVar14 = 0;
              if (uVar17 != 0) {
                iVar9 = local_44 * 0xe8 + 0x5c;
                do {
                  if (0xf < *(ushort *)(iVar6 + uVar14 * 8 + 4)) {
                    *(int *)(piVar5[4] + iVar9) = *(int *)(piVar5[4] + iVar9) + 1;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar17);
              }
              if (uVar17 < *(uint *)(iVar4 + 0x34)) {
                iVar9 = local_44 * 0xe8 + 0x5c;
                do {
                  iVar28 = iVar6 + uVar17 * 8;
                  if (0xf < *(ushort *)(iVar28 + 4)) {
                    *(int *)(piVar5[4] + iVar9) = *(int *)(piVar5[4] + iVar9) + 1;
                  }
                  if (0xf < *(ushort *)(iVar28 + 0xc)) {
                    *(int *)(piVar5[4] + iVar9) = *(int *)(piVar5[4] + iVar9) + 1;
                  }
                  uVar17 = uVar17 + 2;
                } while (uVar17 < *(uint *)(iVar4 + 0x34));
              }
            }
            iVar9 = local_44 * 0xe8 + 0x5c;
            if (*(int *)(piVar5[4] + iVar9) != 0) {
              if ((code *)*puVar11 == (code *)0x0) {
                iVar28 = 0;
              }
              else {
                iVar28 = (*(code *)*puVar11)(0x10000,0x100,0,*(int *)(piVar5[4] + iVar9) * 0x14);
              }
              *(int *)(piVar5[4] + local_44 * 0xe8 + 0x58) = iVar28;
              if (iVar28 == 0) break;
              *(undefined4 *)(piVar5[4] + iVar9) = 0;
            }
            uVar17 = 0;
            if (*(int *)(iVar4 + 0x34) != 0) {
              iVar28 = local_44 * 0xe8 + 0x58;
              do {
                iVar25 = piVar5[4];
                piVar29 = (int *)(iVar6 + uVar17 * 8);
                iVar16 = 0;
                iVar22 = -1;
                iVar30 = 0;
                pcVar21 = (char *)(*piVar29 + *(int *)(iVar25 + iVar19));
                iVar24 = iVar22;
                if (*pcVar21 == '\0') {
LAB_00421a6c:
                  iVar16 = 4;
                }
                else {
                  do {
                    cVar3 = pcVar21[iVar30];
                    iVar22 = iVar30;
                    if ((cVar3 != '.') && (iVar22 = iVar24, iVar24 != -1)) {
                      if (((cVar3 == 'x' || cVar3 == 'y') || cVar3 == 'z') || cVar3 == 'w') {
                        iVar16 = iVar16 + 1;
                      }
                      if (((cVar3 != 'x' && cVar3 != 'y') && cVar3 != 'z') && cVar3 != 'w') {
                        iVar16 = 0;
                        iVar22 = -1;
                      }
                    }
                    iVar30 = iVar30 + 1;
                    iVar24 = iVar22;
                  } while (pcVar21[iVar30] != '\0');
                  if (iVar16 == 0) goto LAB_00421a6c;
                }
                uVar14 = (uint)*(ushort *)((int)piVar29 + 6);
                if (uVar14 < 0x10) {
                  uVar23 = (uint)*(ushort *)(piVar29 + 1);
                  iVar24 = uVar14 - uVar23;
                  if (uVar14 == uVar23) {
                    if (iVar16 == 1) {
                      *(undefined4 *)(iVar25 + local_44 * 0xe8 + uVar23 * 8 + 0x60) = DAT_00421ed4;
                    }
                    else if (iVar16 == 2) {
                      *(undefined4 *)(iVar25 + local_44 * 0xe8 + uVar23 * 8 + 0x60) = DAT_00421ed8;
                    }
                    else if (iVar16 == 3) {
                      *(undefined4 *)(iVar25 + local_44 * 0xe8 + uVar23 * 8 + 0x60) = DAT_00421edc;
                    }
                    else if (iVar16 == 4) {
                      *(undefined4 *)(iVar25 + local_44 * 0xe8 + uVar23 * 8 + 0x60) = DAT_00421ed0;
                    }
                  }
                  else if (iVar24 == 1) {
                    *(undefined4 *)(iVar25 + local_44 * 0xe8 + uVar23 * 8 + 0x60) = DAT_00421ee0;
                  }
                  else if (iVar24 == 2) {
                    *(undefined4 *)(iVar25 + local_44 * 0xe8 + uVar23 * 8 + 0x60) = DAT_00421ee4;
                  }
                  else if (iVar24 == 3) {
                    *(undefined4 *)(iVar25 + local_44 * 0xe8 + uVar23 * 8 + 0x60) = DAT_00421ecc;
                  }
                  *(int *)(piVar5[4] + local_44 * 0xe8 + (uint)*(ushort *)(piVar29 + 1) * 8 + 100) =
                       *piVar29;
                  if (iVar22 != -1) {
                    pcVar21[iVar22] = '\0';
                  }
                }
                else if (uVar14 < 0x70) {
                  uVar14 = (uVar14 - *(ushort *)(piVar29 + 1)) + 1;
                  *(uint *)(*(int *)(iVar25 + iVar28) + *(int *)(iVar25 + iVar9) * 0x14 + 0x10) =
                       uVar14;
                  if (iVar16 == 1) {
                    *(undefined4 *)
                     (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14) =
                         DAT_00421ed4;
                  }
                  else if (iVar16 == 2) {
                    if ((uVar14 & 1) == 0) {
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14) =
                           DAT_00421ee0;
                    }
                    else {
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14) =
                           DAT_00421ed8;
                    }
                  }
                  else if (iVar16 == 3) {
                    iVar24 = (int)((ulonglong)((longlong)DAT_00421ee8 * (longlong)(int)uVar14) >>
                                  0x20);
                    if ((iVar24 - (iVar24 >> 0x1f)) * -3 + uVar14 == 0) {
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14) =
                           DAT_00421ee4;
                    }
                    else {
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14) =
                           DAT_00421edc;
                    }
                  }
                  else if (iVar16 == 4) {
                    if ((uVar14 & 3) == 0) {
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14) =
                           DAT_00421ecc;
                    }
                    else {
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14) =
                           DAT_00421ed0;
                    }
                  }
                  *(uint *)(*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 4) =
                       *(ushort *)(piVar29 + 1) - 0x10;
                  if (iVar22 == -1) {
                    *(undefined4 *)
                     (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 8) = 0;
                  }
                  else {
                    cVar3 = pcVar21[iVar22 + 1];
                    if (cVar3 == 'w') {
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 8) = 3;
                    }
                    else if (cVar3 == 'x') {
LAB_00421d18:
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 8) = 0;
                    }
                    else if (cVar3 == 'y') {
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 8) = 1;
                    }
                    else {
                      if (cVar3 != 'z') goto LAB_00421d18;
                      *(undefined4 *)
                       (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 8) = 2;
                    }
                    pcVar21[iVar22] = '\0';
                  }
                  *(int *)(*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 0xc)
                       = *piVar29;
                  *(int *)(piVar5[4] + iVar9) = *(int *)(piVar5[4] + iVar9) + 1;
                }
                else if (uVar14 < 0x78) {
                  *(undefined4 *)(*(int *)(iVar25 + iVar28) + *(int *)(iVar25 + iVar9) * 0x14) =
                       DAT_00421eec;
                  *(uint *)(*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 4) =
                       *(ushort *)(piVar29 + 1) - 0x70;
                  *(undefined4 *)
                   (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 8) = 0;
                  *(int *)(*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 0xc)
                       = *piVar29;
                  *(uint *)(*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 0x10
                           ) = ((uint)*(ushort *)((int)piVar29 + 6) - (uint)*(ushort *)(piVar29 + 1)
                               ) + 1;
                  *(int *)(piVar5[4] + iVar9) = *(int *)(piVar5[4] + iVar9) + 1;
                }
                else {
                  *(undefined4 *)(*(int *)(iVar25 + iVar28) + *(int *)(iVar25 + iVar9) * 0x14) =
                       DAT_004220c0;
                  *(uint *)(*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 4) =
                       *(ushort *)(piVar29 + 1) - 0x78;
                  *(undefined4 *)
                   (*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 8) = 0;
                  *(int *)(*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 0xc)
                       = *piVar29;
                  *(uint *)(*(int *)(piVar5[4] + iVar28) + *(int *)(piVar5[4] + iVar9) * 0x14 + 0x10
                           ) = ((uint)*(ushort *)((int)piVar29 + 6) - (uint)*(ushort *)(piVar29 + 1)
                               ) + 1;
                  *(int *)(piVar5[4] + iVar9) = *(int *)(piVar5[4] + iVar9) + 1;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(uint *)(iVar4 + 0x34));
            }
            local_44 = local_44 + 1;
          } while (local_44 < *(uint *)(param_4 + 4));
        }
        iVar4 = DAT_004220c4;
        if (*(uint *)(param_4 + 4) == local_44) {
          iVar6 = 0;
          if (0 < param_1) {
            do {
              uVar17 = *(uint *)(param_2 + iVar6 * 4);
              piVar29 = *(int **)(*(int *)(iVar4 + 8) + (uVar17 & 0x1ff) * 4 + 0x808);
              if (piVar29 != (int *)0x0) {
                do {
                  puVar1 = (uint *)(piVar29 + 2);
                  if (*puVar1 != uVar17) {
                    piVar29 = (int *)piVar29[6];
                  }
                } while (*puVar1 != uVar17 && piVar29 != (int *)0x0);
              }
              iVar19 = *piVar29;
              if (iVar19 != 0) {
                iVar9 = *(int *)(iVar19 + 0x18) + -1;
                *(int *)(iVar19 + 0x18) = iVar9;
                if (iVar9 == 0) {
                  FUN_003030cc(*piVar29);
                }
              }
              *piVar29 = (int)piVar5;
              piVar29[1] = iVar6;
              iVar6 = iVar6 + 1;
            } while (iVar6 < param_1);
          }
          piVar5[6] = param_1;
          piVar5[7] = 0;
          iVar4 = *(int *)(iVar4 + 8);
          piVar5[8] = *(int *)(iVar4 + 0x1008);
          if (*(int *)(iVar4 + 0x1008) != 0) {
            *(int **)(*(int *)(iVar4 + 0x1008) + 0x1c) = piVar5;
          }
          *(int **)(iVar4 + 0x1008) = piVar5;
        }
      }
    }
  }
  return;
}

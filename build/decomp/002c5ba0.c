// OoT3D decomp @ 002c5ba0  name=FUN_002c5ba0  size=8964

void FUN_002c5ba0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined1 *puVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int extraout_r1;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  uint in_fpscr;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  local_5c = 0;
  FUN_00470758(auStack_40,param_3,4);
  FUN_00470758(auStack_44,param_3 + 4,2);
  FUN_00470758(auStack_48,param_3 + 6,2);
  FUN_00470758(&local_4c,param_3 + 8,4);
  FUN_00470758(&local_58,param_3 + 0xc,4);
  local_30 = param_1 + 0x2298;
  *(int *)(param_2 + 0x18) = local_58;
  if ((local_58 < (int)(uint)*(ushort *)(param_2 + 0x20)) && (*(char *)(param_2 + 8) != '\x04')) {
    *(int *)(param_1 + 0x22ac) = *(int *)(param_1 + 0x22ac) + 1;
    iVar8 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_1 + 0x22bc));
    if ((iVar8 != 0) && (*(short *)(DAT_002c5ff0 + iVar8) == 0x25)) {
      FUN_00367c48();
      *(undefined1 *)(param_1 + 0x22a8) = 0;
    }
    *(undefined1 *)(local_30 + 8) = 3;
  }
  else {
    iVar8 = FUN_00307650();
    if ((*(char *)(iVar8 + 0xc) != '\0') &&
       ((*(char *)(local_30 + 0x278) == '\0' &&
        (iVar8 = FUN_00492e74(param_1,*(undefined4 *)(local_30 + 0x18)), iVar8 != 0)))) {
      *(undefined1 *)(local_30 + 0x10) = 1;
      *(undefined1 *)(local_30 + 0x278) = 1;
    }
    fVar4 = DAT_002c5ffc;
    fVar3 = DAT_002c5ff4;
    local_3c = 0;
    if (0 < local_4c) {
      local_34 = DAT_002c5ff8;
      puVar17 = (uint *)(param_3 + 0x10);
      while( true ) {
        FUN_00470758(&local_50,puVar17,4);
        puVar20 = puVar17 + 1;
        if (local_50 == -1) break;
        if (local_50 == 0x4b) {
switchD_002c5d58_caseD_1d:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                 (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                *(uint **)(param_2 + 0x50) = puVar20;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          goto switchD_002c5d58_caseD_0;
        }
        if (0x4b < local_50) {
          if (local_50 == 0x78) goto switchD_002c5d58_caseD_e;
          if (local_50 < 0x79) {
            switch(local_50) {
            case 0x4c:
            case 0x55:
            case 0x5d:
            case 0x69:
            case 0x6b:
            case 0x6e:
            case 0x77:
              goto switchD_002c5d58_caseD_f;
            case 0x4d:
            case 0x54:
            case 0x5a:
switchD_002c5d58_caseD_2c:
              FUN_00470758(&local_54,puVar20,4);
              puVar20 = puVar17 + 2;
              iVar8 = 0;
              if (0 < (int)local_54) {
                do {
                  if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                     (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                    *(uint **)(param_2 + 0x58) = puVar20;
                  }
                  puVar20 = puVar20 + 0xc;
                  iVar8 = (int)(short)((short)iVar8 + 1);
                } while (iVar8 < (int)local_54);
              }
              break;
            case 0x4e:
            case 0x50:
            case 0x5e:
            case 0x74:
            case 0x76:
              goto switchD_002c5d58_caseD_e;
            case 0x4f:
            case 0x53:
              goto switchD_002c5d58_caseD_1e;
            case 0x51:
            case 0x6a:
            case 0x75:
              goto switchD_002c5d58_caseD_19;
            case 0x52:
            case 0x6c:
              goto switchD_002c5d58_caseD_1d;
            case 0x56:
              FUN_00470758(&local_54,puVar20,4);
              puVar20 = puVar17 + 2;
              iVar8 = 0;
              if (0 < (int)local_54) {
                do {
                  if (*(ushort *)(param_2 + 0x20) == *(ushort *)((int)puVar20 + 2)) {
                    FUN_00490ea4(CONCAT22((ushort)*puVar20,(ushort)puVar20[1]));
                  }
                  puVar20 = puVar20 + 0xc;
                  iVar8 = (int)(short)((short)iVar8 + 1);
                } while (iVar8 < (int)local_54);
              }
              break;
            case 0x57:
              FUN_00470758(&local_54,puVar20,4);
              puVar20 = puVar17 + 2;
              iVar8 = 0;
              if (0 < (int)local_54) {
                do {
                  if (*(ushort *)(param_2 + 0x20) == *(ushort *)((int)puVar20 + 2)) {
                    FUN_00490e50(((ushort)*puVar20 & 0xff) - 1);
                  }
                  puVar20 = puVar20 + 0xc;
                  iVar8 = (int)(short)((short)iVar8 + 1);
                } while (iVar8 < (int)local_54);
              }
              break;
            case 0x58:
            case 0x73:
              goto switchD_002c5d58_caseD_1f;
            case 0x59:
            case 0x6f:
            case 0x72:
              goto switchD_002c5d58_caseD_31;
            default:
              goto switchD_002c5d58_caseD_b;
            }
          }
          else {
            if (local_50 == 0x88) goto switchD_002c5d58_caseD_2c;
            if (local_50 < 0x89) {
              switch(local_50) {
              case 0x79:
              case 0x7e:
              case 0x84:
                goto switchD_002c5d58_caseD_19;
              default:
                goto switchD_002c5d58_caseD_b;
              case 0x7b:
                goto switchD_002c5d58_caseD_f;
              case 0x7c:
                FUN_00470758(&local_54,puVar20,4);
                puVar20 = puVar17 + 2;
                iVar8 = 0;
                if (0 < (int)local_54) {
                  do {
                    if ((*(ushort *)(param_2 + 0x20) == *(ushort *)((int)puVar20 + 2)) &&
                       (*(ushort *)(param_2 + 0x20) < (ushort)puVar20[1])) {
                      FUN_003655d0((ushort)*puVar20 == 3,
                                   (ushort)puVar20[1] - *(ushort *)((int)puVar20 + 2) & 0xff);
                    }
                    puVar20 = puVar20 + 0xc;
                    iVar8 = (int)(short)((short)iVar8 + 1);
                  } while (iVar8 < (int)local_54);
                }
                break;
              case 0x7d:
              case 0x83:
                goto switchD_002c5d58_caseD_e;
              case 0x7f:
              case 0x85:
                goto switchD_002c5d58_caseD_1d;
              case 0x80:
              case 0x87:
                goto switchD_002c5d58_caseD_1e;
              case 0x81:
                goto switchD_002c5d58_caseD_2c;
              case 0x82:
                goto switchD_002c5d58_caseD_1f;
              case 0x86:
                goto switchD_002c5d58_caseD_31;
              }
            }
            else if (local_50 == 0x8f) {
              FUN_00470758(&local_54,puVar20,4);
              puVar20 = puVar17 + 2;
              iVar8 = 0;
              if (0 < (int)local_54) {
                do {
                  if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                     (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                    *(uint **)(param_2 + 0x68) = puVar20;
                  }
                  puVar20 = puVar20 + 0xc;
                  iVar8 = (int)(short)((short)iVar8 + 1);
                } while (iVar8 < (int)local_54);
              }
            }
            else if (local_50 < 0x90) {
              switch(local_50) {
              case 0x89:
                goto switchD_002c5d58_caseD_1f;
              case 0x8a:
              case 0x8b:
                goto switchD_002c5d58_caseD_f;
              case 0x8c:
                FUN_00470758(&local_54,puVar20,4);
                piVar5 = DAT_002c6550;
                puVar20 = puVar17 + 2;
                iVar8 = 0;
                if (0 < (int)local_54) {
                  do {
                    if (*(ushort *)(param_2 + 0x20) == *(ushort *)((int)puVar20 + 2)) {
                      fVar26 = (float)VectorUnsignedToFloat
                                                ((uint)*(byte *)((int)puVar20 + 6),
                                                 (byte)(in_fpscr >> 0x15) & 3);
                      fVar25 = (float)VectorUnsignedToFloat
                                                (*(byte *)((int)puVar20 + 7) + 1,
                                                 (byte)(in_fpscr >> 0x15) & 3);
                      sVar15 = (short)(int)(fVar26 * fVar3 * fVar4) + (short)(int)(fVar25 * fVar4);
                      *(short *)(piVar5 + 3) = sVar15;
                      *(short *)(local_34 + 0xa8) = sVar15;
                    }
                    puVar20 = puVar20 + 3;
                    iVar8 = (int)(short)((short)iVar8 + 1);
                  } while (iVar8 < (int)local_54);
                }
                break;
              case 0x8d:
                goto switchD_002c5d58_caseD_e;
              case 0x8e:
                goto switchD_002c5d58_caseD_31;
              default:
                goto switchD_002c5d58_caseD_b;
              }
            }
            else if (local_50 == 0x96) {
              puVar20 = puVar17 + (uint)*(ushort *)((int)puVar17 + 10) * 8 + 3;
            }
            else if (local_50 < 0x97) {
              if (local_50 == 0x90) goto switchD_002c5d58_caseD_f;
              if (local_50 == 0x91) {
                FUN_00470758(&local_54,puVar20,4);
                puVar20 = puVar17 + 2;
                iVar8 = 0;
                if (0 < (int)local_54) {
                  do {
                    if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                       (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                      *(uint **)(param_2 + 0x6c) = puVar20;
                    }
                    puVar20 = puVar20 + 0xc;
                    iVar8 = (int)(short)((short)iVar8 + 1);
                  } while (iVar8 < (int)local_54);
                }
              }
              else {
                if (local_50 != 0x92) goto switchD_002c5d58_caseD_b;
                FUN_00470758(&local_54,puVar20,4);
                puVar20 = puVar17 + 2;
                iVar8 = 0;
                if (0 < (int)local_54) {
                  do {
                    if ((*(ushort *)(param_2 + 0x20) == *(ushort *)((int)puVar20 + 2)) &&
                       (puVar11 = *(undefined4 **)(param_2 + 0x27c), puVar11 != (undefined4 *)0x0))
                    {
                      (**(code **)*puVar11)(puVar11,puVar20);
                    }
                    puVar20 = puVar20 + 0xc;
                    iVar8 = (int)(short)((short)iVar8 + 1);
                  } while (iVar8 < (int)local_54);
                }
              }
            }
            else if (local_50 == 0x97) {
              local_60 = *puVar20;
              FUN_00494600(param_2 + 0x88,puVar17 + 2);
              iVar8 = DAT_002c8118;
              uVar18 = (uint)*(ushort *)(param_2 + 0x20);
              iVar22 = -1;
              if (((*(uint *)(DAT_002c8118 + 0x14) & 1) == 0) &&
                 (iVar13 = FUN_003679b4(DAT_002c8118 + 0x14), iVar13 != 0)) {
                *(uint *)(iVar8 + 0x18) = (uint)*(ushort *)(param_2 + 0x20);
              }
              iVar13 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
              if (*(short *)(iVar13 + 0x18a) != 0x25) {
                FUN_002c41c4(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),0x25);
                FUN_00320d7c(param_1,(int)*(short *)(iVar8 + 8),1);
                FUN_00320d7c(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),7);
                iVar13 = extraout_r1;
                if ((*DAT_002c8120 & 1) == 0) {
                  uVar28 = FUN_003679b4(DAT_002c8120);
                  iVar13 = (int)((ulonglong)uVar28 >> 0x20);
                  if ((int)uVar28 != 0) {
                    FUN_0031ff30(DAT_002c8124);
                    iVar13 = DAT_002c812c;
                  }
                }
                FUN_00437ff4(DAT_002c8124,iVar13);
              }
              iVar14 = FUN_0032b69c(param_2 + 0x88);
              puVar20 = DAT_002c8120;
              iVar13 = 0;
              if (0 < iVar14) {
                do {
                  iVar16 = *(int *)(*(int *)(param_2 + 0x88) + 0x18 + iVar13 * 4) +
                           *(int *)(param_2 + 0x88);
                  if ((*(int *)(iVar16 + 8) < (int)uVar18) && ((int)uVar18 < *(int *)(iVar16 + 0xc))
                     ) {
                    iVar22 = iVar13;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < iVar14);
              }
              if (*(int *)(param_2 + 0x84) == iVar22) {
                *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
              }
              else {
                *(uint *)(iVar8 + 0x18) = uVar18;
                *(int *)(param_2 + 0x84) = iVar22;
                if ((*puVar20 & 1) == 0) {
                  uVar28 = FUN_003679b4(DAT_002c8120);
                  iVar13 = (int)((ulonglong)uVar28 >> 0x20);
                  if ((int)uVar28 != 0) {
                    FUN_0031ff30(DAT_002c8124);
                    iVar13 = DAT_002c812c;
                  }
                }
                FUN_00437ff4(DAT_002c8124,iVar13);
              }
              if (-1 < iVar22) {
                local_68 = *(int *)(param_2 + 0x88) +
                           *(int *)(*(int *)(param_2 + 0x88) + 0x18 + iVar22 * 4);
                local_64 = local_68 + *(int *)(local_68 + 0x48);
                uVar19 = *(undefined4 *)(iVar8 + 0x18);
                iVar22 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                if (*(short *)(iVar22 + 0x18a) != 0x25) {
                  FUN_002c41c4(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),0x25);
                  FUN_00320d7c(param_1,(int)*(short *)(iVar8 + 8),1);
                  FUN_00320d7c(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),7);
                }
                FUN_0033cb90(&local_68,uVar19,param_2 + 0x94);
                uVar19 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                FUN_0033cb1c(uVar19,param_2 + 0x94,*(undefined4 *)(param_1 + 0x20ac),0);
              }
              FUN_002c411c(param_2 + 0x88);
              puVar20 = (uint *)((int)(puVar17 + 2) + local_60);
            }
            else {
              if (local_50 != 1000) goto switchD_002c5d58_caseD_b;
              FUN_00491364(param_1,param_2,puVar17 + 2);
              puVar20 = puVar17 + 4;
            }
          }
          goto switchD_002c5d58_caseD_0;
        }
        switch(local_50) {
        case 0:
          break;
        case 1:
          uVar7 = *(ushort *)((int)puVar17 + 6);
          bVar24 = true;
          puVar21 = puVar17 + 3;
          iVar8 = 8;
          if ((uVar7 < *(ushort *)(param_2 + 0x20)) &&
             (*(ushort *)(param_2 + 0x20) < (ushort)puVar17[2])) {
            uVar1 = *(ushort *)(param_2 + 0x28);
            bVar23 = uVar1 <= uVar7;
            if (uVar7 <= uVar1) {
              bVar23 = 0xefff < uVar1;
            }
            if (bVar23) {
              *(undefined1 *)(param_2 + 0x35) = 1;
              *(uint **)(param_2 + 0x3c) = puVar21;
              iVar22 = DAT_002c6cc0;
              if ((*(char *)(param_2 + 0x34) != '\0') &&
                 (*(ushort *)(param_2 + 0x28) = *(ushort *)((int)puVar17 + 6),
                 *(char *)(iVar22 + 1) != '\0')) {
                FUN_002c41c4(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),0x25);
                FUN_00320d7c(param_1,(int)*(short *)(DAT_002c6cc0 + 8),1);
                FUN_00320d7c(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),7);
                FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                FUN_002c41b0();
                uVar19 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                FUN_002c4130(uVar19,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             *(undefined4 *)(param_1 + 0x20ac),0);
              }
            }
          }
          do {
            uVar18 = *puVar21;
            puVar21 = puVar21 + 4;
            iVar8 = iVar8 + 0x10;
            if ((char)uVar18 == -1) {
              bVar24 = false;
            }
          } while (bVar24);
          goto LAB_002c7388;
        case 2:
          uVar7 = *(ushort *)((int)puVar17 + 6);
          bVar24 = true;
          puVar21 = puVar17 + 3;
          iVar8 = 8;
          if ((uVar7 < *(ushort *)(param_2 + 0x20)) &&
             (*(ushort *)(param_2 + 0x20) < (ushort)puVar17[2])) {
            uVar1 = *(ushort *)(param_2 + 0x2a);
            bVar23 = uVar1 <= uVar7;
            if (uVar7 <= uVar1) {
              bVar23 = 0xefff < uVar1;
            }
            if (bVar23) {
              *(undefined1 *)(param_2 + 0x34) = 1;
              *(uint **)(param_2 + 0x38) = puVar21;
              iVar22 = DAT_002c6cc0;
              if ((*(char *)(param_2 + 0x35) != '\0') &&
                 (*(ushort *)(param_2 + 0x2a) = *(ushort *)((int)puVar17 + 6),
                 *(char *)(iVar22 + 1) != '\0')) {
                *(int *)(param_2 + 0x84) = local_5c;
                FUN_002c41c4(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),0x25);
                FUN_00320d7c(param_1,(int)*(short *)(DAT_002c6cc0 + 8),1);
                FUN_00320d7c(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),7);
                FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                FUN_002c41b0();
                uVar19 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                FUN_002c4130(uVar19,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             *(undefined4 *)(param_1 + 0x20ac),0);
              }
            }
          }
          do {
            uVar18 = *puVar21;
            puVar21 = puVar21 + 4;
            iVar8 = iVar8 + 0x10;
            if ((char)uVar18 == -1) {
              bVar24 = false;
            }
          } while (bVar24);
          goto LAB_002c759c;
        case 3:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              iVar22 = *(int *)(param_1 + 0x20ac);
              if ((*(ushort *)(param_2 + 0x20) < *(ushort *)((int)puVar20 + 2)) ||
                 ((uVar7 = (ushort)puVar20[1], uVar7 <= *(ushort *)(param_2 + 0x20) &&
                  (uVar7 != *(ushort *)((int)puVar20 + 2))))) goto switchD_002c60f4_caseD_0;
              fVar25 = (float)FUN_00361490(uVar7 - 1);
              iVar13 = local_30;
              uVar12 = DAT_002c6990;
              puVar6 = DAT_002c6980;
              uVar9 = DAT_002c6574;
              uVar19 = DAT_002c6570;
              fVar26 = DAT_002c6568;
              piVar5 = DAT_002c6550;
              bVar24 = *(ushort *)(param_2 + 0x20) == *(ushort *)((int)puVar20 + 2);
              uVar18 = (uint)(ushort)*puVar20;
              switch(uVar18) {
              case 1:
                if (bVar24) {
                  FUN_003665fc(0xe,4,0x3f);
                  FUN_003665fc(0xe,1);
                  *(undefined1 *)(DAT_002c6548 + param_1) = 0x14;
                }
                break;
              case 2:
                if (bVar24) {
                  FUN_003665fc(0xf,0);
                  FUN_00490dfc(param_1,3);
                  *DAT_002c654c = 1;
                }
                break;
              case 3:
                if ((bVar24) && (FUN_00366704(param_1,0), *DAT_002c6550 == 0x53)) {
                  FUN_00366704(param_1,2);
                }
                break;
              case 6:
                if ((int)*(float *)(param_1 + 0x3214) < DAT_002c6554) {
                  *(float *)(param_1 + 0x3214) = *(float *)(param_1 + 0x3214) + DAT_002c6558;
                }
                break;
              case 7:
                if (bVar24) {
                  *(undefined1 *)(param_1 + 0x31aa) = 1;
                  *(undefined1 *)(param_1 + 0x31a8) = 1;
                  *(undefined1 *)(param_1 + 0x31a9) = 0;
                  *(undefined2 *)(param_1 + 0x31ac) = 0x3c;
                  *(undefined1 *)(param_1 + 0x31b3) = 1;
                  *(undefined1 *)(param_1 + 0x31b1) = 0;
                  *(undefined1 *)(param_1 + 0x31b2) = 1;
                  *(undefined2 *)(param_1 + 0x31b6) = 0x3c;
                  *(undefined2 *)(param_1 + 0x31b4) = 0x3c;
                }
                break;
              case 8:
                if (*(short *)(param_1 + 0x53f0) < 0x80) {
                  sVar15 = *(short *)(param_1 + 0x53f0) + 4;
LAB_002c6378:
                  *(short *)(param_1 + 0x53f0) = sVar15;
                }
                break;
              case 9:
                *(undefined1 *)(DAT_002c655c + param_1) = 0x10;
                break;
              case 10:
                FUN_00366704(param_1,1);
                break;
              case 0xb:
                if (*(short *)(param_1 + 0x53f0) < DAT_002c6560) {
                  *(short *)(param_1 + 0x53f0) = *(short *)(param_1 + 0x53f0) + 0x14;
                }
                fVar25 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c6564 + 0x110),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                uVar10 = DAT_002c6578;
                uVar9 = DAT_002c6574;
                uVar19 = DAT_002c6570;
                if ((int)(fVar26 / fVar25 + DAT_002c656c) == (uint)*(ushort *)(param_2 + 0x20))
                goto LAB_002c68f0;
                fVar25 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c6564 + 0x110),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                if ((int)(fVar26 / fVar25 + DAT_002c656c) == (uint)*(ushort *)(param_2 + 0x20)) {
                  sVar15 = 0;
                  goto LAB_002c6378;
                }
                break;
              case 0xc:
                if (bVar24) {
                  uVar18 = (uint)*(byte *)(param_2 + 8);
                }
                if (bVar24 && uVar18 != 4) {
                  *(int *)(local_30 + 0x14) = *(int *)(local_30 + 0x14) + 1;
                  iVar22 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(local_30 + 0x24));
                  if ((iVar22 != 0) && (*(short *)(DAT_002c5ff0 + iVar22) == 0x25)) {
                    FUN_00367c48();
                    *(undefined1 *)(iVar13 + 0x10) = 0;
                  }
                  *(undefined1 *)(local_30 + 8) = 3;
                }
                break;
              case 0xd:
                if (*(short *)(param_1 + 0x53f2) == 0) {
                  FUN_0037547c(DAT_002c657c,0,4,DAT_002c6574,DAT_002c6574,DAT_002c6570);
                }
                if (*(short *)(param_1 + 0x53f2) < 0xff) {
                  *(short *)(param_1 + 0x53f2) = *(short *)(param_1 + 0x53f2) + 5;
                }
                break;
              case 0xe:
                if (bVar24) {
                  FUN_00340a1c(param_1,1);
                }
                break;
              case 0xf:
                if (bVar24) {
                  uVar18 = *(uint *)(param_1 + 0x114);
                }
                if (bVar24 && uVar18 != 0) {
                  if (((*DAT_002c6580 & 1) == 0) &&
                     (iVar22 = FUN_003679b4(DAT_002c6580), iVar22 != 0)) {
                    FUN_0036788c(DAT_002c6584);
                  }
                  iVar22 = 0;
                  if ((*(int *)(DAT_002c6590 + 0xf3c) == 6 || *(int *)(DAT_002c6590 + 0xf3c) == 7)
                     && (*(short *)(param_1 + 0x104) == 0x60 || *(short *)(param_1 + 0x104) == 0x61)
                     ) {
                    iVar22 = 0x20;
                  }
                  iVar13 = FUN_00372c90(param_1 + 0x118);
                  if (iVar13 != 0) {
                    local_78 = (float)(iVar22 + 0x20);
                    fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c6564 + 0x110),
                                                        (byte)(in_fpscr >> 0x15) & 3);
                    local_74 = (int)(fVar3 / fVar26 + DAT_002c656c);
                    local_70 = 0;
                    FUN_003471c8(DAT_002c6594,param_1,param_1 + 0x224c,iVar13,200,0x78,0x100);
                  }
                }
                break;
              case 0x10:
                if (bVar24) {
                  uVar9 = FUN_0036f848(*(undefined4 *)
                                        (param_1 + *(short *)(DAT_002c6964 + param_1) * 4 + 0xa54),6
                                      );
                  uVar19 = DAT_002c6968;
                  *(short *)(param_2 + 0x30) = (short)uVar9;
                  FUN_0036f7c0(uVar9,uVar19);
                  FUN_0036f6b0((int)*(short *)(param_2 + 0x30),2,0,100,0);
                  FUN_0036f628((int)*(short *)(param_2 + 0x30),800);
                }
                break;
              case 0x11:
                if (bVar24) {
                  FUN_002c41e4((int)*(short *)(param_2 + 0x30));
                }
                break;
              case 0x12:
                *(undefined1 *)(param_1 + 0x326e) = 0;
                *(undefined1 *)(param_1 + 0x325d) = 2;
                if (*(ushort *)(piVar5 + 3) < DAT_002c696c) {
                  fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c6564 + 0x110),
                                                      (byte)(in_fpscr >> 0x15) & 3);
                  *(ushort *)(piVar5 + 3) =
                       *(ushort *)(piVar5 + 3) +
                       (short)(int)(DAT_002c656c + fVar26 * DAT_002c6970 * DAT_002c6974);
                }
                if (*(char *)(param_1 + 0x326f) == '\0') {
                  *DAT_002c6978 = 0;
                  FUN_003665fc(0xe,1,0);
                }
                break;
              case 0x13:
                *(ushort *)(DAT_002c697c + 0xf8) = *(ushort *)(DAT_002c697c + 0xf8) | 0x20;
                break;
              case 0x14:
                uVar7 = *(ushort *)(DAT_002c697c + 0xf8) | 0x80;
                goto LAB_002c66d4;
              case 0x15:
                uVar7 = *(ushort *)(DAT_002c697c + 0xf8) | 0x200;
LAB_002c66d4:
                *(ushort *)(DAT_002c697c + 0xf8) = uVar7;
                break;
              case 0x16:
                DAT_002c6980[3] = 0xff;
                puVar6[2] = 0xff;
                puVar6[1] = 0xff;
                *puVar6 = 0xff;
                break;
              case 0x17:
                fVar25 = fVar25 * DAT_002c6984;
                DAT_002c6980[3] = 0xff;
                puVar6[2] = 0xb4;
                puVar6[1] = 100;
                uVar19 = VectorFloatToUnsigned(fVar25,3);
                *puVar6 = (char)uVar19;
                *(undefined1 *)(DAT_002c6988 + param_1) = 1;
                break;
              case 0x18:
                *(undefined1 *)(*(int *)(DAT_002c698c + param_1) + 0xad) = 0;
                break;
              case 0x19:
                fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c6564 + 0x110),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                uVar18 = (uint)*(ushort *)(DAT_002c6550 + 3) +
                         (int)(DAT_002c656c + fVar26 * DAT_002c6970 * DAT_002c6974);
                *(short *)(DAT_002c6550 + 3) = (short)uVar18;
                if (uVar12 < (uVar18 & 0xffff)) {
                  *(short *)(piVar5 + 3) = (short)uVar12;
                }
                break;
              case 0x1a:
                uVar18 = (uint)*(ushort *)(DAT_002c6550 + 3);
                if (DAT_002c6994 <= uVar18 - 0x3000) {
                  if (uVar18 - 0x4555 < DAT_002c6998) {
                    *(undefined1 *)(DAT_002c699c + param_1) = 1;
                  }
                  else if (uVar18 - 0xaaab < DAT_002c69a0) {
                    *(undefined1 *)(DAT_002c699c + param_1) = 2;
                  }
                  else {
                    *(undefined1 *)(DAT_002c699c + param_1) = 3;
                  }
                }
                break;
              case 0x1b:
                if ((*(uint *)(param_1 + 0xf8) & 8) == 0) {
                  if (2 < *(short *)(param_1 + 0x31fc)) {
                    *(short *)(param_1 + 0x31fc) = *(short *)(param_1 + 0x31fc) + -2;
                    *(short *)(param_1 + 0x3204) = *(short *)(param_1 + 0x3204) + 3;
                    sVar15 = *(short *)(param_1 + 0x3206) + 3;
                    goto LAB_002c6874;
                  }
                }
                else if (*(short *)(param_1 + 0x31fc) < 0x28) {
                  *(short *)(param_1 + 0x31fc) = *(short *)(param_1 + 0x31fc) + 2;
                  *(short *)(param_1 + 0x3204) = *(short *)(param_1 + 0x3204) + -3;
                  sVar15 = *(short *)(param_1 + 0x3206) + -3;
LAB_002c6874:
                  *(short *)(param_1 + 0x3206) = sVar15;
                }
                break;
              case 0x1c:
                *(undefined1 *)(DAT_002c69a4 + param_1) = 1;
                break;
              case 0x1d:
                *(undefined1 *)(DAT_002c69a4 + param_1) = 0;
                break;
              case 0x1e:
                FUN_00366704(param_1,3);
                break;
              case 0x1f:
                FUN_00366704(param_1,4);
                break;
              case 0x20:
                uVar10 = DAT_002c69ac;
                if (bVar24) {
                  *(undefined1 *)(DAT_002c69a8 + param_1) = 1;
                  uVar10 = DAT_002c69ac;
                }
LAB_002c68f0:
                FUN_0037547c(uVar10,0,4,uVar9,uVar9,uVar19);
                break;
              case 0x21:
                *(undefined2 *)(local_34 + 0xb0) = 1;
                break;
              case 0x22:
                uVar18 = (uint)*DAT_002c69b0;
                if (DAT_002c6550[4] == 0) {
                  if (uVar18 == 0) {
                    fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c6564 + 0x110),
                                                        (byte)(in_fpscr >> 0x15) & 3);
                    fVar26 = fVar26 * DAT_002c6ca8 * DAT_002c6974 - DAT_002c6cac;
                  }
                  else {
                    fVar26 = (float)VectorUnsignedToFloat(uVar18,(byte)(in_fpscr >> 0x15) & 3);
                    fVar25 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c6564 + 0x110),
                                                        (byte)(in_fpscr >> 0x15) & 3);
                    fVar26 = DAT_002c656c + fVar25 * fVar26 * DAT_002c6974;
                  }
                  sVar15 = -(short)(int)fVar26;
                }
                else {
                  if (uVar18 == 0) {
                    fVar26 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c6564 + 0x110),
                                                        (byte)(in_fpscr >> 0x15) & 3);
                    fVar26 = fVar26 * DAT_002c6ca8 * DAT_002c6974 - DAT_002c6cac;
                  }
                  else {
                    fVar26 = (float)VectorUnsignedToFloat(uVar18,(byte)(in_fpscr >> 0x15) & 3);
                    fVar25 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002c6564 + 0x110),
                                                        (byte)(in_fpscr >> 0x15) & 3);
                    fVar26 = DAT_002c6cac + fVar25 * fVar26 * DAT_002c6974;
                  }
                  sVar15 = (short)(int)fVar26 * -2;
                }
                *(short *)(DAT_002c6550 + 3) = (short)DAT_002c6550[3] + sVar15;
                break;
              case 0x23:
                FUN_00493308();
                *(ushort *)(param_2 + 0x20) = *(ushort *)((int)puVar20 + 2) - 1;
                iVar22 = DAT_002c6cb0;
                *(undefined4 *)(DAT_002c6cb0 + 0x558) = 0xff;
                *(undefined1 *)(iVar22 + 0x56e) = 0xff;
                *(undefined4 *)(iVar22 + 0x4e4) = 6;
                *(undefined1 *)(param_1 + 0x5c2d) = 0x14;
                *(undefined1 *)(param_1 + 0x5c76) = 2;
                break;
              case 0x24:
                FUN_0035af04(iVar22,1);
                break;
              case 0x25:
                FUN_0035af04(iVar22,0);
                break;
              case 0x26:
                local_68 = DAT_002c6cb4;
                local_64 = DAT_002c6cb8;
                local_60 = DAT_002c6cbc;
                FUN_00367b14(param_1,(int)*(short *)(DAT_002c6cc0 + 8),iVar22 + 0x28,&local_68);
                *(float *)(param_2 + 0x1c) = DAT_002c6ca8;
                break;
              case 0x27:
                uVar7 = *(ushort *)(*DAT_002c6564 + 0xd38);
                bVar24 = uVar7 == 0xffff;
                if (bVar24) {
                  uVar7 = (ushort)*(byte *)(param_2 + 0x27a);
                }
                if (bVar24 && uVar7 == 0) {
                  *(undefined1 *)(param_1 + 0x3262) = 0xa0;
                  *(undefined1 *)(param_1 + 0x3263) = 0xa0;
                  *(undefined1 *)(param_1 + 0x3264) = 0xa0;
                  *(undefined1 *)(param_1 + 0x3265) = 0xff;
                  *(undefined1 *)(param_2 + 0x27a) = 1;
                }
              }
switchD_002c60f4_caseD_0:
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        case 4:
          FUN_00470758(&local_54,puVar20,4);
          uVar19 = DAT_002c6cc4;
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if (*(ushort *)(param_2 + 0x20) == *(ushort *)((int)puVar20 + 2)) {
                *(char *)(param_1 + 0x3237) = (char)(ushort)*puVar20 + -1;
                *(undefined4 *)(param_1 + 0x3258) = uVar19;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        case 5:
          uVar7 = *(ushort *)((int)puVar17 + 6);
          bVar24 = true;
          puVar21 = puVar17 + 3;
          iVar8 = 8;
          if ((uVar7 < *(ushort *)(param_2 + 0x20)) &&
             (*(ushort *)(param_2 + 0x20) < (ushort)puVar17[2])) {
            uVar1 = *(ushort *)(param_2 + 0x28);
            bVar23 = uVar1 <= uVar7;
            if (uVar7 <= uVar1) {
              bVar23 = 0xefff < uVar1;
            }
            if (bVar23) {
              *(undefined1 *)(param_2 + 0x35) = 1;
              *(uint **)(param_2 + 0x3c) = puVar21;
              iVar22 = DAT_002c6cc0;
              if ((*(char *)(param_2 + 0x34) != '\0') &&
                 (*(ushort *)(param_2 + 0x28) = *(ushort *)((int)puVar17 + 6),
                 *(char *)(iVar22 + 1) != '\0')) {
                FUN_002c41c4(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),0x25);
                FUN_00320d7c(param_1,(int)*(short *)(DAT_002c6cc0 + 8),1);
                FUN_00320d7c(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),7);
                FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                FUN_002c41b0();
                uVar19 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                FUN_002c4130(uVar19,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             *(undefined4 *)(param_1 + 0x20ac),1);
              }
            }
          }
          do {
            uVar18 = *puVar21;
            puVar21 = puVar21 + 4;
            iVar8 = iVar8 + 0x10;
            if ((char)uVar18 == -1) {
              bVar24 = false;
            }
          } while (bVar24);
LAB_002c7388:
          puVar20 = (uint *)((int)puVar20 + iVar8);
          break;
        case 6:
          uVar7 = *(ushort *)((int)puVar17 + 6);
          bVar24 = true;
          puVar21 = puVar17 + 3;
          iVar8 = 8;
          if ((uVar7 < *(ushort *)(param_2 + 0x20)) &&
             (*(ushort *)(param_2 + 0x20) < (ushort)puVar17[2])) {
            uVar1 = *(ushort *)(param_2 + 0x2a);
            bVar23 = uVar1 <= uVar7;
            if (uVar7 <= uVar1) {
              bVar23 = 0xefff < uVar1;
            }
            if (bVar23) {
              *(undefined1 *)(param_2 + 0x34) = 1;
              *(uint **)(param_2 + 0x38) = puVar21;
              iVar22 = DAT_002c6cc0;
              if ((*(char *)(param_2 + 0x35) != '\0') &&
                 (*(ushort *)(param_2 + 0x2a) = *(ushort *)((int)puVar17 + 6),
                 *(char *)(iVar22 + 1) != '\0')) {
                *(int *)(param_2 + 0x84) = local_5c;
                FUN_002c41c4(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),0x25);
                FUN_00320d7c(param_1,(int)*(short *)(DAT_002c6cc0 + 8),1);
                FUN_00320d7c(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),7);
                FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                FUN_002c41b0();
                uVar19 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                FUN_002c4130(uVar19,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                             *(undefined4 *)(param_1 + 0x20ac),1);
              }
            }
          }
          do {
            uVar18 = *puVar21;
            puVar21 = puVar21 + 4;
            iVar8 = iVar8 + 0x10;
            if ((char)uVar18 == -1) {
              bVar24 = false;
            }
          } while (bVar24);
LAB_002c759c:
          puVar20 = (uint *)((int)puVar20 + iVar8);
          local_5c = local_5c + 1;
          break;
        case 7:
          uVar7 = *(ushort *)((int)puVar17 + 6);
          if ((uVar7 < *(ushort *)(param_2 + 0x20)) &&
             (*(ushort *)(param_2 + 0x20) < (ushort)puVar17[2])) {
            uVar1 = *(ushort *)(param_2 + 0x2c);
            bVar24 = uVar1 <= uVar7;
            if (uVar7 <= uVar1) {
              bVar24 = 0xefff < uVar1;
            }
            if (bVar24) {
              *(undefined1 *)(param_2 + 0x35) = 1;
              *(uint **)(param_2 + 0x3c) = puVar17 + 3;
              iVar8 = DAT_002c6cc0;
              if ((*(char *)(param_2 + 0x34) != '\0') &&
                 (*(ushort *)(param_2 + 0x2c) = *(ushort *)((int)puVar17 + 6),
                 *(char *)(iVar8 + 1) != '\0')) {
                iVar8 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                *(undefined4 *)(iVar8 + 0xd8) = 0;
                FUN_00320d7c(param_1,0,1);
                FUN_00320d7c(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),7);
                FUN_002c41c4(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),0x21);
                local_78 = (float)VectorSignedToFloat((int)*(char *)(*(int *)(param_2 + 0x38) + 1),
                                                      (byte)(in_fpscr >> 0x15) & 3);
                local_78 = local_78 * DAT_002c7a5c;
                FUN_003521f0(iVar8,0x40,&local_78);
                local_68 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x38) + 8),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_64 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x38) + 10),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_60 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x38) + 0xc),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_74 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x3c) + 8),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_70 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x3c) + 10),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_6c = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x3c) + 0xc),
                                               (byte)(in_fpscr >> 0x15) & 3);
                FUN_00367b14(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),&local_68,&local_74
                            );
                FUN_00354220(*(undefined4 *)(*(int *)(param_2 + 0x3c) + 4),param_1,
                             (int)(short)*(undefined4 *)(param_2 + 0x24));
              }
            }
          }
          puVar20 = puVar17 + 7;
          break;
        case 8:
          uVar7 = *(ushort *)((int)puVar17 + 6);
          if ((uVar7 < *(ushort *)(param_2 + 0x20)) &&
             (*(ushort *)(param_2 + 0x20) < (ushort)puVar17[2])) {
            uVar1 = *(ushort *)(param_2 + 0x2e);
            bVar24 = uVar1 <= uVar7;
            if (uVar7 <= uVar1) {
              bVar24 = 0xefff < uVar1;
            }
            if (bVar24) {
              *(undefined1 *)(param_2 + 0x34) = 1;
              *(uint **)(param_2 + 0x38) = puVar17 + 3;
              iVar8 = DAT_002c6cc0;
              if ((*(char *)(param_2 + 0x35) != '\0') &&
                 (*(ushort *)(param_2 + 0x2e) = *(ushort *)((int)puVar17 + 6),
                 *(char *)(iVar8 + 1) != '\0')) {
                iVar8 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
                *(undefined4 *)(iVar8 + 0xd8) = 0;
                *(int *)(param_2 + 0x84) = local_5c;
                FUN_00320d7c(param_1,0,1);
                FUN_00320d7c(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),7);
                FUN_002c41c4(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),0x21);
                local_68 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x38) + 8),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_64 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x38) + 10),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_60 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x38) + 0xc),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_74 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x3c) + 8),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_70 = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x3c) + 10),
                                               (byte)(in_fpscr >> 0x15) & 3);
                local_6c = VectorSignedToFloat((int)*(short *)(*(int *)(param_2 + 0x3c) + 0xc),
                                               (byte)(in_fpscr >> 0x15) & 3);
                FUN_00367b14(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24),&local_68,&local_74
                            );
                FUN_00354220(*(undefined4 *)(*(int *)(param_2 + 0x3c) + 4),param_1,
                             (int)(short)*(undefined4 *)(param_2 + 0x24));
              }
            }
          }
          puVar20 = puVar17 + 7;
          local_5c = local_5c + 1;
          break;
        case 9:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          if ((int)local_54 < 1) {
            uVar18 = 0;
          }
          else {
            uVar18 = local_54 & 1;
          }
          if (uVar18 == 1) {
            puVar20 = puVar17 + 5;
          }
          for (; (int)uVar18 < (int)local_54; uVar18 = (uint)(short)((short)uVar18 + 2)) {
            puVar20 = puVar20 + 6;
          }
          break;
        case 10:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                 (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                *(uint **)(param_2 + 0x40) = puVar20;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        default:
switchD_002c5d58_caseD_b:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          if (0 < (int)local_54) {
            puVar20 = puVar20 + local_54 * 0xc;
          }
          break;
        case 0xe:
        case 0x10:
        case 0x18:
        case 0x23:
        case 0x28:
        case 0x30:
        case 0x40:
        case 0x44:
        case 0x46:
switchD_002c5d58_caseD_e:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                 (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                *(uint **)(param_2 + 0x48) = puVar20;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        case 0xf:
        case 0x11:
        case 0x12:
        case 0x17:
        case 0x22:
        case 0x27:
        case 0x2e:
switchD_002c5d58_caseD_f:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                 (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                *(uint **)(param_2 + 0x44) = puVar20;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        case 0x13:
          FUN_00470758(&local_54,puVar20,4);
          uVar18 = DAT_002c7a60;
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            local_38 = param_1 + 0x28a0;
            do {
              uVar7 = (ushort)*puVar20;
              uVar12 = (uint)uVar7;
              if (((uVar12 != uVar18) &&
                  (uVar1 = *(ushort *)(param_2 + 0x20), *(ushort *)((int)puVar20 + 2) < uVar1)) &&
                 (uVar1 <= (ushort)puVar20[1])) {
                uVar2 = *(ushort *)((int)puVar20 + 6);
                if (uVar2 == 2) {
                  if (uVar12 == *(ushort *)(DAT_002c6cc0 + 4)) goto LAB_002c7ad4;
                  *(ushort *)(DAT_002c6cc0 + 4) = uVar7;
                  FUN_0037073c(param_1,(ushort)*puVar20);
                }
                else if (uVar12 == *(ushort *)(DAT_002c6cc0 + 2)) {
LAB_002c7ad4:
                  if ((ushort)puVar20[1] <= uVar1) {
                    local_60 = (uint)*(short *)(param_2 + 0x20);
                    iVar22 = FUN_003769d8(local_38);
                    if (((iVar22 == 2 || iVar22 == 0) || iVar22 == 7) || iVar22 == 8) {
                      iVar13 = FUN_004929d4(param_1);
                      if ((iVar13 != 0) && (iVar22 == 2 || iVar22 == 0)) {
                        iVar22 = FUN_00369f3c(param_1);
                        if (iVar22 == 0) {
                          uVar7 = (ushort)puVar20[2];
                        }
                        else {
                          uVar7 = *(ushort *)((int)puVar20 + 10);
                        }
                        if (uVar7 == uVar18) {
LAB_002c7b88:
                          *(short *)(param_2 + 0x20) = *(short *)(param_2 + 0x20) + 1;
                        }
                        else {
                          FUN_00367c7c(param_1,(uint)uVar7,0);
                        }
                      }
                    }
                    else {
                      sVar15 = *(short *)(param_2 + 0x20);
                      *(short *)(param_2 + 0x20) = sVar15 + -1;
                      if (iVar22 == 4) {
                        iVar22 = FUN_00346964(param_1);
                        if (iVar22 != 0) {
                          FUN_00371680(param_1,2,0);
                          iVar22 = FUN_00369f3c(param_1);
                          if (iVar22 == 0) {
                            uVar7 = (ushort)puVar20[2];
                          }
                          else {
                            uVar7 = *(ushort *)((int)puVar20 + 10);
                          }
                          if (uVar7 == uVar18) goto LAB_002c7b88;
LAB_002c7b74:
                          FUN_0036be34(param_1);
                        }
                      }
                      else if (iVar22 == 9) {
                        if ((ushort)puVar20[2] != uVar18) goto LAB_002c7b74;
                        *(short *)(param_2 + 0x20) = sVar15;
                      }
                      else if (((iVar22 == 5) && (*(int *)(param_1 + 0x2b74) < 0x3c)) &&
                              ((iVar22 = FUN_00346964(param_1), iVar22 != 0 ||
                               (*(int *)(param_1 + 0x2b74) < 1)))) {
                        *DAT_002c80ec = 1;
                        FUN_0037073c(param_1,(ushort)*puVar20);
                      }
                    }
                    if (*(ushort *)(param_2 + 0x20) == local_60) {
                      FUN_0034be04(1);
                      iVar22 = DAT_002c6cc0;
                      *(undefined2 *)(DAT_002c6cc0 + 2) = 0;
                      *(undefined2 *)(iVar22 + 4) = 0;
                    }
                  }
                }
                else {
                  *(ushort *)(DAT_002c6cc0 + 2) = uVar7;
                  if (uVar2 == 3) {
                    uVar12 = DAT_002c7a64[0x2f] & *(uint *)(DAT_002c7a68 + 0x50);
joined_r0x002c7a88:
                    if (uVar12 != 0) {
                      FUN_00367c7c(param_1,(ushort)puVar20[2],0);
                      goto LAB_002c7c90;
                    }
                  }
                  else if (uVar2 == 4) {
                    uVar12 = DAT_002c7a64[0x2f] & *(uint *)(DAT_002c7a68 + 0x4c);
                    goto joined_r0x002c7a88;
                  }
                  FUN_00367c7c(param_1,(ushort)*puVar20,0);
                }
              }
LAB_002c7c90:
              puVar20 = puVar20 + 3;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        case 0x19:
        case 0x24:
        case 0x29:
        case 0x32:
        case 0x43:
        case 0x45:
        case 0x48:
        case 0x4a:
switchD_002c5d58_caseD_19:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                 (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                *(uint **)(param_2 + 0x4c) = puVar20;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        case 0x1d:
        case 0x25:
        case 0x2a:
        case 0x33:
        case 0x35:
        case 0x3f:
        case 0x41:
        case 0x42:
          goto switchD_002c5d58_caseD_1d;
        case 0x1e:
        case 0x26:
        case 0x2b:
        case 0x2f:
        case 0x36:
switchD_002c5d58_caseD_1e:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                 (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                *(uint **)(param_2 + 0x54) = puVar20;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        case 0x1f:
        case 0x34:
        case 0x39:
        case 0x3a:
switchD_002c5d58_caseD_1f:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                 (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                *(uint **)(param_2 + 0x5c) = puVar20;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        case 0x2c:
        case 0x37:
          goto switchD_002c5d58_caseD_2c;
        case 0x2d:
          puVar20 = puVar17 + 2;
          if ((*(ushort *)(param_2 + 0x20) < *(ushort *)((int)puVar17 + 10)) ||
             ((ushort)puVar17[3] < *(ushort *)(param_2 + 0x20))) goto switchD_002c7cec_caseD_0;
          *(undefined1 *)(DAT_002c80f0 + param_1) = 1;
          fVar27 = (float)FUN_00361490((ushort)puVar17[3],*(ushort *)((int)puVar17 + 10),
                                       *(undefined2 *)(param_2 + 0x20));
          puVar6 = DAT_002c811c;
          iVar8 = DAT_002c8118;
          fVar25 = DAT_002c8114;
          fVar26 = DAT_002c80f4;
          switch((ushort)*puVar20) {
          case 1:
          case 5:
            *(undefined1 *)(param_1 + 0x3262) = 0xa0;
            *(undefined1 *)(param_1 + 0x3263) = 0xa0;
            *(undefined1 *)(param_1 + 0x3264) = 0xa0;
            fVar26 = DAT_002c80f8;
            if ((ushort)*puVar20 != 1) {
LAB_002c7e04:
              fVar27 = DAT_002c810c - fVar27;
              goto LAB_002c7eb4;
            }
            iVar8 = VectorFloatToUnsigned(fVar27 * DAT_002c80f4,3);
            *(char *)(param_1 + 0x3265) = (char)iVar8;
            uVar18 = in_fpscr & 0xfffffff;
            in_fpscr = uVar18 | (uint)(fVar27 == fVar26) << 0x1e;
            bVar24 = false;
            if (SUB41(in_fpscr >> 0x1e,0)) {
              bVar24 = *DAT_002c7a64 == 0x6b;
            }
            uVar19 = DAT_002c8104;
            if (!bVar24) {
              in_fpscr = uVar18 | (uint)(fVar27 == fVar26) << 0x1e;
              uVar19 = DAT_002c8108;
              if (SUB41(in_fpscr >> 0x1e,0)) {
                iVar22 = *DAT_002c7a64;
                if (iVar22 != 0x53 && iVar22 != 0x138) {
                  iVar8 = iVar22 + -0x300;
                }
                if ((iVar22 == 0x53 || iVar22 == 0x138) || iVar8 == 0x71) goto LAB_002c7dfc;
              }
              in_fpscr = uVar18 | (uint)(fVar27 == fVar26) << 0x1e;
              bVar24 = false;
              if (SUB41(in_fpscr >> 0x1e,0)) {
                bVar24 = *(short *)(param_1 + 0x104) == 0xd;
              }
              if (!bVar24) break;
            }
LAB_002c7dfc:
            FUN_0037547c(uVar19,0,4,DAT_002c8100,DAT_002c8100,DAT_002c80fc);
            break;
          case 2:
          case 6:
            *(undefined1 *)(param_1 + 0x3262) = 0;
            *(undefined1 *)(param_1 + 0x3263) = 0;
            *(undefined1 *)(param_1 + 0x3264) = 0xff;
            if ((ushort)*puVar20 != 2) goto LAB_002c7e04;
            goto LAB_002c7eb4;
          case 3:
          case 7:
            *(undefined1 *)(param_1 + 0x3262) = 0xff;
            *(undefined1 *)(param_1 + 0x3263) = 0;
            *(undefined1 *)(param_1 + 0x3264) = 0;
            if ((ushort)*puVar20 == 3) goto LAB_002c7e04;
            goto LAB_002c7eb4;
          case 4:
          case 8:
            *(undefined1 *)(param_1 + 0x3262) = 0;
            *(undefined1 *)(param_1 + 0x3263) = 0xff;
            *(undefined1 *)(param_1 + 0x3264) = 0;
            if ((ushort)*puVar20 == 4) goto LAB_002c7e04;
            goto LAB_002c7eb4;
          case 9:
            *(undefined1 *)(DAT_002c8110 + 0x59d) = 1;
            break;
          case 10:
          case 0xb:
            *(undefined1 *)(param_1 + 0x3262) = 0;
            *(undefined1 *)(param_1 + 0x3263) = 0;
            *(undefined1 *)(param_1 + 0x3264) = 0;
            if ((ushort)*puVar20 == 10) goto LAB_002c7e04;
LAB_002c7eb4:
            uVar19 = VectorFloatToUnsigned(fVar27 * DAT_002c80f4,3);
            *(char *)(param_1 + 0x3265) = (char)uVar19;
            break;
          case 0xc:
            uVar19 = VectorFloatToUnsigned(DAT_002c80f4 - fVar27 * DAT_002c8114,3);
            *(char *)(DAT_002c8110 + 0x59d) = (char)uVar19;
            break;
          case 0xd:
            fVar27 = DAT_002c810c - fVar27;
            *(undefined1 *)(param_1 + 0x3262) = 0;
            *(undefined1 *)(param_1 + 0x3263) = 0;
            *(undefined1 *)(param_1 + 0x3264) = 0;
            uVar19 = VectorFloatToUnsigned(fVar26 - fVar27 * fVar25,3);
            *(char *)(param_1 + 0x3265) = (char)uVar19;
            break;
          case 0xe:
            uVar18 = (uint)*(ushort *)(DAT_002c8118 + 6);
            iVar22 = (uint)*(ushort *)(param_2 + 0x20) - (uint)*(ushort *)((int)puVar17 + 10);
            if (iVar22 < (int)uVar18) {
              fVar26 = (float)VectorSignedToFloat(iVar22,(byte)(in_fpscr >> 0x15) & 3);
              fVar25 = (float)VectorUnsignedToFloat(uVar18,(byte)(in_fpscr >> 0x15) & 3);
              fVar26 = fVar26 / fVar25;
            }
            else {
              iVar22 = (uint)(ushort)puVar17[3] - (uint)*(ushort *)(param_2 + 0x20);
              fVar26 = DAT_002c810c;
              if (iVar22 < (int)uVar18) {
                fVar26 = (float)VectorSignedToFloat(iVar22,(byte)(in_fpscr >> 0x15) & 3);
                fVar25 = (float)VectorUnsignedToFloat(uVar18,(byte)(in_fpscr >> 0x15) & 3);
                fVar26 = fVar26 / fVar25;
              }
            }
            *(undefined1 *)(param_1 + 0x3262) = *DAT_002c811c;
            *(undefined1 *)(param_1 + 0x3263) = puVar6[1];
            *(undefined1 *)(param_1 + 0x3264) = puVar6[2];
            uVar19 = VectorFloatToUnsigned(*(float *)(iVar8 + 0x10) * fVar26,3);
            *(char *)(param_1 + 0x3265) = (char)uVar19;
          }
switchD_002c7cec_caseD_0:
          puVar20 = puVar17 + 4;
          break;
        case 0x31:
        case 0x3c:
switchD_002c5d58_caseD_31:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                 (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                *(uint **)(param_2 + 0x60) = puVar20;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
          break;
        case 0x3e:
          FUN_00470758(&local_54,puVar20,4);
          puVar20 = puVar17 + 2;
          iVar8 = 0;
          if (0 < (int)local_54) {
            do {
              if ((*(ushort *)((int)puVar20 + 2) < *(ushort *)(param_2 + 0x20)) &&
                 (*(ushort *)(param_2 + 0x20) <= (ushort)puVar20[1])) {
                *(uint **)(param_2 + 100) = puVar20;
              }
              puVar20 = puVar20 + 0xc;
              iVar8 = (int)(short)((short)iVar8 + 1);
            } while (iVar8 < (int)local_54);
          }
        }
switchD_002c5d58_caseD_0:
        local_3c = (int)(short)((short)local_3c + 1);
        puVar17 = puVar20;
        if (local_4c <= local_3c) {
          return;
        }
      }
    }
  }
  return;
}


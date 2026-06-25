// OoT3D decomp @ 00376a78  name=FUN_00376a78  size=3888

uint FUN_00376a78(int param_1,uint param_2)

{
  sbyte sVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  byte *pbVar6;
  int iVar7;
  sbyte *psVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  undefined uVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  char cVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  
  iVar21 = DAT_003779b0;
  pbVar6 = DAT_003779a8;
  uVar27 = (uint)DAT_003779a8[param_2];
  uVar28 = uVar27;
  if (0x89 < param_2) {
    uVar28 = (uint)DAT_003779a8[*(short *)(DAT_003779ac + param_2 * 2 + -0x114)];
  }
  if (param_2 == 10) {
    *(uint *)(DAT_003779b0 + 0x3d0) = *(uint *)(DAT_003779b0 + 0x3d0) | 0x800;
  }
  if ((param_2 - 0x14 < 0xd) || (param_2 == 0x82)) {
    *(uint *)(iVar21 + 0x3d0) = *(uint *)(iVar21 + 0x3d0) | 0x2000;
  }
  iVar11 = DAT_003779e8;
  iVar10 = DAT_003779d8;
  iVar18 = DAT_003779c4;
  psVar8 = DAT_003779bc;
  iVar7 = DAT_003779b8;
  uVar22 = *(uint *)(DAT_003779b8 + 0xbc);
  iVar14 = DAT_003779b4 + param_2 * 4;
  if (param_2 - 0x66 < 6) {
    *(uint *)(DAT_003779b8 + 0xbc) = *(uint *)(iVar14 + -0x198) | uVar22;
    if (param_2 != 0x68) {
      return 0xff;
    }
    FUN_004bd9a8(param_1);
    return 0xff;
  }
  if (param_2 - 0x5a < 0xc) {
    *(uint *)(DAT_003779b8 + 0xbc) = *(uint *)(iVar14 + -0x150) | uVar22;
    return 0xff;
  }
  if (param_2 - 0x6c < 3) {
    *(uint *)(DAT_003779b8 + 0xbc) = *(uint *)(iVar14 + -0x168) | uVar22;
    return 0xff;
  }
  if (param_2 == 0x6f || param_2 == 0x70) {
    uVar22 = *(uint *)(iVar14 + -0x168) | uVar22;
LAB_00377604:
    *(uint *)(DAT_003779b8 + 0xbc) = uVar22;
    return 0xff;
  }
  if (param_2 == 0x71) {
    *(uint *)(DAT_003779b8 + 0xbc) = uVar22 | *(uint *)(DAT_003779b4 + 0x5c);
    *(short *)(iVar7 + 0xe8) = *(short *)(iVar7 + 0xe8) + 1;
    return 0xff;
  }
  uVar3 = *(ushort *)(DAT_003779b8 + 0xb6);
  if (param_2 - 0x3b < 3) {
    sVar1 = *DAT_003779bc;
    uVar27 = *(int *)(iVar14 + -0xec) << sVar1;
    uVar5 = uVar3 | (ushort)uVar27;
    *(ushort *)(DAT_003779b8 + 0xb6) = uVar5;
    puVar9 = DAT_003779c0;
    if (param_2 != 0x3d) {
      if (param_2 != 0x3c) {
        return 0xff;
      }
      *(undefined *)(iVar7 + 0x80) = 0x3c;
      *(ushort *)(iVar7 + 0x8a) = *(ushort *)(iVar7 + 0x8a) & 0xfff0 | 2;
      return 0xff;
    }
    *(undefined2 *)(iVar7 + 0x4a) = 8;
    if (((uint)*puVar9 & ((uint)uVar3 | uVar27 & 0xffff)) >> sVar1 != 0xf) {
      return 0xff;
    }
    *(ushort *)(iVar7 + 0xb6) = uVar5 ^ (ushort)(8 << sVar1);
    if (*(char *)(iVar7 + 0x80) != 'U') {
      return 0xff;
    }
    *(undefined *)(iVar7 + 0x80) = 0x3d;
    return 0xff;
  }
  if (param_2 - 0x3e < 3) {
    *(ushort *)(DAT_003779b8 + 0xb6) = uVar3 | (ushort)(*(int *)(iVar14 + -0xf8) << DAT_003779bc[1])
    ;
    return 0xff;
  }
  if (param_2 - 0x41 < 3) {
    if (param_2 == 0x43) {
      *(uint *)(iVar21 + 0x3d0) = *(uint *)(iVar21 + 0x3d0) | 0x200;
    }
    *(ushort *)(iVar7 + 0xb6) = uVar3 | (ushort)(*(int *)(iVar14 + -0x104) << psVar8[2]);
    return 0xff;
  }
  if (param_2 - 0x44 < 3) {
    *(ushort *)(DAT_003779b8 + 0xb6) =
         uVar3 | (ushort)(*(int *)(iVar14 + -0x110) << DAT_003779bc[3]);
    return 0xff;
  }
  uVar23 = (uint)*(ushort *)(DAT_003779c4 + 0x92);
  if ((param_2 == 0x74 || param_2 == 0x75) || param_2 == 0x76) {
    *(byte *)(uVar23 + DAT_003779c8) =
         (byte)*(undefined4 *)(iVar14 + -0x1d0) | *(byte *)(uVar23 + DAT_003779c8);
    return 0xff;
  }
  if (param_2 == 0x77) {
    if (*(char *)(uVar23 + DAT_003779cc) < '\0') {
      cVar19 = '\x01';
    }
    else {
      cVar19 = *(char *)(uVar23 + DAT_003779cc) + '\x01';
    }
    *(char *)(uVar23 + DAT_003779cc) = cVar19;
    return 0xff;
  }
  uVar31 = *DAT_003779d0;
  uVar24 = (uint)*DAT_003779d4;
  iVar26 = DAT_003779b8 + 0x8c;
  iVar14 = DAT_003779b8 + 0xa6;
  uVar23 = (uint)DAT_003779a8[3];
  if (param_2 != 0x4a && param_2 != 3) {
    if (param_2 == 0x4b) {
      FUN_0033c730(0,2);
      *(char *)((uint)pbVar6[3] + iVar14) = (char)*(undefined2 *)(iVar10 + 4);
      return 0xff;
    }
    if (param_2 == 0x4c) {
      FUN_0033c730(0,3);
      cVar19 = (char)*(undefined2 *)(iVar10 + 6);
      uVar22 = (uint)pbVar6[3];
      goto LAB_00376f10;
    }
    if (param_2 == 0x48) {
      FUN_0033c730(5,2);
      cVar19 = (char)*(undefined2 *)(iVar10 + 0x2c);
    }
    else {
      if (param_2 != 0x49) {
        uVar16 = DAT_003779d0[1];
        uVar32 = (uint)DAT_003779d4[1];
        uVar15 = (uint)DAT_003779a8[2];
        if (param_2 != 0x4d) {
          if (param_2 == 0x4e) {
            FUN_0033c730(1,2);
            cVar19 = (char)*(undefined2 *)(iVar10 + 0xc);
          }
          else {
            if (param_2 != 0x4f) {
              if (param_2 == 0x50) {
                *(uint *)(iVar21 + 0x3d0) = *(uint *)(iVar21 + 0x3d0) | 0x80;
                FUN_0033c730(2,1);
                return 0xff;
              }
              if (param_2 == 0x51) {
                *(uint *)(iVar21 + 0x3d0) = *(uint *)(iVar21 + 0x3d0) | 0x100;
                uVar20 = 2;
              }
              else {
                if (param_2 != 0x52) {
                  if (param_2 == 0x53) {
                    uVar20 = 1;
                  }
                  else {
                    if (param_2 != 0x54) {
                      if (param_2 == 0x56) {
                        uVar20 = 1;
                      }
                      else {
                        if (param_2 != 0x57) {
                          uVar25 = (uint)*DAT_003779a8;
                          if (param_2 == 0x98) {
                            if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) == -1) {
                              *(undefined *)(uVar25 + iVar26) = 0;
                            }
                            FUN_0033c730(6,2);
                            cVar19 = (char)*(undefined2 *)(iVar10 + 0x34);
                          }
                          else {
                            if (param_2 != 0x99) {
                              uVar33 = (uint)DAT_003779a8[1];
                              if (param_2 == 0x9a) {
                                if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) == -1) {
                                  *(undefined *)(uVar33 + iVar26) = 1;
                                }
                                FUN_0033c730(7,2);
                                cVar19 = (char)*(undefined2 *)(iVar10 + 0x3c);
                              }
                              else {
                                if (param_2 != 0x9b) {
                                  uVar12 = (undefined)param_2;
                                  if (param_2 == 0xb) {
                                    *(undefined *)((uint)pbVar6[0xb] + iVar26) = uVar12;
                                    uVar12 = 0xb;
                                    if (*(char *)(iVar7 + 0x81) == '\n') {
                                      *(undefined *)(iVar7 + 0x81) = 0xb;
                                    }
                                    if (*(char *)(iVar7 + 0x82) == '\n') {
                                      *(undefined *)(iVar7 + 0x82) = 0xb;
                                    }
                                    if (*(char *)(iVar7 + 0x83) != '\n') {
                                      return 0xff;
                                    }
LAB_00377598:
                                    *(undefined *)(iVar7 + 0x83) = uVar12;
                                    return 0xff;
                                  }
                                  uVar29 = DAT_003779d0[6];
                                  bVar2 = DAT_003779d4[6];
                                  if (param_2 == 0) {
                                    if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) == -1) {
                                      FUN_0033c730(6,1);
                                      *(undefined *)((uint)*pbVar6 + iVar14) = 1;
                                    }
                                    else {
                                      cVar19 = *(char *)(uVar25 + iVar14) + '\x01';
                                      *(char *)(uVar25 + iVar14) = cVar19;
                                      uVar3 = *(ushort *)
                                               (iVar10 + ((int)(uVar29 & *(uint *)(iVar7 + 0xb8)) >>
                                                         bVar2) * 2 + 0x30);
                                      if ((int)(uint)uVar3 < (int)cVar19) {
                                        *(char *)(uVar25 + iVar14) = (char)uVar3;
                                      }
                                    }
                                    goto LAB_00377990;
                                  }
                                  iVar30 = DAT_003779dc + param_2 * 2;
                                  if (param_2 == 0x8a || param_2 == 0x8b) {
                                    if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) == -1) {
                                      FUN_0033c730(6,1);
                                      *(char *)((uint)*pbVar6 + iVar14) =
                                           (char)*(undefined2 *)(iVar30 + -0x114);
                                    }
                                    else {
                                      cVar19 = *(char *)(uVar25 + iVar14) +
                                               (char)*(undefined2 *)(iVar30 + -0x114);
                                      *(char *)(uVar25 + iVar14) = cVar19;
                                      uVar3 = *(ushort *)
                                               (iVar10 + ((int)(uVar29 & *(uint *)(iVar7 + 0xb8)) >>
                                                         bVar2) * 2 + 0x30);
                                      if ((int)(uint)uVar3 < (int)cVar19) {
                                        *(char *)(uVar25 + iVar14) = (char)uVar3;
                                      }
                                    }
                                    param_2 = 0;
                                    goto LAB_00377990;
                                  }
                                  uVar25 = DAT_003779d0[7];
                                  bVar2 = DAT_003779d4[7];
                                  if (param_2 != 1) {
                                    if (param_2 == 0x8c || param_2 == 0x8d) {
                                      if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) == -1) {
                                        FUN_0033c730(7,1);
                                        *(char *)((uint)pbVar6[1] + iVar14) =
                                             *(char *)((uint)pbVar6[1] + iVar14) +
                                             (char)*(undefined2 *)(iVar30 + -0x118);
                                      }
                                      else {
                                        cVar19 = *(char *)(uVar33 + iVar14) +
                                                 (char)*(undefined2 *)(iVar30 + -0x118);
                                        *(char *)(uVar33 + iVar14) = cVar19;
                                        uVar3 = *(ushort *)
                                                 (iVar10 + ((int)(*(uint *)(iVar7 + 0xb8) & uVar25)
                                                           >> bVar2) * 2 + 0x38);
                                        if ((int)(uint)uVar3 < (int)cVar19) {
                                          *(char *)(uVar33 + iVar14) = (char)uVar3;
                                        }
                                      }
                                      param_2 = 1;
                                      goto LAB_00377990;
                                    }
                                    if (param_2 == 2) {
                                      cVar19 = *(char *)(uVar15 + iVar14) + '\x01';
                                      *(char *)(uVar15 + iVar14) = cVar19;
                                      uVar27 = (uint)*(ushort *)
                                                      (iVar10 + ((int)(uVar16 & *(uint *)(iVar7 + 
                                                  0xb8)) >> uVar32) * 2 + 8);
                                      if ((int)cVar19 <= (int)uVar27) {
                                        return 0xff;
                                      }
                                    }
                                    else {
                                      if (3 < param_2 - 0x8e) {
                                        uVar15 = (uint)DAT_003779a8[9];
                                        if (param_2 == 9) {
                                          if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) != -1) {
                                            cVar19 = *(char *)(uVar15 + iVar14) + '\n';
                                            *(char *)(uVar15 + iVar14) = cVar19;
joined_r0x003773e8:
                                            if (cVar19 < '3') {
                                              return 0xff;
                                            }
                                            *(undefined *)(uVar15 + iVar14) = 0x32;
                                            return 0xff;
                                          }
                                          cVar19 = '\n';
                                          *(undefined *)(uVar15 + iVar26) = 9;
                                        }
                                        else if (param_2 == 0x96 || param_2 == 0x97) {
                                          iVar21 = DAT_003779e0 + param_2 * 2;
                                          if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) != -1) {
                                            cVar19 = (char)*(undefined2 *)(iVar21 + -300) +
                                                     *(char *)(uVar15 + iVar14);
                                            *(char *)(uVar15 + iVar14) = cVar19;
                                            goto joined_r0x003773e8;
                                          }
                                          *(undefined *)(uVar15 + iVar26) = 9;
                                          cVar19 = (char)*(undefined2 *)(iVar21 + -300) +
                                                   *(char *)(uVar15 + iVar14);
                                        }
                                        else {
                                          if (param_2 - 0x92 < 3) {
                                            cVar19 = *(char *)(uVar23 + iVar14) +
                                                     (char)*(undefined2 *)
                                                            (DAT_003779e4 + param_2 * 2 + -0x124);
                                            *(char *)(uVar23 + iVar14) = cVar19;
                                            uVar3 = *(ushort *)
                                                     (iVar10 + ((int)(*(uint *)(iVar7 + 0xb8) &
                                                                     uVar31) >> uVar24) * 2);
                                            if (((int)(uint)uVar3 <= (int)cVar19) || (cVar19 < 0)) {
                                              *(char *)(uVar23 + iVar14) = (char)uVar3;
                                            }
                                            return 3;
                                          }
                                          if (param_2 != 6) {
                                            uVar24 = DAT_003779d0[5];
                                            bVar2 = DAT_003779d4[5];
                                            uVar23 = (uint)DAT_003779a8[6];
                                            if (param_2 == 0x58) {
                                              cVar19 = *(char *)(uVar23 + iVar14) + '\x05';
                                              *(char *)(uVar23 + iVar14) = cVar19;
                                              uVar3 = *(ushort *)
                                                       (iVar10 + ((int)(*(uint *)(iVar7 + 0xb8) &
                                                                       uVar24) >> bVar2) * 2 + 0x28)
                                              ;
                                              if ((int)(uint)uVar3 <= (int)cVar19) {
                                                *(char *)(uVar23 + iVar14) = (char)uVar3;
                                              }
                                              uVar3 = *(ushort *)(iVar11 + 10);
                                            }
                                            else {
                                              if (param_2 != 0x95) {
                                                if (param_2 == 7) {
                                                  *(undefined *)((uint)pbVar6[7] + iVar26) = 7;
                                                  return 0xff;
                                                }
                                                if (param_2 == 8) {
                                                  uVar12 = 8;
                                                  *(undefined *)((uint)pbVar6[8] + iVar26) = 8;
                                                  if (*(char *)(iVar7 + 0x81) == '\a') {
                                                    *(undefined *)(iVar7 + 0x81) = 8;
                                                  }
                                                  if (*(char *)(iVar7 + 0x82) == '\a') {
                                                    *(undefined *)(iVar7 + 0x82) = 8;
                                                  }
                                                  if (*(char *)(iVar7 + 0x83) != '\a') {
                                                    return 0xff;
                                                  }
                                                  goto LAB_00377598;
                                                }
                                                if (param_2 == 0x10) {
                                                  uVar22 = (uint)DAT_003779a8[0x11];
                                                  uVar27 = (uint)DAT_003779a8[0x10];
                                                  if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) == -1)
                                                  {
                                                    *(undefined *)(uVar27 + iVar26) = uVar12;
                                                    *(undefined *)(uVar27 + iVar14) = 1;
                                                    *(undefined *)(uVar22 + iVar14) = 1;
                                                    return 0xff;
                                                  }
                                                  *(char *)(uVar27 + iVar14) =
                                                       *(char *)(uVar27 + iVar14) + '\x01';
                                                  cVar19 = *(char *)(uVar22 + iVar14) + '\x01';
                                                  goto LAB_00376f10;
                                                }
                                                if (param_2 == 0x7a || param_2 == 0x73) {
                                                  uVar22 = uVar22 + 0x10000000;
                                                  goto LAB_00377604;
                                                }
                                                if (param_2 == 0x72) {
                                                  *(short *)(DAT_003779b8 + 0x42) =
                                                       *(short *)(DAT_003779b8 + 0x42) + 0x10;
                                                  *(short *)(iVar7 + 0x44) =
                                                       *(short *)(iVar7 + 0x44) + 0x10;
                                                  return 0xff;
                                                }
                                                if (param_2 == 0x83) {
                                                  FUN_0037547c(DAT_003779f4,0,4,DAT_003779f0,
                                                               DAT_003779f0,DAT_003779ec);
                                                  sVar13 = *(short *)(iVar7 + 0x44) + 0x10;
                                                  *(short *)(iVar7 + 0x44) = sVar13;
                                                  if (*(short *)(iVar7 + 0x42) < sVar13) {
                                                    sVar13 = *(short *)(iVar7 + 0x42);
                                                  }
                                                  *(short *)(iVar7 + 0x44) = sVar13;
                                                  if (0 < sVar13) {
                                                    return 0x83;
                                                  }
                                                  *(undefined2 *)(iVar7 + 0x44) = 0;
                                                  return 0x83;
                                                }
                                                sVar13 = (*(byte *)(DAT_003779b8 + 0x50) + 1) * 0x30
                                                ;
                                                sVar4 = *(short *)(DAT_003779b8 + 0x1580);
                                                if (param_2 == 0x78) {
                                                  if (sVar4 != 10 &&
                                                      *(char *)(DAT_003779b8 + 0x4e) != '\0') {
                                                    *(short *)(DAT_003779c4 + 0x82) = sVar4;
                                                    *(short *)(iVar18 + 0x86) = sVar13;
                                                    *(undefined2 *)(iVar18 + 0x80) = 9;
                                                  }
                                                  FUN_003318bc(param_1,0xc,5);
                                                  uVar3 = *(ushort *)(iVar11 + 0x42);
                                                }
                                                else {
                                                  if (param_2 != 0x79) {
                                                    if (param_2 - 0x84 < 6) {
                                                      *(short *)(DAT_003779c4 + 0x5c) =
                                                           *(short *)(DAT_003779f8 + param_2 * 2 +
                                                                     -0x108) +
                                                           *(short *)(DAT_003779c4 + 0x5c);
                                                      return 0xff;
                                                    }
                                                    if (param_2 == 0x14) {
                                                      iVar21 = (uint)pbVar6[0x14] + DAT_003779b8;
                                                      if (*(char *)(iVar21 + 0x8c) == -1) {
LAB_00377894:
                                                        *(undefined *)(iVar21 + 0x8c) = uVar12;
                                                        return 0xff;
                                                      }
                                                      if (*(char *)(iVar21 + 0x8d) == -1) {
LAB_00377790:
                                                        *(undefined *)(iVar21 + 0x8d) = uVar12;
                                                        return 0xff;
                                                      }
                                                      if (*(char *)(iVar21 + 0x8e) == -1) {
LAB_003777a4:
                                                        *(undefined *)(iVar21 + 0x8e) = uVar12;
                                                        return 0xff;
                                                      }
                                                      cVar19 = *(char *)(iVar21 + 0x8f);
                                                    }
                                                    else {
                                                      if ((0xb < param_2 - 0x15) &&
                                                         (param_2 != 0x82)) {
                                                        if (param_2 - 0x21 < 0x17) {
                                                          if (param_2 == 0x21) {
                                                            *(uint *)(iVar21 + 0x3d0) =
                                                                 *(uint *)(iVar21 + 0x3d0) | 0x400;
                                                          }
                                                          cVar19 = *(char *)(uVar27 + iVar26);
                                                          *(undefined *)(uVar27 + iVar26) = uVar12;
                                                          if (cVar19 == -1) {
                                                            return 0xff;
                                                          }
                                                          iVar21 = 1;
                                                          do {
                                                            if (*(char *)(iVar7 + iVar21 + 0x80) ==
                                                                cVar19) {
                                                              if (param_2 == 0x2c) {
                                                                FUN_004be050();
                                                                return 0xff;
                                                              }
                                                              *(undefined *)(iVar21 + iVar7 + 0x80)
                                                                   = uVar12;
                                                              return 0xff;
                                                            }
                                                            iVar21 = (int)(short)((short)iVar21 + 1)
                                                            ;
                                                          } while (iVar21 < 5);
                                                          return 0xff;
                                                        }
                                                        if (param_2 == 0xf) {
                                                          iVar21 = *(int *)(param_1 + 0x20ac);
                                                          FUN_003738d0(*(undefined4 *)
                                                                        (iVar21 + 0x28),
                                                                       *(undefined4 *)
                                                                        (iVar21 + 0x2c),
                                                                       *(undefined4 *)
                                                                        (iVar21 + 0x30),
                                                                       param_1 + 0x208c,param_1,
                                                                       DAT_00377a00,0,0,0,
                                                                       DAT_003779fc,1);
                                                        }
                                                        goto LAB_00377990;
                                                      }
                                                      if (param_2 != 0x1a && param_2 != 0x1b) {
                                                        if (param_2 == 0x82) {
                                                          uVar27 = (uint)pbVar6[0x1a];
                                                          param_2 = 0x1a;
                                                        }
                                                        iVar18 = 0;
                                                        do {
                                                          if (*(char *)(uVar27 + iVar18 +
                                                                        DAT_003779b8 + 0x8c) ==
                                                              '\x14') {
                                                            uVar28 = iVar18 + uVar27;
                                                            bVar34 = *(byte *)(DAT_003779b8 + 0x85)
                                                                     == uVar28;
                                                            if (bVar34) {
                                                              uVar27 = 0;
                                                            }
                                                            uVar12 = (undefined)param_2;
                                                            if (bVar34) {
                                                              *(undefined *)(DAT_003779b8 + 0x81) =
                                                                   uVar12;
                                                              *(char *)(iVar21 + 0x570) =
                                                                   (char)uVar27;
                                                            }
                                                            else if (*(byte *)(DAT_003779b8 + 0x86)
                                                                     == uVar28) {
                                                              *(undefined *)(DAT_003779b8 + 0x82) =
                                                                   uVar12;
                                                              *(undefined *)(iVar21 + 0x571) = 0;
                                                            }
                                                            else if (*(byte *)(DAT_003779b8 + 0x87)
                                                                     == uVar28) {
                                                              *(undefined *)(DAT_003779b8 + 0x83) =
                                                                   uVar12;
                                                              *(undefined *)(iVar21 + 0x572) = 0;
                                                            }
                                                            else if (*(byte *)(DAT_003779b8 + 0x88)
                                                                     == uVar28) {
                                                              *(undefined *)(DAT_003779b8 + 0x84) =
                                                                   uVar12;
                                                              *(undefined *)(iVar21 + 0x573) = 0;
                                                            }
                                                            *(undefined *)(uVar28 + iVar7 + 0x8c) =
                                                                 uVar12;
                                                            return 0xff;
                                                          }
                                                          iVar18 = (int)(short)((short)iVar18 + 1);
                                                        } while (iVar18 < 4);
                                                        goto LAB_00377990;
                                                      }
                                                      iVar21 = DAT_003779b8 + uVar27;
                                                      if (*(char *)(iVar21 + 0x8c) == -1)
                                                      goto LAB_00377894;
                                                      if (*(char *)(iVar21 + 0x8d) == -1)
                                                      goto LAB_00377790;
                                                      if (*(char *)(iVar21 + 0x8e) == -1)
                                                      goto LAB_003777a4;
                                                      cVar19 = *(char *)(iVar21 + 0x8f);
                                                    }
                                                    if (cVar19 == -1) {
                                                      *(undefined *)(iVar21 + 0x8f) = uVar12;
                                                      return 0xff;
                                                    }
                                                    goto LAB_00377990;
                                                  }
                                                  if (sVar4 != 10 &&
                                                      *(char *)(DAT_003779b8 + 0x4e) != '\0') {
                                                    *(short *)(DAT_003779c4 + 0x82) = sVar4;
                                                    *(short *)(iVar18 + 0x86) = sVar13;
                                                    *(undefined2 *)(iVar18 + 0x80) = 9;
                                                  }
                                                  FUN_003318bc(param_1,0x18,5);
                                                  uVar3 = *(ushort *)(iVar11 + 0x42);
                                                }
                                                if ((uVar3 & 0x100) == 0) {
                                                  *(ushort *)(iVar11 + 0x42) = uVar3 | 0x100;
                                                  return 0xff;
                                                }
                                                return param_2;
                                              }
                                              cVar19 = *(char *)(uVar23 + iVar14) + '\x1e';
                                              *(char *)(uVar23 + iVar14) = cVar19;
                                              uVar3 = *(ushort *)
                                                       (iVar10 + ((int)(*(uint *)(iVar7 + 0xb8) &
                                                                       uVar24) >> bVar2) * 2 + 0x28)
                                              ;
                                              if ((int)(uint)uVar3 <= (int)cVar19) {
                                                *(char *)(uVar23 + iVar14) = (char)uVar3;
                                              }
                                              uVar3 = *(ushort *)(iVar11 + 10);
                                            }
                                            if ((uVar3 & 8) == 0) {
                                              *(ushort *)(iVar11 + 10) = uVar3 | 8;
                                              return 0xff;
                                            }
                                            return 0x58;
                                          }
                                          FUN_0033c730(5,1);
                                          uVar15 = (uint)pbVar6[6];
                                          *(undefined *)(uVar15 + iVar26) = 6;
                                          cVar19 = '\x1e';
                                        }
LAB_0037748c:
                                        *(char *)(uVar15 + iVar14) = cVar19;
                                        return 0xff;
                                      }
                                      cVar19 = *(char *)(uVar15 + iVar14) +
                                               (char)*(undefined2 *)(iVar30 + -0x11c);
                                      *(char *)(uVar15 + iVar14) = cVar19;
                                      uVar27 = (uint)*(ushort *)
                                                      (iVar10 + ((int)(uVar16 & *(uint *)(iVar7 + 
                                                  0xb8)) >> uVar32) * 2 + 8);
                                      if ((int)cVar19 <= (int)uVar27) {
                                        return 0xff;
                                      }
                                    }
                                    *(char *)(uVar15 + iVar14) = (char)uVar27;
                                    return 0xff;
                                  }
                                  if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) != -1) {
                                    cVar19 = *(char *)(uVar33 + iVar14) + '\x01';
                                    *(char *)(uVar33 + iVar14) = cVar19;
                                    uVar3 = *(ushort *)
                                             (iVar10 + ((int)(*(uint *)(iVar7 + 0xb8) & uVar25) >>
                                                       bVar2) * 2 + 0x38);
                                    if ((int)(uint)uVar3 < (int)cVar19) {
                                      *(char *)(uVar33 + iVar14) = (char)uVar3;
                                    }
                                    goto LAB_00377990;
                                  }
                                  FUN_0033c730(7,1);
                                  uVar27 = 1;
                                  uVar15 = (uint)pbVar6[1];
                                  goto LAB_0037720c;
                                }
                                if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) == -1) {
                                  *(undefined *)(uVar33 + iVar26) = 1;
                                }
                                FUN_0033c730(7,3);
                                cVar19 = (char)*(undefined2 *)(iVar10 + 0x3e);
                              }
                              uVar22 = (uint)pbVar6[1];
                              goto LAB_00376f10;
                            }
                            if (*(char *)(DAT_003779b8 + uVar28 + 0x8c) == -1) {
                              *(undefined *)(uVar25 + iVar26) = 0;
                            }
                            FUN_0033c730(6,3);
                            cVar19 = (char)*(undefined2 *)(iVar10 + 0x36);
                          }
                          uVar22 = (uint)*pbVar6;
                          goto LAB_00376f10;
                        }
                        uVar20 = 2;
                      }
                      uVar17 = 4;
                      goto LAB_00376fb0;
                    }
                    uVar20 = 2;
                  }
                  uVar17 = 3;
                  goto LAB_00376fb0;
                }
                uVar20 = 3;
              }
              uVar17 = 2;
LAB_00376fb0:
              FUN_0033c730(uVar17,uVar20);
              return 0xff;
            }
            FUN_0033c730(1,3);
            cVar19 = (char)*(undefined2 *)(iVar10 + 0xe);
          }
          uVar22 = (uint)pbVar6[2];
          goto LAB_00376f10;
        }
        if ((int)(*(uint *)(DAT_003779b8 + 0xb8) & uVar16) >> uVar32 == 0) {
          FUN_0033c730(1);
          bVar2 = pbVar6[2];
          *(undefined *)((uint)bVar2 + iVar26) = 2;
          *(char *)((uint)bVar2 + iVar14) = (char)*(undefined2 *)(iVar10 + 10);
          return 0xff;
        }
        cVar19 = *(char *)(uVar15 + iVar14) + '\x01';
        *(char *)(uVar15 + iVar14) = cVar19;
        uVar27 = (uint)*(ushort *)
                        (iVar10 + ((int)(uVar16 & *(uint *)(iVar7 + 0xb8)) >> uVar32) * 2 + 8);
        if ((int)cVar19 <= (int)uVar27) goto LAB_00377990;
        goto LAB_0037720c;
      }
      FUN_0033c730(5,3);
      cVar19 = (char)*(undefined2 *)(iVar10 + 0x2e);
    }
    uVar22 = (uint)pbVar6[6];
LAB_00376f10:
    *(char *)(uVar22 + iVar14) = cVar19;
    return 0xff;
  }
  if ((int)(*(uint *)(DAT_003779b8 + 0xb8) & uVar31) >> uVar24 == 0) {
    FUN_0033c730(0,1);
    uVar15 = (uint)pbVar6[3];
    *(undefined *)(uVar15 + iVar26) = 3;
    cVar19 = (char)*(undefined2 *)(iVar10 + 2);
    goto LAB_0037748c;
  }
  cVar19 = *(char *)(uVar23 + iVar14) + '\x01';
  *(char *)(uVar23 + iVar14) = cVar19;
  uVar27 = (uint)*(ushort *)(iVar10 + ((int)(*(uint *)(iVar7 + 0xb8) & uVar31) >> uVar24) * 2);
  uVar15 = uVar23;
  if ((int)cVar19 <= (int)uVar27) goto LAB_00377990;
LAB_0037720c:
  *(char *)(uVar15 + iVar14) = (char)uVar27;
LAB_00377990:
  bVar2 = *(byte *)(iVar7 + uVar28 + 0x8c);
  *(char *)((uint)pbVar6[param_2] + iVar26) = (char)param_2;
  return (uint)bVar2;
}


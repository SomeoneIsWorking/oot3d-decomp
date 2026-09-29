// OoT3D decomp @ 00462ad4  name=FUN_00462ad4  size=1900

void FUN_00462ad4(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint local_160;
  uint local_154;
  uint local_150;
  uint local_144;
  uint local_140;
  uint local_138;
  ushort local_130;
  uint local_12c;
  uint local_128;
  uint local_124 [15];
  uint local_e8 [15];
  uint local_ac [15];
  uint local_70 [15];
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;

  local_28 = param_1;
  iVar2 = 0;
  if (param_1[6] != 0) {
    iVar2 = param_1[5];
  }
  if ((param_1[6] != 0 && iVar2 != 0) && (local_30 = 0, 0 < param_1[1])) {
    do {
      local_2c = 0;
      if (0 < *param_1) {
        do {
          if (*(byte *)(local_2c + local_30 * *param_1 + param_1[6]) >> 5 != 7) {
            iVar2 = 0;
            do {
              iVar3 = (int)((ulonglong)((longlong)DAT_00463240 * (longlong)iVar2) >> 0x20);
              iVar4 = (int)((ulonglong)((longlong)DAT_00463240 * (longlong)iVar2) >> 0x20);
              iVar3 = ((iVar3 >> 1) - (iVar3 >> 0x1f)) * -5 + iVar2 + local_2c + -2;
              bVar15 = iVar3 < 0;
              if (bVar15) {
                iVar3 = 0;
              }
              iVar4 = ((iVar4 >> 1) - (iVar4 >> 0x1f)) + local_30 + -1;
              if ((!bVar15) && (*param_1 + -1 < iVar3)) {
                iVar3 = *param_1 + -1;
              }
              if (iVar4 < 0) {
                iVar4 = 0;
              }
              else if (param_1[1] + -1 < iVar4) {
                iVar4 = param_1[1] + -1;
              }
              uVar1 = *(ushort *)(param_1[5] + iVar3 * 2 + *param_1 * iVar4 * 2);
              uVar6 = (uint)uVar1;
              local_ac[iVar2] = (uVar6 & 0x1f) << 3 | (uVar6 & 0x1f) >> 2;
              local_e8[iVar2] = uVar1 >> 2 & 0xf8 | (uVar6 << 0x16) >> 0x1d;
              local_124[iVar2] = uVar1 >> 7 & 0xf8 | (uVar6 << 0x11) >> 0x1d;
              local_70[iVar2] = (uint)(*(byte *)(iVar3 + iVar4 * *param_1 + param_1[6]) >> 5);
              iVar2 = iVar2 + 1;
            } while (iVar2 < 0xf);
            iVar2 = 1;
            local_128 = local_e8[7];
            local_12c = local_124[7];
            uVar6 = local_e8[7];
            uVar8 = local_ac[7];
            uVar9 = local_124[7];
            uVar12 = local_ac[7];
            do {
              if (local_70[iVar2] == 7) {
                uVar7 = local_ac[iVar2];
                if ((int)uVar12 < (int)uVar7) {
                  if (iVar2 != 1) {
                    bVar15 = uVar7 == local_ac[1];
                    if ((int)uVar7 <= (int)local_ac[1]) {
                      bVar15 = local_70[1] == 7;
                    }
                    if (bVar15) {
                      uVar12 = uVar7;
                    }
                  }
                  iVar3 = 1;
                  local_34 = 3;
                  puVar5 = local_70 + 1;
                  uVar10 = local_ac[3];
                  puVar11 = local_ac + 1;
                  uVar14 = local_70[3];
                  do {
                    uVar13 = puVar11[4];
                    if (iVar3 * 2 + 1 != iVar2) {
                      bVar15 = uVar7 == uVar10;
                      if ((int)uVar7 <= (int)uVar10) {
                        bVar15 = uVar14 == 7;
                      }
                      if (bVar15) {
                        uVar12 = uVar7;
                      }
                    }
                    uVar14 = puVar5[6];
                    uVar10 = puVar11[6];
                    if (iVar3 * 2 + 3 != iVar2) {
                      bVar15 = uVar7 == uVar13;
                      if ((int)uVar7 <= (int)uVar13) {
                        bVar15 = puVar5[4] == 7;
                      }
                      if (bVar15) {
                        uVar12 = uVar7;
                      }
                    }
                    iVar3 = iVar3 + 2;
                    local_34 = local_34 + -1;
                    puVar5 = puVar5 + 4;
                    puVar11 = puVar11 + 4;
                  } while (local_34 != 0);
                }
                uVar10 = local_e8[iVar2];
                if ((int)local_128 < (int)uVar10) {
                  if (iVar2 != 1) {
                    bVar15 = uVar10 == local_e8[1];
                    if ((int)uVar10 <= (int)local_e8[1]) {
                      bVar15 = local_70[1] == 7;
                    }
                    if (bVar15) {
                      local_128 = uVar10;
                    }
                  }
                  local_138 = local_e8[3];
                  iVar3 = 1;
                  local_34 = 3;
                  puVar5 = local_70 + 1;
                  puVar11 = local_e8 + 1;
                  uVar14 = local_70[3];
                  do {
                    uVar13 = puVar11[4];
                    if (iVar3 * 2 + 1 != iVar2) {
                      bVar15 = uVar10 == local_138;
                      if ((int)uVar10 <= (int)local_138) {
                        bVar15 = uVar14 == 7;
                      }
                      if (bVar15) {
                        local_128 = uVar10;
                      }
                    }
                    local_138 = puVar11[6];
                    uVar14 = puVar5[6];
                    if (iVar3 * 2 + 3 != iVar2) {
                      bVar15 = uVar10 == uVar13;
                      if ((int)uVar10 <= (int)uVar13) {
                        bVar15 = puVar5[4] == 7;
                      }
                      if (bVar15) {
                        local_128 = uVar10;
                      }
                    }
                    iVar3 = iVar3 + 2;
                    local_34 = local_34 + -1;
                    puVar5 = puVar5 + 4;
                    puVar11 = puVar11 + 4;
                  } while (local_34 != 0);
                }
                uVar14 = local_124[iVar2];
                if ((int)local_12c < (int)uVar14) {
                  if (iVar2 != 1) {
                    bVar15 = uVar14 == local_124[1];
                    if ((int)uVar14 <= (int)local_124[1]) {
                      bVar15 = local_70[1] == 7;
                    }
                    if (bVar15) {
                      local_12c = uVar14;
                    }
                  }
                  local_140 = local_124[3];
                  iVar3 = 1;
                  local_144 = local_70[3];
                  local_34 = 3;
                  puVar5 = local_124 + 1;
                  puVar11 = local_70 + 1;
                  do {
                    uVar13 = puVar5[4];
                    if (iVar3 * 2 + 1 != iVar2) {
                      bVar15 = uVar14 == local_140;
                      if ((int)uVar14 <= (int)local_140) {
                        bVar15 = local_144 == 7;
                      }
                      if (bVar15) {
                        local_12c = uVar14;
                      }
                    }
                    local_140 = puVar5[6];
                    local_144 = puVar11[6];
                    if (iVar3 * 2 + 3 != iVar2) {
                      bVar15 = uVar14 == uVar13;
                      if ((int)uVar14 <= (int)uVar13) {
                        bVar15 = puVar11[4] == 7;
                      }
                      if (bVar15) {
                        local_12c = uVar14;
                      }
                    }
                    iVar3 = iVar3 + 2;
                    local_34 = local_34 + -1;
                    puVar5 = puVar5 + 4;
                    puVar11 = puVar11 + 4;
                  } while (local_34 != 0);
                }
                if ((int)uVar7 < (int)uVar8) {
                  if (iVar2 != 1) {
                    bVar15 = uVar7 == local_ac[1];
                    if ((int)local_ac[1] <= (int)uVar7) {
                      bVar15 = local_70[1] == 7;
                    }
                    if (bVar15) {
                      uVar8 = uVar7;
                    }
                  }
                  local_150 = local_ac[3];
                  iVar3 = 1;
                  local_154 = local_70[3];
                  local_34 = 3;
                  puVar5 = local_ac + 1;
                  puVar11 = local_70 + 1;
                  do {
                    uVar13 = puVar5[4];
                    if (iVar3 * 2 + 1 != iVar2) {
                      bVar15 = uVar7 == local_150;
                      if ((int)local_150 <= (int)uVar7) {
                        bVar15 = local_154 == 7;
                      }
                      if (bVar15) {
                        uVar8 = uVar7;
                      }
                    }
                    local_150 = puVar5[6];
                    local_154 = puVar11[6];
                    if (iVar3 * 2 + 3 != iVar2) {
                      bVar15 = uVar7 == uVar13;
                      if ((int)uVar13 <= (int)uVar7) {
                        bVar15 = puVar11[4] == 7;
                      }
                      if (bVar15) {
                        uVar8 = uVar7;
                      }
                    }
                    iVar3 = iVar3 + 2;
                    local_34 = local_34 + -1;
                    puVar5 = puVar5 + 4;
                    puVar11 = puVar11 + 4;
                  } while (local_34 != 0);
                }
                if ((int)uVar10 < (int)uVar6) {
                  if (iVar2 != 1) {
                    bVar15 = uVar10 == local_e8[1];
                    if ((int)local_e8[1] <= (int)uVar10) {
                      bVar15 = local_70[1] == 7;
                    }
                    if (bVar15) {
                      uVar6 = uVar10;
                    }
                  }
                  local_160 = local_e8[3];
                  iVar3 = 1;
                  local_34 = 3;
                  puVar5 = local_70 + 1;
                  puVar11 = local_e8 + 1;
                  uVar7 = local_70[3];
                  do {
                    uVar13 = puVar11[4];
                    if (iVar3 * 2 + 1 != iVar2) {
                      bVar15 = uVar10 == local_160;
                      if ((int)local_160 <= (int)uVar10) {
                        bVar15 = uVar7 == 7;
                      }
                      if (bVar15) {
                        uVar6 = uVar10;
                      }
                    }
                    local_160 = puVar11[6];
                    uVar7 = puVar5[6];
                    if (iVar3 * 2 + 3 != iVar2) {
                      bVar15 = uVar10 == uVar13;
                      if ((int)uVar13 <= (int)uVar10) {
                        bVar15 = puVar5[4] == 7;
                      }
                      if (bVar15) {
                        uVar6 = uVar10;
                      }
                    }
                    iVar3 = iVar3 + 2;
                    local_34 = local_34 + -1;
                    puVar5 = puVar5 + 4;
                    puVar11 = puVar11 + 4;
                  } while (local_34 != 0);
                }
                if ((int)uVar14 < (int)uVar9) {
                  if (iVar2 != 1) {
                    bVar15 = uVar14 == local_124[1];
                    if ((int)local_124[1] <= (int)uVar14) {
                      bVar15 = local_70[1] == 7;
                    }
                    if (bVar15) {
                      uVar9 = uVar14;
                    }
                  }
                  iVar3 = 1;
                  local_34 = 3;
                  puVar5 = local_124 + 1;
                  uVar7 = local_124[3];
                  puVar11 = local_70 + 1;
                  uVar10 = local_70[3];
                  do {
                    uVar13 = puVar5[4];
                    if (iVar3 * 2 + 1 != iVar2) {
                      bVar15 = uVar14 == uVar7;
                      if ((int)uVar7 <= (int)uVar14) {
                        bVar15 = uVar10 == 7;
                      }
                      if (bVar15) {
                        uVar9 = uVar14;
                      }
                    }
                    uVar10 = puVar11[6];
                    uVar7 = puVar5[6];
                    if (iVar3 * 2 + 3 != iVar2) {
                      bVar15 = uVar14 == uVar13;
                      if ((int)uVar13 <= (int)uVar14) {
                        bVar15 = puVar11[4] == 7;
                      }
                      if (bVar15) {
                        uVar9 = uVar14;
                      }
                    }
                    iVar3 = iVar3 + 2;
                    local_34 = local_34 + -1;
                    puVar5 = puVar5 + 4;
                    puVar11 = puVar11 + 4;
                  } while (local_34 != 0);
                }
              }
              iVar2 = iVar2 + 2;
            } while (iVar2 < 0xf);
            iVar2 = 7 - local_70[7];
            *(ushort *)(param_1[5] + local_2c * 2 + *param_1 * local_30 * 2) =
                 (ushort)((local_124[7] +
                           ((int)((local_12c + uVar9 + local_124[7] * -2) * iVar2 + 4) >> 3) >> 3)
                         << 10) & 0x7c00 |
                 local_130 & 0x8000 |
                 (ushort)((local_ac[7] +
                          ((int)((uVar12 + uVar8 + local_ac[7] * -2) * iVar2 + 4) >> 3)) * 0x1000000
                         >> 0x1b) |
                 (ushort)((local_e8[7] +
                           ((int)((local_128 + uVar6 + local_e8[7] * -2) * iVar2 + 4) >> 3) >> 3) <<
                         5) & 0x3e0 | 0x8000;
          }
          local_2c = local_2c + 1;
        } while (local_2c < *param_1);
      }
      local_30 = local_30 + 1;
    } while (local_30 < param_1[1]);
  }
  return;
}

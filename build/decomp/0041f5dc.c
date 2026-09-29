// OoT3D decomp @ 0041f5dc  name=FUN_0041f5dc  size=6428

void FUN_0041f5dc(uint param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  uint *puVar8;
  uint uVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  uint uVar16;
  code *pcVar17;
  code *pcVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  int unaff_lr;
  uint *puVar25;
  code *pcVar26;
  bool bVar27;
  uint auStack_ee4 [15];
  int local_ea8;
  uint local_ea4;
  uint local_ea0;
  uint local_e9c;
  int local_e98;
  int local_e94 [96];
  uint local_d14;
  int local_d04;
  int local_d00 [96];
  uint local_b80;
  uint local_28;

  local_28 = param_1;
  iVar19 = 0;
  pcVar18 = *(code **)(*(int *)(DAT_00420594 + 8) + (param_1 & 0x1ff) * 4 + 8);
  if (pcVar18 != (code *)0x0) {
    do {
      pcVar7 = pcVar18 + 4;
      if (*(uint *)pcVar7 != param_1) {
        pcVar18 = *(code **)pcVar18;
      }
    } while (*(uint *)pcVar7 != param_1 && pcVar18 != (code *)0x0);
  }
  pcVar18[0x16] = (code)0x0;
  if (pcVar18[0x15] != (code)0x0) {
    return;
  }
  piVar11 = *(int **)(pcVar18 + 0xc);
  bVar27 = piVar11 == (int *)0x0;
  iVar3 = 0;
  if (!bVar27) {
    iVar3 = *(int *)(pcVar18 + 8);
  }
  if (!bVar27 && iVar3 != 0) {
    param_3 = *piVar11;
  }
  if ((bVar27 || iVar3 == 0) || param_3 == 0) {
    return;
  }
  piVar4 = *(int **)(pcVar18 + 0x10);
  if (piVar4 != (int *)0x0) {
    unaff_lr = *piVar4;
  }
  if (piVar4 != (int *)0x0 && unaff_lr != param_3) {
    return;
  }
  iVar3 = *(int *)(param_3 + 0x10) + piVar11[1] * 0xe8;
  if (piVar4 != (int *)0x0) {
    iVar19 = *(int *)(*piVar4 + 0x10) + piVar4[1] * 0xe8;
  }
  puVar25 = auStack_ee4 + 5;
  local_b80 = 0;
  local_d04 = 0;
  local_d14 = 0;
  local_e98 = 0;
  local_ea0 = 0;
  local_ea8 = 0;
  auStack_ee4[5] = 0;
  auStack_ee4[6] = 0;
  auStack_ee4[7] = 0;
  auStack_ee4[2] = 0;
  auStack_ee4[3] = 0;
  auStack_ee4[4] = 0;
  uVar24 = 0;
  if (*(int *)(iVar3 + 0x5c) != 0) {
    do {
      iVar15 = *(int *)(iVar3 + 0x58);
      iVar5 = *(int *)(iVar15 + uVar24 * 0x14);
      iVar12 = 0;
      if (iVar5 != 0x8b54) {
        iVar12 = iVar5 + -0x8b00;
      }
      if (iVar5 != 0x8b54 && iVar12 != 0x56) {
        iVar12 = uVar24 * 0x14 + 0x10;
        if (*(uint *)(iVar15 + iVar12) != 0) {
          uVar6 = *(uint *)(iVar15 + iVar12) & 1;
          if (uVar6 == 1) {
            uVar13 = *(uint *)(iVar15 + uVar24 * 0x14 + 4);
            iVar5 = (int)uVar13 >> 5;
            puVar25[iVar5] = puVar25[iVar5] | 1 << (uVar13 & 0x1f);
          }
          uVar13 = (uint)(uVar6 == 1);
          if (uVar6 < *(uint *)(*(int *)(iVar3 + 0x58) + iVar12)) {
            iVar5 = uVar24 * 0x14 + 4;
            do {
              uVar6 = uVar6 + 2;
              uVar20 = *(int *)(*(int *)(iVar3 + 0x58) + iVar5) + uVar13;
              iVar15 = (int)uVar20 >> 5;
              puVar25[iVar15] = puVar25[iVar15] | 1 << (uVar20 & 0x1f);
              uVar20 = *(int *)(*(int *)(iVar3 + 0x58) + iVar5) + uVar13 + 1;
              uVar13 = uVar13 + 2;
              iVar15 = (int)uVar20 >> 5;
              puVar25[iVar15] = puVar25[iVar15] | 1 << (uVar20 & 0x1f);
            } while (uVar6 < *(uint *)(*(int *)(iVar3 + 0x58) + iVar12));
          }
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < *(uint *)(iVar3 + 0x5c));
  }
  uVar24 = 0;
  do {
    uVar13 = 0;
    uVar6 = puVar25[uVar24];
    do {
      if (uVar6 == 0) break;
      if ((uVar6 & 1) != 0) {
        local_e94[local_d14] = uVar13 + uVar24 * 0x20;
        local_d14 = local_d14 + 1;
      }
      uVar13 = uVar13 + 1;
      uVar6 = uVar6 >> 1;
    } while (uVar13 < 0x20);
    uVar24 = uVar24 + 1;
  } while (uVar24 < 3);
  local_ea4 = *(uint *)(iVar3 + 0x5c);
  if (local_d14 != 0) {
    iVar12 = 0;
    if ((code *)*DAT_00420598 != (code *)0x0) {
      iVar12 = (*(code *)*DAT_00420598)(0x10000,0x100,0,local_d14 << 4);
    }
    puVar25 = (uint *)0x41f888;
    local_e98 = iVar12;
    FUN_00343280(iVar12,local_d14 << 4);
  }
  if (*(int *)(pcVar18 + 0x10) != 0) {
    uVar24 = 0;
    if (*(int *)(iVar19 + 0x5c) != 0) {
      do {
        iVar15 = *(int *)(iVar19 + 0x58);
        iVar5 = *(int *)(iVar15 + uVar24 * 0x14);
        iVar12 = 0;
        if (iVar5 != 0x8b54) {
          iVar12 = iVar5 + -0x8b00;
        }
        if (iVar5 != 0x8b54 && iVar12 != 0x56) {
          iVar12 = uVar24 * 0x14 + 0x10;
          if (*(uint *)(iVar15 + iVar12) != 0) {
            uVar6 = *(uint *)(iVar15 + iVar12) & 1;
            if (uVar6 == 1) {
              uVar13 = *(uint *)(iVar15 + uVar24 * 0x14 + 4);
              iVar5 = (int)uVar13 >> 5;
              auStack_ee4[iVar5 + 2] = auStack_ee4[iVar5 + 2] | 1 << (uVar13 & 0x1f);
            }
            uVar13 = (uint)(uVar6 == 1);
            if (uVar6 < *(uint *)(*(int *)(iVar19 + 0x58) + iVar12)) {
              iVar5 = uVar24 * 0x14 + 4;
              do {
                uVar6 = uVar6 + 2;
                uVar20 = *(int *)(*(int *)(iVar19 + 0x58) + iVar5) + uVar13;
                iVar15 = (int)uVar20 >> 5;
                auStack_ee4[iVar15 + 2] = auStack_ee4[iVar15 + 2] | 1 << (uVar20 & 0x1f);
                uVar20 = *(int *)(*(int *)(iVar19 + 0x58) + iVar5) + uVar13 + 1;
                iVar15 = (int)uVar20 >> 5;
                uVar13 = uVar13 + 2;
                auStack_ee4[iVar15 + 2] = auStack_ee4[iVar15 + 2] | 1 << (uVar20 & 0x1f);
              } while (uVar6 < *(uint *)(*(int *)(iVar19 + 0x58) + iVar12));
            }
          }
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < *(uint *)(iVar19 + 0x5c));
    }
    uVar24 = 0;
    puVar25 = auStack_ee4 + 2;
    do {
      uVar6 = puVar25[uVar24];
      uVar13 = 0;
      do {
        if (uVar6 == 0) break;
        if ((uVar6 & 1) != 0) {
          local_d00[local_b80] = uVar13 + uVar24 * 0x20;
          local_b80 = local_b80 + 1;
        }
        uVar13 = uVar13 + 1;
        uVar6 = uVar6 >> 1;
      } while (uVar13 < 0x20);
      uVar24 = uVar24 + 1;
    } while (uVar24 < 3);
    local_ea0 = local_ea4;
    local_ea4 = *(int *)(iVar19 + 0x5c) + local_ea4;
    if (local_b80 != 0) {
      iVar12 = 0;
      if ((code *)*DAT_00420598 != (code *)0x0) {
        iVar12 = (*(code *)*DAT_00420598)(0x10000,0x100,0,local_b80 << 4);
      }
      puVar25 = (uint *)0x41fa58;
      local_d04 = iVar12;
      FUN_00343280(iVar12,local_b80 << 4);
    }
  }
  puVar23 = DAT_0042059c;
  if (local_ea4 < 0x801) {
    local_e9c = local_ea4;
    local_ea4 = local_ea4 + 0x129;
    iVar12 = 0;
    if ((code *)*DAT_00420598 != (code *)0x0) {
      iVar12 = (*(code *)*DAT_00420598)(0x10000,0x100,0,local_ea4 * 0xc);
    }
    local_ea8 = iVar12;
    if (iVar12 == 0) goto LAB_0041fad4;
    puVar25 = (uint *)0x41fac8;
    FUN_00343280(iVar12,local_ea4 * 0xc);
  }
  if (local_ea8 == 0) {
LAB_0041fad4:
    if (local_d04 != 0) {
      pcVar18 = (code *)*puVar23;
    }
    if (local_d04 != 0 && pcVar18 != (code *)0x0) {
      (*pcVar18)(0x10000,0x100,0,local_d04);
    }
    if (local_e98 != 0) {
      pcVar18 = (code *)*puVar23;
    }
    if (local_e98 != 0 && pcVar18 != (code *)0x0) {
      (*pcVar18)(0x10000,0x100,0,local_e98);
    }
    return;
  }
  if (*(int *)(pcVar18 + 0x1c) != 0) {
    if ((code *)*puVar23 != (code *)0x0) {
      puVar25 = (uint *)0x41fb58;
      (*(code *)*puVar23)(0x10000,0x100,0);
    }
    *(int *)(pcVar18 + 0x1c) = 0;
  }
  if (*(int *)(pcVar18 + 0x2c) != 0) {
    if ((code *)*puVar23 != (code *)0x0) {
      puVar25 = (uint *)0x41fb88;
      (*(code *)*puVar23)(0x10000,0x100,0);
    }
    *(int *)(pcVar18 + 0x2c) = 0;
  }
  *(int *)(pcVar18 + 0x1b0) = 0;
  *(int *)(pcVar18 + 0x1b4) = 0;
  *(int *)(pcVar18 + 0x1b8) = 0;
  *(int *)(pcVar18 + 0x1bc) = 0;
  if (*(int *)(pcVar18 + 0x1c0) != 0) {
    if ((code *)*puVar23 != (code *)0x0) {
      puVar25 = (uint *)0x41fbcc;
      (*(code *)*puVar23)(0x10000,0x100,0);
    }
    *(int *)(pcVar18 + 0x1c0) = 0;
  }
  *(int *)(pcVar18 + 0x344) = 0;
  *(int *)(pcVar18 + 0x348) = 0;
  *(int *)(pcVar18 + 0x34c) = 0;
  *(int *)(pcVar18 + 0x350) = 0;
  pcVar7 = pcVar18 + 0x34c;
  iVar12 = 6;
  do {
    *(int *)(pcVar7 + 0xc) = -1;
    iVar12 = iVar12 + -1;
    pcVar7 = pcVar7 + 0x18;
    *(int *)pcVar7 = -1;
  } while (iVar12 != 0);
  *(uint *)(pcVar18 + 0x1b0) = local_d14;
  if (local_d14 != 0) {
    piVar11 = &local_e98;
    pcVar7 = pcVar18 + 0x2c;
    if ((local_d14 & 1) != 0) {
      piVar11 = local_e94;
      pcVar7 = pcVar18 + 0x30;
      *(int *)pcVar7 = local_e94[0];
    }
    for (uVar24 = *(uint *)(pcVar18 + 0x1b0) >> 1; uVar24 != 0; uVar24 = uVar24 - 1) {
      puVar25 = (uint *)piVar11[1];
      *(uint **)(pcVar7 + 4) = puVar25;
      piVar11 = piVar11 + 2;
      pcVar7 = pcVar7 + 8;
      *(int *)pcVar7 = *piVar11;
    }
  }
  *(int *)(pcVar18 + 0x2c) = local_e98;
  *(uint *)(pcVar18 + 0x344) = local_b80;
  if (local_b80 != 0) {
    piVar11 = &local_d04;
    pcVar7 = pcVar18 + 0x1c0;
    if ((local_b80 & 1) != 0) {
      piVar11 = local_d00;
      pcVar7 = pcVar18 + 0x1c4;
      *(int *)pcVar7 = local_d00[0];
    }
    for (uVar24 = *(uint *)(pcVar18 + 0x344) >> 1; uVar24 != 0; uVar24 = uVar24 - 1) {
      puVar25 = (uint *)piVar11[1];
      *(uint **)(pcVar7 + 4) = puVar25;
      piVar11 = piVar11 + 2;
      pcVar7 = pcVar7 + 8;
      *(int *)pcVar7 = *piVar11;
    }
  }
  uVar24 = 0;
  *(int *)(pcVar18 + 0x1c0) = local_d04;
  *(uint *)(pcVar18 + 0x24) = local_ea0;
  *(uint *)(pcVar18 + 0x28) = local_e9c;
  *(uint *)(pcVar18 + 0x20) = local_ea4;
  *(int *)(pcVar18 + 0x1c) = local_ea8;
  if (*(int *)(iVar3 + 0x5c) != 0) {
    do {
      iVar15 = *(int *)(iVar3 + 0x58);
      uVar6 = DAT_004205a0 & uVar24 << 7;
      iVar5 = *(int *)(iVar15 + uVar24 * 0x14);
      uVar13 = (*(uint *)(iVar15 + uVar24 * 0x14 + 0x10) & 0x7f) << 0x11 |
               (*(uint *)(iVar15 + uVar24 * 0x14 + 8) & 3) << 0xb;
      iVar12 = iVar5 - DAT_004205a4;
      if (iVar5 == DAT_004205a4) {
        uVar13 = uVar13 | 0x14000 | *(int *)(iVar15 + uVar24 * 0x14 + 4) << 0x18;
      }
      else if (iVar5 < DAT_004205a4) {
        if (iVar5 != 0x1406) {
          if (iVar5 == 0x8b50) {
            uVar13 = uVar13 | 0x2000;
          }
          else if (iVar5 == 0x8b51) {
            uVar13 = uVar13 | 0x4000;
          }
          else if (iVar5 == 0x8b52) {
            uVar13 = uVar13 | 0x6000;
          }
        }
      }
      else if (iVar12 == 2) {
        uVar13 = uVar13 | 0x10000 | *(int *)(iVar15 + uVar24 * 0x14 + 4) << 0x18;
      }
      else {
        if (iVar12 == 6) {
          uVar13 = uVar13 | 0x2000;
        }
        else {
          if (iVar12 != 7) {
            if (iVar12 == 8) {
              uVar13 = uVar13 | 0xe000;
            }
            goto LAB_0041fdf8;
          }
          uVar13 = uVar13 | 0x4000;
        }
        uVar13 = uVar13 | 0x8000;
      }
LAB_0041fdf8:
      if ((uVar13 & 0x10000) == 0) {
        puVar25 = *(uint **)(pcVar18 + 0x1b0);
        puVar8 = (uint *)0x0;
        if (puVar25 != (uint *)0x0) {
          do {
            if (*(int *)(iVar15 + uVar24 * 0x14 + 4) == *(int *)(pcVar18 + (int)puVar8 * 4 + 0x30))
            {
              uVar13 = uVar13 & 0xffffff | (int)puVar8 << 0x18;
              break;
            }
            puVar8 = (uint *)((int)puVar8 + 1);
          } while (puVar8 < puVar25);
        }
      }
      uVar20 = *(uint *)(iVar15 + uVar24 * 0x14 + 0xc);
      uVar16 = uVar24 + 1;
      puVar8 = (uint *)(*(int *)(pcVar18 + 0x1c) + uVar24 * 0xc);
      puVar8[2] = uVar13;
      puVar8[1] = uVar20;
      *puVar8 = local_28 << 0x13 | uVar6;
      uVar24 = uVar16;
    } while (uVar16 < *(uint *)(iVar3 + 0x5c));
  }
  iVar12 = 0;
  if (*(int *)(pcVar18 + 0x10) != 0) {
    iVar12 = *(int *)(iVar19 + 0x5c);
    puVar25 = (uint *)0x0;
  }
  if (*(int *)(pcVar18 + 0x10) != 0 && iVar12 != 0) {
    do {
      iVar22 = *(int *)(pcVar18 + 0x24) + (int)puVar25;
      auStack_ee4[7] = DAT_004205a0 & iVar22 * 0x80 | local_28 << 0x13;
      iVar15 = *(int *)(iVar19 + 0x58);
      iVar5 = *(int *)(iVar15 + (int)puVar25 * 0x14);
      uVar24 = (*(uint *)(iVar15 + (int)puVar25 * 0x14 + 0x10) & 0x7f) << 0x11 |
               (*(uint *)(iVar15 + (int)puVar25 * 0x14 + 8) & 3) << 0xb | 0x400;
      iVar12 = iVar5 - DAT_004205a4;
      if (iVar5 == DAT_004205a4) {
        uVar24 = uVar24 | 0x14000 | *(int *)(iVar15 + (int)puVar25 * 0x14 + 4) << 0x18;
      }
      else if (iVar5 < DAT_004205a4) {
        if (iVar5 != 0x1406) {
          if (iVar5 == 0x8b50) {
            uVar24 = uVar24 | 0x2000;
          }
          else if (iVar5 == 0x8b51) {
            uVar24 = uVar24 | 0x4000;
          }
          else if (iVar5 == 0x8b52) {
            uVar24 = uVar24 | 0x6000;
          }
        }
      }
      else if (iVar12 == 2) {
        uVar24 = uVar24 | 0x10000 | *(int *)(iVar15 + (int)puVar25 * 0x14 + 4) << 0x18;
      }
      else {
        if (iVar12 == 6) {
          uVar24 = uVar24 | 0x2000;
        }
        else {
          if (iVar12 != 7) {
            if (iVar12 == 8) {
              uVar24 = uVar24 | 0xe000;
            }
            goto LAB_0041ffa0;
          }
          uVar24 = uVar24 | 0x4000;
        }
        uVar24 = uVar24 | 0x8000;
      }
LAB_0041ffa0:
      if ((uVar24 & 0x10000) == 0) {
        uVar6 = 0;
        if (*(uint *)(pcVar18 + 0x344) != 0) {
          do {
            if (*(int *)(iVar15 + (int)puVar25 * 0x14 + 4) == *(int *)(pcVar18 + uVar6 * 4 + 0x1c4))
            {
              uVar24 = uVar24 & 0xffffff | uVar6 << 0x18;
              break;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)(pcVar18 + 0x344));
        }
      }
      uVar6 = *(uint *)(iVar15 + (int)puVar25 * 0x14 + 0xc);
      puVar25 = (uint *)((int)puVar25 + 1);
      puVar8 = (uint *)(*(int *)(pcVar18 + 0x1c) + iVar22 * 0xc);
      puVar8[2] = uVar24;
      puVar8[1] = uVar6;
      *puVar8 = auStack_ee4[7];
    } while (puVar25 < *(uint **)(iVar19 + 0x5c));
  }
  iVar12 = DAT_004205a8;
  uVar24 = *(uint *)(pcVar18 + 0x28);
  if (uVar24 < *(uint *)(pcVar18 + 0x20)) {
    do {
      iVar5 = *(int *)(pcVar18 + 0x28);
      uVar6 = uVar24 - iVar5 & 0xffff;
      uVar13 = uVar6 << 2 | local_28 << 0x13;
      uVar20 = uVar13 | 0x40000;
      switch(*(undefined4 *)(iVar12 + uVar6 * 0xc + 4)) {
      case 0x8b50:
      case 0x8b53:
        uVar20 = uVar13 | 0x40001;
        break;
      case 0x8b51:
      case 0x8b54:
        uVar20 = uVar13 | 0x40002;
        break;
      case 0x8b52:
      case 0x8b55:
        uVar20 = uVar13 | 0x40003;
      }
      uVar6 = uVar24 + 1;
      puVar25 = (uint *)(*(int *)(pcVar18 + 0x1c) + uVar24 * 0xc);
      *puVar25 = uVar20;
      puVar25[1] = uVar24 - iVar5;
      puVar25[2] = 0;
      uVar24 = uVar6;
    } while (uVar6 < *(uint *)(pcVar18 + 0x20));
  }
  uVar24 = 0;
  for (puVar23 = *(undefined4 **)(pcVar18 + 0x18); puVar23 != (undefined4 *)0x0;
      puVar23 = (undefined4 *)puVar23[2]) {
    uVar6 = 0;
    do {
      iVar12 = iVar3 + uVar6 * 8;
      if ((*(int *)(iVar12 + 0x60) != 0) &&
         (iVar5 = FUN_00303414(*(int *)(iVar3 + 0xe0) + *(int *)(iVar12 + 100),*puVar23), iVar5 == 0
         )) {
        uVar24 = uVar24 | 1 << (uVar6 & 0xff);
        *(uint *)(pcVar18 + puVar23[1] * 0xc + 0x358) = uVar6;
        *(undefined4 *)(pcVar18 + puVar23[1] * 0xc + 0x354) =
             *(undefined4 *)(iVar3 + uVar6 * 8 + 0x60);
        *(undefined4 *)(pcVar18 + puVar23[1] * 0xc + 0x35c) = *(undefined4 *)(iVar12 + 100);
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
  }
  uVar6 = 0;
  do {
    iVar12 = iVar3 + uVar6 * 8;
    if (*(int *)(iVar12 + 0x60) != 0) {
      uVar13 = 1 << (uVar6 & 0xff);
      uVar20 = 0;
      if ((uVar13 & uVar24) == 0) {
        do {
          if (*(int *)(pcVar18 + uVar20 * 0xc + 0x358) == -1) {
            uVar24 = uVar24 | uVar13;
            *(uint *)(pcVar18 + uVar20 * 0xc + 0x358) = uVar6;
            *(undefined4 *)(pcVar18 + uVar20 * 0xc + 0x354) = *(undefined4 *)(iVar12 + 0x60);
            *(undefined4 *)(pcVar18 + uVar20 * 0xc + 0x35c) = *(undefined4 *)(iVar12 + 100);
            break;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < 0xc);
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x10);
  uVar24 = 0;
  uVar6 = 0;
  puVar23 = (undefined4 *)(iVar3 + 0x38);
  if (*(int *)(pcVar18 + 0x10) == 0) {
    auStack_ee4[1] = *puVar23;
    auStack_ee4[2] = *(undefined4 *)(iVar3 + 0x3c);
    auStack_ee4[3] = *(undefined4 *)(iVar3 + 0x40);
    auStack_ee4[4] = *(undefined4 *)(iVar3 + 0x44);
    auStack_ee4[5] = *(undefined4 *)(iVar3 + 0x48);
    auStack_ee4[6] = *(undefined4 *)(iVar3 + 0x4c);
    auStack_ee4[7] = *(uint *)(iVar3 + 0x50);
    *(int *)(pcVar18 + 0x3f0) = *(int *)(iVar3 + 0x54);
  }
  else {
    puVar21 = (undefined4 *)(iVar19 + 0x38);
    if (*(char *)(iVar19 + 1) == '\0') {
      auStack_ee4[1] = *puVar21;
      auStack_ee4[2] = *(undefined4 *)(iVar19 + 0x3c);
      auStack_ee4[3] = *(undefined4 *)(iVar19 + 0x40);
      auStack_ee4[4] = *(undefined4 *)(iVar19 + 0x44);
      auStack_ee4[5] = *(undefined4 *)(iVar19 + 0x48);
      auStack_ee4[6] = *(undefined4 *)(iVar19 + 0x4c);
      auStack_ee4[7] = *(uint *)(iVar19 + 0x50);
      uVar6 = (uint)*(ushort *)(iVar19 + 8);
      uVar13 = *(uint *)(iVar19 + 0x54);
      uVar24 = *(uint *)(iVar19 + 0x10);
    }
    else {
      uVar24 = 0;
      uVar13 = 0;
      uVar20 = 0;
      uVar6 = 0;
      do {
        uVar16 = puVar21[uVar6];
        if (uVar16 == DAT_004205ac) break;
        uVar9 = 0;
        do {
          if (uVar16 == puVar23[uVar9]) {
            auStack_ee4[uVar24 + 1] = uVar16;
            uVar13 = uVar13 | 1 << (uVar6 & 0xff);
            uVar20 = uVar20 | 1 << (uVar9 & 0xff);
            uVar24 = uVar24 + 1;
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 7);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 7);
      uVar6 = 0;
      while (puVar21[uVar6] != DAT_004205ac) {
        bVar27 = (uVar13 & 1 << (uVar6 & 0xff)) == 0;
        if (bVar27) {
          auStack_ee4[uVar24 + 1] = puVar21[uVar6];
          uVar24 = uVar24 + 1;
        }
        if ((bVar27 && uVar24 == 7) || (uVar6 = uVar6 + 1, 6 < uVar6)) break;
      }
      uVar6 = 0;
      do {
        if (puVar23[uVar6] == DAT_004205ac) break;
        bVar27 = (uVar20 & 1 << (uVar6 & 0xff)) == 0;
        if (bVar27) {
          auStack_ee4[uVar24 + 1] = puVar23[uVar6];
          uVar24 = uVar24 + 1;
        }
        if (bVar27 && uVar24 == 7) goto LAB_00420318;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 7);
      if (uVar24 < 7) {
        puVar25 = auStack_ee4 + uVar24;
        if ((7 - uVar24 & 1) != 0) {
          auStack_ee4[uVar24 + 1] = DAT_004205ac;
          puVar25 = auStack_ee4 + uVar24 + 1;
        }
        for (uVar6 = 7 - uVar24 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar25[1] = DAT_004205ac;
          puVar25 = puVar25 + 2;
          *puVar25 = DAT_004205ac;
        }
      }
LAB_00420318:
      uVar20 = 0;
      uVar13 = uVar24;
      for (uVar6 = (uint)*(ushort *)(iVar19 + 8); uVar13 != 0 && uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((uVar6 & 1) != 0) {
          uVar13 = uVar13 - 1;
        }
        uVar20 = uVar20 + 1;
      }
      uVar6 = (uint)*(ushort *)(iVar19 + 8) & (1 << (uVar20 & 0xff)) - 1U;
      uVar13 = *(uint *)(iVar19 + 0x54) | *(uint *)(iVar3 + 0x54);
    }
    *(uint *)(pcVar18 + 0x3f0) = uVar13;
  }
  iVar12 = DAT_00420594;
  FUN_00371738(pcVar18 + 0x4b4,*(int *)(DAT_00420594 + 8) + 0x1300,0x2f4);
  FUN_0034338c(pcVar18 + 0x3f6,*(int *)(iVar12 + 8) + 0x16b1,0xbd);
  FUN_00343280(pcVar18 + 0x96c,0x530);
  pcVar7 = pcVar18 + 0x970;
  iVar12 = 3;
  pcVar18[0x96c] = (code)0x1;
  do {
    *(int *)(pcVar7 + 4) = -1;
    iVar12 = iVar12 + -1;
    pcVar7 = pcVar7 + 8;
    *(int *)pcVar7 = -1;
  } while (iVar12 != 0);
  *(int *)(pcVar18 + 0x98c) = 0x61;
  iVar5 = DAT_004205b4;
  iVar12 = DAT_004205b0;
  *(int *)(pcVar18 + 0x990) = DAT_004205b0;
  *(int *)(pcVar18 + 0x994) = iVar12;
  *(int *)(pcVar18 + 0x998) = iVar12;
  *(int *)(pcVar18 + 0x99c) = iVar5;
  *(int *)(pcVar18 + 0x9b4) = iVar5;
  *(int *)(pcVar18 + 0x9c4) = iVar5;
  *(int *)(pcVar18 + 0x9b8) = iVar5;
  *(int *)(pcVar18 + 0x9c8) = iVar5;
  *(int *)(pcVar18 + 0x9bc) = iVar5;
  *(int *)(pcVar18 + 0x9cc) = iVar5;
  *(int *)(pcVar18 + 0x9c0) = iVar5;
  *(int *)(pcVar18 + 0x9d0) = iVar5;
  iVar15 = DAT_004205b8;
  pcVar10 = pcVar18 + 0x9ec;
  pcVar14 = pcVar18 + 0x9fc;
  pcVar26 = pcVar18 + 0xa08;
  iVar22 = 8;
  pcVar7 = pcVar18 + 0xa00;
  pcVar17 = pcVar18 + 0xa0c;
  do {
    *(int *)pcVar10 = iVar5;
    *(int *)pcVar14 = iVar15;
    *(int *)pcVar7 = -1;
    *(int *)pcVar17 = -1;
    *(int *)pcVar26 = iVar5;
    iVar2 = DAT_004205bc;
    iVar22 = iVar22 + -1;
    pcVar10 = pcVar10 + 0x70;
    pcVar14 = pcVar14 + 0x70;
    pcVar26 = pcVar26 + 0x70;
    pcVar7 = pcVar7 + 0x70;
    pcVar17 = pcVar17 + 0x70;
  } while (iVar22 != 0);
  *(int *)(pcVar18 + 0xd20) = iVar12;
  *(int *)(pcVar18 + 0xd30) = iVar2;
  *(int *)(pcVar18 + 0xd24) = iVar12;
  *(int *)(pcVar18 + 0xd34) = iVar2;
  *(int *)(pcVar18 + 0xd28) = iVar12;
  *(int *)(pcVar18 + 0xd38) = iVar2;
  *(int *)(pcVar18 + 0xd2c) = iVar5;
  *(int *)(pcVar18 + 0xd3c) = iVar5;
  *(int *)(pcVar18 + 0xd4c) = iVar5;
  *(int *)(pcVar18 + 0xd5c) = iVar5;
  *(int *)(pcVar18 + 0xd6c) = iVar5;
  pcVar7 = pcVar18 + 0xd70;
  iVar12 = 3;
  *(int *)(pcVar18 + 0xd70) = -1;
  do {
    *(int *)(pcVar7 + 4) = -1;
    iVar12 = iVar12 + -1;
    pcVar7 = pcVar7 + 8;
    *(int *)pcVar7 = -1;
    iVar15 = DAT_004205c4;
  } while (iVar12 != 0);
  *(int *)(pcVar18 + 0xd90) = DAT_004205c0;
  *(int *)(pcVar18 + 0xdb8) = iVar15;
  *(int *)(pcVar18 + 0xdbc) = iVar5;
  *(int *)(pcVar18 + 0xde4) = -1;
  pcVar18[0xdf4] = (code)0x1;
  *(int *)(pcVar18 + 0xdf8) = -1;
  *(int *)(pcVar18 + 0xdfc) = -1;
  *(int *)(pcVar18 + 0xe00) = -1;
  *(int *)(pcVar18 + 0xe24) = iVar5;
  *(int *)(pcVar18 + 0xe28) = iVar5;
  *(int *)(pcVar18 + 0xe20) = DAT_004205c8;
  uVar13 = *(uint *)(iVar3 + 0x14) | 0x7fff0000;
  if (*(uint *)(pcVar18 + 0x4f0) != uVar13) {
    *(uint *)(pcVar18 + 0x4f0) = uVar13;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x8000;
  }
  pcVar18[0x405] = (code)0xf;
  uVar13 = *(uint *)(iVar3 + 0x1c) | 0x7fff0000;
  if (*(uint *)(pcVar18 + 0x4d8) != uVar13) {
    *(uint *)(pcVar18 + 0x4d8) = uVar13;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x200;
  }
  pcVar18[0x3ff] = (code)0xf;
  if (*(int *)(pcVar18 + 0x4dc) != *(int *)(iVar3 + 0x20)) {
    *(int *)(pcVar18 + 0x4dc) = *(int *)(iVar3 + 0x20);
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x400;
  }
  pcVar18[0x400] = (code)0xf;
  if (*(int *)(pcVar18 + 0x4e0) != *(int *)(iVar3 + 0x24)) {
    *(int *)(pcVar18 + 0x4e0) = *(int *)(iVar3 + 0x24);
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x800;
  }
  pcVar18[0x401] = (code)0xf;
  if (*(int *)(pcVar18 + 0x4e4) != *(int *)(iVar3 + 0x28)) {
    *(int *)(pcVar18 + 0x4e4) = *(int *)(iVar3 + 0x28);
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x1000;
  }
  pcVar18[0x402] = (code)0xf;
  if (*(int *)(pcVar18 + 0x4e8) != *(int *)(iVar3 + 0x2c)) {
    *(int *)(pcVar18 + 0x4e8) = *(int *)(iVar3 + 0x2c);
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x2000;
  }
  pcVar18[0x403] = (code)0xf;
  if (*(uint *)(pcVar18 + 0x4f4) != (uint)*(ushort *)(iVar3 + 8)) {
    *(uint *)(pcVar18 + 0x4f4) = (uint)*(ushort *)(iVar3 + 8);
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x10000;
  }
  pcVar18[0x406] = (code)0xf;
  uVar13 = *(int *)(iVar3 + 0xc) - 1U & 0xff;
  if ((*(uint *)(pcVar18 + 0x4ec) & 0xff) != uVar13) {
    *(uint *)(pcVar18 + 0x4ec) = *(uint *)(pcVar18 + 0x4ec) & 0xffffff00 | uVar13;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x4000;
  }
  uVar13 = DAT_00420f48;
  pcVar18[0x404] = (code)((byte)pcVar18[0x404] | 1);
  if (*(int *)(pcVar18 + 0x10) == 0) {
    if (*(int *)(pcVar18 + 0x518) != *(int *)(iVar3 + 0x10)) {
      *(int *)(pcVar18 + 0x518) = *(int *)(iVar3 + 0x10);
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x2000000;
    }
    pcVar18[0x40f] = (code)0xf;
    uVar24 = 0;
    do {
      if (*(uint *)(pcVar18 + uVar24 * 4 + 0x51c) != auStack_ee4[uVar24 + 1]) {
        *(uint *)(pcVar18 + uVar24 * 4 + 0x51c) = auStack_ee4[uVar24 + 1];
        uVar6 = uVar24 + 0x1a >> 5;
        *(uint *)(pcVar18 + uVar6 * 4 + 0x7a8) =
             *(uint *)(pcVar18 + uVar6 * 4 + 0x7a8) | 1 << (uVar24 + 0x1a & 0x1f);
      }
      uVar6 = uVar24 + 1;
      pcVar18[uVar24 + 0x410] = (code)0xf;
      uVar24 = uVar6;
    } while (uVar6 < 7);
    uVar24 = *(uint *)(pcVar18 + 0x3f0);
    if (*(uint *)(pcVar18 + 0x554) != uVar24) {
      *(uint *)(pcVar18 + 0x554) = uVar24;
      *(uint *)(pcVar18 + 0x7ac) = *(uint *)(pcVar18 + 0x7ac) | 0x100;
    }
    pcVar18[0x41e] = (code)0xf;
    uVar24 = uVar24 & uVar13;
    if (*(uint *)(pcVar18 + 0x54c) != (uint)(uVar24 != 0)) {
      *(uint *)(pcVar18 + 0x54c) = (uint)(uVar24 != 0);
      *(uint *)(pcVar18 + 0x7ac) = *(uint *)(pcVar18 + 0x7ac) | 0x40;
    }
    pcVar18[0x41c] = (code)0xf;
    if ((*(uint *)(pcVar18 + 0x4b4) & 0xff000000) != 0) {
      *(uint *)(pcVar18 + 0x4b4) = *(uint *)(pcVar18 + 0x4b4) & 0xffffff;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 1;
    }
    pcVar18[0x3f6] = (code)((byte)pcVar18[0x3f6] | 8);
    if (*(int *)(pcVar18 + 0x4fc) != 0) {
      *(int *)(pcVar18 + 0x4fc) = 0;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x40000;
    }
    pcVar18[0x408] = (code)0xf;
    if ((*(uint *)(pcVar18 + 0x4ec) & 0xff00ff00) != 0xa0000000) {
      *(uint *)(pcVar18 + 0x4ec) = *(uint *)(pcVar18 + 0x4ec) & 0xff00ff | 0xa0000000;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x4000;
    }
    pcVar18[0x404] = (code)((byte)pcVar18[0x404] | 10);
    iVar19 = *(int *)(iVar3 + 0x10) + -1;
    if (*(int *)(pcVar18 + 0x508) != iVar19) {
      *(int *)(pcVar18 + 0x508) = iVar19;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x200000;
    }
    pcVar18[0x40b] = (code)0xf;
    uVar24 = *(int *)(iVar3 + 0x10) - 1U & 0xff;
    if ((*(uint *)(pcVar18 + 0x50c) & 0xff) != uVar24) {
      *(uint *)(pcVar18 + 0x50c) = uVar24 | *(uint *)(pcVar18 + 0x50c) & 0xffffff00;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x400000;
    }
    pcVar18[0x40c] = (code)((byte)pcVar18[0x40c] | 1);
    iVar19 = *(int *)(iVar3 + 0x10) + -1;
    if (*(int *)(pcVar18 + 0x4f8) != iVar19) {
      *(int *)(pcVar18 + 0x4f8) = iVar19;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x20000;
    }
    pcVar18[0x407] = (code)0xf;
    iVar19 = *(int *)(iVar3 + 0xc) + -1;
    if (*(int *)(pcVar18 + 0x504) != iVar19) {
      *(int *)(pcVar18 + 0x504) = iVar19;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x100000;
    }
    pcVar18[0x40a] = (code)0xf;
    goto LAB_00420df4;
  }
  uVar20 = *(int *)(iVar3 + 0x10) - 1U & 0xff;
  if ((*(uint *)(pcVar18 + 0x4cc) & 0xff) != uVar20) {
    *(uint *)(pcVar18 + 0x4cc) = uVar20 | *(uint *)(pcVar18 + 0x4cc) & 0xffffff00;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x40;
  }
  pcVar18[0x3fc] = (code)((byte)pcVar18[0x3fc] | 1);
  uVar20 = *(uint *)(iVar19 + 0x14) | 0x7fff0000;
  if (*(uint *)(pcVar18 + 0x4d0) != uVar20) {
    *(uint *)(pcVar18 + 0x4d0) = uVar20;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x80;
  }
  pcVar18[0x3fd] = (code)0xf;
  uVar20 = *(uint *)(iVar19 + 0x1c) | 0x7fff0000;
  if (*(uint *)(pcVar18 + 0x4b8) != uVar20) {
    *(uint *)(pcVar18 + 0x4b8) = uVar20;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 2;
  }
  pcVar18[0x3f7] = (code)0xf;
  if (*(int *)(pcVar18 + 0x4bc) != *(int *)(iVar19 + 0x20)) {
    *(int *)(pcVar18 + 0x4bc) = *(int *)(iVar19 + 0x20);
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 4;
  }
  pcVar18[0x3f8] = (code)0xf;
  if (*(int *)(pcVar18 + 0x4c0) != *(int *)(iVar19 + 0x24)) {
    *(int *)(pcVar18 + 0x4c0) = *(int *)(iVar19 + 0x24);
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 8;
  }
  pcVar18[0x3f9] = (code)0xf;
  if (*(int *)(pcVar18 + 0x4c4) != *(int *)(iVar19 + 0x28)) {
    *(int *)(pcVar18 + 0x4c4) = *(int *)(iVar19 + 0x28);
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x10;
  }
  pcVar18[0x3fa] = (code)0xf;
  if (*(int *)(pcVar18 + 0x4c8) != *(int *)(iVar19 + 0x2c)) {
    *(int *)(pcVar18 + 0x4c8) = *(int *)(iVar19 + 0x2c);
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x20;
  }
  pcVar18[0x3fb] = (code)0xf;
  if (*(uint *)(pcVar18 + 0x4d4) != uVar6) {
    *(uint *)(pcVar18 + 0x4d4) = uVar6;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x100;
  }
  pcVar18[0x3fe] = (code)0xf;
  if (*(uint *)(pcVar18 + 0x518) != uVar24) {
    *(uint *)(pcVar18 + 0x518) = uVar24;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x2000000;
  }
  pcVar18[0x40f] = (code)0xf;
  uVar6 = 0;
  do {
    if (*(uint *)(pcVar18 + uVar6 * 4 + 0x51c) != auStack_ee4[uVar6 + 1]) {
      *(uint *)(pcVar18 + uVar6 * 4 + 0x51c) = auStack_ee4[uVar6 + 1];
      uVar20 = uVar6 + 0x1a >> 5;
      *(uint *)(pcVar18 + uVar20 * 4 + 0x7a8) =
           *(uint *)(pcVar18 + uVar20 * 4 + 0x7a8) | 1 << (uVar6 + 0x1a & 0x1f);
    }
    uVar20 = uVar6 + 1;
    pcVar18[uVar6 + 0x410] = (code)0xf;
    uVar6 = uVar20;
  } while (uVar20 < 7);
  uVar6 = *(uint *)(pcVar18 + 0x3f0);
  if (*(uint *)(pcVar18 + 0x554) != uVar6) {
    *(uint *)(pcVar18 + 0x554) = uVar6;
    *(uint *)(pcVar18 + 0x7ac) = *(uint *)(pcVar18 + 0x7ac) | 0x100;
  }
  pcVar18[0x41e] = (code)0xf;
  uVar6 = uVar6 & uVar13;
  if (*(uint *)(pcVar18 + 0x54c) != (uint)(uVar6 != 0)) {
    *(uint *)(pcVar18 + 0x54c) = (uint)(uVar6 != 0);
    *(uint *)(pcVar18 + 0x7ac) = *(uint *)(pcVar18 + 0x7ac) | 0x40;
  }
  pcVar18[0x41c] = (code)0xf;
  uVar6 = DAT_00420f4c;
  cVar1 = *(char *)(iVar19 + 2);
  if (cVar1 == '\0') {
    if ((*(uint *)(pcVar18 + 0x4b4) & 0xff000000) != 0) {
      *(uint *)(pcVar18 + 0x4b4) = *(uint *)(pcVar18 + 0x4b4) & 0xffffff;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 1;
    }
    pcVar18[0x3f6] = (code)((byte)pcVar18[0x3f6] | 8);
    if (*(int *)(pcVar18 + 0x4fc) != 0) {
      *(int *)(pcVar18 + 0x4fc) = 0;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x40000;
    }
    pcVar18[0x408] = (code)0xf;
    if ((*(uint *)(pcVar18 + 0x4cc) & 0xff00ff00) != 0x8000000) {
      *(uint *)(pcVar18 + 0x4cc) = *(uint *)(pcVar18 + 0x4cc) & 0xff00ff | 0x8000000;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x40;
    }
LAB_00420a00:
    pcVar18[0x3fc] = (code)((byte)pcVar18[0x3fc] | 10);
  }
  else if (cVar1 == '\x01') {
    if ((*(uint *)(pcVar18 + 0x4b4) & 0xff000000) != 0x80000000) {
      *(uint *)(pcVar18 + 0x4b4) = *(uint *)(pcVar18 + 0x4b4) & 0xffffff | 0x80000000;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 1;
    }
    pcVar18[0x3f6] = (code)((byte)pcVar18[0x3f6] | 8);
    if (*(int *)(pcVar18 + 0x4fc) != 1) {
      *(int *)(pcVar18 + 0x4fc) = 1;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x40000;
    }
    pcVar18[0x408] = (code)0xf;
    if ((*(uint *)(pcVar18 + 0x4cc) & 0xff00ff00) != uVar6) {
      *(uint *)(pcVar18 + 0x4cc) = *(uint *)(pcVar18 + 0x4cc) & 0xff00ff | 0x8000100;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x40;
    }
    pcVar18[0x3fc] = (code)((byte)pcVar18[0x3fc] | 10);
    iVar19 = *(byte *)(iVar19 + 4) - 1;
    if (*(int *)(pcVar18 + 0x500) != iVar19) {
      *(int *)(pcVar18 + 0x500) = iVar19;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x80000;
    }
    pcVar18[0x409] = (code)0xf;
  }
  else if (cVar1 == '\x02') {
    if ((*(uint *)(pcVar18 + 0x4b4) & 0xff000000) != 0) {
      *(uint *)(pcVar18 + 0x4b4) = *(uint *)(pcVar18 + 0x4b4) & 0xffffff;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 1;
    }
    pcVar18[0x3f6] = (code)((byte)pcVar18[0x3f6] | 8);
    uVar13 = DAT_00420f50 + *(int *)(iVar3 + 0x10) * 0x1000 |
             (uint)*(byte *)(iVar19 + 5) * 0x100 - 0x100 | (uint)*(byte *)(iVar19 + 3) << 0x10 |
             0x1000002;
    if (uVar13 != *(uint *)(pcVar18 + 0x4fc)) {
      *(uint *)(pcVar18 + 0x4fc) = uVar13;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x40000;
    }
    pcVar18[0x408] = (code)0xf;
    if ((*(uint *)(pcVar18 + 0x4cc) & 0xff00ff00) != uVar6) {
      *(uint *)(pcVar18 + 0x4cc) = *(uint *)(pcVar18 + 0x4cc) & 0xff00ff | 0x8000100;
      *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x40;
    }
    goto LAB_00420a00;
  }
  iVar19 = *(int *)(iVar3 + 0x10) + -1;
  if (*(int *)(pcVar18 + 0x508) != iVar19) {
    *(int *)(pcVar18 + 0x508) = iVar19;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x200000;
  }
  pcVar18[0x40b] = (code)0xf;
  uVar24 = uVar24 - 1 & 0xff;
  if ((*(uint *)(pcVar18 + 0x50c) & 0xff) != uVar24) {
    *(uint *)(pcVar18 + 0x50c) = *(uint *)(pcVar18 + 0x50c) & 0xffffff00 | uVar24;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x400000;
  }
  pcVar18[0x40c] = (code)((byte)pcVar18[0x40c] | 1);
  iVar19 = *(int *)(iVar3 + 0x10) + -1;
  if (*(int *)(pcVar18 + 0x4f8) != iVar19) {
    *(int *)(pcVar18 + 0x4f8) = iVar19;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x20000;
  }
  pcVar18[0x407] = (code)0xf;
  iVar19 = *(int *)(iVar3 + 0xc) + -1;
  if (*(int *)(pcVar18 + 0x504) != iVar19) {
    *(int *)(pcVar18 + 0x504) = iVar19;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x100000;
  }
  pcVar18[0x40a] = (code)0xf;
  if ((*(uint *)(pcVar18 + 0x4ec) & 0xff00ff00) != 0xa0000000) {
    *(uint *)(pcVar18 + 0x4ec) = *(uint *)(pcVar18 + 0x4ec) & 0xff00ff | 0xa0000000;
    *(uint *)(pcVar18 + 0x7a8) = *(uint *)(pcVar18 + 0x7a8) | 0x4000;
  }
  pcVar18[0x404] = (code)((byte)pcVar18[0x404] | 10);
LAB_00420df4:
  pcVar18[0x16] = (code)0x1;
  iVar19 = DAT_00420594;
  pcVar18[0x17] = pcVar18[0x14];
  pcVar18[0x14] = (code)0x0;
  if (*(int *)(pcVar18 + 0x10) == 0) {
    pcVar18[0x3f4] = (code)0x0;
  }
  else {
    pcVar18[0x3f4] = (code)0x1;
    *(int *)(pcVar18 + 0x3ec) = *(int *)(*(int *)(pcVar18 + 0x10) + 4);
  }
  *(int *)(pcVar18 + 1000) = (*(int **)(pcVar18 + 0xc))[1];
  if ((code *)**(undefined4 **)(iVar19 + 8) == pcVar18) {
    puVar25 = (uint *)*DAT_00420f54;
    uVar24 = *puVar25;
    iVar19 = 3;
    if (*(int *)(pcVar18 + 0x3e4) != **(int **)(pcVar18 + 0xc)) {
      uVar24 = uVar24 | 0x100000;
      *puVar25 = uVar24;
    }
    *puVar25 = uVar24 | 0x1e08000;
    *(int *)(pcVar18 + 0x1b4) = -1;
    *(int *)(pcVar18 + 0x1b8) = -1;
    *(int *)(pcVar18 + 0x1bc) = -1;
    pcVar7 = pcVar18 + 0x7a4;
    if (*(int *)(pcVar18 + 0x10) != 0) {
      *(int *)(pcVar18 + 0x348) = -1;
      *(int *)(pcVar18 + 0x34c) = -1;
      *(int *)(pcVar18 + 0x350) = -1;
      pcVar7 = pcVar18 + 0x7a4;
    }
    do {
      *(int *)(pcVar7 + 4) = -1;
      iVar19 = iVar19 + -1;
      pcVar7 = pcVar7 + 8;
      *(int *)pcVar7 = -1;
    } while (iVar19 != 0);
    uVar24 = *puVar25;
    *puVar25 = uVar24 | 0x200013c;
    if (puVar25[0x3e] != *(uint *)(pcVar18 + 0xdac)) {
      *(undefined1 *)(puVar25 + 0x41) = 0;
      *(undefined1 *)((int)puVar25 + 0x107) = 0;
      *puVar25 = uVar24 | 0x200053c;
      puVar25[0x3e] = 0;
    }
    if (puVar25[0x3f] != *(uint *)(pcVar18 + 0xdb0)) {
      *(undefined1 *)((int)puVar25 + 0x105) = 0;
      puVar25[0x3f] = 0;
      *puVar25 = *puVar25 | 0x800;
    }
    if (puVar25[0x40] != *(uint *)(pcVar18 + 0xdb4)) {
      *(undefined1 *)((int)puVar25 + 0x106) = 0;
      puVar25[0x40] = 0;
      *puVar25 = *puVar25 | 0x1000;
    }
    pcVar18[0x17] = (code)0x0;
    *(code *)((int)puVar25 + 0x1b) = pcVar18[0x3f4];
  }
  *(int *)(pcVar18 + 0x3e4) = **(int **)(pcVar18 + 0xc);
  return;
}

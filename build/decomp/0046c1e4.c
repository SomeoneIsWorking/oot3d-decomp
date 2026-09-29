// OoT3D decomp @ 0046c1e4  name=FUN_0046c1e4  size=14112

void FUN_0046c1e4(undefined4 param_1,undefined4 param_2,float param_3,uint *param_4,uint param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  int *extraout_r1;
  int *piVar12;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  int *extraout_r1_03;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  uint *unaff_r6;
  int iVar23;
  uint *puVar24;
  uint *unaff_r11;
  uint *puVar25;
  uint *puVar26;
  int iVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  uint uVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s2_07;
  float extraout_s2_08;
  float extraout_s2_09;
  float fVar39;
  float fVar40;
  float fVar41;
  uint local_874 [256];
  undefined1 auStack_474 [844];
  uint local_128;
  int local_124;
  uint local_120;
  uint *local_11c;
  int local_118;
  uint *local_114;
  uint *local_110;
  uint local_10c;
  uint local_108;
  uint local_104 [22];
  uint local_ac [18];
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;

  puVar24 = DAT_0046d138;
  puVar6 = DAT_0046d134;
  local_ac[0x10] = 0;
  puVar21 = (uint *)*DAT_0046d130;
  if (((param_5 & 0x1000) != 0) && ((*param_4 & 0x200) != 0)) {
    if ((char)puVar21[0x15e] == '\0') {
      uVar5 = 0;
      iVar18 = puVar21[0x173] - 1;
      uVar9 = 0;
      uVar19 = 0;
      uVar14 = puVar21[0x172] - 1;
    }
    else {
      uVar5 = puVar21[0x145];
      uVar9 = puVar21[0x146];
      uVar14 = puVar21[0x147] + (uVar5 - 1);
      uVar19 = puVar21[0x172];
      iVar18 = puVar21[0x148] + (uVar9 - 1);
      if ((int)uVar5 < (int)uVar19) {
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = uVar19 - 1;
      }
      uVar30 = puVar21[0x173];
      if ((int)uVar9 < (int)uVar30) {
        if ((int)uVar9 < 0) {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = uVar30 - 1;
      }
      if ((int)uVar19 < (int)uVar14) {
        uVar14 = uVar19 - 1;
      }
      else if ((int)uVar14 < 0) {
        uVar14 = 0;
      }
      if ((int)uVar30 < iVar18) {
        iVar18 = uVar30 - 1;
      }
      else if (iVar18 < 0) {
        iVar18 = 0;
      }
      uVar19 = 3;
    }
    puVar25 = (uint *)*DAT_0046d134;
    if (puVar25 < (uint *)*DAT_0046d138) {
      *puVar25 = uVar19;
      puVar25[1] = DAT_0046d13c;
      puVar25 = puVar25 + 2;
      *puVar6 = (uint)puVar25;
    }
    uVar19 = DAT_0046d140;
    if (puVar25 < (uint *)*puVar24) {
      *puVar25 = uVar5 | uVar9 << 0x10;
      puVar25[1] = uVar19;
      *puVar6 = (uint)(puVar25 + 2);
      puVar25 = puVar25 + 2;
    }
    unaff_r6 = puVar6;
    if (puVar25 < (uint *)*puVar24) {
      *puVar25 = uVar14 | iVar18 << 0x10;
      puVar25[1] = DAT_0046d144;
      *puVar6 = (uint)(puVar25 + 2);
    }
  }
  iVar18 = DAT_0046d148;
  piVar10 = *(int **)(DAT_0046d148 + 8);
  iVar20 = *piVar10;
  if (iVar20 == 0) {
    return;
  }
  if ((param_5 & 4) != 0) {
    unaff_r6 = (uint *)(uint)(*(char *)(iVar20 + 0x3f4) != '\0');
    puVar6 = *(uint **)(DAT_0046d148 + 0xc);
    bVar31 = unaff_r6 == puVar6;
    if (bVar31) {
      puVar6 = (uint *)puVar21[1];
    }
    if (!bVar31 || ((uint)puVar6 & 4) != 0) {
      FUN_002d134c(DAT_0046d14c,10);
      FUN_002d134c(0x200,0x1e);
      puVar24 = DAT_0046d138;
      puVar6 = DAT_0046d134;
      puVar7 = (undefined4 *)*DAT_0046d134;
      if (puVar7 < (undefined4 *)*DAT_0046d138) {
        uVar11 = 0;
        if (unaff_r6 != (uint *)0x0) {
          uVar11 = 2;
        }
        *puVar7 = uVar11;
        puVar7[1] = DAT_0046d150;
        *puVar6 = (uint)(puVar7 + 2);
      }
      FUN_002d134c(0x200,0x1e);
      *(uint **)(iVar18 + 0xc) = unaff_r6;
      piVar10 = DAT_0046d154;
      puVar7 = (undefined4 *)*puVar6;
      param_3 = extraout_s2;
      if (unaff_r6 == (uint *)0x0) {
        if (puVar7 < (undefined4 *)*puVar24) {
          *puVar7 = 0;
          puVar7[1] = piVar10;
          *puVar6 = (uint)(puVar7 + 2);
        }
      }
      else if (puVar7 < (undefined4 *)*puVar24) {
        *puVar7 = 1;
        puVar7[1] = piVar10;
        *puVar6 = (uint)(puVar7 + 2);
      }
    }
  }
  iVar18 = DAT_0046d158;
  puVar24 = DAT_0046d138;
  puVar6 = DAT_0046d134;
  if (((param_5 & 1) != 0) && ((*param_4 & 0x100000) != 0)) {
    iVar23 = DAT_0046d158 + -0xc;
    if (*(char *)(iVar20 + 0x3f4) == '\0') {
      if (0x200 < *(uint *)(*(int *)(iVar20 + 0x3e4) + 4)) {
        puVar7 = (undefined4 *)*DAT_0046d134;
        if (puVar7 < (undefined4 *)*DAT_0046d138) {
          *puVar7 = 0x200;
          puVar7[1] = iVar18;
          *puVar6 = (uint)(puVar7 + 2);
        }
        FUN_00303b24(0x29c,(*(int **)(iVar20 + 0x3e4))[1] + -0x200,
                     **(int **)(iVar20 + 0x3e4) + 0x800);
        puVar7 = (undefined4 *)*puVar6;
        if (puVar7 < (undefined4 *)*puVar24) {
          *puVar7 = 1;
          puVar7[1] = iVar23;
          *puVar6 = (uint)(puVar7 + 2);
        }
      }
    }
    else {
      puVar7 = (undefined4 *)*DAT_0046d134;
      if (puVar7 < (undefined4 *)*DAT_0046d138) {
        *puVar7 = 0;
        puVar7[1] = iVar18;
        *puVar6 = (uint)(puVar7 + 2);
      }
      FUN_00303b24(0x29c,(*(undefined4 **)(iVar20 + 0x3e4))[1],**(undefined4 **)(iVar20 + 0x3e4));
      puVar7 = (undefined4 *)*puVar6;
      if (puVar7 < (undefined4 *)*puVar24) {
        *puVar7 = 1;
        puVar7[1] = iVar23;
        puVar7 = puVar7 + 2;
        *puVar6 = (uint)puVar7;
      }
      if (puVar7 < (undefined4 *)*puVar24) {
        *puVar7 = 0;
        puVar7[1] = DAT_0046d15c;
        *puVar6 = (uint)(puVar7 + 2);
      }
      FUN_00303b24(DAT_0046d160,*(undefined4 *)(*(int *)(iVar20 + 0x3e4) + 0xc),
                   *(undefined4 *)(*(int *)(iVar20 + 0x3e4) + 8));
    }
    puVar6 = DAT_0046d138;
    unaff_r6 = DAT_0046d134;
    puVar7 = (undefined4 *)*DAT_0046d134;
    if (puVar7 < (undefined4 *)*DAT_0046d138) {
      *puVar7 = 0;
      puVar7[1] = DAT_0046d164;
      *unaff_r6 = (uint)(puVar7 + 2);
    }
    uVar5 = (*(undefined4 **)(iVar20 + 0x3e4))[1];
    if (0x200 < uVar5) {
      uVar5 = 0x200;
    }
    FUN_00303b24(0x2cc,uVar5,**(undefined4 **)(iVar20 + 0x3e4));
    puVar7 = (undefined4 *)*unaff_r6;
    if (puVar7 < (undefined4 *)*puVar6) {
      *puVar7 = 1;
      puVar7[1] = DAT_0046d168;
      puVar7 = puVar7 + 2;
      *unaff_r6 = (uint)puVar7;
    }
    if (puVar7 < (undefined4 *)*puVar6) {
      *puVar7 = 0;
      puVar7[1] = DAT_0046d16c;
      *unaff_r6 = (uint)(puVar7 + 2);
    }
    FUN_00303b24(DAT_0046d170,*(undefined4 *)(*(int *)(iVar20 + 0x3e4) + 0xc),
                 *(undefined4 *)(*(int *)(iVar20 + 0x3e4) + 8));
    piVar10 = extraout_r1;
    param_3 = extraout_s2_00;
  }
  if ((param_5 & 4) != 0) {
    if ((*(char *)(iVar20 + 0x3f4) != '\0') && ((*param_4 & 0x800000) != 0)) {
      piVar10 = *(int **)(DAT_0046d148 + 8);
      uVar5 = 1;
      do {
        uVar9 = uVar5 + 1;
        piVar10[uVar5 + 0x403] = ~*(uint *)(iVar20 + uVar5 * 4 + 0x4b4);
        uVar5 = uVar9;
      } while (uVar9 < 9);
    }
    if ((*param_4 & 0x1000000) != 0) {
      piVar10 = *(int **)(DAT_0046d148 + 8);
      uVar5 = 9;
      do {
        uVar9 = uVar5 + 1;
        piVar10[uVar5 + 0x403] = ~*(uint *)(iVar20 + uVar5 * 4 + 0x4b4);
        uVar5 = uVar9;
      } while (uVar9 < 0x11);
    }
  }
  if (((param_5 & 8) != 0) && ((*param_4 & 0x600000) != 0)) {
    piVar10 = (int *)(uint)*(byte *)(iVar20 + 0x3f4);
    if ((int *)(uint)*(byte *)(iVar20 + 0x3f4) != (int *)0x0 && (*param_4 & 0x400000) != 0) {
      iVar18 = *(int *)(iVar20 + 0x3ec);
      unaff_r6 = (uint *)0x0;
      piVar12 = *(int **)(*(int *)(iVar20 + 0x3e4) + 0x10);
      piVar10 = piVar12;
      if (piVar12[iVar18 * 0x3a + 0xd] != 0) {
        do {
          FUN_002d1244(0x290,4,piVar12[iVar18 * 0x3a + 0xc] + (int)unaff_r6 * 0x10);
          unaff_r6 = (uint *)((int)unaff_r6 + 1);
          piVar10 = extraout_r1_00;
          param_3 = extraout_s2_01;
        } while (unaff_r6 < (uint *)piVar12[iVar18 * 0x3a + 0xd]);
      }
    }
    if ((*param_4 & 0x200000) != 0) {
      iVar18 = *(int *)(iVar20 + 1000);
      unaff_r6 = (uint *)0x0;
      piVar12 = *(int **)(*(int *)(iVar20 + 0x3e4) + 0x10);
      piVar10 = piVar12;
      if (piVar12[iVar18 * 0x3a + 0xd] != 0) {
        do {
          FUN_002d1244(0x2c0,4,piVar12[iVar18 * 0x3a + 0xc] + (int)unaff_r6 * 0x10);
          unaff_r6 = (uint *)((int)unaff_r6 + 1);
          piVar10 = extraout_r1_01;
          param_3 = extraout_s2_02;
        } while (unaff_r6 < (uint *)piVar12[iVar18 * 0x3a + 0xd]);
      }
    }
  }
  if ((param_5 & 0x200) != 0) {
    if ((*param_4 & DAT_0046d174) != 0) {
      uVar9 = 0xb;
      local_ac[0xf] = (uint)(*(int *)(*(int *)(DAT_0046d148 + 8) + 4) == iVar20);
      *(int *)(*(int *)(DAT_0046d148 + 8) + 4) = iVar20;
      *(undefined1 *)(puVar21 + 0x1c7) = 1;
      unaff_r6 = (uint *)0x0;
      puVar24 = (uint *)0x0;
      uVar5 = 0;
      local_104[1] = 0;
      puVar6 = local_104;
      do {
        if (*(int *)(iVar20 + uVar9 * 0xc + 0x358) != -1) {
          if (*(char *)((int)puVar21 + uVar9 * 0x18 + 0x3fd) == '\0') {
            local_ac[(int)puVar24 + 2] = uVar9;
            puVar24 = (uint *)((int)puVar24 + 1);
          }
          else {
            if (puVar21[uVar9 * 6 + 0xfe] == 0) {
              *(undefined1 *)(puVar21 + 0x1c7) = 0;
            }
            else if (uVar5 < puVar21[uVar9 + 0x175]) {
              uVar5 = puVar21[uVar9 + 0x175];
            }
            puVar25 = local_104 + (int)unaff_r6 * 2;
            *puVar25 = uVar9;
            if (unaff_r6 != (uint *)0x0) {
              if ((int)puVar21[*puVar6 + 0x175] < (int)puVar21[uVar9 + 0x175]) {
                puVar26 = (uint *)puVar6[1];
                unaff_r11 = puVar6;
                while (puVar15 = puVar26, puVar15 != (uint *)0x0) {
                  if ((int)puVar21[uVar9 + 0x175] <= (int)puVar21[*puVar15 + 0x175]) {
                    unaff_r11[1] = (uint)puVar25;
                    local_104[(int)unaff_r6 * 2 + 1] = (uint)puVar15;
                    if (puVar15 != (uint *)0x0) goto LAB_0046c8c4;
                    break;
                  }
                  unaff_r11 = puVar15;
                  puVar26 = (uint *)puVar15[1];
                }
                unaff_r11[1] = (uint)puVar25;
                local_104[(int)unaff_r6 * 2 + 1] = 0;
              }
              else {
                local_104[(int)unaff_r6 * 2 + 1] = (uint)puVar6;
                puVar6 = puVar25;
              }
            }
LAB_0046c8c4:
            unaff_r6 = (uint *)((int)unaff_r6 + 1);
          }
        }
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
      if ((char)puVar21[0x19b] != '\0') {
        *(undefined1 *)(puVar21 + 0x1c7) = 0;
      }
      if (unaff_r6 == (uint *)0x0) {
LAB_0046c938:
        *(undefined1 *)(puVar21 + 0x1c7) = 0;
      }
      else {
        uVar9 = puVar21[*puVar6 + 0x175] & 0xfffffff0;
        puVar21[0x181] = uVar9;
        if ((char)puVar21[0x1c7] != '\0') {
          uVar14 = uVar5;
          if (*(char *)((int)puVar21 + 0x19) == '\0') {
            uVar14 = puVar21[0x174];
            if (uVar14 < uVar9) {
              uVar9 = uVar14;
            }
            if (uVar14 <= uVar5) {
              uVar14 = uVar5;
            }
          }
          if (0xfffffff < uVar14 - uVar9) goto LAB_0046c938;
        }
      }
      local_ac[0xe] = 1;
      puVar25 = *(uint **)(iVar20 + 0x884);
      bVar31 = puVar25 == unaff_r6;
      if (bVar31) {
        puVar25 = *(uint **)(iVar20 + 0x8b8);
      }
      bVar32 = bVar31 && puVar25 == puVar24;
      if (bVar31 && puVar25 == puVar24) {
        bVar32 = (puVar21[1] & 0x200) == 0;
      }
      if (bVar32) {
        puVar26 = *(uint **)(iVar20 + 0x820);
        uVar5 = 0;
        puVar25 = puVar6;
        if (0 < (int)unaff_r6) {
          do {
            uVar9 = *puVar25;
            if (uVar9 != *puVar26) {
LAB_0046c9d0:
              local_ac[0xe] = 0;
              break;
            }
            iVar18 = iVar20 + uVar5 * 4;
            unaff_r11 = *(uint **)(iVar18 + 0x824);
            if ((puVar21[uVar9 + 0x175] - puVar21[*puVar6 + 0x175] !=
                 (int)unaff_r11 - *(int *)(iVar20 + 0x824)) ||
               (puVar21[uVar9 * 6 + 0xfd] != *(uint *)(iVar18 + 0x854))) goto LAB_0046c9d0;
            uVar14 = puVar21[uVar9 * 6 + 0xfc];
            if (uVar14 == 0x1401) {
              uVar14 = 1;
            }
            else if (uVar14 == 0x1402) {
              uVar14 = 2;
            }
            else if (uVar14 == 0x1406) {
              uVar14 = 3;
            }
            else {
              uVar14 = 0;
            }
            if ((int)uVar5 < 8) {
              uVar19 = *(uint *)(iVar20 + 0x8c4) >> ((uVar5 & 0x3f) << 2);
            }
            else {
              uVar19 = *(uint *)(iVar20 + 0x8c8) >> (uVar5 * 4 - 0x20 & 0xff);
            }
            if ((uVar14 | puVar21[uVar9 * 6 + 0xfb] * 4 - 4 & 0xff) != (uVar19 & 0xf))
            goto LAB_0046c9d0;
            puVar25 = (uint *)puVar25[1];
            puVar26 = (uint *)puVar26[1];
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)unaff_r6);
        }
        iVar18 = 0;
        if (0 < (int)puVar24) {
          do {
            if (local_ac[iVar18 + 2] != *(uint *)(iVar20 + iVar18 * 4 + 0x888)) goto LAB_0046ccfc;
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)puVar24);
        }
        cVar1 = '\0';
        if (local_ac[0xe] != 0) {
          cVar1 = (char)puVar21[0x1c7];
        }
        if (local_ac[0xe] != 0 && cVar1 != '\0') {
          if (*(char *)((int)puVar21 + 0x19) == '\0') {
            uVar5 = puVar21[0x181];
            if ((int)puVar21[0x174] < (int)uVar5) {
              uVar5 = puVar21[0x174] & 0xfffffff0;
            }
          }
          else {
            uVar5 = puVar21[0x181];
          }
          uVar9 = puVar21[0x181];
          bVar31 = uVar9 != uVar5;
          if (!bVar31) {
            uVar9 = (uint)*(byte *)(iVar20 + 0x3f5);
          }
          if ((bVar31 || uVar9 != 0) ||
             (uVar9 = local_ac[0xf], puVar21[*puVar6 + 0x175] - uVar5 != *(int *)(iVar20 + 0x8cc)))
          {
            iVar18 = 1;
            uVar9 = puVar21[*puVar6 + 0x175];
            if (1 < *(int *)(iVar20 + 0x8bc)) {
              do {
                iVar23 = iVar20 + iVar18 * 0xc;
                iVar18 = iVar18 + 1;
                *(uint *)(iVar23 + 0x8cc) =
                     (*(int *)(iVar23 + 0x8cc) - *(int *)(iVar20 + 0x8cc)) + (uVar9 - uVar5);
              } while (iVar18 < *(int *)(iVar20 + 0x8bc));
            }
            *(uint *)(iVar20 + 0x8cc) = uVar9 - uVar5;
            uVar9 = 0;
            if (puVar21[0x181] == uVar5) {
              *(undefined1 *)(iVar20 + 0x3f5) = 0;
            }
          }
          puVar21[0x181] = uVar5;
          *(uint *)(iVar20 + 0x8c0) = uVar5 >> 3;
          uVar14 = DAT_0046d178;
          puVar6 = DAT_0046d134;
          if (uVar9 == 0) {
            if (local_ac[0xf] == 0) {
              FUN_002d1244(0x200,0x27,iVar20 + 0x8c0);
              puVar25 = DAT_0046d138;
              puVar6 = DAT_0046d134;
              puVar7 = (undefined4 *)*DAT_0046d134;
              if (puVar7 < (undefined4 *)*DAT_0046d138) {
                *puVar7 = *(undefined4 *)(iVar20 + 0x95c);
                puVar7[1] = DAT_0046d17c;
                puVar7 = puVar7 + 2;
                *puVar6 = (uint)puVar7;
              }
              if (puVar7 < (undefined4 *)*puVar25) {
                *puVar7 = *(undefined4 *)(iVar20 + 0x960);
                puVar7[1] = DAT_0046d180;
                *puVar6 = (uint)(puVar7 + 2);
              }
              if (*(char *)(iVar20 + 0x3f4) != '\0') {
                puVar7 = (undefined4 *)*puVar6;
                if (puVar7 < (undefined4 *)*puVar25) {
                  *puVar7 = *(undefined4 *)(iVar20 + 0x964);
                  puVar7[1] = DAT_0046d184;
                  puVar7 = puVar7 + 2;
                  *puVar6 = (uint)puVar7;
                }
                if (puVar7 < (undefined4 *)*puVar25) {
                  *puVar7 = *(undefined4 *)(iVar20 + 0x968);
                  puVar7[1] = DAT_0046d188;
                  *puVar6 = (uint)(puVar7 + 2);
                }
              }
              puVar6 = *(uint **)(iVar20 + 0x820);
              puVar21[0x1c8] = (uint)unaff_r6;
              puVar21[0x1c9] = (int)unaff_r6 + (int)puVar24;
              iVar18 = 0;
              iVar23 = iVar18;
              if (0 < (int)unaff_r6) {
                do {
                  iVar18 = iVar23 + 1;
                  puVar21[iVar23 + 0x1ca] = *puVar6;
                  puVar6 = (uint *)puVar6[1];
                  iVar23 = iVar18;
                } while (iVar18 < (int)unaff_r6);
              }
              iVar23 = 0;
              param_3 = extraout_s2_04;
              if (0 < (int)puVar24) {
                do {
                  iVar27 = iVar23 + 2;
                  iVar23 = iVar23 + 1;
                  puVar21[iVar18 + 0x1ca] = local_ac[iVar27];
                  iVar18 = iVar18 + 1;
                } while (iVar23 < (int)puVar24);
              }
            }
            else {
              FUN_002d1244(0x200,*(int *)(iVar20 + 0x8bc) * 3 + 1,iVar20 + 0x8c0);
              param_3 = extraout_s2_03;
            }
          }
          else {
            puVar24 = (uint *)*DAT_0046d134;
            if (puVar24 < (uint *)*DAT_0046d138) {
              *puVar24 = uVar5 >> 3;
              puVar24[1] = uVar14;
              *puVar6 = (uint)(puVar24 + 2);
            }
          }
          goto LAB_0046d4c4;
        }
      }
LAB_0046ccfc:
      iVar18 = 0;
      if (0 < (int)unaff_r6) {
        puVar25 = puVar6;
        do {
          iVar23 = iVar20 + iVar18 * 8;
          iVar27 = iVar20 + iVar18 * 4;
          *(uint *)(iVar23 + 0x7c0) = *puVar25;
          bVar31 = iVar18 == (int)unaff_r6 + -1;
          iVar18 = iVar18 + 1;
          *(uint *)(iVar27 + 0x824) = puVar21[*puVar25 + 0x175];
          *(uint *)(iVar27 + 0x854) = puVar21[*puVar25 * 6 + 0xfd];
          if (bVar31) {
            *(undefined4 *)(iVar23 + 0x7c4) = 0;
          }
          else {
            *(int *)(iVar23 + 0x7c4) = iVar23 + 0x7c8;
            puVar25 = (uint *)puVar25[1];
          }
        } while (iVar18 < (int)unaff_r6);
      }
      iVar18 = 0;
      if (0 < (int)puVar24) {
        do {
          iVar23 = iVar18 * 4;
          iVar27 = iVar18 + 2;
          iVar18 = iVar18 + 1;
          *(uint *)(iVar20 + iVar23 + 0x888) = local_ac[iVar27];
        } while (iVar18 < (int)puVar24);
      }
      *(uint **)(iVar20 + 0x884) = unaff_r6;
      *(uint **)(iVar20 + 0x8b8) = puVar24;
      *(int *)(iVar20 + 0x820) = iVar20 + 0x7c0;
      if (puVar21[0x142] == 0) {
        if (*(char *)((int)puVar21 + 0x19) != '\0') goto LAB_0046cdd0;
        *(undefined1 *)(puVar21 + 0x1c7) = 0;
LAB_0046cde8:
        uVar5 = puVar21[0x174];
        uVar9 = puVar21[0x181];
        if ((int)uVar5 < (int)uVar9) {
          puVar21[0x181] = uVar5 & 0xfffffff0;
        }
        *(bool *)(iVar20 + 0x3f5) = (int)uVar5 < (int)uVar9;
        *(int *)(iVar20 + 0x8c0) = (int)puVar21[0x181] >> 3;
      }
      else {
        if (*(char *)((int)puVar21 + 0x19) == '\0') goto LAB_0046cde8;
LAB_0046cdd0:
        *(int *)(iVar20 + 0x8c0) = (int)puVar21[0x181] >> 3;
        *(undefined1 *)(iVar20 + 0x3f5) = 0;
      }
      if ((char)puVar21[0x1c7] != '\0') {
        local_11c = puVar21 + 0xfa;
        *(undefined4 *)(iVar20 + 0x8bc) = 0;
        unaff_r11 = (uint *)0x0;
        puVar25 = (uint *)(iVar20 + 0x8cc);
        iVar18 = 1;
        local_108 = 0;
        do {
          iVar23 = iVar18 * 4;
          iVar18 = iVar18 + 1;
          *(undefined4 *)(iVar20 + iVar23 + 0x8c0) = 0;
        } while (iVar18 < 0x27);
        uVar9 = 0;
        local_110 = puVar6;
        local_10c = 1;
        uVar5 = 0;
        if (0 < (int)unaff_r6) {
          do {
            local_120 = 0;
            uVar19 = *local_110;
            local_114 = (uint *)local_110[1];
            uVar30 = puVar21[uVar19 * 6 + 0xfc];
            local_128 = puVar21[uVar19 + 0x175] - puVar21[0x181];
            uVar14 = (uint)(uVar30 == 0x1400);
            if (uVar30 != 0x1400) {
              if (uVar30 == 0x1401) {
                uVar14 = 1;
                local_120 = 1;
              }
              else if (uVar30 == 0x1402) {
                uVar14 = 2;
                local_120 = 2;
              }
              else if (uVar30 == 0x1406) {
                local_120 = 3;
                uVar14 = 4;
              }
            }
            uVar30 = puVar21[uVar19 * 6 + 0xfb] * 4 - 4 | local_120;
            if ((int)uVar9 < 8) {
              *(uint *)(iVar20 + 0x8c4) =
                   *(uint *)(iVar20 + 0x8c4) | uVar30 << ((uVar9 & 0x3f) << 2);
            }
            else {
              *(uint *)(iVar20 + 0x8c8) =
                   uVar30 << (uVar9 * 4 - 0x20 & 0xff) | *(uint *)(iVar20 + 0x8c8);
            }
            if (puVar21[uVar19 * 6 + 0xfd] == 0) {
              uVar19 = puVar21[uVar19 * 6 + 0xfb];
              *puVar25 = local_128;
              puVar25[1] = puVar25[1] | uVar9;
              puVar25[2] = uVar19 * uVar14 * 0x10000 | 0x10000000 | puVar25[2];
              puVar25 = puVar25 + 3;
              *(int *)(iVar20 + 0x8bc) = *(int *)(iVar20 + 0x8bc) + 1;
              uVar14 = uVar5;
            }
            else {
              if (local_10c < uVar14) {
                local_10c = uVar14;
              }
              local_124 = puVar21[uVar19 * 6 + 0xfb] * uVar14;
              unaff_r11 = (uint *)(((int)unaff_r11 + (uVar14 - 1) & ~(uVar14 - 1)) + local_124);
              if (uVar5 == 0) {
                *puVar25 = local_128;
                local_108 = puVar21[uVar19 * 6 + 0xfd];
                local_118 = puVar21[uVar19 * 6 + 0xfd] + puVar21[*local_110 + 0x175];
LAB_0046d000:
                puVar25[1] = puVar25[1] | uVar9 << ((uVar5 & 0x3f) << 2);
              }
              else {
                if (uVar5 < 8) goto LAB_0046d000;
                puVar25[2] = puVar25[2] | uVar9 << (uVar5 * 4 - 0x20 & 0xff);
              }
              uVar14 = uVar5 + 1;
              if ((uint *)(uVar9 + 1) == unaff_r6) {
LAB_0046d090:
                bVar31 = true;
              }
              else {
                if ((((puVar21[*local_114 + 0x175] - puVar21[0x181] <= local_128) ||
                     (puVar21[uVar19 * 6 + 0xfd] != (puVar21 + 0xfa)[*local_114 * 6 + 3])) ||
                    (local_118 <= (int)puVar21[*local_114 + 0x175])) || (uVar14 == 0xc))
                goto LAB_0046d090;
                bVar31 = false;
              }
              if (bVar31) {
                iVar18 = *puVar25 + local_108;
              }
              else {
                iVar18 = puVar21[*local_114 + 0x175] - puVar21[0x181];
              }
              uVar30 = (iVar18 - local_128) - local_124;
              uVar19 = uVar30 >> 2;
              if (0xc - uVar14 < (uint)((uVar19 & 3) != 0) + (uVar30 >> 4)) {
LAB_0046d224:
                *(undefined1 *)(puVar21 + 0x1c7) = 0;
                goto LAB_0046d2d0;
              }
              if (uVar19 != 0) {
                unaff_r11 = (uint *)(((int)unaff_r11 + 3U & 0xfffffffc) + uVar19 * 4);
                if ((uVar19 & 3) != 0) {
                  if (uVar14 < 8) {
                    puVar25[1] = (uVar19 & 3) + 0xb << (uVar14 * 4 & 0xff) | puVar25[1];
                  }
                  else {
                    puVar25[2] = (uVar19 & 3) + 0xb << (uVar14 * 4 - 0x20 & 0xff) | puVar25[2];
                  }
                  uVar19 = uVar19 & 0xfffffffc;
                  uVar14 = uVar5 + 2;
                  if (uVar19 == 0) goto LAB_0046d1f8;
                }
                do {
                  if (uVar14 < 8) {
                    puVar25[1] = puVar25[1] | 0xf << ((uVar14 & 0x3f) << 2);
                  }
                  else {
                    puVar25[2] = puVar25[2] | 0xf << (uVar14 * 4 - 0x20 & 0xff);
                  }
                  uVar19 = uVar19 - 4;
                  uVar14 = uVar14 + 1;
                } while (uVar19 != 0);
              }
LAB_0046d1f8:
              if (bVar31) {
                if (((int)unaff_r11 + (local_10c - 1) & ~(local_10c - 1)) != local_108)
                goto LAB_0046d224;
                local_10c = 1;
                puVar25[2] = local_108 << 0x10 | uVar14 << 0x1c | puVar25[2];
                uVar14 = 0;
                puVar25 = puVar25 + 3;
                unaff_r11 = (uint *)0x0;
                *(int *)(iVar20 + 0x8bc) = *(int *)(iVar20 + 0x8bc) + 1;
              }
            }
            uVar9 = uVar9 + 1;
            local_110 = local_114;
            uVar5 = uVar14;
          } while ((int)uVar9 < (int)unaff_r6);
        }
        if ((char)puVar21[0x1c7] != '\0') {
          iVar18 = 0;
          if (0 < (int)puVar24) {
            do {
              uVar5 = iVar18 + (int)unaff_r6;
              iVar18 = iVar18 + 1;
              *(uint *)(iVar20 + 0x8c8) = *(uint *)(iVar20 + 0x8c8) | 0x10000 << (uVar5 & 0xff);
            } while (iVar18 < (int)puVar24);
          }
          if (unaff_r6 != (uint *)0x0) {
            *(uint *)(iVar20 + 0x8c8) =
                 *(uint *)(iVar20 + 0x8c8) |
                 ((int)unaff_r6 + (int)puVar24) * 0x10000000 + 0xf0000000U;
          }
        }
      }
LAB_0046d2d0:
      puVar21[0x1c8] = (uint)unaff_r6;
      puVar21[0x1c9] = (int)unaff_r6 + (int)puVar24;
      puVar6 = *(uint **)(iVar20 + 0x820);
      *(undefined4 *)(iVar20 + 0x95c) = 0;
      *(undefined4 *)(iVar20 + 0x960) = 0;
      *(undefined4 *)(iVar20 + 0x964) = DAT_0046ded4;
      *(undefined4 *)(iVar20 + 0x968) = DAT_0046ded8;
      uVar5 = 0;
      if (0 < (int)unaff_r6) {
        do {
          *(uint *)(iVar20 + 0x95c) =
               *(uint *)(iVar20 + 0x95c) |
               (*(uint *)(iVar20 + *puVar6 * 0xc + 0x358) & 0xf) << ((uVar5 & 0x3f) << 2);
          uVar9 = uVar5;
          while( true ) {
            uVar5 = uVar9 + 1;
            puVar21[uVar9 + 0x1ca] = *puVar6;
            puVar6 = (uint *)puVar6[1];
            if ((int)unaff_r6 <= (int)uVar5) goto LAB_0046d380;
            if ((int)uVar5 < 8) break;
            *(uint *)(iVar20 + 0x960) =
                 *(uint *)(iVar20 + 0x960) |
                 (*(uint *)(iVar20 + *puVar6 * 0xc + 0x358) & 0xf) << (uVar5 * 4 - 0x20 & 0xff);
            uVar9 = uVar5;
          }
        } while( true );
      }
LAB_0046d380:
      iVar18 = 0;
      if (0 < (int)puVar24) {
        do {
          if ((int)uVar5 < 8) {
            unaff_r6 = *(uint **)(iVar20 + 0x95c);
            *(uint *)(iVar20 + 0x95c) =
                 (uint)unaff_r6 |
                 (*(uint *)(iVar20 + local_ac[iVar18 + 2] * 0xc + 0x358) & 0xf) <<
                 ((uVar5 & 0x3f) << 2);
          }
          else {
            unaff_r6 = (uint *)(*(uint *)(iVar20 + local_ac[iVar18 + 2] * 0xc + 0x358) & 0xf);
            *(uint *)(iVar20 + 0x960) =
                 *(uint *)(iVar20 + 0x960) | (int)unaff_r6 << (uVar5 * 4 - 0x20 & 0xff);
          }
          iVar23 = iVar18 + 2;
          iVar18 = iVar18 + 1;
          puVar21[uVar5 + 0x1ca] = local_ac[iVar23];
          uVar5 = uVar5 + 1;
        } while (iVar18 < (int)puVar24);
      }
      FUN_002d1244(0x200,0x27,iVar20 + 0x8c0);
      puVar24 = DAT_0046d138;
      puVar6 = DAT_0046d134;
      puVar7 = (undefined4 *)*DAT_0046d134;
      if (puVar7 < (undefined4 *)*DAT_0046d138) {
        *puVar7 = *(undefined4 *)(iVar20 + 0x95c);
        puVar7[1] = DAT_0046d17c;
        puVar7 = puVar7 + 2;
        *puVar6 = (uint)puVar7;
      }
      if (puVar7 < (undefined4 *)*puVar24) {
        *puVar7 = *(undefined4 *)(iVar20 + 0x960);
        puVar7[1] = DAT_0046d180;
        *puVar6 = (uint)(puVar7 + 2);
      }
      param_3 = extraout_s2_05;
      if (*(char *)(iVar20 + 0x3f4) != '\0') {
        puVar7 = (undefined4 *)*puVar6;
        if (puVar7 < (undefined4 *)*puVar24) {
          *puVar7 = *(undefined4 *)(iVar20 + 0x964);
          puVar7[1] = DAT_0046d184;
          puVar7 = puVar7 + 2;
          *puVar6 = (uint)puVar7;
        }
        if (puVar7 < (undefined4 *)*puVar24) {
          *puVar7 = *(undefined4 *)(iVar20 + 0x968);
          puVar7[1] = DAT_0046d188;
          *puVar6 = (uint)(puVar7 + 2);
        }
      }
    }
LAB_0046d4c4:
    puVar25 = DAT_0046dee0;
    puVar24 = DAT_0046d138;
    puVar6 = DAT_0046d134;
    bVar31 = (*param_4 & (uint)DAT_0046dedc) != 0;
    piVar12 = (int *)0x0;
    piVar10 = DAT_0046dedc;
    if (bVar31) {
      piVar12 = (int *)puVar21[0x1c8];
      piVar10 = (int *)puVar21[0x1c9];
    }
    if (bVar31 && piVar12 < piVar10) {
      uVar9 = (int)DAT_0046dee0 + 2;
      uVar5 = (uint)DAT_0046dee0 | (int)DAT_0046dee0 >> 0x12;
      uVar14 = (int)DAT_0046dee0 + 3;
      do {
        puVar26 = (uint *)*puVar6;
        uVar19 = puVar21[(int)((int)piVar12 + 0x1ca)];
        if (puVar26 < (uint *)*puVar24) {
          *puVar26 = (uint)piVar12;
          puVar26[1] = (uint)puVar25;
          puVar26 = puVar26 + 2;
          *puVar6 = (uint)puVar26;
        }
        if (puVar26 < (uint *)*puVar24) {
          puVar15 = puVar26 + 1;
          *puVar26 = puVar21[uVar19 * 3 + 0xd6];
          puVar26 = puVar26 + 2;
          *puVar15 = uVar5;
          *puVar6 = (uint)puVar26;
        }
        if (puVar26 < (uint *)*puVar24) {
          puVar15 = puVar26 + 1;
          *puVar26 = puVar21[uVar19 * 3 + 0xd7];
          puVar26 = puVar26 + 2;
          *puVar15 = uVar9;
          *puVar6 = (uint)puVar26;
        }
        if (puVar26 < (uint *)*puVar24) {
          *puVar26 = puVar21[uVar19 * 3 + 0xd8];
          puVar26[1] = uVar14;
          *puVar6 = (uint)(puVar26 + 2);
        }
        piVar10 = (int *)puVar21[0x1c9];
        piVar12 = (int *)((int)piVar12 + 1);
        unaff_r6 = puVar25;
      } while (piVar12 < piVar10);
    }
  }
  piVar12 = DAT_0046dee4;
  if (puVar21[1] != 0) {
    if ((puVar21[1] & param_5 & 0x10) != 0) {
      *(undefined4 *)(iVar20 + 0x1bc) = 0xffffffff;
      *(undefined4 *)(iVar20 + 0x1b8) = 0xffffffff;
      *(undefined4 *)(iVar20 + 0x1b4) = 0xffffffff;
      iVar18 = 0;
      if (*piVar12 != 0xbd) {
        unaff_r6 = (uint *)piVar12[-0x1a];
        do {
          iVar23 = piVar12[iVar18];
          if (*(char *)(iVar23 + iVar20 + 0x3f6) != '\0') {
            unaff_r6[iVar23 + 0x403] = ~*(uint *)(iVar20 + iVar23 * 4 + 0x4b4);
            iVar23 = iVar20 + (piVar12[iVar18] >> 5) * 4;
            *(uint *)(iVar23 + 0x7a8) = *(uint *)(iVar23 + 0x7a8) | 1 << (piVar12[iVar18] & 0x1fU);
          }
          iVar18 = iVar18 + 1;
        } while (piVar12[iVar18] != 0xbd);
      }
      piVar10 = DAT_0046dee8;
      if (*(char *)(iVar20 + 0x3f4) != '\0') {
        *(undefined4 *)(iVar20 + 0x350) = 0xffffffff;
        *(undefined4 *)(iVar20 + 0x34c) = 0xffffffff;
        *(undefined4 *)(iVar20 + 0x348) = 0xffffffff;
        iVar18 = 0;
        if (*piVar10 != 0xbd) {
          unaff_r6 = (uint *)piVar10[-0x20];
          do {
            iVar23 = piVar10[iVar18];
            if (*(char *)(iVar23 + iVar20 + 0x3f6) != '\0') {
              unaff_r6[iVar23 + 0x403] = ~*(uint *)(iVar20 + iVar23 * 4 + 0x4b4);
              iVar23 = iVar20 + (piVar10[iVar18] >> 5) * 4;
              *(uint *)(iVar23 + 0x7a8) = *(uint *)(iVar23 + 0x7a8) | 1 << (piVar10[iVar18] & 0x1fU)
              ;
            }
            iVar18 = iVar18 + 1;
          } while (piVar10[iVar18] != 0xbd);
        }
      }
    }
    piVar10 = DAT_0046deec;
    if (((param_5 & 0x20 & puVar21[1]) != 0) && (iVar18 = 0, *DAT_0046deec != 0xbd)) {
      unaff_r6 = (uint *)DAT_0046deec[-0x26];
      do {
        iVar23 = piVar10[iVar18];
        if (*(char *)(iVar23 + iVar20 + 0x3f6) != '\0') {
          unaff_r6[iVar23 + 0x403] = ~*(uint *)(iVar20 + iVar23 * 4 + 0x4b4);
          iVar23 = iVar20 + (piVar10[iVar18] >> 5) * 4;
          *(uint *)(iVar23 + 0x7a8) = *(uint *)(iVar23 + 0x7a8) | 1 << (piVar10[iVar18] & 0x1fU);
        }
        iVar18 = iVar18 + 1;
      } while (piVar10[iVar18] != 0xbd);
    }
    puVar7 = DAT_0046def0;
    piVar10 = (int *)puVar21[1];
    if ((param_5 & 2 & (uint)piVar10) != 0) {
      iVar18 = 0;
      piVar10 = (int *)*DAT_0046def0;
      if (piVar10 != (int *)0xbd) {
        unaff_r6 = (uint *)DAT_0046def0[-2];
        do {
          iVar23 = puVar7[iVar18];
          if (*(char *)(iVar23 + iVar20 + 0x3f6) != '\0') {
            unaff_r6[iVar23 + 0x403] = ~*(uint *)(iVar20 + iVar23 * 4 + 0x4b4);
            iVar23 = iVar20 + ((int)puVar7[iVar18] >> 5) * 4;
            *(uint *)(iVar23 + 0x7a8) = *(uint *)(iVar23 + 0x7a8) | 1 << (puVar7[iVar18] & 0x1f);
          }
          iVar18 = iVar18 + 1;
          piVar10 = (int *)puVar7[iVar18];
        } while (piVar10 != (int *)0xbd);
      }
    }
  }
  puVar6 = DAT_0046d138;
  if ((param_5 & 0x10) != 0) {
    iVar18 = *(int *)(iVar20 + 0x1b4);
    bVar31 = iVar18 == 0;
    if (bVar31) {
      iVar18 = *(int *)(iVar20 + 0x1b8);
    }
    bVar32 = bVar31 && iVar18 == 0;
    if (bVar31 && iVar18 == 0) {
      bVar32 = *(int *)(iVar20 + 0x1bc) == 0;
    }
    bVar31 = false;
    if (bVar32) {
      bVar31 = *(int *)(iVar20 + 0x348) == 0;
    }
    if (bVar31) {
      iVar18 = *(int *)(iVar20 + 0x34c);
      bVar31 = iVar18 == 0;
      if (bVar31) {
        iVar18 = *(int *)(iVar20 + 0x350);
      }
      if (bVar31 && iVar18 == 0) goto LAB_0046db60;
    }
    iVar18 = *(int *)(iVar20 + 0x1c0);
    if (iVar18 != 0) {
      bVar31 = *(uint *)(iVar20 + 0x348) == 0;
      if (bVar31) {
        piVar10 = *(int **)(iVar20 + 0x34c);
      }
      bVar32 = bVar31 && piVar10 == (int *)0x0;
      if (bVar31 && piVar10 == (int *)0x0) {
        piVar10 = *(int **)(iVar20 + 0x350);
        bVar32 = piVar10 == (int *)0x0;
      }
      if (!bVar32) {
        iVar23 = 0;
        unaff_r11 = (uint *)0x0;
        iVar27 = 0;
        unaff_r6 = (uint *)0x0;
        uVar5 = *(uint *)(iVar20 + 0x348) & 1;
        while (uVar5 == 0) {
          if (*(uint *)(iVar20 + ((uint)unaff_r6 >> 5) * 4 + 0x348) >> ((uint)unaff_r6 & 0x1f) == 0)
          {
            unaff_r6 = (uint *)(((uint)unaff_r6 & 0xffffffe0) + 0x20);
          }
          else {
            unaff_r6 = (uint *)((int)unaff_r6 + 1);
          }
          piVar10 = (int *)((uint)unaff_r6 & 0x1f);
          uVar5 = *(uint *)(iVar20 + ((uint)unaff_r6 >> 5) * 4 + 0x348) & 1 << (int)piVar10;
        }
        if (unaff_r6 < *(uint **)(iVar20 + 0x344)) {
          do {
            puVar24 = DAT_0046d134;
            iVar8 = iVar20 + (int)unaff_r6 * 4;
            puVar25 = *(uint **)(iVar8 + 0x1c4);
            if (iVar23 != 0) {
              iVar8 = (int)puVar25 - (int)unaff_r11;
            }
            if (iVar23 == 0 || iVar8 == iVar27) {
              iVar27 = iVar27 + 1;
              if (iVar23 == 0) goto LAB_0046d930;
            }
            else {
              puVar26 = (uint *)*DAT_0046d134;
              if (puVar26 < (uint *)*puVar6) {
                *puVar26 = (uint)unaff_r11 | 0x80000000;
                puVar26[1] = DAT_0046def4;
                *puVar24 = (uint)(puVar26 + 2);
              }
              FUN_00303b24(DAT_0046def8,iVar27 << 2);
              param_3 = extraout_s2_06;
LAB_0046d930:
              iVar23 = iVar18 + (int)unaff_r6 * 0x10;
              iVar27 = 1;
              unaff_r11 = puVar25;
            }
            puVar24 = DAT_0046d134;
            unaff_r6 = (uint *)((int)unaff_r6 + 1);
            while( true ) {
              piVar10 = (int *)((uint)unaff_r6 & 0x1f);
              uVar5 = *(uint *)(iVar20 + ((uint)unaff_r6 >> 5) * 4 + 0x348);
              if (((uVar5 & 1 << (int)piVar10) != 0) || (*(uint **)(iVar20 + 0x344) <= unaff_r6))
              break;
              if (uVar5 >> (int)piVar10 == 0) {
                unaff_r6 = (uint *)(((uint)unaff_r6 & 0xffffffe0) + 0x20);
              }
              else {
                unaff_r6 = (uint *)((int)unaff_r6 + 1);
              }
            }
          } while (unaff_r6 < *(uint **)(iVar20 + 0x344));
          if (iVar23 != 0) {
            puVar25 = (uint *)*DAT_0046d134;
            if (puVar25 < (uint *)*puVar6) {
              *puVar25 = (uint)unaff_r11 | 0x80000000;
              puVar25[1] = DAT_0046def4;
              *puVar24 = (uint)(puVar25 + 2);
            }
            FUN_00303b24(DAT_0046def8,iVar27 << 2);
            piVar10 = extraout_r1_02;
            param_3 = extraout_s2_07;
          }
        }
      }
    }
    puVar6 = DAT_0046d138;
    iVar18 = *(int *)(iVar20 + 0x2c);
    if (iVar18 != 0) {
      bVar31 = *(uint *)(iVar20 + 0x1b4) == 0;
      if (bVar31) {
        piVar10 = *(int **)(iVar20 + 0x1b8);
      }
      bVar32 = bVar31 && piVar10 == (int *)0x0;
      if (bVar31 && piVar10 == (int *)0x0) {
        piVar10 = *(int **)(iVar20 + 0x1bc);
        bVar32 = piVar10 == (int *)0x0;
      }
      if (!bVar32) {
        iVar23 = 0;
        unaff_r11 = (uint *)0x0;
        iVar27 = 0;
        unaff_r6 = (uint *)0x0;
        uVar5 = *(uint *)(iVar20 + 0x1b4) & 1;
        while (uVar5 == 0) {
          if (*(uint *)(iVar20 + ((uint)unaff_r6 >> 5) * 4 + 0x1b4) >> ((uint)unaff_r6 & 0x1f) == 0)
          {
            unaff_r6 = (uint *)(((uint)unaff_r6 & 0xffffffe0) + 0x20);
          }
          else {
            unaff_r6 = (uint *)((int)unaff_r6 + 1);
          }
          piVar10 = (int *)((uint)unaff_r6 & 0x1f);
          uVar5 = *(uint *)(iVar20 + ((uint)unaff_r6 >> 5) * 4 + 0x1b4) & 1 << (int)piVar10;
        }
        if (unaff_r6 < *(uint **)(iVar20 + 0x1b0)) {
          do {
            puVar24 = DAT_0046d134;
            iVar8 = iVar20 + (int)unaff_r6 * 4;
            puVar25 = *(uint **)(iVar8 + 0x30);
            if (iVar23 != 0) {
              iVar8 = (int)puVar25 - (int)unaff_r11;
            }
            if (iVar23 == 0 || iVar8 == iVar27) {
              iVar27 = iVar27 + 1;
              if (iVar23 == 0) goto LAB_0046dab4;
            }
            else {
              puVar26 = (uint *)*DAT_0046d134;
              if (puVar26 < (uint *)*puVar6) {
                *puVar26 = (uint)unaff_r11 | 0x80000000;
                puVar26[1] = DAT_0046defc;
                *puVar24 = (uint)(puVar26 + 2);
              }
              FUN_00303b24(DAT_0046df00,iVar27 << 2);
              param_3 = extraout_s2_08;
LAB_0046dab4:
              iVar23 = iVar18 + (int)unaff_r6 * 0x10;
              iVar27 = 1;
              unaff_r11 = puVar25;
            }
            puVar24 = DAT_0046d134;
            unaff_r6 = (uint *)((int)unaff_r6 + 1);
            while( true ) {
              piVar10 = (int *)((uint)unaff_r6 & 0x1f);
              uVar5 = *(uint *)(iVar20 + ((uint)unaff_r6 >> 5) * 4 + 0x1b4);
              if (((uVar5 & 1 << (int)piVar10) != 0) || (*(uint **)(iVar20 + 0x1b0) <= unaff_r6))
              break;
              if (uVar5 >> (int)piVar10 == 0) {
                unaff_r6 = (uint *)(((uint)unaff_r6 & 0xffffffe0) + 0x20);
              }
              else {
                unaff_r6 = (uint *)((int)unaff_r6 + 1);
              }
            }
          } while (unaff_r6 < *(uint **)(iVar20 + 0x1b0));
          if (iVar23 != 0) {
            puVar25 = (uint *)*DAT_0046d134;
            if (puVar25 < (uint *)*puVar6) {
              *puVar25 = (uint)unaff_r11 | 0x80000000;
              puVar25[1] = DAT_0046defc;
              *puVar24 = (uint)(puVar25 + 2);
            }
            FUN_00303b24(DAT_0046df00,iVar27 << 2);
            piVar10 = extraout_r1_03;
            param_3 = extraout_s2_09;
          }
        }
      }
    }
    *(undefined4 *)(iVar20 + 0x1b4) = 0;
    *(undefined4 *)(iVar20 + 0x1b8) = 0;
    *(undefined4 *)(iVar20 + 0x1bc) = 0;
    *(undefined4 *)(iVar20 + 0x348) = 0;
    *(undefined4 *)(iVar20 + 0x34c) = 0;
    *(undefined4 *)(iVar20 + 0x350) = 0;
  }
LAB_0046db60:
  fVar2 = DAT_0046df04;
  if (((param_5 & 0x400) != 0) && ((*param_4 & 4) != 0)) {
    if (*(float *)(iVar20 + 0xdcc) == DAT_0046df04) {
      fVar38 = (float)puVar21[0x13] - (float)puVar21[0x14];
      fVar35 = (float)puVar21[0x13];
    }
    else {
      fVar38 = -*(float *)(iVar20 + 0xdcc);
      fVar35 = DAT_0046df04;
    }
    bVar31 = (char)puVar21[0x15] == '\0';
    if (!bVar31) {
      param_3 = (float)puVar21[0x11];
      bVar31 = param_3 == DAT_0046df04;
    }
    if (!bVar31) {
      fVar39 = DAT_0046df08;
      if (puVar21[0x16f] != 0) {
        fVar39 = DAT_0046df0c;
      }
      fVar35 = fVar35 + param_3 * fVar39;
    }
    uVar5 = 0;
    if (ABS(fVar38) != 0.0) {
      uVar5 = (int)fVar38 << 1;
    }
    if (ABS(fVar38) != 0.0) {
      uVar5 = (uVar5 >> 0x18) - 0x40;
    }
    if ((int)uVar5 < 0) {
      uVar5 = ((uint)fVar38 >> 0x1f) << 0x17;
    }
    else {
      uVar5 = (uint)((int)fVar38 << 9) >> 0x10 | uVar5 << 0x10 | ((uint)fVar38 >> 0x1f) << 0x17;
    }
    if (fVar35 == DAT_0046df04) {
      piVar12 = (int *)0x0;
    }
    else {
      uVar9 = 0;
      if (ABS(fVar35) != 0.0) {
        uVar9 = (int)fVar35 << 1;
      }
      if (ABS(fVar35) != 0.0) {
        uVar9 = (uVar9 >> 0x18) - 0x40;
      }
      if ((int)uVar9 < 0) {
        piVar12 = (int *)(((uint)fVar35 >> 0x1f) << 0x17);
      }
      else {
        piVar12 = (int *)((uint)((int)fVar35 << 9) >> 0x10 | uVar9 << 0x10 |
                         ((uint)fVar35 >> 0x1f) << 0x17);
      }
    }
    *(byte *)(iVar20 + 0x40d) = *(byte *)(iVar20 + 0x40d) | 0xf;
    if ((char)puVar21[3] == '\0') {
      if (*(uint *)(iVar20 + 0x510) != uVar5) {
        *(uint *)(iVar20 + 0x510) = uVar5;
        *(uint *)(iVar20 + 0x7a8) = *(uint *)(iVar20 + 0x7a8) | 0x800000;
        *puVar21 = *puVar21 | 0x80000;
      }
    }
    else {
      *(uint *)(iVar20 + 0x510) = uVar5;
      *(uint *)(iVar20 + 0x7a8) = *(uint *)(iVar20 + 0x7a8) | 0x800000;
      *puVar21 = *puVar21 | 0x80000;
      *(uint *)(*(int *)(DAT_0046d148 + 8) + 0x1068) = ~*(uint *)(iVar20 + 0x510);
    }
    *(byte *)(iVar20 + 0x40e) = *(byte *)(iVar20 + 0x40e) | 0xf;
    if ((char)puVar21[3] == '\0') {
      piVar10 = *(int **)(iVar20 + 0x514);
      if (piVar10 != piVar12) {
        *(int **)(iVar20 + 0x514) = piVar12;
        *(uint *)(iVar20 + 0x7a8) = *(uint *)(iVar20 + 0x7a8) | 0x1000000;
        *puVar21 = *puVar21 | 0x80000;
      }
    }
    else {
      *(int **)(iVar20 + 0x514) = piVar12;
      *(uint *)(iVar20 + 0x7a8) = *(uint *)(iVar20 + 0x7a8) | 0x1000000;
      *puVar21 = *puVar21 | 0x80000;
      piVar10 = (int *)~*(uint *)(iVar20 + 0x514);
      *(int **)(*(int *)(DAT_0046d148 + 8) + 0x106c) = piVar10;
    }
  }
  if ((param_5 & 0x20) != 0) {
    piVar10 = (int *)&DAT_00000007;
    if ((~*(uint *)(iVar20 + 0x5f4) & 7) == 0) {
      piVar10 = *(int **)(iVar20 + 0x600);
      if (*(char *)(iVar20 + 0xdf4) == '\0') {
        piVar10 = (int *)~(uint)piVar10;
        *(int **)(*(int *)(DAT_0046d148 + 8) + 0x1158) = piVar10;
        uVar5 = *(uint *)(iVar20 + 0x7b0) | 0x80000;
      }
      else {
        *(int **)(*(int *)(DAT_0046d148 + 8) + 0x1158) = piVar10;
        uVar5 = *(uint *)(iVar20 + 0x7b0) & 0xfff7ffff;
      }
      *(uint *)(iVar20 + 0x7b0) = uVar5;
    }
    if ((*(uint *)(iVar20 + 0x560) & 1) != 0) {
      iVar18 = 0;
      do {
        piVar10 = (int *)(uint)*(byte *)(iVar20 + iVar18 * 0x70 + 0x9a0);
        if (piVar10 != (int *)0x0) break;
        iVar18 = iVar18 + 1;
      } while (iVar18 < 8);
    }
  }
  iVar18 = DAT_0046df10;
  piVar12 = DAT_0046dee8;
  puVar24 = DAT_0046d138;
  puVar6 = DAT_0046d134;
  if ((param_5 & 0x10) != 0) {
    iVar23 = 0;
    if (*DAT_0046dee8 != 0xbd) {
      local_ac[0x11] = DAT_0046dee8[-0x20];
      local_58 = (uint *)(iVar20 + 0x3f6);
      do {
        uVar5 = piVar12[iVar23];
        if ((*(uint *)(iVar20 + ((int)uVar5 >> 5) * 4 + 0x7a8) & 1 << (uVar5 & 0x1f)) != 0) {
          uVar9 = (uint)*(byte *)(uVar5 + (int)local_58);
          puVar7 = (undefined4 *)(iVar20 + uVar5 * 4 + 0x4b4);
          puVar16 = (undefined4 *)(local_ac[0x11] + uVar5 * 4 + 0x100c);
          puVar25 = local_58;
          if (uVar9 != 0) {
            unaff_r6 = (uint *)*puVar7;
            puVar25 = (uint *)*puVar16;
          }
          if (uVar9 != 0 && unaff_r6 != puVar25) {
            puVar28 = (undefined4 *)*puVar6;
            if (puVar28 < (undefined4 *)*puVar24) {
              *puVar28 = unaff_r6;
              unaff_r6 = *(uint **)(iVar18 + piVar12[iVar23] * 4);
              puVar28[1] = (uint)unaff_r6 | uVar9 << 0x10;
              *puVar6 = (uint)(puVar28 + 2);
            }
            *puVar16 = *puVar7;
          }
          iVar27 = iVar20 + (piVar12[iVar23] >> 5) * 4;
          *(uint *)(iVar27 + 0x7a8) = *(uint *)(iVar27 + 0x7a8) & ~(1 << (piVar12[iVar23] & 0x1fU));
        }
        iVar23 = iVar23 + 1;
        unaff_r11 = puVar6;
      } while (piVar12[iVar23] != 0xbd);
    }
    piVar12 = DAT_0046dee4;
    puVar24 = DAT_0046d138;
    puVar6 = DAT_0046d134;
    iVar23 = 0;
    piVar10 = (int *)*DAT_0046dee4;
    if (piVar10 != (int *)0xbd) {
      local_ac[0x11] = DAT_0046dee4[-0x1a];
      local_5c = (uint *)(iVar20 + 0x3f6);
      do {
        uVar5 = piVar12[iVar23];
        if ((*(uint *)(iVar20 + ((int)uVar5 >> 5) * 4 + 0x7a8) & 1 << (uVar5 & 0x1f)) != 0) {
          uVar9 = (uint)*(byte *)(uVar5 + (int)local_5c);
          puVar7 = (undefined4 *)(iVar20 + uVar5 * 4 + 0x4b4);
          puVar16 = (undefined4 *)(local_ac[0x11] + uVar5 * 4 + 0x100c);
          puVar25 = local_5c;
          if (uVar9 != 0) {
            unaff_r6 = (uint *)*puVar7;
            puVar25 = (uint *)*puVar16;
          }
          if (uVar9 != 0 && unaff_r6 != puVar25) {
            puVar28 = (undefined4 *)*puVar6;
            if (puVar28 < (undefined4 *)*puVar24) {
              *puVar28 = unaff_r6;
              unaff_r6 = *(uint **)(iVar18 + piVar12[iVar23] * 4);
              puVar28[1] = (uint)unaff_r6 | uVar9 << 0x10;
              *puVar6 = (uint)(puVar28 + 2);
            }
            *puVar16 = *puVar7;
          }
          iVar27 = iVar20 + (piVar12[iVar23] >> 5) * 4;
          *(uint *)(iVar27 + 0x7a8) = *(uint *)(iVar27 + 0x7a8) & ~(1 << (piVar12[iVar23] & 0x1fU));
        }
        iVar23 = iVar23 + 1;
        piVar10 = (int *)piVar12[iVar23];
        unaff_r11 = puVar6;
      } while (piVar10 != (int *)0xbd);
    }
  }
  puVar7 = DAT_0046def0;
  puVar24 = DAT_0046d138;
  puVar6 = DAT_0046d134;
  if ((param_5 & 2) != 0) {
    iVar23 = 0;
    piVar10 = (int *)*DAT_0046def0;
    if (piVar10 != (int *)0xbd) {
      local_ac[0x11] = DAT_0046def0[-2];
      local_60 = (uint *)(iVar20 + 0x3f6);
      do {
        uVar5 = puVar7[iVar23];
        if ((*(uint *)(iVar20 + ((int)uVar5 >> 5) * 4 + 0x7a8) & 1 << (uVar5 & 0x1f)) != 0) {
          uVar9 = (uint)*(byte *)(uVar5 + (int)local_60);
          puVar16 = (undefined4 *)(iVar20 + uVar5 * 4 + 0x4b4);
          puVar28 = (undefined4 *)(local_ac[0x11] + uVar5 * 4 + 0x100c);
          puVar25 = local_60;
          if (uVar9 != 0) {
            unaff_r6 = (uint *)*puVar16;
            puVar25 = (uint *)*puVar28;
          }
          if (uVar9 != 0 && unaff_r6 != puVar25) {
            puVar29 = (undefined4 *)*puVar6;
            if (puVar29 < (undefined4 *)*puVar24) {
              *puVar29 = unaff_r6;
              unaff_r6 = *(uint **)(iVar18 + puVar7[iVar23] * 4);
              puVar29[1] = (uint)unaff_r6 | uVar9 << 0x10;
              *puVar6 = (uint)(puVar29 + 2);
            }
            *puVar28 = *puVar16;
          }
          iVar27 = iVar20 + ((int)puVar7[iVar23] >> 5) * 4;
          *(uint *)(iVar27 + 0x7a8) = *(uint *)(iVar27 + 0x7a8) & ~(1 << (puVar7[iVar23] & 0x1f));
        }
        iVar23 = iVar23 + 1;
        piVar10 = (int *)puVar7[iVar23];
        unaff_r11 = puVar6;
      } while (piVar10 != (int *)0xbd);
    }
  }
  piVar12 = DAT_0046deec;
  puVar24 = DAT_0046d138;
  puVar6 = DAT_0046d134;
  if ((param_5 & 0x20) != 0) {
    iVar23 = 0;
    piVar10 = (int *)*DAT_0046deec;
    if (piVar10 != (int *)0xbd) {
      local_ac[0x11] = DAT_0046deec[-0x26];
      local_64 = (uint *)(iVar20 + 0x3f6);
      do {
        uVar5 = piVar12[iVar23];
        if ((*(uint *)(iVar20 + ((int)uVar5 >> 5) * 4 + 0x7a8) & 1 << (uVar5 & 0x1f)) != 0) {
          uVar9 = (uint)*(byte *)(uVar5 + (int)local_64);
          puVar7 = (undefined4 *)(iVar20 + uVar5 * 4 + 0x4b4);
          puVar16 = (undefined4 *)(local_ac[0x11] + uVar5 * 4 + 0x100c);
          puVar25 = local_64;
          if (uVar9 != 0) {
            unaff_r6 = (uint *)*puVar7;
            puVar25 = (uint *)*puVar16;
          }
          if (uVar9 != 0 && unaff_r6 != puVar25) {
            puVar28 = (undefined4 *)*puVar6;
            if (puVar28 < (undefined4 *)*puVar24) {
              *puVar28 = unaff_r6;
              unaff_r6 = *(uint **)(iVar18 + piVar12[iVar23] * 4);
              puVar28[1] = (uint)unaff_r6 | uVar9 << 0x10;
              *puVar6 = (uint)(puVar28 + 2);
            }
            *puVar16 = *puVar7;
          }
          iVar27 = iVar20 + (piVar12[iVar23] >> 5) * 4;
          *(uint *)(iVar27 + 0x7a8) = *(uint *)(iVar27 + 0x7a8) & ~(1 << (piVar12[iVar23] & 0x1fU));
        }
        iVar23 = iVar23 + 1;
        piVar10 = (int *)piVar12[iVar23];
        unaff_r11 = puVar6;
      } while (piVar10 != (int *)0xbd);
    }
  }
  iVar18 = DAT_0046e54c;
  uVar5 = DAT_0046e548;
  fVar39 = DAT_0046e544;
  fVar35 = DAT_0046e53c;
  fVar38 = DAT_0046e538;
  if ((param_5 & 0x40) != 0) {
    if (((*(uint *)(iVar20 + 0x560) & 1) != 0) && ((*param_4 & DAT_0046e540) != 0)) {
      uVar9 = 0;
      do {
        if (((*(uint *)(iVar20 + 0x98c) >> (uVar9 & 0xff) & 1) != 0) &&
           ((*(uint *)(iVar20 + 0x790) >> (*(uint *)(DAT_0046e550 + uVar9 * 4) & 0xff) & 1) == 0)) {
          iVar23 = *(int *)(iVar20 + uVar9 * 4 + 0x974);
          if (iVar23 != -1) {
            unaff_r11 = (uint *)puVar21[iVar23 + 0x1d];
          }
          if ((iVar23 == -1 || unaff_r11 == (uint *)0x0) ||
             (iVar23 = FUN_002d1210(), puVar6 = DAT_0046e554, iVar23 == 0)) break;
          if ((uint *)puVar21[uVar9 + 0x43] == unaff_r11) {
            if (puVar21[uVar9 + 100] != 0) {
              puVar24 = (uint *)*DAT_0046e554;
              if (puVar24 < (uint *)*DAT_0046e558) {
                *puVar24 = puVar21[uVar9 + 0x85] | *(int *)(DAT_0046e55c + uVar9 * 4) << 8;
                puVar24[1] = DAT_0046e560;
                *puVar6 = (uint)(puVar24 + 2);
              }
              FUN_00303b24(0x1c8,puVar21[uVar9 + 100],
                           *(int *)(iVar23 + 0x804) + puVar21[uVar9 + 0x85] * 4);
              puVar21[uVar9 + 100] = 0;
            }
          }
          else {
            if (puVar21[uVar9 + 100] != 0) {
              puVar21[uVar9 + 100] = 0;
            }
            puVar21[uVar9 + 0x43] = (uint)unaff_r11;
            if ((*(uint *)(iVar23 + 0x81c) & 1) != 0) {
              if (*(int *)(iVar23 + 0x804) == 0) {
                if ((code *)*DAT_0046e564 == (code *)0x0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = (*(code *)*DAT_0046e564)(0x10000,0x100,0,0x400);
                }
                *(undefined4 *)(iVar23 + 0x804) = uVar11;
              }
              iVar27 = 0;
              do {
                iVar8 = iVar23 + iVar27 * 4;
                fVar36 = *(float *)(iVar8 + 4);
                if ((fVar36 <= fVar2) || ((uint)((int)fVar36 << 1) >> 0x18 == 0xff)) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = uVar5;
                  if ((int)(fVar36 * fVar38) < iVar18) {
                    uVar14 = VectorFloatToUnsigned(fVar36 * fVar38,3);
                  }
                }
                *(uint *)(*(int *)(iVar23 + 0x804) + iVar27 * 4) = uVar14;
                fVar36 = *(float *)(iVar8 + 0x404);
                if (fVar36 == fVar2 || (uint)((int)fVar36 << 1) >> 0x18 == 0xff) {
                  uVar19 = 0;
                }
                else {
                  fVar36 = fVar36 * fVar35;
                  if (fVar36 < fVar2) {
                    fVar36 = -fVar36;
                    uVar19 = 0x800;
                  }
                  else {
                    uVar19 = 0;
                  }
                  if (0x44ffffff < (int)fVar36) {
                    fVar36 = fVar39;
                  }
                  uVar30 = VectorFloatToUnsigned(fVar36,3);
                  uVar19 = uVar19 | uVar30;
                }
                *(uint *)(*(int *)(iVar23 + 0x804) + iVar27 * 4) = uVar14 | uVar19 << 0xc;
                iVar27 = iVar27 + 1;
              } while (iVar27 < 0x100);
              *(uint *)(iVar23 + 0x81c) = *(uint *)(iVar23 + 0x81c) & 0xfffffffe;
            }
            puVar6 = DAT_0046e554;
            piVar10 = (int *)*DAT_0046e554;
            if (piVar10 < (int *)*DAT_0046e558) {
              *piVar10 = *(int *)(DAT_0046e55c + uVar9 * 4) << 8;
              piVar10[1] = DAT_0046e560;
              *puVar6 = (uint)(piVar10 + 2);
            }
            FUN_00303b24(0x1c8,0x100,*(undefined4 *)(iVar23 + 0x804));
            local_ac[0x10] = 1;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 6);
      puVar6 = DAT_0046e554;
      iVar18 = 0;
      do {
        iVar23 = iVar20 + iVar18 * 0x70;
        if (*(char *)(iVar23 + 0x9a0) != '\0') {
          if ((*(int *)(iVar20 + 0x98c) << 0x19 < 0) &&
             ((*(uint *)(iVar20 + 0x790) >> (iVar18 + 8U & 0xff) & 1) == 0)) {
            uVar5 = puVar21[*(int *)(iVar23 + 0xa00) + 0x1d];
            iVar27 = FUN_002d1210();
            if (puVar21[iVar18 + 0x49] == uVar5) {
              if (puVar21[iVar18 + 0x6a] != 0) {
                puVar24 = (uint *)*puVar6;
                if (puVar24 < (uint *)*DAT_0046e558) {
                  *puVar24 = iVar18 * 0x100 + 0x800U | puVar21[iVar18 + 0x8b];
                  puVar24[1] = DAT_0046e560;
                  *puVar6 = (uint)(puVar24 + 2);
                }
                FUN_00303b24(0x1c8,puVar21[iVar18 + 0x6a],
                             *(int *)(iVar27 + 0x804) + puVar21[iVar18 + 0x8b] * 4);
                puVar21[iVar18 + 0x6a] = 0;
              }
            }
            else {
              if (puVar21[iVar18 + 0x6a] != 0) {
                puVar21[iVar18 + 0x6a] = 0;
              }
              puVar21[iVar18 + 0x49] = uVar5;
              if ((*(uint *)(iVar27 + 0x81c) & 1) != 0) {
                if (*(int *)(iVar27 + 0x804) == 0) {
                  if ((code *)*DAT_0046e564 == (code *)0x0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = (*(code *)*DAT_0046e564)(0x10000,0x100,0,0x400);
                  }
                  *(undefined4 *)(iVar27 + 0x804) = uVar11;
                }
                iVar8 = DAT_0046e54c;
                uVar5 = DAT_0046e548;
                iVar13 = 0;
                do {
                  iVar17 = iVar27 + iVar13 * 4;
                  fVar36 = *(float *)(iVar17 + 4);
                  if ((fVar36 <= fVar2) || ((uint)((int)fVar36 << 1) >> 0x18 == 0xff)) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar5;
                    if ((int)(fVar36 * fVar38) < iVar8) {
                      uVar9 = VectorFloatToUnsigned(fVar36 * fVar38,3);
                    }
                  }
                  *(uint *)(*(int *)(iVar27 + 0x804) + iVar13 * 4) = uVar9;
                  fVar36 = *(float *)(iVar17 + 0x404);
                  if (fVar36 == fVar2 || (uint)((int)fVar36 << 1) >> 0x18 == 0xff) {
                    uVar14 = 0;
                  }
                  else {
                    fVar36 = fVar36 * fVar35;
                    if (fVar36 < fVar2) {
                      fVar36 = -fVar36;
                      uVar14 = 0x800;
                    }
                    else {
                      uVar14 = 0;
                    }
                    if (0x44ffffff < (int)fVar36) {
                      fVar36 = fVar39;
                    }
                    uVar19 = VectorFloatToUnsigned(fVar36,3);
                    uVar14 = uVar14 | uVar19;
                  }
                  *(uint *)(*(int *)(iVar27 + 0x804) + iVar13 * 4) = uVar9 | uVar14 << 0xc;
                  iVar13 = iVar13 + 1;
                } while (iVar13 < 0x100);
                *(uint *)(iVar27 + 0x81c) = *(uint *)(iVar27 + 0x81c) & 0xfffffffe;
              }
              piVar10 = (int *)*puVar6;
              if (piVar10 < (int *)*DAT_0046e558) {
                *piVar10 = iVar18 * 0x100 + 0x800;
                piVar10[1] = DAT_0046e560;
                *puVar6 = (uint)(piVar10 + 2);
              }
              FUN_00303b24(0x1c8,0x100,*(undefined4 *)(iVar27 + 0x804));
              local_ac[0x10] = 1;
            }
          }
          if ((*(uint *)(iVar20 + 0x790) >> (iVar18 + 0x18U & 0xff) & 1) == 0) {
            uVar5 = puVar21[*(int *)(iVar23 + 0xa0c) + 0x1d];
            iVar23 = FUN_002d1210();
            if (puVar21[iVar18 + 0x51] == uVar5) {
              if (puVar21[iVar18 + 0x72] != 0) {
                puVar24 = (uint *)*puVar6;
                if (puVar24 < (uint *)*DAT_0046e558) {
                  *puVar24 = iVar18 * 0x100 + 0x1000U | puVar21[iVar18 + 0x93];
                  puVar24[1] = DAT_0046e560;
                  *puVar6 = (uint)(puVar24 + 2);
                }
                FUN_00303b24(0x1c8,puVar21[iVar18 + 0x72],
                             *(int *)(iVar23 + 0x804) + puVar21[iVar18 + 0x93] * 4);
                puVar21[iVar18 + 0x72] = 0;
              }
            }
            else {
              if (puVar21[iVar18 + 0x72] != 0) {
                puVar21[iVar18 + 0x72] = 0;
              }
              puVar21[iVar18 + 0x51] = uVar5;
              if ((*(uint *)(iVar23 + 0x81c) & 1) != 0) {
                if (*(int *)(iVar23 + 0x804) == 0) {
                  if ((code *)*DAT_0046e564 == (code *)0x0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = (*(code *)*DAT_0046e564)(0x10000,0x100,0,0x400);
                  }
                  *(undefined4 *)(iVar23 + 0x804) = uVar11;
                }
                iVar27 = DAT_0046e54c;
                uVar5 = DAT_0046e548;
                iVar8 = 0;
                do {
                  iVar13 = iVar23 + iVar8 * 4;
                  fVar36 = *(float *)(iVar13 + 4);
                  if ((fVar36 <= fVar2) || ((uint)((int)fVar36 << 1) >> 0x18 == 0xff)) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar5;
                    if ((int)(fVar36 * fVar38) < iVar27) {
                      uVar9 = VectorFloatToUnsigned(fVar36 * fVar38,3);
                    }
                  }
                  *(uint *)(*(int *)(iVar23 + 0x804) + iVar8 * 4) = uVar9;
                  fVar36 = *(float *)(iVar13 + 0x404);
                  if (fVar36 == fVar2 || (uint)((int)fVar36 << 1) >> 0x18 == 0xff) {
                    uVar14 = 0;
                  }
                  else {
                    fVar36 = fVar36 * fVar35;
                    if (fVar36 < fVar2) {
                      fVar36 = -fVar36;
                      uVar14 = 0x800;
                    }
                    else {
                      uVar14 = 0;
                    }
                    if (0x44ffffff < (int)fVar36) {
                      fVar36 = fVar39;
                    }
                    uVar19 = VectorFloatToUnsigned(fVar36,3);
                    uVar14 = uVar14 | uVar19;
                  }
                  *(uint *)(*(int *)(iVar23 + 0x804) + iVar8 * 4) = uVar9 | uVar14 << 0xc;
                  iVar8 = iVar8 + 1;
                } while (iVar8 < 0x100);
                *(uint *)(iVar23 + 0x81c) = *(uint *)(iVar23 + 0x81c) & 0xfffffffe;
              }
              piVar10 = (int *)*puVar6;
              if (piVar10 < (int *)*DAT_0046e558) {
                *piVar10 = iVar18 * 0x100 + 0x1000;
                piVar10[1] = DAT_0046e560;
                *puVar6 = (uint)(piVar10 + 2);
              }
              FUN_00303b24(0x1c8,0x100,*(undefined4 *)(iVar23 + 0x804));
              local_ac[0x10] = 1;
            }
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < 8);
    }
    fVar3 = DAT_0046ec24;
    fVar36 = DAT_0046ec20;
    fVar39 = DAT_0046ec14;
    uVar5 = DAT_0046e548;
    if ((*(int *)(iVar20 + 0xd8c) != 0) && ((*param_4 & DAT_0046ec18) != 0)) {
      local_ac[0xe] = *(int *)(DAT_0046ec1c + 8);
      uVar9 = *(uint *)(DAT_0046ec1c + 0xc);
      iVar18 = 0;
      local_ac[0xf] = uVar9;
      do {
        if (iVar18 == 1) {
          uVar9 = *(uint *)(iVar20 + 0x564);
        }
        if (iVar18 != 1 || (uVar9 & 0x4000) != 0) {
          uVar9 = puVar21[*(int *)(iVar20 + iVar18 * 4 + 0xd70) + 0x1d];
          iVar23 = FUN_002d1210();
          puVar6 = DAT_0046e554;
          if (puVar21[iVar18 + 0x59] == uVar9) {
            uVar9 = 0;
            if (puVar21[iVar18 + 0x7a] != 0) {
              puVar24 = (uint *)*DAT_0046e554;
              if (puVar24 < (uint *)*DAT_0046e558) {
                *puVar24 = puVar21[iVar18 + 0x9b] | local_ac[iVar18 + 0xe] << 8;
                puVar24[1] = DAT_0046ec28;
                *puVar6 = (uint)(puVar24 + 2);
              }
              uVar9 = FUN_00303b24(0xb0,puVar21[iVar18 + 0x7a],
                                   *(int *)(iVar23 + 0x810) + puVar21[iVar18 + 0x9b] * 4);
              puVar21[iVar18 + 0x7a] = 0;
            }
          }
          else {
            if (puVar21[iVar18 + 0x7a] != 0) {
              puVar21[iVar18 + 0x7a] = 0;
            }
            puVar21[iVar18 + 0x59] = uVar9;
            if ((*(uint *)(iVar23 + 0x81c) & 8) != 0) {
              if (*(int *)(iVar23 + 0x810) == 0) {
                if ((code *)*DAT_0046e564 == (code *)0x0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = (*(code *)*DAT_0046e564)(0x10000,0x100,0,0x200);
                }
                *(undefined4 *)(iVar23 + 0x810) = uVar11;
              }
              iVar27 = DAT_0046e54c;
              iVar8 = 0;
              do {
                iVar13 = iVar23 + iVar8 * 4;
                fVar40 = *(float *)(iVar13 + 4);
                if ((fVar40 <= fVar2) || ((uint)((int)fVar40 << 1) >> 0x18 == 0xff)) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar5;
                  if ((int)(fVar40 * fVar38) < iVar27) {
                    uVar9 = VectorFloatToUnsigned(fVar40 * fVar38,3);
                  }
                }
                *(uint *)(*(int *)(iVar23 + 0x810) + iVar8 * 4) = uVar9;
                fVar40 = *(float *)(iVar13 + 0x204);
                if (fVar40 == fVar2 || (uint)((int)fVar40 << 1) >> 0x18 == 0xff) {
                  iVar13 = 0;
                }
                else {
                  fVar41 = (fVar40 + fVar3) * fVar35;
                  fVar40 = fVar2;
                  if ((fVar2 <= fVar41) && (fVar40 = fVar41, iVar27 <= (int)fVar41)) {
                    fVar40 = fVar36;
                  }
                  if ((int)fVar40 < 0x45000000) {
                    iVar13 = VectorFloatToUnsigned(fVar40 + fVar35,3);
                  }
                  else {
                    iVar13 = VectorFloatToUnsigned(fVar40 - fVar35,3);
                  }
                }
                *(uint *)(*(int *)(iVar23 + 0x810) + iVar8 * 4) = uVar9 | iVar13 << 0xc;
                iVar8 = iVar8 + 1;
              } while (iVar8 < 0x80);
              *(uint *)(iVar23 + 0x81c) = *(uint *)(iVar23 + 0x81c) & 0xfffffff7;
            }
            puVar6 = DAT_0046e554;
            piVar10 = (int *)*DAT_0046e554;
            if (piVar10 < (int *)*DAT_0046e558) {
              *piVar10 = local_ac[iVar18 + 0xe] << 8;
              piVar10[1] = DAT_0046ec28;
              *puVar6 = (uint)(piVar10 + 2);
            }
            FUN_00303b24(0xb0,0x80,*(undefined4 *)(iVar23 + 0x810));
            uVar9 = 0;
            local_ac[0x10] = 1;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < 2);
      if ((*(uint *)(iVar20 + 0x564) & 0x8000) != 0) {
        uVar9 = puVar21[*(int *)(iVar20 + 0xd78) + 0x1d];
        iVar18 = FUN_002d1210();
        puVar6 = DAT_0046e554;
        if (puVar21[0x5b] == uVar9) {
          if (puVar21[0x7c] != 0) {
            puVar24 = (uint *)*DAT_0046e554;
            if (puVar24 < (uint *)*DAT_0046e558) {
              *puVar24 = puVar21[0x9d];
              puVar24[1] = DAT_0046ec28;
              *puVar6 = (uint)(puVar24 + 2);
            }
            FUN_00303b24(0xb0,puVar21[0x7c],*(int *)(iVar18 + 0x814) + puVar21[0x9d] * 4);
            puVar21[0x7c] = 0;
          }
        }
        else {
          if (puVar21[0x7c] != 0) {
            puVar21[0x7c] = 0;
          }
          puVar21[0x5b] = uVar9;
          if ((*(uint *)(iVar18 + 0x81c) & 0x10) != 0) {
            if (*(int *)(iVar18 + 0x814) == 0) {
              if ((code *)*DAT_0046e564 == (code *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar11 = (*(code *)*DAT_0046e564)(0x10000,0x100,0,0x200);
              }
              *(undefined4 *)(iVar18 + 0x814) = uVar11;
            }
            iVar23 = DAT_0046e54c;
            iVar27 = 0;
            do {
              iVar8 = iVar18 + iVar27 * 4;
              fVar40 = *(float *)(iVar8 + 4);
              if ((fVar40 <= fVar2) || ((uint)((int)fVar40 << 1) >> 0x18 == 0xff)) {
                uVar9 = 0;
              }
              else {
                uVar9 = uVar5;
                if ((int)(fVar40 * fVar38) < iVar23) {
                  uVar9 = VectorFloatToUnsigned(fVar40 * fVar38,3);
                }
              }
              *(uint *)(*(int *)(iVar18 + 0x814) + iVar27 * 4) = uVar9;
              fVar40 = *(float *)(iVar8 + 0x204);
              if (fVar40 == fVar2 || (uint)((int)fVar40 << 1) >> 0x18 == 0xff) {
                iVar8 = 0;
              }
              else {
                fVar41 = (fVar40 + fVar3) * fVar35;
                fVar40 = fVar2;
                if ((fVar2 <= fVar41) && (fVar40 = fVar41, iVar23 <= (int)fVar41)) {
                  fVar40 = fVar36;
                }
                if ((int)fVar40 < 0x45000000) {
                  iVar8 = VectorFloatToUnsigned(fVar40 + fVar35,3);
                }
                else {
                  iVar8 = VectorFloatToUnsigned(fVar40 - fVar35,3);
                }
              }
              *(uint *)(*(int *)(iVar18 + 0x814) + iVar27 * 4) = uVar9 | iVar8 << 0xc;
              iVar27 = iVar27 + 1;
            } while (iVar27 < 0x80);
            *(uint *)(iVar18 + 0x81c) = *(uint *)(iVar18 + 0x81c) & 0xffffffef;
          }
          uVar5 = DAT_0046ec28;
          puVar6 = DAT_0046e554;
          puVar7 = (undefined4 *)*DAT_0046e554;
          if (puVar7 < (undefined4 *)*DAT_0046e558) {
            *puVar7 = 0;
            puVar7[1] = uVar5;
            *puVar6 = (uint)(puVar7 + 2);
          }
          FUN_00303b24(0xb0,0x80,*(undefined4 *)(iVar18 + 0x814));
          local_ac[0x10] = 1;
        }
      }
      iVar18 = DAT_0046f2c4;
      fVar40 = DAT_0046f2c0;
      fVar36 = DAT_0046f2bc;
      iVar23 = 0;
      do {
        if (puVar21[*(int *)(iVar20 + iVar23 * 4 + 0xd7c) + 0x1d] != puVar21[iVar23 + 0x5c]) break;
        iVar23 = iVar23 + 1;
      } while (iVar23 < 4);
      if (iVar23 == 4) {
        uVar5 = puVar21[0x7d];
        bVar31 = uVar5 == 0;
        if (bVar31) {
          uVar5 = puVar21[0x7e];
        }
        bVar32 = bVar31 && uVar5 == 0;
        if (bVar31 && uVar5 == 0) {
          bVar32 = puVar21[0x7f] == 0;
        }
        bVar31 = false;
        if (bVar32) {
          bVar31 = puVar21[0x80] == 0;
        }
        if (!bVar31) {
          uVar9 = 0;
          uVar5 = 0x200;
          iVar18 = 0;
          do {
            uVar14 = puVar21[iVar18 + 0x7d];
            if (uVar14 != 0) {
              uVar19 = puVar21[iVar18 + 0x9e];
              puVar21[iVar18 + 0x7d] = 0;
              if (uVar19 < uVar5) {
                uVar5 = uVar19;
              }
              iVar23 = uVar19 + uVar14;
              if (uVar9 < iVar23 - 1U) {
                uVar9 = iVar23 - 1;
              }
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < 4);
          iVar18 = 0;
          do {
            iVar23 = FUN_002d1210(*(undefined4 *)(iVar20 + iVar18 * 4 + 0xd7c));
            puVar24 = DAT_0046e558;
            puVar6 = DAT_0046e554;
            if (uVar5 <= uVar9) {
              uVar14 = uVar5;
              do {
                local_874[uVar14] =
                     local_874[uVar14] & ~(0xff << (iVar18 << 3 & 0xffU)) |
                     (uint)*(byte *)(*(int *)(iVar23 + 0x818) + uVar14) << (iVar18 << 3 & 0xffU);
                uVar14 = uVar14 + 1;
              } while (uVar14 <= uVar9);
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < 4);
          if (uVar5 < 0x100) {
            if (0xff < uVar9) {
              puVar25 = (uint *)*DAT_0046e554;
              if (puVar25 < (uint *)*DAT_0046e558) {
                *puVar25 = uVar5 | 0x400;
                puVar25[1] = DAT_0046ec28;
                *puVar6 = (uint)(puVar25 + 2);
              }
              FUN_00303b24(0xb0,0x100 - uVar5,local_874 + uVar5);
              puVar7 = (undefined4 *)*puVar6;
              if (puVar7 < (undefined4 *)*puVar24) {
                *puVar7 = 0x500;
                puVar7[1] = DAT_0046ec28;
                *puVar6 = (uint)(puVar7 + 2);
              }
              FUN_00303b24(0xb0,uVar9 - 0xff,auStack_474);
              goto LAB_0046f224;
            }
            puVar24 = (uint *)*DAT_0046e554;
            if (puVar24 < (uint *)*DAT_0046e558) {
              *puVar24 = uVar5 | 0x400;
              puVar24[1] = DAT_0046ec28;
              *puVar6 = (uint)(puVar24 + 2);
            }
          }
          else {
            puVar24 = (uint *)*DAT_0046e554;
            if (puVar24 < (uint *)*DAT_0046e558) {
              *puVar24 = uVar5 - 0x100 | 0x500;
              puVar24[1] = DAT_0046ec28;
              *puVar6 = (uint)(puVar24 + 2);
            }
          }
          FUN_00303b24(0xb0,(uVar9 - uVar5) + 1,local_874 + uVar5);
        }
      }
      else {
        iVar23 = 0;
        do {
          iVar27 = FUN_002d1210(*(undefined4 *)(iVar20 + iVar23 * 4 + 0xd7c));
          if (puVar21[iVar23 + 0x7d] != 0) {
            puVar21[iVar23 + 0x7d] = 0;
          }
          if ((*(uint *)(iVar27 + 0x81c) & 0x20) != 0) {
            if (*(int *)(iVar27 + 0x818) == 0) {
              if ((code *)*DAT_0046e564 == (code *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar11 = (*(code *)*DAT_0046e564)(0x10000,0x100,0,0x200);
              }
              *(undefined4 *)(iVar27 + 0x818) = uVar11;
            }
            iVar8 = 0;
            do {
              fVar41 = *(float *)(iVar27 + iVar8 * 4 + 4);
              if (0x3f800000 < (int)fVar41) {
                fVar41 = fVar3;
              }
              iVar13 = iVar8 + 1;
              uVar11 = VectorFloatToUnsigned(fVar36 + fVar41 * fVar39,3);
              *(char *)(*(int *)(iVar27 + 0x818) + iVar8) = (char)uVar11;
              iVar17 = DAT_0046f2c8;
              iVar8 = iVar13;
            } while (iVar13 < 0x100);
            for (; iVar13 < iVar18; iVar13 = iVar13 + 1) {
              fVar41 = *(float *)(iVar27 + iVar13 * 4 + 4);
              if (fVar41 == fVar2 || (uint)((int)fVar41 << 1) >> 0x18 == 0xff) {
                *(undefined1 *)(*(int *)(iVar27 + 0x818) + iVar13) = 0;
              }
              else {
                fVar37 = (fVar41 + fVar3) * fVar40;
                fVar41 = fVar2;
                if ((fVar2 <= fVar37) && (fVar41 = fVar37, iVar17 <= (int)fVar37)) {
                  fVar41 = fVar39;
                }
                if ((int)fVar41 < 0x43000000) {
                  uVar11 = VectorFloatToUnsigned(fVar41 + fVar40,3);
                  *(char *)(*(int *)(iVar27 + 0x818) + iVar13) = (char)uVar11;
                }
                else {
                  uVar11 = VectorFloatToUnsigned(fVar41 - fVar40,3);
                  *(char *)(*(int *)(iVar27 + 0x818) + iVar13) = (char)uVar11;
                }
              }
            }
            *(undefined1 *)(*(int *)(iVar27 + 0x818) + iVar13) = 0;
            *(uint *)(iVar27 + 0x81c) = *(uint *)(iVar27 + 0x81c) & 0xffffffdf;
          }
          puVar24 = DAT_0046e558;
          puVar6 = DAT_0046e554;
          iVar8 = 0;
          do {
            local_874[iVar8] =
                 local_874[iVar8] & ~(0xff << (iVar23 << 3 & 0xffU)) |
                 (uint)*(byte *)(*(int *)(iVar27 + 0x818) + iVar8) << (iVar23 << 3 & 0xffU);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x200);
          iVar23 = iVar23 + 1;
        } while (iVar23 < 4);
        if (iVar23 == 4) {
          puVar7 = (undefined4 *)*DAT_0046e554;
          if (puVar7 < (undefined4 *)*DAT_0046e558) {
            *puVar7 = 0x400;
            puVar7[1] = DAT_0046ec28;
            *puVar6 = (uint)(puVar7 + 2);
          }
          FUN_00303b24(0xb0,0x100,local_874);
          puVar7 = (undefined4 *)*puVar6;
          if (puVar7 < (undefined4 *)*puVar24) {
            *puVar7 = 0x500;
            puVar7[1] = DAT_0046ec28;
            *puVar6 = (uint)(puVar7 + 2);
          }
          FUN_00303b24(0xb0,0x100,auStack_474);
          local_ac[0x10] = 1;
          iVar18 = 0;
          do {
            iVar23 = iVar18 + 1;
            puVar21[iVar18 + 0x5c] = puVar21[*(int *)(iVar20 + iVar18 * 4 + 0xd7c) + 0x1d];
            iVar18 = iVar23;
          } while (iVar23 < 4);
        }
      }
    }
LAB_0046f224:
    if (((*(uint *)(iVar20 + 0x5f4) & 7) != 0) && ((*param_4 & DAT_0046f2cc) != 0)) {
      uVar9 = puVar21[*(int *)(iVar20 + 0xde4) + 0x1d];
      iVar18 = FUN_002d1210();
      uVar5 = DAT_0046f2d0;
      puVar6 = DAT_0046e554;
      if (puVar21[0x60] == uVar9) {
        if (puVar21[0x81] != 0) {
          puVar24 = (uint *)*DAT_0046e554;
          if (puVar24 < (uint *)*DAT_0046e558) {
            *puVar24 = puVar21[0xa2];
            puVar24[1] = uVar5;
            *puVar6 = (uint)(puVar24 + 2);
          }
          FUN_00303b24(0xe8,puVar21[0x81],*(int *)(iVar18 + 0x808) + puVar21[0xa2] * 4);
          puVar21[0x81] = 0;
        }
      }
      else {
        if (puVar21[0x81] != 0) {
          puVar21[0x81] = 0;
        }
        puVar21[0x60] = uVar9;
        if ((*(uint *)(iVar18 + 0x81c) & 2) != 0) {
          if (*(int *)(iVar18 + 0x808) == 0) {
            if ((code *)*DAT_0046e564 == (code *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (*(code *)*DAT_0046e564)(0x10000,0x100,0,0x200);
            }
            *(undefined4 *)(iVar18 + 0x808) = uVar11;
          }
          iVar27 = DAT_0046f6e0;
          fVar3 = DAT_0046f6dc;
          fVar36 = DAT_0046f6d8;
          iVar23 = DAT_0046e54c;
          iVar8 = 0;
          do {
            iVar13 = iVar18 + iVar8 * 4;
            fVar40 = *(float *)(iVar13 + 0x204);
            if (fVar40 == fVar2 || (uint)((int)fVar40 << 1) >> 0x18 == 0xff) {
              *(undefined4 *)(*(int *)(iVar18 + 0x808) + iVar8 * 4) = 0;
            }
            else {
              fVar41 = (fVar40 + fVar36) * fVar35;
              fVar40 = fVar2;
              if ((fVar2 <= fVar41) && (fVar40 = fVar41, 0x45ffffff < (int)fVar41)) {
                fVar40 = fVar3;
              }
              if ((int)fVar40 < iVar23) {
                uVar11 = VectorFloatToUnsigned(fVar40 + fVar38,3);
                *(undefined4 *)(*(int *)(iVar18 + 0x808) + iVar8 * 4) = uVar11;
              }
              else {
                uVar11 = VectorFloatToUnsigned(fVar40 - fVar38,3);
                *(undefined4 *)(*(int *)(iVar18 + 0x808) + iVar8 * 4) = uVar11;
              }
            }
            fVar40 = *(float *)(iVar13 + 4);
            if ((fVar40 <= fVar2) || ((uint)((int)fVar40 << 1) >> 0x18 == 0xff)) {
              iVar13 = 0;
            }
            else {
              iVar13 = iVar27;
              if ((int)(fVar40 * fVar35) < 0x45000000) {
                iVar13 = VectorFloatToUnsigned(fVar40 * fVar35,3);
              }
            }
            *(uint *)(*(int *)(iVar18 + 0x808) + iVar8 * 4) =
                 *(uint *)(*(int *)(iVar18 + 0x808) + iVar8 * 4) | iVar13 << 0xd;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x80);
          *(uint *)(iVar18 + 0x81c) = *(uint *)(iVar18 + 0x81c) & 0xfffffffd;
        }
        puVar6 = DAT_0046e554;
        puVar7 = (undefined4 *)*DAT_0046e554;
        if (puVar7 < (undefined4 *)*DAT_0046e558) {
          *puVar7 = 0;
          puVar7[1] = uVar5;
          *puVar6 = (uint)(puVar7 + 2);
        }
        FUN_00303b24(0xe8,0x80,*(undefined4 *)(iVar18 + 0x808));
        local_ac[0x10] = 1;
      }
    }
    fVar38 = DAT_0046f6e8;
    iVar18 = DAT_0046f2c8;
    piVar10 = (int *)&DAT_00000007;
    if (((~*(uint *)(iVar20 + 0x5f4) & 7) == 0) &&
       (piVar10 = DAT_0046f6e4, (*param_4 & (uint)DAT_0046f6e4) != 0)) {
      iVar23 = 0;
      do {
        piVar10 = (int *)puVar21[*(int *)(iVar20 + iVar23 * 4 + 0xdf8) + 0x1d];
        if (piVar10 != (int *)puVar21[iVar23 + 0x61]) break;
        iVar23 = iVar23 + 1;
      } while (iVar23 < 3);
      if (iVar23 != 3) {
        iVar23 = 0;
        local_ac[0] = 0;
        local_ac[1] = 0;
        local_ac[2] = 0;
        local_ac[3] = 0;
        local_ac[4] = 0;
        local_ac[5] = 0;
        local_ac[6] = 0;
        local_ac[7] = 0;
        local_ac[8] = 0;
        local_ac[9] = 0;
        local_ac[10] = 0;
        local_ac[0xb] = 0;
        local_ac[0xc] = 0;
        local_ac[0xd] = 0;
        local_ac[0xe] = 0;
        local_ac[0xf] = 0;
        do {
          iVar27 = FUN_002d1210(*(undefined4 *)(iVar20 + iVar23 * 4 + 0xdf8));
          if ((*(uint *)(iVar27 + 0x81c) & 4) != 0) {
            if (*(int *)(iVar27 + 0x80c) == 0) {
              if ((code *)*DAT_0046e564 == (code *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar11 = (*(code *)*DAT_0046e564)(0x10000,0x100,0,0x40);
              }
              *(undefined4 *)(iVar27 + 0x80c) = uVar11;
            }
            iVar8 = 0;
            do {
              iVar13 = iVar27 + iVar8 * 4;
              fVar35 = *(float *)(iVar13 + 4) * fVar39;
              if ((fVar35 <= fVar2) || ((uint)((int)fVar35 << 1) >> 0x18 == 0xff)) {
                uVar11 = 0;
              }
              else if ((int)fVar35 < iVar18) {
                uVar11 = VectorFloatToUnsigned(fVar35,3);
              }
              else {
                uVar11 = 0xff;
              }
              *(undefined4 *)(*(int *)(iVar27 + 0x80c) + iVar8 * 4) = uVar11;
              uVar5 = VectorFloatToUnsigned(ABS(*(float *)(iVar13 + 0x24) * fVar38),3);
              iVar17 = iVar8 * 4 + 0x20;
              iVar8 = iVar8 + 1;
              *(uint *)(*(int *)(iVar27 + 0x80c) + iVar17) = uVar5 & 0x7f;
              if (*(float *)(iVar13 + 0x24) < fVar2) {
                *(uint *)(*(int *)(iVar27 + 0x80c) + iVar17) = uVar5 & 0x7f | 0x80;
              }
            } while (iVar8 < 8);
            *(uint *)(iVar27 + 0x81c) = *(uint *)(iVar27 + 0x81c) & 0xfffffffb;
          }
          piVar10 = (int *)(iVar23 << 3);
          iVar8 = 0;
          do {
            local_ac[iVar8] =
                 local_ac[iVar8] |
                 *(int *)(*(int *)(iVar27 + 0x80c) + iVar8 * 4 + 0x20) << ((uint)piVar10 & 0xff);
            iVar13 = iVar8 + 1;
            local_ac[iVar8 + 8] =
                 local_ac[iVar8 + 8] |
                 *(int *)(*(int *)(iVar27 + 0x80c) + iVar8 * 4) << ((uint)piVar10 & 0xff);
            iVar8 = iVar13;
          } while (iVar13 < 8);
          iVar23 = iVar23 + 1;
        } while (iVar23 < 3);
        if (iVar23 == 3) {
          if (local_ac[0x10] == 0) {
            FUN_002d134c(0xc0,0x2d);
          }
          puVar16 = DAT_0046f6f0;
          puVar7 = DAT_0046f6ec;
          puVar28 = (undefined4 *)*DAT_0046f6ec;
          if (puVar28 < (undefined4 *)*DAT_0046f6f0) {
            *puVar28 = 0;
            puVar28[1] = DAT_0046f6f4;
            *puVar7 = puVar28 + 2;
          }
          FUN_00303b24(0x124,0x10,local_ac);
          puVar28 = (undefined4 *)*puVar7;
          if (puVar28 < (undefined4 *)*puVar16) {
            *puVar28 = 0;
            puVar28[1] = 0x100;
            *puVar7 = puVar28 + 2;
          }
          iVar18 = 0;
          do {
            iVar23 = iVar18 + 1;
            piVar10 = (int *)puVar21[*(int *)(iVar20 + iVar18 * 4 + 0xdf8) + 0x1d];
            puVar21[iVar18 + 0x61] = (uint)piVar10;
            iVar18 = iVar23;
          } while (iVar23 < 3);
        }
      }
    }
  }
  puVar16 = DAT_0046f6f0;
  puVar7 = DAT_0046f6ec;
  if ((param_5 & 0x800) == 0) {
    return;
  }
  piVar12 = (int *)*param_4;
  bVar31 = ((uint)piVar12 & 0x100) == 0;
  if (bVar31) {
    piVar12 = *(int **)(iVar20 + 0xdb8);
    piVar10 = (int *)puVar21[0x15d];
  }
  if (bVar31 && piVar12 == piVar10) {
    return;
  }
  uVar5 = (uint)*(byte *)((int)puVar21 + 0x586) << 2 | (uint)*(byte *)((int)puVar21 + 0x587) << 3 |
          (uint)(byte)puVar21[0x161] | (uint)*(byte *)((int)puVar21 + 0x585) << 1;
  puVar21[0x15d] = *(uint *)(iVar20 + 0xdb8);
  puVar28 = (undefined4 *)*puVar7;
  if (puVar28 < (undefined4 *)*puVar16) {
    *puVar28 = 1;
    puVar28[1] = DAT_0046fa20;
    puVar28 = puVar28 + 2;
    *puVar7 = puVar28;
  }
  if (puVar28 < (undefined4 *)*puVar16) {
    *puVar28 = 1;
    puVar28[1] = DAT_0046fa24;
    *puVar7 = puVar28 + 2;
  }
  uVar9 = DAT_0046fa28;
  uVar14 = puVar21[0x15d];
  uVar19 = DAT_0046fa28 | (int)DAT_0046fa28 >> 0x12;
  uVar30 = uVar19 + 1;
  if (uVar14 != 0x6030) {
    if (uVar14 == 0x6048) {
      puVar28 = (undefined4 *)*puVar7;
      if (puVar28 < (undefined4 *)*puVar16) {
        *puVar28 = 0xf;
        puVar28[1] = uVar19;
        puVar28 = puVar28 + 2;
        *puVar7 = puVar28;
      }
      if (puVar28 < (undefined4 *)*puVar16) {
        *puVar28 = 0xf;
        puVar28[1] = uVar9;
        puVar28 = puVar28 + 2;
        *puVar7 = puVar28;
      }
      if (puVar28 < (undefined4 *)*puVar16) {
        *puVar28 = 0;
        puVar28[1] = uVar30;
        puVar28 = puVar28 + 2;
        *puVar7 = puVar28;
      }
      if ((undefined4 *)*puVar16 <= puVar28) {
        return;
      }
    }
    else {
      if (uVar14 != 0x6051) {
        return;
      }
      puVar28 = (undefined4 *)*puVar7;
      if (puVar28 < (undefined4 *)*puVar16) {
        *puVar28 = 0xf;
        puVar28[1] = uVar19;
        puVar28 = puVar28 + 2;
        *puVar7 = puVar28;
      }
      if (puVar28 < (undefined4 *)*puVar16) {
        *puVar28 = 0xf;
        puVar28[1] = uVar9;
        puVar28 = puVar28 + 2;
        *puVar7 = puVar28;
      }
      if (puVar28 < (undefined4 *)*puVar16) {
        *puVar28 = 3;
        puVar28[1] = uVar30;
        puVar28 = puVar28 + 2;
        *puVar7 = puVar28;
      }
      if ((undefined4 *)*puVar16 <= puVar28) {
        return;
      }
    }
    *puVar28 = 0;
    puVar28[1] = uVar19 + 2;
    *puVar7 = puVar28 + 2;
    return;
  }
  if (uVar5 == 0) {
LAB_0046f8ac:
    bVar31 = false;
    bVar32 = false;
    if (uVar5 == 0) goto LAB_0046f8bc;
  }
  else {
    if (puVar21[0x16e] != 1) {
      bVar32 = (char)puVar21[0x15f] == '\0';
      bVar31 = bVar32 && uVar5 == 0xf;
      if (bVar32 && uVar5 == 0xf) {
        bVar31 = *(char *)((int)puVar21 + 0x57d) == '\0';
      }
      if (bVar31) goto LAB_0046f8ac;
    }
    bVar31 = true;
  }
  bVar32 = true;
LAB_0046f8bc:
  bVar33 = *(char *)((int)puVar21 + 0x57b) != '\0';
  cVar1 = '\0';
  cVar4 = cVar1;
  if (bVar33) {
    cVar4 = '\x04';
    cVar1 = (char)puVar21[0x162];
  }
  bVar34 = *(char *)((int)puVar21 + 0x57a) != '\0';
  uVar5 = 0;
  uVar14 = uVar5;
  if (bVar34) {
    uVar14 = 0x10;
    uVar5 = puVar21[0x163];
  }
  if (bVar34 && uVar5 != 0) {
    uVar5 = 0x20;
  }
  else {
    uVar5 = 0;
  }
  puVar6 = (uint *)*puVar7;
  if (puVar6 < (uint *)*puVar16) {
    uVar22 = 0;
    if (bVar31) {
      uVar22 = 0xf;
    }
    *puVar6 = uVar22;
    puVar6[1] = uVar9;
    puVar6 = puVar6 + 2;
    *puVar7 = puVar6;
  }
  if (puVar6 < (uint *)*puVar16) {
    uVar9 = 0;
    if (bVar32) {
      uVar9 = 0xf;
    }
    *puVar6 = uVar9;
    puVar6[1] = uVar19;
    puVar6 = puVar6 + 2;
    *puVar7 = puVar6;
  }
  if (puVar6 < (uint *)*puVar16) {
    if (cVar4 == '\0' || !bVar32 && (!bVar33 || cVar1 == '\0')) {
      uVar9 = 0;
    }
    else {
      uVar9 = 2;
    }
    *puVar6 = uVar9 | (uVar14 != 0 && (uVar5 != 0 || bVar32));
    puVar6[1] = uVar30;
    puVar6 = puVar6 + 2;
    *puVar7 = puVar6;
  }
  if (puVar6 < (uint *)*puVar16) {
    uVar9 = 0;
    if (bVar33 && cVar1 != '\0') {
      uVar9 = 2;
    }
    *puVar6 = uVar9 | uVar5 >> 5;
    puVar6[1] = uVar19 + 2;
    *puVar7 = puVar6 + 2;
  }
  return;
}

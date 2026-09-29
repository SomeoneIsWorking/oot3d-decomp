// OoT3D decomp @ 00192d38  name=FUN_00192d38  size=2432

void FUN_00192d38(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  byte bVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  int local_60 [2];
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;

  iVar13 = *(int *)(param_2 + 0x20ac);
  local_4c = FUN_00346e2c(DAT_001930f8,DAT_001930f4,param_2,param_1);
  if (local_4c == 0) {
    local_4c = FUN_00346d94(param_2,param_1);
  }
  uVar20 = FUN_0036c5bc(param_2,0);
  fVar17 = DAT_001930fc;
  uVar12 = (uint)((ulonglong)uVar20 >> 0x20);
  local_50 = (int)uVar20;
  if (*(short *)(param_1 + 0x2a8e) != 0) {
    return;
  }
  *(float *)(param_1 + 0x2a88) = DAT_001930fc;
  bVar14 = (*(byte *)(param_1 + 0x1379) & 0x80) == 0;
  local_54 = (int)(short)(*(short *)(iVar13 + 0xbe) - *(short *)(param_1 + 0xbe));
  if (bVar14) {
    uVar12 = (uint)*(byte *)(param_1 + 0x13f9);
  }
  if (bVar14 && (uVar12 & 0x80) == 0) {
LAB_00192e6c:
    bVar14 = *(char *)(param_1 + 0x2a9f) != '\0';
    cVar2 = '\0';
    if (bVar14) {
      cVar2 = *(char *)(param_1 + 0x2227);
    }
    if ((bVar14 && cVar2 != '\0') && (*(short *)(DAT_00193104 + param_1) == 0)) {
      local_44 = param_2 + 0x5c78;
      FUN_00376168(param_2,local_44,param_1 + 0x1368);
      FUN_00376168(param_2,local_44,param_1 + 0x13e8);
    }
  }
  else {
    *(byte *)(param_1 + 0x1379) = *(byte *)(param_1 + 0x1379) & 0x7f;
    *(byte *)(param_1 + 0x13f9) = *(byte *)(param_1 + 0x13f9) & 0x7f;
    *(byte *)(param_1 + 0x1378) = *(byte *)(param_1 + 0x1378) | 4;
    *(byte *)(param_1 + 0x13f8) = *(byte *)(param_1 + 0x13f8) | 4;
    *(byte *)(param_1 + 0x1321) = *(byte *)(param_1 + 0x1321) & 0xfd;
    if (*(char *)(param_1 + 0x2aa3) != *(char *)(param_1 + 0x2226)) {
      *(char *)(param_1 + 0x2aa1) = *(char *)(param_1 + 0x2aa1) + '\x01';
      *(undefined1 *)(param_1 + 0x2aa3) = *(undefined1 *)(param_1 + 0x2226);
    }
    if (0x4f < *(short *)(DAT_00193100 + 0x44)) goto LAB_00192e6c;
    if (*(char *)(param_1 + 0x2a9f) != '\0') {
      *(undefined1 *)(param_1 + 0x2a9f) = 0;
      *(undefined1 *)(param_1 + 0x2aa2) = 0x4b;
    }
  }
  if (*(char *)(DAT_00193108 + param_1) < '\0') {
    bVar7 = *(byte *)(param_1 + 0x2a9d);
    bVar14 = bVar7 != 3;
    if (bVar14) {
      bVar7 = *(byte *)(param_1 + 0x1321);
    }
    if (bVar14 && (bVar7 & 2) != 0) {
      *(byte *)(param_1 + 0x1321) = bVar7 & 0xfd;
    }
  }
  fVar18 = DAT_00193110;
  uVar3 = DAT_0019310c;
  local_48 = param_2 + 0x5000;
  if (*(char *)(param_1 + 0x2aa0) != '\0') {
    *(undefined4 *)(param_1 + 0x2a88) = DAT_0019310c;
    goto LAB_001936a4;
  }
  if (local_4c == 0) {
    if (*(char *)(param_1 + 0x2a9b) == '\0') {
      if (((*(char *)(iVar13 + 0x2227) != '\0') || (*(uint *)(iVar13 + 100) < 0xc0400000)) &&
         (*(char *)(iVar13 + 0x2226) == '\x11')) {
        sVar8 = *(short *)(param_1 + 0x92);
        *(short *)(param_1 + 0x36) = sVar8;
        *(short *)(param_1 + 0xbe) = sVar8;
        if ((*(uint *)(param_2 + 0x5bf4) & 1) == 0) {
          sVar8 = sVar8 + -0x4000;
        }
        else {
          sVar8 = sVar8 + 0x4000;
        }
        *(short *)(param_1 + 0x2a8c) = sVar8;
        *param_3 = *param_3 | 1;
        *(undefined4 *)(param_1 + 0x2a88) = uVar3;
        *(undefined1 *)(param_1 + 0x2a9b) = 0x17;
        *(undefined1 *)(param_1 + 0x2a9c) = 0;
        goto LAB_001936a4;
      }
      if (*(char *)(param_1 + 0x2a98) != '\0') {
        *(float *)(param_1 + 0x2a88) = fVar17;
        iVar9 = DAT_00193114;
        *(byte *)(iVar13 + 0x172a) = *(byte *)(iVar13 + 0x172a) | 4;
        if (((*(uint *)(iVar9 + 4) & 1) == 0) &&
           (iVar9 = FUN_003679b4(iVar9 + 4), puVar4 = DAT_00193120, uVar10 = DAT_0019311c,
           iVar9 != 0)) {
          *DAT_00193120 = DAT_00193118;
          puVar4[1] = uVar10;
          puVar4[2] = fVar17;
        }
        uVar10 = FUN_003478bc(*(undefined4 *)(iVar13 + 0x27c),0x10);
        FUN_003735ac(local_60,uVar10,DAT_00193120);
        uVar5 = DAT_0019312c;
        uVar10 = DAT_00193128;
        FUN_0036e168(local_60[0],DAT_0019312c,DAT_00193128,fVar17,param_1 + 0x28);
        FUN_0036e168(local_58,uVar5,uVar10,fVar17,param_1 + 0x30);
        bVar7 = *(char *)(param_1 + 0x2a9e) - 1;
        *(byte *)(param_1 + 0x2a9e) = bVar7;
        uVar10 = DAT_00193130;
        if ((bVar7 == 0) ||
           (('\0' < *(char *)(DAT_00193108 + iVar13) && (*(char *)(param_1 + 0x2227) == '\0')))) {
          *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
          *param_3 = 1;
          *(byte *)(iVar13 + 0x172a) = *(byte *)(iVar13 + 0x172a) & 0xfb;
          *(undefined4 *)(param_1 + 0x2a88) = uVar3;
          *(undefined4 *)(iVar13 + 0x290) = uVar10;
          *(short *)(param_1 + 0x2a8c) = *(short *)(param_1 + 0x92) + -0x8000;
          *(undefined1 *)(param_1 + 0x2a98) = 0;
          *(undefined1 *)(param_1 + 0x2a9e) = 0;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
        }
        else if (*(char *)(param_1 + 0x2a98) == '\x01') {
          if (bVar7 < 0x18) {
            FUN_00346c48(param_2,param_3,param_1);
            *(char *)(param_1 + 0x2a98) = *(char *)(param_1 + 0x2a98) + '\x01';
          }
          else if (bVar7 == 0x1d) {
            FUN_0036aeb4(param_1 + 0x28,DAT_001934a4);
          }
        }
        goto LAB_001936a4;
      }
      if (*(int *)(param_1 + 0x2a94) != 0) {
        *(int *)(param_1 + 0x2a94) = *(int *)(param_1 + 0x2a94) + -1;
        *param_3 = 0x100;
      }
      local_60[0] = (int)*(short *)(param_1 + 0x36);
      iVar9 = FUN_0035b950(DAT_001934ac,param_2,param_1,DAT_001934a8,DAT_001934a8);
      if (iVar9 == 0) {
        *(undefined2 *)(param_1 + 0x2a8c) = *(undefined2 *)(param_1 + 0x92);
        fVar17 = *(float *)(param_1 + 0x98);
        if ((((int)fVar17 + 0xbd73ffffU < 0x280000) && (DAT_001934c8 < local_54 + 0x77ffU)) &&
           ((*(char *)(param_1 + 0x114) != '\0' ||
            ((*(uint *)(DAT_001934cc + iVar13) & 0x400000) == 0)))) {
          FUN_00346c48(param_2,param_3,param_1);
          goto LAB_001936a4;
        }
        fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001934b8 + 0x9d4),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (((fVar18 + DAT_001934d0 < fVar17) &&
            ((fVar18 + DAT_001934d4 < fVar17 || (*(char *)(iVar13 + 0x2227) == '\0')))) ||
           (*(char *)(param_1 + 0x2227) != '\0')) {
          if (fVar18 + DAT_0019372c < fVar17) {
            if (fVar17 <= fVar18 + DAT_00193734) {
              iVar9 = local_54;
              if (local_54 < 0) {
                iVar9 = -local_54;
              }
              if ((0x47ff < iVar9 - 0x3000U) &&
                 (iVar9 = FUN_00346c48(param_2,param_3,param_1), iVar9 != 0)) goto LAB_001936a4;
              *(undefined2 *)(param_1 + 0x2a8c) = *(undefined2 *)(param_1 + 0x92);
              *(undefined4 *)(param_1 + 0x2a88) = uVar3;
              cVar2 = *(char *)(param_1 + 0x114);
            }
            else {
              bVar14 = *(char *)(iVar13 + 0x2227) != '\0';
              iVar9 = 0;
              if (bVar14) {
                iVar9 = (int)*(char *)(iVar13 + 0x2226);
              }
              if (bVar14 && 0x17 < iVar9) {
                bVar14 = SBORROW4(iVar9,0x1b);
                iVar1 = iVar9 + -0x1b;
                if (iVar9 < 0x1c) {
                  bVar14 = SBORROW4((int)fVar17,DAT_00193738);
                  iVar1 = (int)fVar17 - DAT_00193738;
                }
                if (iVar1 < 0 != bVar14) goto LAB_00193488;
              }
              *(undefined4 *)(param_1 + 0x2a88) = uVar3;
              *(undefined2 *)(param_1 + 0x2a8c) = *(undefined2 *)(param_1 + 0x92);
              cVar2 = *(char *)(param_1 + 0x114);
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x2a88) = uVar3;
            *(undefined2 *)(param_1 + 0x2a8c) = *(undefined2 *)(param_1 + 0x92);
            cVar2 = *(char *)(param_1 + 0x114);
          }
          if (cVar2 == '\0') {
            local_60[0] = 0;
            FUN_00375a18(param_1 + 0x2a8c,(int)(short)(*(short *)(iVar13 + 0xbe) + 0x7fff),1,
                         DAT_00193730);
          }
          goto LAB_001936a4;
        }
        uVar12 = 0;
        if (*(short *)(*DAT_001934b8 + 0x9da) == 0) {
          uVar12 = FUN_00374be8(param_2,0xd);
        }
        uVar11 = FUN_00346c48(param_2,param_3,param_1);
        uVar11 = uVar11 | uVar12;
        bVar14 = uVar11 == 0;
        if (bVar14) {
          uVar11 = (uint)*(byte *)(param_1 + 0x2a9f);
        }
        if (!bVar14 || uVar11 != 0) goto LAB_001936a4;
      }
      else {
        if ((*(char *)(iVar13 + 0x2226) != '\f') || (DAT_001934b0 <= *(int *)(param_1 + 0x98))) {
          *(undefined2 *)(param_1 + 0x2a8c) = *(undefined2 *)(param_1 + 0x92);
          *param_3 = 2;
          cVar2 = *(char *)(iVar13 + 0x2226);
          if (cVar2 < '\x04') {
            *(float *)(param_1 + 0x2a88) = fVar17;
          }
          else {
            if (cVar2 < '\b') {
              *(undefined4 *)(param_1 + 0x2a88) = uVar3;
              sVar8 = *(short *)(param_1 + 0x2a8c) + 0x4000;
            }
            else {
              if ('\v' < cVar2) {
                if (cVar2 < '\x18') {
                  *param_3 = 0x100;
                }
                else {
                  FUN_00346bb4(param_1,param_3,param_1);
                }
                goto LAB_00193354;
              }
              *(undefined4 *)(param_1 + 0x2a88) = uVar3;
              sVar8 = *(short *)(param_1 + 0x2a8c) + -0x4000;
            }
            *(short *)(param_1 + 0x2a8c) = sVar8;
          }
LAB_00193354:
          uVar12 = *param_3;
          bVar14 = (uVar12 & DAT_001934c4) == 0;
          if (bVar14) {
            uVar12 = (uint)*(byte *)(param_1 + 0x2227);
          }
          if ((bVar14 && uVar12 == 0) && (*(char *)(iVar13 + 0x2227) != '\0')) {
            *(undefined1 *)(param_1 + 0x2a9f) = 1;
          }
          goto LAB_001936a4;
        }
        cVar2 = *(char *)(param_1 + 0x2227);
        bVar14 = cVar2 == '\0';
        if (bVar14) {
          cVar2 = *(char *)(param_1 + 0x2a9f);
        }
        bVar15 = bVar14 && cVar2 == '\0';
        if (bVar14 && cVar2 == '\0') {
          bVar15 = *(char *)(DAT_00193108 + iVar13) == '\0';
        }
        if (((bVar15) && (*(int *)(param_1 + 0x98) <= DAT_001934b4)) &&
           (iVar9 = FUN_0035f228(param_2,param_1), iVar9 != 0)) {
          *(float *)(param_1 + 0x2a88) = fVar17;
          *(undefined1 *)(param_1 + 0x2a98) = 1;
          fVar19 = DAT_001934bc;
          piVar6 = DAT_001934b8;
          *(byte *)(iVar13 + 0x172a) = *(byte *)(iVar13 + 0x172a) | 4;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          *(undefined1 *)(param_1 + 0x2a9e) = 0x29;
          *(undefined1 *)(iVar13 + 0x2227) = 0;
          *(float *)(iVar13 + 0x221c) = fVar17;
          uVar3 = DAT_001934c0;
          fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(char *)(param_1 + 0x2488) = -(char)(int)(fVar19 / fVar16 + fVar18);
          *(float *)(param_1 + 0x221c) = fVar17;
          *(undefined4 *)(iVar13 + 0x290) = uVar3;
          FUN_0036b4ec(iVar13 + 0x254,param_2);
          *(undefined4 *)(param_1 + 0x2a94) = 0;
          *param_3 = 1;
          *(char *)(param_1 + 0x2aa5) = (char)*(undefined2 *)(*piVar6 + 0x9d6);
          goto LAB_001936a4;
        }
      }
LAB_00193488:
      FUN_00346bb4(param_1,param_3,param_1);
      goto LAB_001936a4;
    }
    if (*(char *)(param_1 + 0x2a9c) == '\0') {
      if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
        sVar8 = *(short *)(param_1 + 0x92);
        *(short *)(param_1 + 0xbe) = sVar8;
        *(short *)(param_1 + 0x36) = sVar8;
        *(short *)(param_1 + 0x2a8c) = sVar8;
        if (*(char *)(param_1 + 0x2aa4) != -1) {
          *(short *)(param_1 + 0x2a8c) = sVar8 + -0x8000;
          *(undefined4 *)(param_1 + 0x2a88) = uVar3;
          *(undefined1 *)(param_1 + 0x2a99) = 1;
        }
        fVar17 = DAT_0019373c;
        *param_3 = *param_3 | 1;
        *(undefined1 *)(param_1 + 0x2a9c) = 1;
        fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001934b8 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(char *)(param_1 + 0x2488) = (char)(int)(fVar17 / fVar19 + fVar18);
      }
      goto LAB_001936a4;
    }
    if ((*(char *)(param_1 + 0x2aa4) != -1) || (*(float *)(param_1 + 100) <= fVar17))
    goto LAB_001936a4;
    uVar12 = *param_3 | 2;
  }
  else {
    uVar12 = 1;
    *(undefined1 *)(param_1 + 0x2aa0) = 1;
    *(undefined2 *)(param_1 + 0x2a8c) = *(undefined2 *)(param_1 + 0x92);
    *(undefined4 *)(param_1 + 0x2a88) = uVar3;
  }
  *param_3 = uVar12;
LAB_001936a4:
  iVar13 = (int)(short)(*(short *)(local_50 + 0x184) - *(short *)(param_1 + 0x2a8c));
  fVar17 = (float)FUN_002cfca0(iVar13);
  *(short *)(param_3 + 3) = (short)(char)(int)(fVar17 * *(float *)(param_1 + 0x2a88));
  fVar17 = (float)FUN_00338f60(iVar13);
  *(short *)((int)param_3 + 0xe) = (short)(char)(int)(fVar17 * *(float *)(param_1 + 0x2a88));
  if ((*(char *)(param_1 + 0x2aa4) != -1) && ((*(uint *)(local_48 + 0xbf4) & 7) == 0)) {
    *(char *)(param_1 + 0x2aa4) = *(char *)(param_1 + 0x2aa4) + '\x01';
  }
  return;
}

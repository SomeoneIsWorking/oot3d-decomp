// OoT3D decomp @ 00461324  name=FUN_00461324  size=1508

void FUN_00461324(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int extraout_r1;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  uint in_fpscr;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  uint local_50;
  int local_4c;
  uint *local_48;
  
  uVar20 = 0;
  iVar17 = *(int *)(param_1 + 0x20ac);
  local_50 = 0;
  iVar19 = param_2;
  if ((*DAT_004617b8 & 1) == 0) {
    uVar29 = FUN_003679b4(DAT_004617b8);
    iVar19 = (int)((ulonglong)uVar29 >> 0x20);
    if ((int)uVar29 != 0) {
      FUN_0036788c(DAT_004617bc);
      iVar19 = DAT_004617c4;
    }
  }
  FUN_0047ccbc(DAT_004617c8,iVar19);
  iVar12 = param_1 + 0x208c;
  iVar19 = iVar12;
  if (*(char *)(param_1 + 0x5c03) != '\0') {
    iVar19 = 0;
    psVar18 = *(short **)(param_1 + 0x5c10);
    do {
      uVar28 = VectorSignedToFloat((int)psVar18[3],(byte)(in_fpscr >> 0x15) & 3);
      uVar26 = VectorSignedToFloat((int)psVar18[2],(byte)(in_fpscr >> 0x15) & 3);
      uVar24 = VectorSignedToFloat((int)psVar18[1],(byte)(in_fpscr >> 0x15) & 3);
      FUN_003738d0(uVar24,uVar26,uVar28,iVar12,param_1,(int)*psVar18,(int)psVar18[4],(int)psVar18[5]
                   ,(int)psVar18[6],(int)psVar18[7],*(short *)(param_1 + 0x104) != 0x55);
      iVar19 = iVar19 + 1;
      psVar18 = psVar18 + 8;
    } while (iVar19 < (int)(uint)*(byte *)(param_1 + 0x5c03));
    *(undefined1 *)(param_1 + 0x5c03) = 0;
    iVar19 = extraout_r1;
  }
  if (*(char *)(param_2 + 2) != '\0') {
    *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + -1;
    iVar19 = param_2;
  }
  uVar4 = DAT_004617d4;
  local_48 = DAT_004617cc;
  uVar7 = *(uint *)(iVar17 + 0x1710);
  if ((*(uint *)(iVar17 + 0x1714) & 0x8000000) != 0) {
    uVar20 = 0x2000000;
  }
  if (((uVar7 & 0x40) != 0) && (uVar7 = *(ushort *)(DAT_004617d0 + iVar17) & 0xff00, uVar7 != 0x600)
     ) {
    uVar7 = *(uint *)(iVar17 + 0x172c);
    local_50 = uVar7;
  }
  software_interrupt(0x28);
  local_4c = 0;
  iVar8 = param_1 + 0xae8;
  do {
    uVar5 = DAT_004617d8;
    uVar15 = *(uint *)(iVar17 + 0x1710);
    uVar13 = *local_48;
    uVar16 = *(uint *)(param_2 + local_4c * 8 + 0x10);
    uVar14 = DAT_004617dc;
    while (DAT_004617dc = uVar14, uVar16 != 0) {
      uVar9 = *(uint *)(uVar16 + 0x2c);
      if (uVar14 <= *(uint *)(uVar16 + 0x2c)) {
        uVar9 = uVar4;
      }
      *(uint *)(uVar16 + 0x2c) = uVar9;
      *(undefined4 *)(uVar16 + 0x24) = 0;
      uVar9 = *(uint *)(uVar16 + 0x134);
      if (uVar9 == 0) {
        uVar14 = FUN_00373074(param_1 + 0x3a58,(int)*(char *)(uVar16 + 0x1e));
        if (uVar14 == 0) {
          *(undefined4 *)(uVar16 + 0x140) = 0;
          *(undefined4 *)(uVar16 + 0x13c) = 0;
          *(uint *)(uVar16 + 4) = *(uint *)(uVar16 + 4) & 0xfffffffe;
          goto LAB_00461678;
        }
        if (uVar20 == 0) {
          bVar21 = (uVar15 & uVar13) == 0;
          if (!bVar21) {
            uVar14 = local_50;
          }
          bVar22 = uVar14 == uVar16;
          if (!bVar21 && !bVar22) {
            uVar14 = *(uint *)(iVar17 + 0x1724);
          }
          bVar23 = uVar14 == uVar16;
          if ((!bVar21 && !bVar22) && !bVar23) {
            uVar14 = *(uint *)(iVar17 + 0x1224);
          }
          if ((((bVar21 || bVar22) || bVar23) || uVar14 == uVar16) ||
             (*(int *)(uVar16 + 0x124) == iVar17)) goto LAB_00461644;
LAB_004617a4:
          FUN_0047c918(uVar16 + 0xa0);
          goto LAB_00461678;
        }
        if ((*(uint *)(uVar16 + 4) & uVar20) == 0) goto LAB_004617a4;
LAB_00461644:
        if (*(int *)(uVar16 + 0x13c) != 0) {
          FUN_0036df4c(uVar16 + 0x108,uVar16 + 0x28);
          fVar27 = *(float *)(iVar17 + 0x28) - *(float *)(uVar16 + 0x28);
          fVar25 = *(float *)(iVar17 + 0x30) - *(float *)(uVar16 + 0x30);
          fVar27 = SQRT(fVar27 * fVar27 + fVar25 * fVar25);
          *(float *)(uVar16 + 0x98) = fVar27;
          fVar25 = *(float *)(iVar17 + 0x2c) - *(float *)(uVar16 + 0x2c);
          *(float *)(uVar16 + 0x9c) = fVar25;
          *(float *)(uVar16 + 0x94) = fVar27 * fVar27 + fVar25 * fVar25;
          uVar6 = FUN_003758b0(*(float *)(iVar17 + 0x30) - *(float *)(uVar16 + 0x30),
                               *(float *)(iVar17 + 0x28) - *(float *)(uVar16 + 0x28));
          *(undefined2 *)(uVar16 + 0x92) = uVar6;
          uVar14 = *(uint *)(uVar16 + 4);
          *(uint *)(uVar16 + 4) = uVar14 & 0xfeffffff;
          sVar1 = *(short *)(uVar16 + 0x118);
          if (((sVar1 == 0) || (*(short *)(uVar16 + 0x118) = sVar1 + -1, sVar1 == 1)) &&
             ((uVar14 & 0x50) != 0)) {
            if (*(uint *)(iVar17 + 0x16f8) == uVar16) {
              *(undefined1 *)(uVar16 + 0x114) = 1;
            }
            else {
              *(undefined1 *)(uVar16 + 0x114) = 0;
            }
            if ((*(char *)(uVar16 + 0x115) != '\0') && (*(int *)(iVar17 + 0x16f8) == 0)) {
              *(undefined1 *)(uVar16 + 0x115) = 0;
            }
            if (*(short *)(uVar16 + 0x11a) != 0) {
              *(short *)(uVar16 + 0x11a) = *(short *)(uVar16 + 0x11a) + -1;
            }
            if (0 < *(short *)(uVar16 + 0x19c)) {
              *(short *)(uVar16 + 0x19c) = *(short *)(uVar16 + 0x19c) + -1;
            }
            (**(code **)(uVar16 + 0x13c))(uVar16,param_1);
            FUN_0047af04(param_1,iVar8,uVar16);
          }
          goto LAB_004617a4;
        }
        if (*(char *)(uVar16 + 0x121) != '\0') {
          FUN_002d644c(uVar16,param_1);
          goto LAB_00461678;
        }
        uVar16 = FUN_002da114(iVar12,uVar16,param_1);
        uVar14 = DAT_004617dc;
      }
      else {
        software_interrupt(0x28);
        uVar14 = uVar14 - (iVar19 + (uint)(uVar9 < uVar7));
        lVar3 = (ulonglong)(uVar9 - uVar7) * 3 +
                CONCAT44(((int)uVar14 >> 0x1f) * uVar5 +
                         (int)((ulonglong)uVar5 * (ulonglong)uVar14 >> 0x20),
                         (int)((ulonglong)uVar5 * (ulonglong)uVar14)) +
                CONCAT44(uVar14 * 3,(int)((ulonglong)uVar5 * (ulonglong)(uVar9 - uVar7) >> 0x20));
        uVar29 = FUN_00332754((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),DAT_004617e0,0);
        iVar10 = 0x10 - (uint)uVar29;
        iVar11 = (int)((ulonglong)uVar29 >> 0x20) + (uint)(0x10 < (uint)uVar29);
        iVar2 = -iVar11;
        if (((int)-(iVar2 + (uint)(iVar10 != 0)) < 0 !=
             (SBORROW4(0,iVar2) != SBORROW4(iVar11,(uint)(iVar10 != 0)))) &&
           (iVar11 = FUN_00373074(param_1 + 0x3a58,(int)*(char *)(uVar16 + 0x1e),-iVar10),
           iVar11 != 0)) {
          (**(code **)(uVar16 + 0x134))(uVar16,param_1);
          *(undefined4 *)(uVar16 + 0x134) = 0;
        }
LAB_00461678:
        uVar16 = *(uint *)(uVar16 + 0x130);
        uVar14 = DAT_004617dc;
      }
    }
    if (local_4c == 1) {
      FUN_00477e24(param_1,iVar8);
    }
    local_4c = local_4c + 1;
    local_48 = local_48 + 1;
  } while (local_4c < 0xc);
  iVar19 = *(int *)(iVar17 + 0x16f8);
  if (iVar19 != 0) {
    if (*(int *)(iVar19 + 0x13c) == 0) {
      FUN_00334354(iVar17);
    }
    else if (7 < *(int *)(iVar17 + 0x1700)) goto LAB_00461898;
  }
  uVar26 = DAT_004618dc;
  uVar24 = DAT_004618d8;
  if (*(char *)(param_2 + 0xbb) != '\0') {
    *(undefined1 *)(param_2 + 0xbb) = 0;
    FUN_0037547c(DAT_004618e0,0,4,uVar26,uVar26,uVar24);
  }
  iVar19 = 0;
LAB_00461898:
  FUN_0047974c(param_2 + 0x6c,iVar17,iVar19,param_1);
  FUN_0047953c(param_1,param_2 + 0x1c0);
  iVar19 = 0;
  do {
    if ((*(ushort *)(iVar8 + iVar19 * 2 + 0x151c) & 1) != 0) {
      iVar17 = iVar8 + iVar19 * 0x6c;
      *(undefined4 *)(iVar17 + 0x18) = *(undefined4 *)(iVar17 + 0x38);
      *(undefined4 *)(iVar17 + 0x1c) = *(undefined4 *)(iVar17 + 0x3c);
      *(undefined4 *)(iVar17 + 0x20) = *(undefined4 *)(iVar17 + 0x40);
      *(undefined4 *)(iVar17 + 0x24) = *(undefined4 *)(iVar17 + 0x44);
      *(undefined4 *)(iVar17 + 0x28) = *(undefined4 *)(iVar17 + 0x48);
      *(undefined4 *)(iVar17 + 0x2c) = *(undefined4 *)(iVar17 + 0x4c);
      *(undefined4 *)(iVar17 + 0x30) = *(undefined4 *)(iVar17 + 0x50);
      *(undefined4 *)(iVar17 + 0x34) = *(undefined4 *)(iVar17 + 0x54);
    }
    iVar19 = iVar19 + 1;
  } while (iVar19 < 0x32);
  return;
}


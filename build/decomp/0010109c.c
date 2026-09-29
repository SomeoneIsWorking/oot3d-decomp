// OoT3D decomp @ 0010109c  name=FUN_0010109c  size=1468

void FUN_0010109c(short *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  ushort uVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  fVar3 = DAT_0010149c;
  iVar9 = DAT_00101498;
  iVar11 = *(int *)(param_2 + 0x20ac);
  if (*(short *)(DAT_00101498 + 0xb0) == 0) {
LAB_00101150:
    if ((*(byte *)((int)param_1 + 0x979) & 2) != 0) {
      *(byte *)((int)param_1 + 0x979) = *(byte *)((int)param_1 + 0x979) & 0xfd;
      *(undefined1 *)((int)param_1 + 0x965) = *(undefined1 *)((int)param_1 + 0xb9);
      if ((char)param_1[0x4b2] != '\v') {
        FUN_00375fd0(param_1,param_1 + 0x4c0,1);
        if (*(char *)(DAT_001014a0 + iVar11) != '\0') {
          *(undefined1 *)(param_1 + 0x4b3) = *(undefined1 *)(DAT_001014a4 + iVar11);
        }
        cVar1 = *(char *)((int)param_1 + 0x965);
        if (cVar1 != '\0' && cVar1 != '\x06') {
          if ((cVar1 == '\x01' || cVar1 == '\r') && ((char)param_1[0x4b2] != '\x01')) {
            FUN_00375eb8(param_1);
            FUN_00374ab0(param_2,param_1);
          }
          else {
            *(undefined1 *)(param_1 + 0x4b1) = 0;
            param_1[0x4af] = 0;
            *(undefined2 *)(iVar9 + 0xb0) = 0;
            if (*(char *)((int)param_1 + 0x965) == '\x0e') {
              FUN_00375ed8(param_1,0x400000,0xff,0);
              *(undefined1 *)((int)param_1 + 0x963) = 0x3c;
            }
            else {
              FUN_00375ed8(param_1,0x400000,0xff,0);
            }
            FUN_00375eb8(param_1);
            if (*(char *)((int)param_1 + 0xb7) == '\0') {
              for (psVar7 = *(short **)(param_2 + 0x20c4); psVar7 != (short *)0x0;
                  psVar7 = *(short **)(psVar7 + 0x98)) {
                if (((*psVar7 == 0x90) && (psVar7 != param_1)) && (-1 < psVar7[0xe])) {
                  *(short **)(psVar7 + 0x92) = param_1;
                }
              }
              FUN_00374a58(DAT_001014a8,param_1 + 0xf0,7);
              *(float *)(param_1 + 0x36) = fVar3;
              *(undefined1 *)(param_1 + 0x4b2) = 10;
              param_1[0x4aa] = 0x1c2;
              *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffe;
              FUN_00375bcc(param_1,DAT_001014ac);
              *(undefined4 *)(param_1 + 0x4a8) = DAT_001014b0;
              FUN_00374444(param_2,0,param_1 + 0x14,0x90);
            }
            else {
              FUN_00374a58(DAT_001014b4,param_1 + 0xf0,6);
              if ((param_1[0x48] & 1U) != 0) {
                *(undefined4 *)(param_1 + 0x36) = DAT_001014b8;
              }
              *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 1;
              FUN_00375bcc(param_1,DAT_001014bc);
              uVar4 = DAT_001014c0;
              *(undefined1 *)(param_1 + 0x4b2) = 9;
              *(undefined4 *)(param_1 + 0x4a8) = uVar4;
              *(undefined1 *)((int)param_1 + 0x9c9) = 0;
            }
          }
        }
      }
    }
LAB_0010134c:
    if ((char)param_1[0x4b1] == '\0') goto LAB_00101358;
  }
  else {
    uVar6 = param_1[0x5e];
    if (uVar6 != 0) {
      if ((char)param_1[0x4b1] == '\0') {
        bVar15 = uVar6 == 0;
        if (bVar15) {
          uVar6 = (ushort)*(byte *)(param_1 + 0x4b2);
        }
        if ((bVar15 && uVar6 == 9) || ((char)param_1[0x4b2] == '\v')) goto LAB_00101148;
      }
      goto LAB_00101150;
    }
    if ((char)param_1[0x4b1] != '\0') goto LAB_00101150;
    cVar1 = (char)param_1[0x4b2];
    if (cVar1 != '\t') {
      if (cVar1 == '\n') goto LAB_00101150;
      if (cVar1 == '\v') goto LAB_00101148;
      if (cVar1 == '\x01') goto LAB_00101150;
      *(undefined1 *)(param_1 + 0x4b1) = 1;
      FUN_00374ab0(param_2,param_1);
      goto LAB_0010134c;
    }
LAB_00101148:
    *(undefined1 *)((int)param_1 + 0x9c9) = 1;
LAB_00101358:
    if (*(short *)(iVar9 + 0xb0) != 0) {
      *(undefined1 *)(param_1 + 0x4b1) = 1;
    }
  }
  if ((*(char *)((int)param_1 + 0x965) != '\x06') &&
     ((char)param_1[0x4b2] != '\v' || *(char *)((int)param_1 + 0x965) != '\x0e')) {
    if ((char)param_1[0x4a7] != '\0') {
      *(char *)(param_1 + 0x4a7) = (char)param_1[0x4a7] + -1;
    }
    (**(code **)(param_1 + 0x4a8))(param_1,param_2);
    bVar15 = (char)param_1[0x4b2] == '\b';
    if (!bVar15) {
      bVar15 = *(float *)(param_1 + 0x36) == fVar3;
    }
    if (!bVar15) {
      FUN_00376864(param_1);
    }
    if (param_1[0x5e] == 0) {
      if ((char)param_1[0x4b2] == '\b') goto LAB_0010153c;
      if (*(float *)(param_1 + 0x36) != fVar3) {
        FUN_00376340(DAT_001014cc,DAT_001014c8,DAT_001014c4,param_2,param_1,0x1d);
      }
    }
    if ((char)param_1[0x4b2] == '\a') {
      sVar2 = param_1[0x4ac];
      sVar8 = param_1[0x49] - (param_1[0x5f] + sVar2);
      iVar12 = (int)sVar8;
      iVar9 = DAT_001014d0;
      if ((-0x1f5 < iVar12) && (iVar9 = iVar12, 500 < iVar12)) {
        iVar9 = 500;
      }
      iVar13 = (int)(short)(sVar8 - param_1[0x4ab]);
      iVar12 = DAT_001014d0;
      if ((-0x1f5 < iVar13) && (iVar12 = iVar13, 500 < iVar13)) {
        iVar12 = 500;
      }
      if ((short)(param_1[0x49] - param_1[0x5f]) < 0) {
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        sVar8 = -(short)iVar12;
        param_1[0x4ac] = sVar2 - (short)iVar9;
      }
      else {
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        sVar8 = (short)iVar12;
        param_1[0x4ac] = (short)iVar9 + sVar2;
      }
      param_1[0x4ab] = sVar8 + param_1[0x4ab];
      sVar8 = param_1[0x4ac];
      uVar10 = DAT_00101694;
      if (((int)sVar8 < (int)DAT_00101694) ||
         (uVar10 = DAT_00101694 ^ (int)DAT_00101694 >> 0xe, (int)uVar10 < (int)sVar8)) {
        sVar8 = (short)uVar10;
      }
      param_1[0x4ac] = sVar8;
      sVar8 = param_1[0x4ab];
      uVar10 = DAT_00101698;
      if (((int)sVar8 < (int)DAT_00101698) ||
         (uVar10 = DAT_00101698 ^ (int)DAT_00101698 >> 0xd, (int)uVar10 < (int)sVar8)) {
        sVar8 = (short)uVar10;
      }
      param_1[0x4ab] = sVar8;
    }
  }
LAB_0010153c:
  fVar5 = DAT_001016b8;
  if ((*(char *)(DAT_0010169c + 0xe) != '\0') && (*(short *)(param_2 + 0x104) == 6)) {
    fVar17 = *(float *)(param_1 + 0x14) - DAT_001016a0;
    if (fVar17 < fVar3) {
      fVar17 = DAT_001016a0 - *(float *)(param_1 + 0x14);
    }
    fVar16 = *(float *)(param_1 + 0x16) - DAT_001016a4;
    if (fVar16 < fVar3) {
      fVar16 = DAT_001016a4 - *(float *)(param_1 + 0x16);
    }
    fVar18 = *(float *)(param_1 + 0x18) - DAT_001016a8;
    if (fVar18 < fVar3) {
      fVar18 = DAT_001016a8 - *(float *)(param_1 + 0x18);
    }
    bVar15 = SBORROW4((int)fVar17,DAT_001016ac);
    iVar9 = (int)fVar17 - DAT_001016ac;
    if ((int)fVar17 < DAT_001016ac) {
      bVar15 = SBORROW4((int)fVar16,DAT_001016b0);
      iVar9 = (int)fVar16 - DAT_001016b0;
    }
    bVar14 = iVar9 < 0;
    if (bVar14 != bVar15) {
      bVar15 = SBORROW4((int)fVar18,DAT_001016b4);
      bVar14 = (int)fVar18 - DAT_001016b4 < 0;
    }
    if (bVar14 != bVar15) {
      param_1[0xa0] = 0;
      param_1[0xa1] = 0;
      param_1[0x9e] = 0;
      param_1[0x9f] = 0;
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffe;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_1 + 0x18);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fVar5;
  bVar15 = *(char *)((int)param_1 + 0xb7) != '\0';
  cVar1 = '\0';
  if (bVar15) {
    cVar1 = (char)param_1[0x4b2];
  }
  if (bVar15 && cVar1 != '\b') {
    FUN_0037632c(param_1);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x4b4);
    if (((char)param_1[0x4b2] != '\t') ||
       ((*(char *)(DAT_001014a0 + iVar11) != '\0' &&
        (*(char *)(DAT_001014a4 + iVar11) != (char)param_1[0x4b3])))) {
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x4b4);
      return;
    }
  }
  return;
}

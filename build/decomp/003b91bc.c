// OoT3D decomp @ 003b91bc  name=FUN_003b91bc  size=900

void FUN_003b91bc(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;

  fVar3 = DAT_003b94ec;
  uVar9 = VectorSignedToFloat((int)*(float *)(param_1 + 0x1ec),(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = FUN_0036e5e0(uVar9,DAT_003b94f4,param_1 + 0x1a4);
  if (((iVar4 == 1) && (DAT_003b94f8 <= *(int *)(param_1 + 0x54))) &&
     (iVar4 = *(int *)(param_2 + *(short *)(DAT_003b94fc + param_2) * 4 + 0xa54),
     fVar14 = *(float *)(iVar4 + 0x8c) - *(float *)(param_1 + 0x28),
     fVar10 = *(float *)(iVar4 + 0x90) - *(float *)(param_1 + 0x2c),
     fVar12 = *(float *)(iVar4 + 0x94) - *(float *)(param_1 + 0x30),
     (int)SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar12 * fVar12) < DAT_003b9500)) {
    uVar9 = DAT_003b9504;
    if ((*(ushort *)(param_1 + 0x1c) & 0xe000) != 0) {
      uVar9 = DAT_003b9508;
    }
    FUN_00375bcc(param_1,uVar9);
  }
  fVar10 = DAT_003b950c;
  *(float *)(param_1 + 0x828) = *(float *)(param_1 + 0x828) + *(float *)(param_1 + 0x7b8);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  sVar2 = *(short *)(param_1 + 0x74c);
  if (sVar2 != 0) {
    if (*(short *)(param_1 + 0x74a) != 0) {
      return;
    }
    if (sVar2 == 0) {
      return;
    }
    iVar4 = (int)(short)(sVar2 + -1);
    *(short *)(param_1 + 0x74c) = sVar2 + -1;
    if (iVar4 == 0) {
      return;
    }
    iVar6 = (int)((ulonglong)((longlong)DAT_003b9630 * (longlong)iVar4) >> 0x20);
    if ((iVar6 - (iVar6 >> 0x1f)) * -3 + iVar4 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(short *)(param_1 + 0x74a) != 0) {
    return;
  }
  FUN_0037547c(DAT_003b9518,0,4,DAT_003b9514,DAT_003b9514,DAT_003b9510);
  fVar11 = *(float *)(param_1 + 0x71c) * fVar10;
  fVar13 = *(float *)(param_1 + 0x720) * fVar10;
  fVar15 = *(float *)(param_1 + 0x724) * fVar10;
  sVar2 = *(short *)(param_2 + 0x104);
  uVar5 = (uint)*(char *)(DAT_003b951c + param_2);
  fVar12 = fVar11;
  fVar14 = fVar13;
  if (sVar2 == 0x52) {
    bVar7 = uVar5 == 0;
    if (bVar7) {
      uVar5 = (uint)*(byte *)(DAT_003b9520 + 0xe);
    }
    bVar8 = bVar7 && uVar5 == 0;
    if (bVar7 && uVar5 == 0) {
      bVar8 = *(char *)(param_1 + 0x82c) == '\b';
    }
    fVar12 = fVar3;
    fVar14 = fVar3;
    if (!bVar8) {
      fVar12 = fVar11;
      fVar14 = fVar13;
      fVar10 = fVar15;
    }
    goto LAB_003b9488;
  }
  fVar10 = fVar3;
  if (sVar2 == 0) {
    bVar7 = uVar5 == 7;
    if (bVar7) {
      uVar5 = (uint)*(byte *)(DAT_003b9520 + 0xe);
    }
    bVar8 = bVar7 && uVar5 == 1;
    if (bVar7 && uVar5 == 1) {
      bVar8 = *(char *)(param_1 + 0x82c) == '\x04';
    }
    fVar10 = fVar15;
    if (!bVar8) goto LAB_003b9488;
LAB_003b93c0:
    fVar12 = fVar3;
    fVar14 = DAT_003b9524;
    fVar10 = fVar3;
  }
  else {
    if (sVar2 == 5) {
      if (uVar5 == 3) {
        cVar1 = *(char *)(DAT_003b9520 + 0xe);
        bVar7 = cVar1 == '\x01';
        if (bVar7) {
          cVar1 = *(char *)(param_1 + 0x82c);
        }
        fVar10 = fVar15;
        if (!bVar7 || cVar1 != '\x10') goto LAB_003b9488;
        goto LAB_003b93c0;
      }
    }
    else {
      if (sVar2 == 7) {
        bVar7 = uVar5 == 10;
        if (bVar7) {
          uVar5 = (uint)*(byte *)(DAT_003b9520 + 0xe);
        }
        bVar8 = bVar7 && uVar5 == 1;
        if (bVar7 && uVar5 == 1) {
          bVar8 = *(char *)(param_1 + 0x82c) == '\x02';
        }
        fVar12 = DAT_003b9528;
        fVar14 = fVar3;
        if (!bVar8) {
          fVar12 = fVar11;
          fVar14 = fVar13;
          fVar10 = fVar15;
        }
        goto LAB_003b9488;
      }
      if (sVar2 != 5) {
        if (sVar2 == 4) {
          bVar7 = uVar5 == 0xb;
          if (bVar7) {
            uVar5 = (uint)*(byte *)(DAT_003b9520 + 0xe);
          }
          bVar8 = bVar7 && uVar5 == 1;
          if (bVar7 && uVar5 == 1) {
            bVar8 = *(char *)(param_1 + 0x82c) == '\b';
          }
          fVar12 = DAT_003b952c;
          fVar14 = fVar3;
          if (!bVar8) {
            fVar12 = fVar11;
            fVar14 = fVar13;
            fVar10 = fVar15;
          }
        }
        else {
          bVar7 = sVar2 == 6 && uVar5 == 0xe;
          if (sVar2 == 6 && uVar5 == 0xe) {
            bVar7 = *(char *)(DAT_003b9520 + 0xe) == '\x01';
          }
          bVar8 = false;
          if (bVar7) {
            bVar8 = *(char *)(param_1 + 0x82c) == '\x02';
          }
          fVar10 = fVar15;
          if (bVar8) {
            fVar12 = fVar3;
            fVar14 = DAT_003b9530;
            fVar10 = fVar3;
          }
        }
        goto LAB_003b9488;
      }
    }
    bVar7 = uVar5 == 0x15;
    if (bVar7) {
      uVar5 = (uint)*(byte *)(DAT_003b9520 + 0xe);
    }
    bVar8 = bVar7 && uVar5 == 1;
    if (bVar7 && uVar5 == 1) {
      bVar8 = *(char *)(param_1 + 0x82c) == '\x02';
    }
    fVar12 = fVar3;
    fVar14 = DAT_003b9528;
    if (!bVar8) {
      fVar12 = fVar11;
      fVar14 = fVar13;
      fVar10 = fVar15;
    }
  }
LAB_003b9488:
  iVar4 = FUN_0036aa20(*(float *)(param_1 + 0x28) + fVar12,*(float *)(param_1 + 0x2c) + fVar14,
                       *(float *)(param_1 + 0x30) + fVar10,param_2 + 0x208c,param_1,param_2,0x19c,0,
                       0,0,(int)*(short *)(param_1 + 0x1c));
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x124) = 0;
  }
  FUN_00374428(param_1);
  return;
}

// OoT3D decomp @ 00492e74  name=FUN_00492e74  size=1056

undefined4 FUN_00492e74(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  longlong lVar16;

  bVar11 = false;
  iVar8 = -1;
  uVar4 = (uint)*(short *)(param_1 + 0x104);
  uVar6 = *(uint *)(DAT_00493294 + 8);
  if (uVar4 == 0x5a) {
    if (uVar6 == DAT_00493298) {
      iVar8 = 8;
      param_2 = DAT_0049329c;
    }
  }
  else if (uVar4 == 0x5d) {
    if (uVar6 == DAT_004932a0) {
      param_2 = 0x168;
      iVar8 = 0x1b;
    }
  }
  else if (uVar4 == 0x52) {
    if (uVar6 == DAT_004932a4) {
      param_2 = 0x1a4;
      iVar8 = 0x31;
    }
  }
  else {
    if (uVar4 == 0x57) {
      if (uVar6 == DAT_004932a8) {
        iVar8 = 1000;
        param_2 = DAT_004932ac;
      }
    }
    else {
      if (uVar4 == 0x62) {
        if (uVar6 == DAT_004932a0) {
          iVar8 = 0x65;
          param_2 = DAT_004932b0;
        }
        goto code_r0x0049304c;
      }
      if (uVar4 != 0x57) {
        if (uVar4 == 0x58) {
          if (uVar6 == DAT_004932b8) {
            param_2 = 0x1cc;
            iVar8 = 0x92;
          }
        }
        else {
          uVar9 = DAT_004932bc | (int)DAT_004932bc >> 0xd;
          if (uVar4 == 0x55) {
            if (uVar6 == DAT_004932bc) {
              iVar8 = 0xa9;
              param_2 = DAT_004932ac;
            }
            if (uVar6 == uVar9) {
              iVar8 = 0xbf;
              param_2 = DAT_004932ac;
            }
          }
          else if (uVar4 == 0x51) {
            if (uVar6 == DAT_004932c0) {
              iVar8 = 1000;
              param_2 = DAT_004932c4;
            }
          }
          else if (uVar4 == 99) {
            if (uVar6 == DAT_00493298) {
              param_2 = 0x1d8;
            }
            if (uVar6 == DAT_004932a8) {
              param_2 = 0x198;
            }
            if (uVar6 == DAT_004932a4) {
              param_2 = 0x264;
            }
            if (uVar6 == DAT_004932c0) {
              param_2 = DAT_004932c8;
            }
            if (uVar6 == uVar9) {
              param_2 = 0x1d8;
            }
            bVar11 = uVar6 == DAT_004932bc ||
                     (uVar6 == uVar9 ||
                     (uVar6 == DAT_004932c0 ||
                     (uVar6 == DAT_004932a4 || (uVar6 == DAT_004932a8 || uVar6 == DAT_00493298))));
            if (uVar6 == DAT_004932bc) {
              param_2 = 900;
            }
          }
          else if (uVar4 == 0x60) {
            bVar11 = uVar6 == DAT_004932a4;
            if (bVar11) {
              param_2 = DAT_004932cc;
            }
          }
          else if (uVar4 == 0x43) {
            if (uVar6 == DAT_004932a0) {
              return 0;
            }
          }
          else if (uVar4 == 0x4a && uVar6 == DAT_004932b8) {
            return 0;
          }
        }
        goto code_r0x0049304c;
      }
    }
    if (uVar6 == DAT_004932a0) {
      iVar8 = 0x7c;
      param_2 = DAT_004932b4;
    }
  }
code_r0x0049304c:
  software_interrupt(0x28);
  lVar16 = (ulonglong)uVar4 * 3 +
           CONCAT44(((int)uVar6 >> 0x1f) * DAT_004932d0 +
                    (int)((ulonglong)DAT_004932d0 * (ulonglong)uVar6 >> 0x20),
                    (int)((ulonglong)DAT_004932d0 * (ulonglong)uVar6)) +
           CONCAT44(uVar6 * 3,(int)((ulonglong)DAT_004932d0 * (ulonglong)uVar4 >> 0x20));
  uVar15 = FUN_00332754((int)lVar16,(int)((ulonglong)lVar16 >> 0x20),DAT_004932d4,0);
  iVar10 = (int)((ulonglong)uVar15 >> 0x20);
  uVar4 = param_2 * 1000;
  iVar5 = (int)((longlong)(int)uVar4 * (longlong)DAT_004932d8 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  uVar6 = (iVar5 >> 4) - (iVar5 >> 0x1f);
  uVar9 = uVar6 + *(uint *)(param_1 + 0x24f8);
  iVar5 = FUN_002d5a0c(uVar6,((int)uVar6 >> 0x1f) + *(int *)(param_1 + 0x24fc) +
                             (uint)CARRY4(uVar6,*(uint *)(param_1 + 0x24f8)));
  fVar3 = DAT_004932ec;
  uVar2 = DAT_004932e8;
  fVar13 = DAT_004932e4;
  fVar1 = DAT_004932e0;
  fVar14 = DAT_004932dc;
  if (iVar8 < 0 || iVar5 < iVar8) {
    if (iVar5 != -1) {
      iVar8 = *(int *)(param_1 + 0x250c);
    }
    if (iVar5 == -1 || iVar8 == -1) {
      bVar11 = (uint)uVar15 < uVar9;
      iVar8 = (int)uVar9 >> 0x1f;
      if ((int)(iVar10 - (iVar8 + (uint)bVar11)) < 0 !=
          (SBORROW4(iVar10,iVar8) != SBORROW4(iVar10 - iVar8,(uint)bVar11))) {
        return 0;
      }
    }
    else {
      if (bVar11) {
        if (iVar5 < 0xf4) {
          fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
          lVar16 = FUN_002c1e28(fVar12 * DAT_004932e4 * DAT_004932e0);
        }
        else {
          iVar10 = FUN_002c1e28(DAT_004932e8);
          fVar12 = (float)VectorSignedToFloat(iVar5 + -0xf4,(byte)(in_fpscr >> 0x15) & 3);
          lVar16 = FUN_002c1e28(fVar12 * fVar3 * fVar1);
          lVar16 = lVar16 + iVar10;
        }
      }
      else {
        fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
        lVar16 = FUN_002c1e28(fVar12 * DAT_004932dc * DAT_004932e0);
      }
      uVar7 = (undefined4)((ulonglong)lVar16 >> 0x20);
      uVar6 = (uint)lVar16;
      iVar5 = (int)uVar6 >> 0x1f;
      if (bVar11) {
        if (iVar8 < 0xf4) {
          fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
          iVar8 = FUN_002c1e28(fVar14 * fVar13 * fVar1,uVar7);
        }
        else {
          iVar10 = FUN_002c1e28(uVar2,uVar7);
          fVar14 = (float)VectorSignedToFloat(iVar8 + -0xf4,(byte)(in_fpscr >> 0x15) & 3);
          iVar8 = FUN_002c1e28(fVar14 * fVar3 * fVar1);
          iVar8 = iVar8 + iVar10;
        }
      }
      else {
        fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
        iVar8 = FUN_002c1e28(fVar13 * fVar14 * fVar1,uVar7);
      }
      iVar10 = (int)((longlong)(int)uVar4 * (longlong)DAT_004932d8 + ((ulonglong)uVar4 << 0x20) >>
                    0x20);
      uVar4 = ((iVar10 >> 4) - (iVar10 >> 0x1f)) + iVar8;
      iVar8 = (int)uVar4 >> 0x1f;
      if ((int)(iVar5 - (iVar8 + (uint)(uVar6 < uVar4))) < 0 !=
          (SBORROW4(iVar5,iVar8) != SBORROW4(iVar5 - iVar8,(uint)(uVar6 < uVar4)))) {
        return 0;
      }
    }
  }
  return 1;
}

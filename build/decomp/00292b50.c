// OoT3D decomp @ 00292b50  name=FUN_00292b50  size=1132

void FUN_00292b50(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;

  iVar2 = DAT_00292f48;
  cVar1 = *(char *)(param_1 + 0x1a5);
  if ((cVar1 == '\x04' || cVar1 == '\x03') || cVar1 == '\x02') {
    iVar9 = *(int *)(param_2 + 0x20ac);
    fVar16 = *(float *)(param_1 + 8) - *(float *)(iVar9 + 0x28);
    fVar13 = *(float *)(param_1 + 0xc) - *(float *)(iVar9 + 0x2c);
    fVar15 = *(float *)(param_1 + 0x10) - *(float *)(iVar9 + 0x30);
    if ((int)SQRT(fVar16 * fVar16 + fVar13 * fVar13 + fVar15 * fVar15) < DAT_00292f48) {
      sVar6 = *(short *)(iVar9 + 0xbe);
      iVar9 = FUN_0036e800(param_1);
      if (iVar9 < 1) {
        sVar5 = -1;
      }
      else {
        sVar5 = 1;
      }
      sVar6 = sVar6 + sVar5 * 0x4000;
    }
    else {
      sVar6 = FUN_003758b0(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30),
                           *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28));
      sVar6 = sVar6 - *(short *)(param_1 + 0x36);
    }
    if (sVar6 < 0xc9) {
      if (sVar6 < -200) {
        sVar6 = *(short *)(param_1 + 0x36) + -200;
      }
      else {
        sVar6 = sVar6 + *(short *)(param_1 + 0x36);
      }
      *(short *)(param_1 + 0x36) = sVar6;
    }
    else {
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 200;
    }
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  }
  iVar11 = *(int *)(param_2 + 0x20ac);
  iVar14 = FUN_00357eac(param_1,iVar11);
  iVar4 = DAT_00292f6c;
  uVar3 = DAT_00292f5c;
  iVar9 = DAT_00292f58;
  uVar20 = DAT_00292f54;
  uVar7 = DAT_00292f50;
  if (*DAT_00292f4c == 0x2ae) {
    FUN_0037547c(DAT_00292f68,param_1 + 0x28,4,DAT_00292f64,DAT_00292f64,DAT_00292f60);
    *(undefined4 *)(param_1 + 0xdcc) = 0;
    *(undefined1 *)(param_1 + 0x1a4) = 4;
    *(undefined1 *)(param_1 + 0x1a5) = 2;
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    uVar7 = FUN_0036ae14(param_1 + 0x1b8,*(undefined4 *)(iVar9 + 8));
    uVar19 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = FUN_00348854(param_1);
    FUN_00375c08(uVar7,uVar3,uVar19,uVar20,param_1 + 0x1b8,
                 *(undefined4 *)(iVar9 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
    return;
  }
  if (((*(ushort *)(DAT_00292f6c + 0xee) & 0x40) != 0) && (*(short *)(*DAT_00292f70 + 0x5be) != 0))
  {
LAB_00292d44:
    *(undefined1 *)(param_1 + 0x1a4) = 5;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  bVar12 = false;
  if (*(short *)(param_2 + 0x104) == 99) {
    bVar12 = DAT_00292f4c[2] == 0xfff1;
  }
  if (bVar12) goto LAB_00292d44;
  *(uint *)(param_1 + 0xea4) = *(ushort *)(DAT_00292f6c + 0xee) & 0x40;
  uVar10 = (uint)*(byte *)(param_1 + 0x1a5);
  iVar8 = FUN_003731e0(param_1 + 0x1b8);
  if ((iVar8 != 0) || (*(byte *)(param_1 + 0x1a5) < 2)) {
    if ((*(ushort *)(iVar4 + 0xee) & 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = uVar3;
      if (*(char *)(param_1 + 0x1a5) == '\0') {
joined_r0x00292fec:
        if (iVar8 != 1) goto LAB_00292ff0;
        uVar10 = 1;
        goto LAB_00292ef8;
      }
joined_r0x00292fd0:
      if (iVar8 == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
    }
    else {
      fVar18 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28);
      fVar13 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c);
      fVar15 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30);
      fVar17 = *(float *)(param_1 + 8) - *(float *)(iVar11 + 0x28);
      fVar16 = *(float *)(param_1 + 0xc) - *(float *)(iVar11 + 0x2c);
      fVar13 = SQRT(fVar18 * fVar18 + fVar13 * fVar13 + fVar15 * fVar15);
      fVar15 = *(float *)(param_1 + 0x10) - *(float *)(iVar11 + 0x30);
      if (iVar2 < (int)SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15)) {
        if ((int)fVar13 < DAT_00292f74) {
          if (0x7fffff < (int)fVar13 + 0xbcea0000U) {
            if (0x89ffff < (int)fVar13 + 0xbd740000U) {
              *(undefined4 *)(param_1 + 0x6c) = uVar3;
              cVar1 = *(char *)(param_1 + 0x1a5);
joined_r0x00292fb8:
              if (cVar1 != '\0') goto joined_r0x00292fd0;
              goto joined_r0x00292fec;
            }
            goto LAB_00292ea4;
          }
LAB_00292e84:
          uVar10 = 3;
          *(undefined4 *)(param_1 + 0x6c) = DAT_00292f7c;
        }
        else {
LAB_00292e64:
          uVar10 = 4;
          *(undefined4 *)(param_1 + 0x6c) = DAT_00292f78;
        }
      }
      else {
        if (iVar14 < DAT_00293054) goto LAB_00292e64;
        if (iVar14 < DAT_00292f74) goto LAB_00292e84;
        if (DAT_00293054 + 0x800000 <= iVar14) {
          *(undefined4 *)(param_1 + 0x6c) = uVar3;
          cVar1 = *(char *)(param_1 + 0x1a5);
          goto joined_r0x00292fb8;
        }
LAB_00292ea4:
        *(undefined4 *)(param_1 + 0x6c) = uVar7;
        uVar10 = 2;
        *(undefined4 *)(param_1 + 0xdd8) = 0;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1a5) == uVar10) && (iVar8 != 1)) {
LAB_00292ff0:
    uVar7 = FUN_0036ae14(param_1 + 0x1b8,
                         *(undefined4 *)(iVar9 + (uint)*(byte *)(param_1 + 0x1a5) * 4));
    uVar19 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar20 = *(undefined4 *)(param_1 + 500);
    uVar7 = FUN_00348854(param_1);
    FUN_00375c08(uVar7,uVar20,uVar19,uVar3,param_1 + 0x1b8,
                 *(undefined4 *)(iVar9 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
    return;
  }
LAB_00292ef8:
  *(char *)(param_1 + 0x1a5) = (char)uVar10;
  uVar7 = FUN_0036ae14(param_1 + 0x1b8,*(undefined4 *)(iVar9 + uVar10 * 4));
  uVar19 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = FUN_00348854(param_1);
  FUN_00375c08(uVar7,uVar3,uVar19,uVar20,param_1 + 0x1b8,
               *(undefined4 *)(iVar9 + (uint)*(byte *)(param_1 + 0x1a5) * 4),2);
  return;
}

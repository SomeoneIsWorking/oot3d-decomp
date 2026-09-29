// OoT3D decomp @ 002dc370  name=FUN_002dc370  size=2516

void FUN_002dc370(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_fpscr;
  undefined4 uVar7;
  double in_d0;
  double dVar8;
  double dVar9;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar10;
  double in_d1;
  double dVar11;
  double dVar12;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  int local_60;
  uint uStack_5c;
  int local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;

  uVar1 = DAT_002dc6f4;
  dVar10 = DAT_002dc6ec;
  local_30 = SUB84(in_d0,0);
  uStack_2c = (uint)((ulonglong)in_d0 >> 0x20);
  uStack_24 = (uint)((ulonglong)in_d1 >> 0x20);
  local_28 = SUB84(in_d1,0);
  uVar5 = uStack_2c & 0x7fffffff;
  uVar6 = uStack_24 & 0x7fffffff;
  if ((uint)(local_30 != 0) + uStack_2c * 2 + DAT_002dc6e4 < (uint)(DAT_002dc6e4 >> 1)) {
    return;
  }
  if ((uint)(local_28 != 0) + uStack_24 * 2 + DAT_002dc6e4 < DAT_002dc6e8) {
    return;
  }
  if (((ulonglong)in_d1 & 0x7fffffff00000000) == 0 && local_28 == 0) {
    return;
  }
  if (uStack_2c == 0x3ff00000) {
    if (local_30 == 0) {
      return;
    }
LAB_002dc408:
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
    if (local_30 != 0) goto LAB_002dc408;
  }
  if (0xffe00000 < iVar2 + uStack_2c * 2) {
    return;
  }
  if (0xffe00000 < (uint)(local_28 != 0) + uStack_24 * 2) {
    return;
  }
  iVar2 = 0;
  if ((longlong)in_d0 < 0 && (int)uVar6 < (int)DAT_002dc6f4) {
    if ((int)uVar6 < DAT_002dc6f8) {
      if (DAT_002dc6fc <= (int)uVar6) {
        iVar3 = DAT_002dc700 + ((int)uVar6 >> 0x14);
        if (iVar3 < 0x15) {
          if ((local_28 == 0) &&
             (uVar4 = uVar6 >> (0x14U - iVar3 & 0xff), uVar4 << (0x14U - iVar3 & 0xff) == uVar6))
          goto LAB_002dc4c0;
        }
        else {
          uVar4 = local_28 >> (0x34U - iVar3 & 0xff);
          if (uVar4 << (0x34U - iVar3 & 0xff) == local_28) {
LAB_002dc4c0:
            iVar2 = 2 - (uVar4 & 1);
          }
        }
      }
    }
    else {
      iVar2 = 2;
    }
  }
  if ((((ulonglong)in_d0 & 0x7fffffff00000000) == 0 && local_30 == 0) && ((longlong)in_d1 < 0)) {
    if ((uStack_2c != 0 && iVar2 != 2) && (iVar2 == 1)) {
      FUN_002eb01c(2);
      return;
    }
    FUN_002eb01c(2);
    return;
  }
  if (local_28 == 0) {
    if (uVar6 == DAT_002dc6f4) {
      return;
    }
    if (uVar6 == 0x3ff00000) {
      if (-1 < (longlong)in_d1) {
        return;
      }
      if (((ulonglong)in_d0 & 0x7fffffff00000000) != 0) {
        return;
      }
      if (local_30 == 0) {
        return;
      }
      FUN_002eb01c(2);
      return;
    }
    if ((int)uVar5 < (int)DAT_002dc6f4) {
      if (uStack_24 == 0x40000000) {
        return;
      }
      if ((uStack_24 == 0x3fe00000) && (-1 < (longlong)in_d0)) {
        FUN_00481f48(local_30,uStack_2c);
        return;
      }
    }
  }
  dVar8 = (double)FUN_00482500(local_30,uStack_2c);
  if (local_30 == 0) {
    if (((ulonglong)in_d0 & 0x7fffffff00000000) == 0) {
      return;
    }
    if (uVar5 == uVar1) {
      if ((0 < (int)uStack_2c) && (-1 < (longlong)in_d1)) {
        return;
      }
      if ((0 < (int)uStack_2c) && ((longlong)in_d1 < 0)) {
        return;
      }
      if (((longlong)in_d0 < 0) && (-1 < (longlong)in_d1)) {
        return;
      }
      if ((longlong)in_d0 < 0 && (longlong)in_d1 < 0) {
        return;
      }
    }
  }
  if ((longlong)in_d0 < 0 && iVar2 == 0) {
    FUN_002eb01c(1);
    return;
  }
  if (DAT_002dcb14 < (int)uVar6) {
    if (DAT_002dcb14 + 0x2100000 < (int)uVar6) {
      if (DAT_002dcb14 + -0x1f00001 < (int)uVar5) {
        if ((int)uVar5 < DAT_002dc6fc) goto LAB_002dc800;
        goto joined_r0x002dc824;
      }
joined_r0x002dc80c:
      if ((longlong)in_d1 < 0) goto LAB_002dc828;
    }
    else {
LAB_002dc800:
      if ((int)uVar5 < DAT_002dcb14 + -0x1f00001) goto joined_r0x002dc80c;
      if ((int)uVar5 <= DAT_002dc6fc) {
        dVar9 = in_d0 - dVar10;
        dVar8 = dVar9 * DAT_002dcb3c -
                dVar9 * dVar9 * (DAT_002dcb2c - dVar9 * (DAT_002dcb24 - dVar9 * DAT_002dcb1c)) *
                DAT_002dcb44;
        local_80 = (double)((ulonglong)(dVar9 * DAT_002dcb34 + dVar8) & 0xffffffff00000000);
        dVar8 = dVar8 - (local_80 - dVar9 * DAT_002dcb34);
        goto LAB_002dcaf0;
      }
joined_r0x002dc824:
      if (0 < (int)uStack_24) goto LAB_002dc828;
    }
    FUN_002eb01c(2);
    FUN_002d14b0();
  }
  else {
    iVar2 = 0;
    local_68 = dVar8;
    if (uVar5 < 0x100000) {
      iVar2 = -0x35;
      local_68._4_4_ = (uint)((ulonglong)(dVar8 * DAT_002dcb4c) >> 0x20);
      uVar5 = local_68._4_4_;
      local_68 = dVar8 * DAT_002dcb4c;
    }
    iVar2 = iVar2 + ((int)uVar5 >> 0x14);
    uVar5 = uVar5 & 0xfffff;
    if ((int)uVar5 <= DAT_002dcb54) {
      uStack_24 = 0;
    }
    iVar3 = iVar2 + -0x3ff;
    uVar1 = uVar5 | 0x3ff00000;
    if (DAT_002dcb54 < (int)uVar5) {
      if ((int)uVar5 < DAT_002dcb58) {
        uStack_24 = 1;
      }
      else {
        uStack_24 = 0;
        iVar3 = iVar2 + -0x3fe;
        uVar1 = uVar1 - 0x100000;
      }
    }
    local_68 = (double)CONCAT44(uVar1,(undefined4)local_68);
    dVar8 = *(double *)(DAT_002dcb5c + 0x2dc974 + uStack_24 * 8);
    dVar9 = dVar10 / (dVar8 + local_68);
    dVar11 = (local_68 - dVar8) * dVar9;
    local_90 = (double)((ulonglong)dVar11 & 0xffffffff00000000);
    dVar12 = dVar11 * dVar11;
    local_98 = (double)CONCAT44(((int)uVar1 >> 1 | 0x20000000U) + uStack_24 * 0x40000 + 0x80000,
                                (int)*(undefined8 *)(DAT_002dcb60 + 0x2dc9a4));
    dVar9 = (((local_68 - dVar8) - local_90 * local_98) - local_90 * (local_68 - (local_98 - dVar8))
            ) * dVar9;
    uVar7 = FUN_002d1428(SUB84(dVar12,0),DAT_002dcb64 + 0x2dca00,6);
    dVar8 = (double)CONCAT44(extraout_s1,uVar7) * dVar12 * dVar12 + dVar9 * (local_90 + dVar11);
    local_98 = (double)((ulonglong)(local_90 * local_90 + DAT_002dcb6c + dVar8) & 0xffffffff00000000
                       );
    dVar8 = dVar9 * local_98 + (dVar8 - ((local_98 - DAT_002dcb6c) - local_90 * local_90)) * dVar11;
    local_70 = (double)((ulonglong)(local_90 * local_98 + dVar8) & 0xffffffff00000000);
    dVar8 = local_70 * DAT_002dcb7c + (dVar8 - (local_70 - local_90 * local_98)) * DAT_002dcb84 +
            *(double *)(DAT_002dcb8c + 0x2dca9c + uStack_24 * 8);
    dVar9 = (double)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    dVar11 = *(double *)(DAT_002dcb90 + 0x2dcac0 + uStack_24 * 8);
    local_80 = (double)((ulonglong)(local_70 * DAT_002dcb74 + dVar8 + dVar11 + dVar9) &
                       0xffffffff00000000);
    dVar8 = dVar8 - (((local_80 - dVar9) - dVar11) - local_70 * DAT_002dcb74);
LAB_002dcaf0:
    local_78 = (double)((ulonglong)in_d1 & 0xffffffff00000000);
    dVar8 = (in_d1 - local_78) * local_80 + in_d1 * dVar8;
    local_78 = local_78 * local_80;
    dVar9 = dVar8 + local_78;
    uStack_5c = (uint)((ulonglong)dVar9 >> 0x20);
    local_60 = SUB84(dVar9,0);
    if ((int)uStack_5c < (int)DAT_002dce1c) {
      if ((DAT_002dce2c <= (uStack_5c & 0x7fffffff)) &&
         ((local_60 != 0 || DAT_002dce2c * 0x1fffff + uStack_5c != 0 || (dVar8 <= dVar9 - local_78))
         )) {
        FUN_002eb01c(2);
        FUN_002d14b0();
        return;
      }
LAB_002dcc88:
      uVar5 = 0;
      if ((int)~(DAT_002dc700 >> 0xc | DAT_002dc700 << 0x14) < (int)(uStack_5c & 0x7fffffff)) {
        uStack_5c = (0x100000U >>
                    (DAT_002dc700 + ((int)(uStack_5c & 0x7fffffff) >> 0x14) + 1 & 0xff)) + uStack_5c
        ;
        uVar5 = DAT_002dc700 + ((uStack_5c & 0x7fffffff) >> 0x14);
        local_88 = (double)CONCAT44(uStack_5c & ~(DAT_002dc6e8 >> (uVar5 & 0xff)),
                                    (int)*(undefined8 *)(DAT_002dce30 + 0x2dcccc));
        local_78 = local_78 - local_88;
        uVar5 = (uStack_5c & 0xfffff | 0x100000) >> (0x14 - uVar5 & 0xff);
        if ((longlong)dVar9 < 0) {
          uVar5 = -uVar5;
        }
      }
      local_88 = (double)((ulonglong)(dVar8 + local_78) & 0xffffffff00000000);
      dVar8 = (dVar8 - (local_88 - local_78)) * DAT_002dce3c + local_88 * DAT_002dce44;
      dVar11 = local_88 * DAT_002dce34 + dVar8;
      dVar8 = dVar8 - (dVar11 - local_88 * DAT_002dce34);
      uVar7 = FUN_002d1428(SUB84(dVar11 * dVar11,0),DAT_002dce4c + 0x2dcd78,5);
      dVar9 = dVar11 - dVar11 * dVar11 * (double)CONCAT44(extraout_s1_00,uVar7);
      dVar10 = dVar10 - (((dVar11 * dVar9) / (dVar9 - DAT_002dce54) - (dVar8 + dVar11 * dVar8)) -
                        dVar11);
      uStack_5c = (uint)((ulonglong)dVar10 >> 0x20);
      if (0 < (int)(uStack_5c + uVar5 * 0x100000) >> 0x14) {
        return;
      }
      uVar7 = SUB84(dVar10,0);
      FUN_002d13b4(uVar7,uStack_5c,uVar5);
      iVar2 = FUN_00481a84();
      if (iVar2 == 4) {
        FUN_002d14b0();
      }
      FUN_002d13b4(uVar7,uStack_5c,uVar5);
      return;
    }
    if ((local_60 == 0 && uStack_5c == DAT_002dce1c) && (dVar8 + DAT_002dce24 <= dVar9 - local_78))
    goto LAB_002dcc88;
LAB_002dc828:
    FUN_002eb01c(2);
  }
  return;
}

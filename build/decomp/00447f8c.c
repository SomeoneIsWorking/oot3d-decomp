// OoT3D decomp @ 00447f8c  name=FUN_00447f8c  size=688

ulonglong FUN_00447f8c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;

  bVar11 = param_4 == 0;
  uVar9 = param_4;
  if (bVar11) {
    uVar9 = param_3;
  }
  uVar10 = LZCOUNT(uVar9);
  uVar9 = uVar9 << uVar10 + 1;
  uVar5 = 0;
  if (!bVar11) {
    uVar10 = 0x3f - uVar10;
    bVar11 = uVar10 == 0;
    uVar5 = uVar10;
  }
  if (bVar11) {
    uVar10 = 0x1f - uVar10;
    uVar5 = uVar10;
  }
  if ((int)uVar5 < 0) {
    uVar13 = FUN_002df174(0,0,param_1,param_2,param_1,param_2);
    return uVar13;
  }
  if (param_2 == 0) {
    iVar4 = LZCOUNT(param_1);
    bVar11 = true;
  }
  else {
    iVar4 = 0x3f - LZCOUNT(param_2);
    bVar11 = iVar4 == 0;
  }
  if (bVar11) {
    iVar4 = 0x1f - iVar4;
  }
  uVar5 = iVar4 - uVar10;
  if (-1 < (int)uVar5) {
    if (-1 < (int)(4 - uVar5)) {
      uVar10 = 0;
      uVar9 = param_4 << (uVar5 & 0xff) | param_3 >> (0x20 - uVar5 & 0xff);
      param_3 = param_3 << (uVar5 & 0xff);
      while( true ) {
        bVar12 = param_3 <= param_1;
        bVar11 = param_2 - uVar9 < (uint)bVar12;
        uVar10 = uVar10 * 2 + (uint)(uVar9 < param_2 || bVar11);
        if (uVar9 < param_2 || bVar11) {
          param_1 = param_1 - param_3;
          param_2 = param_2 - (uVar9 + !bVar12);
        }
        bVar11 = uVar5 == 0;
        uVar5 = uVar5 - 1;
        if (bVar11) break;
        bVar2 = (byte)uVar9;
        uVar9 = uVar9 >> 1;
        param_3 = (uint)(bVar2 & 1) << 0x1f | param_3 >> 1;
      }
      return (ulonglong)uVar10;
    }
    if ((int)(uVar10 - 0x20) < 5) {
      uVar9 = uVar9 | param_3 >> (uVar10 - 0x20 & 0xff);
    }
    uVar5 = *(uint *)(&DAT_0044823c + (uVar9 >> 0x1c) * 4);
    uVar9 = uVar10;
    if (0x1f < uVar10) {
      uVar9 = uVar10 - 0x20;
    }
    uVar6 = 0x20 - uVar9;
    if (uVar10 < 0x20) {
      uVar10 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
      uVar5 = uVar5 + (int)((ulonglong)
                            -(((int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) <<
                               (uVar6 & 0xff) | uVar10 >> (uVar9 & 0xff)) +
                             (uint)(uVar10 << (uVar6 & 0xff) != 0)) * (ulonglong)uVar5 >> 0x20);
      uVar10 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
      uVar5 = uVar5 + (int)((ulonglong)
                            -(((int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) <<
                               (uVar6 & 0xff) | uVar10 >> (uVar9 & 0xff)) +
                             (uint)(uVar10 << (uVar6 & 0xff) != 0)) * (ulonglong)uVar5 >> 0x20);
      if (param_2 != 0) {
        uVar10 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
        uVar5 = uVar5 + (int)((ulonglong)
                              -(((int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) <<
                                 (uVar6 & 0xff) | uVar10 >> (uVar9 & 0xff)) +
                               (uint)(uVar10 << (uVar6 & 0xff) != 0)) * (ulonglong)uVar5 >> 0x20);
      }
      lVar1 = (ulonglong)param_2 * (ulonglong)uVar5 +
              ((ulonglong)param_1 * (ulonglong)uVar5 >> 0x20);
      uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar3 = (uint)lVar1 >> (uVar9 & 0xff) | uVar10 << (uVar6 & 0xff);
      uVar7 = (uint)((ulonglong)param_3 * (ulonglong)uVar3);
      uVar10 = uVar10 >> (uVar9 & 0xff);
      uVar6 = param_1 - uVar7;
      param_2 = param_2 - (uVar10 * param_3 + (int)((ulonglong)param_3 * (ulonglong)uVar3 >> 0x20) +
                          (uint)(param_1 < uVar7));
      if (param_2 == 0 && uVar6 < param_3) {
        return CONCAT44(uVar10,uVar3);
      }
      lVar1 = (ulonglong)param_2 * (ulonglong)uVar5 + ((ulonglong)uVar6 * (ulonglong)uVar5 >> 0x20);
      uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uint)lVar1 >> (uVar9 & 0xff) | uVar7 << (0x20 - uVar9 & 0xff);
      uVar5 = uVar3 + uVar8;
      iVar4 = uVar10 + (uVar7 >> (uVar9 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
      uVar6 = uVar6 - param_3 * uVar8;
      if (uVar6 < param_3) {
        return CONCAT44(iVar4,uVar5);
      }
      uVar6 = uVar6 - param_3;
      bVar11 = param_3 <= uVar6;
      if (bVar11) {
        uVar6 = uVar6 - param_3;
      }
      uVar9 = uVar5 + 1 + (uint)bVar11;
      return CONCAT44(iVar4 + (uint)(0xfffffffe < uVar5) + (uint)CARRY4(uVar5 + 1,(uint)bVar11) +
                      (uint)CARRY4(uVar9,(uint)(param_3 <= uVar6)),uVar9 + (param_3 <= uVar6));
    }
    lVar1 = (ulonglong)param_4 * (ulonglong)uVar5 + ((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
    uVar10 = (uint)lVar1;
    uVar5 = uVar5 + (int)((ulonglong)
                          -(((int)((ulonglong)lVar1 >> 0x20) << (uVar6 & 0xff) |
                            uVar10 >> (uVar9 & 0xff)) + (uint)(uVar10 << (uVar6 & 0xff) != 0)) *
                          (ulonglong)uVar5 >> 0x20);
    lVar1 = (ulonglong)param_4 * (ulonglong)uVar5 + ((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
    uVar10 = (uint)lVar1;
    uVar3 = (uVar5 + (int)((ulonglong)
                           -(((int)((ulonglong)lVar1 >> 0x20) << (uVar6 & 0xff) |
                             uVar10 >> (uVar9 & 0xff)) + (uint)(uVar10 << (uVar6 & 0xff) != 0)) *
                           (ulonglong)uVar5 >> 0x20)) - 1;
    uVar5 = (uint)((ulonglong)param_2 * (ulonglong)uVar3 +
                   ((ulonglong)param_1 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar9 & 0xff);
    uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
    uVar10 = param_1 - uVar6;
    param_2 = param_2 - (uVar5 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) +
                        (uint)(param_1 < uVar6));
    bVar11 = param_4 <= param_2;
    if (param_2 == param_4) {
      bVar11 = param_3 <= uVar10;
    }
    if (!bVar11) {
      return (ulonglong)uVar5;
    }
    uVar9 = (uint)((ulonglong)param_2 * (ulonglong)uVar3 +
                   ((ulonglong)uVar10 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar9 & 0xff);
    uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar9);
    param_2 = param_2 - (uVar9 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar9 >> 0x20) +
                        (uint)(uVar10 < uVar6));
    bVar11 = param_4 <= param_2;
    if (param_2 == param_4) {
      bVar11 = param_3 <= uVar10 - uVar6;
    }
    if (!bVar11) {
      return (ulonglong)(uVar5 + uVar9);
    }
    return (ulonglong)(uVar5 + uVar9 + 1);
  }
  return 0;
}

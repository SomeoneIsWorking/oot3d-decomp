// OoT3D decomp @ 00368d94  name=FUN_00368d94  size=556

longlong FUN_00368d94(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  if ((int)(param_1 | param_2) < 0) {
    uVar6 = param_2 & 0x80000000;
    if ((int)uVar6 < 0) {
      param_2 = -param_2;
    }
    uVar7 = uVar6 ^ (int)param_1 >> 0x20;
    if (SUB41(param_1 >> 0x1f,0)) {
      param_1 = -param_1;
    }
    iVar1 = (int)uVar7 >> 0x1f;
    uVar4 = param_2;
    if (param_1 >> 4 < param_2) goto LAB_00368f64;
    if (param_1 >> 8 < param_2) goto LAB_00368f34;
    uVar4 = param_2 << 6;
    uVar6 = 0xfc000000;
    if (param_1 >> 8 < uVar4) goto LAB_00368f34;
    uVar4 = param_2 << 0xc;
    uVar6 = 0xfff00000;
    if (param_1 >> 8 < uVar4) goto LAB_00368f34;
    uVar4 = param_2 << 0x12;
    uVar6 = 0xffffc000;
    if (uVar4 <= param_1 >> 8) {
      uVar4 = param_2 << 0x18;
      uVar6 = 0xffffff00;
    }
    bVar8 = uVar4 == 0;
    iVar2 = -uVar4;
    if (!bVar8) {
      do {
        if (bVar8) {
          uVar4 = uVar4 >> 6;
        }
LAB_00368f34:
        bVar8 = uVar4 <= param_1 >> 7;
        if (bVar8) {
          param_1 = param_1 + uVar4 * -0x80;
        }
        bVar9 = uVar4 <= param_1 >> 6;
        if (bVar9) {
          param_1 = param_1 + uVar4 * -0x40;
        }
        bVar10 = uVar4 <= param_1 >> 5;
        if (bVar10) {
          param_1 = param_1 + uVar4 * -0x20;
        }
        bVar11 = uVar4 <= param_1 >> 4;
        if (bVar11) {
          param_1 = param_1 + uVar4 * -0x10;
        }
        uVar6 = (((uVar6 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                (uint)bVar11;
LAB_00368f64:
        bVar8 = uVar4 <= param_1 >> 3;
        if (bVar8) {
          param_1 = param_1 + uVar4 * -8;
        }
        uVar6 = uVar6 * 2 + (uint)bVar8;
        bVar9 = uVar4 <= param_1 >> 2;
        if (bVar9) {
          param_1 = param_1 + uVar4 * -4;
        }
        bVar8 = CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)bVar9);
        uVar6 = uVar6 * 2 + (uint)bVar9;
      } while (bVar8);
      bVar8 = uVar4 <= param_1 >> 1;
      if (bVar8) {
        param_1 = param_1 + uVar4 * -2;
      }
      uVar5 = param_1 - uVar4;
      if (uVar4 > param_1) {
        uVar5 = param_1;
      }
      iVar2 = (uVar6 * 2 + (uint)bVar8) * 2 + (uint)(uVar4 <= param_1);
      if (iVar1 < 0) {
        iVar2 = -iVar2;
      }
      if ((bool)((byte)(uVar7 >> 0x1e) & 1)) {
        uVar5 = -uVar5;
      }
      return CONCAT44(uVar5,iVar2);
    }
    uVar7 = 0;
    if (iVar1 < 0) {
      param_1 = -param_1;
    }
LAB_00368fb0:
    uVar3 = thunk_FUN_002df178(0,uVar7,uVar6,iVar2);
    return CONCAT44(param_1,uVar3);
  }
  if (param_1 >> 1 < param_2) {
    if (param_1 < param_2) {
      return (ulonglong)param_1 << 0x20;
    }
    return CONCAT44(param_1 - param_2,1);
  }
  uVar6 = 0;
  uVar7 = param_2;
  if (param_2 <= param_1 >> 4) {
    if (param_2 <= param_1 >> 8) {
      if (param_1 >> 0xc < param_2) goto LAB_00368e20;
      if (param_1 >> 0x10 < param_2) goto LAB_00368df0;
      uVar7 = param_2 << 8;
      uVar6 = 0xff000000;
      if (uVar7 <= param_1 >> 0x10) {
        uVar6 = 0xffff0000;
        uVar7 = param_2 << 0x10;
      }
      if (param_1 >> 0xc < uVar7) goto LAB_00368e20;
      bVar8 = uVar7 == 0;
      iVar2 = -uVar7;
      if (bVar8) goto LAB_00368fb0;
      do {
        if (bVar8) {
          uVar7 = uVar7 >> 8;
        }
LAB_00368df0:
        bVar8 = uVar7 <= param_1 >> 0xf;
        if (bVar8) {
          param_1 = param_1 + uVar7 * -0x8000;
        }
        bVar9 = uVar7 <= param_1 >> 0xe;
        if (bVar9) {
          param_1 = param_1 + uVar7 * -0x4000;
        }
        bVar10 = uVar7 <= param_1 >> 0xd;
        if (bVar10) {
          param_1 = param_1 + uVar7 * -0x2000;
        }
        bVar11 = uVar7 <= param_1 >> 0xc;
        if (bVar11) {
          param_1 = param_1 + uVar7 * -0x1000;
        }
        uVar6 = (((uVar6 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                (uint)bVar11;
LAB_00368e20:
        bVar8 = uVar7 <= param_1 >> 0xb;
        if (bVar8) {
          param_1 = param_1 + uVar7 * -0x800;
        }
        bVar9 = uVar7 <= param_1 >> 10;
        if (bVar9) {
          param_1 = param_1 + uVar7 * -0x400;
        }
        bVar10 = uVar7 <= param_1 >> 9;
        if (bVar10) {
          param_1 = param_1 + uVar7 * -0x200;
        }
        uVar6 = ((uVar6 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10;
        bVar9 = uVar7 <= param_1 >> 8;
        if (bVar9) {
          param_1 = param_1 + uVar7 * -0x100;
        }
        bVar8 = CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)bVar9);
        uVar6 = uVar6 * 2 + (uint)bVar9;
      } while (bVar8);
    }
    bVar8 = uVar7 <= param_1 >> 7;
    if (bVar8) {
      param_1 = param_1 + uVar7 * -0x80;
    }
    bVar9 = uVar7 <= param_1 >> 6;
    if (bVar9) {
      param_1 = param_1 + uVar7 * -0x40;
    }
    bVar10 = uVar7 <= param_1 >> 5;
    if (bVar10) {
      param_1 = param_1 + uVar7 * -0x20;
    }
    bVar11 = uVar7 <= param_1 >> 4;
    if (bVar11) {
      param_1 = param_1 + uVar7 * -0x10;
    }
    uVar6 = (((uVar6 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 + (uint)bVar11;
  }
  bVar8 = uVar7 <= param_1 >> 3;
  if (bVar8) {
    param_1 = param_1 + uVar7 * -8;
  }
  bVar9 = uVar7 <= param_1 >> 2;
  if (bVar9) {
    param_1 = param_1 + uVar7 * -4;
  }
  bVar10 = uVar7 <= param_1 >> 1;
  if (bVar10) {
    param_1 = param_1 + uVar7 * -2;
  }
  uVar4 = param_1 - uVar7;
  if (uVar7 > param_1) {
    uVar4 = param_1;
  }
  return CONCAT44(uVar4,(((uVar6 * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                        (uint)(uVar7 <= param_1));
}


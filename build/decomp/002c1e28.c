// OoT3D decomp @ 002c1e28  name=FUN_002c1e28  size=272

/* WARNING: Removing unreachable block (ram,0x00495b14) */

ulonglong FUN_002c1e28(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar2 = (int)param_1 >> 0x17;
  uVar4 = param_1 << 8;
  if (uVar2 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar2 < 0) {
    if (param_1 < 0xdf000001) {
      iVar1 = -(uVar2 & 0xff);
      uVar3 = iVar1 + 0xbe;
      if ((uVar2 & 0xff) == 0) {
        uVar4 = uVar4 & 0x7fffffff;
      }
      if (uVar3 < 0x20) {
        uVar2 = uVar4 << (0x20 - uVar3 & 0xff);
      }
      else {
        uVar2 = uVar4 >> (iVar1 + 0x9eU & 0xff);
      }
      return CONCAT44(-((uVar4 >> (uVar3 & 0xff)) + (uint)(uVar2 != 0)),-uVar2);
    }
  }
  else {
    uVar3 = -uVar2 + 0xbe;
    if (uVar2 < 0xbf && uVar3 != 0) {
      if (uVar3 < 0x20) {
        uVar2 = uVar4 << (0x20 - uVar3 & 0xff);
      }
      else {
        uVar2 = uVar4 >> (-uVar2 + 0x9e & 0xff);
      }
      return CONCAT44(uVar4 >> (uVar3 & 0xff),uVar2);
    }
  }
  if (param_1 * 2 < 0xff000001) {
    if (param_1 * 2 != 0xff000000) {
      uVar4 = ~((int)param_1 >> 0x1f);
      return CONCAT44(uVar4,uVar4) ^ 0x8000000000000000;
    }
    uVar4 = ~((int)param_1 >> 0x1f);
    return CONCAT44(uVar4,uVar4) ^ 0x8000000000000000;
  }
  uVar4 = DAT_002c1ec4 & 0xf;
  if (uVar4 == 9) {
    if ((DAT_002c1ec4 & 0x100000) != 0) {
      return CONCAT44(~(DAT_002c1ec4 << 0xf) << 1,8);
    }
    return (ulonglong)param_2 << 0x20;
  }
  if (uVar4 == 10) {
    uVar4 = DAT_00302140;
    if ((DAT_002c1ec4 & 0x40) != 0) {
      uVar4 = 0x80000000;
    }
    return CONCAT44(param_2,uVar4);
  }
  if (uVar4 != 8) {
    return CONCAT44(param_2,DAT_00302140);
  }
  if ((DAT_002c1ec4 & 0x40) != 0) {
    return 0;
  }
  if ((DAT_002c1ec4 & 0x10) != 0) {
    return CONCAT44(DAT_00302140 & 0xff000000 | (DAT_00302140 & 0xfffffff) >> 3,
                    (DAT_00302140 & 0xfffffff) << 0x1d);
  }
  return CONCAT44(param_2,param_2 & 0xff000000 | DAT_00302140 >> 0x1d | (param_2 & 0xffffff) << 3);
}

// OoT3D decomp @ 0030918c  name=FUN_0030918c  size=188

/* WARNING: Removing unreachable block (ram,0x00495b14) */

longlong FUN_0030918c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = param_1 >> 0x17;
  uVar3 = param_1 << 8;
  if (uVar1 != 0) {
    uVar3 = uVar3 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if ((uint)(param_1 << 1) < 0x7f000000) {
      return 0;
    }
  }
  else {
    uVar2 = -uVar1 + 0xbe;
    if (uVar1 < 0xbf) {
      if (uVar2 < 0x20) {
        uVar1 = uVar3 << (0x20 - uVar2 & 0xff);
      }
      else {
        uVar1 = uVar3 >> (-uVar1 + 0x9e & 0xff);
      }
      return CONCAT44(uVar3 >> (uVar2 & 0xff),uVar1);
    }
  }
  if ((uint)(param_1 * 2) < 0xff000001) {
    if (param_1 * 2 != 0xff000000) {
      uVar3 = ~(param_1 >> 0x1f);
      return CONCAT44(uVar3,uVar3);
    }
    uVar3 = ~(param_1 >> 0x1f);
    return CONCAT44(uVar3,uVar3);
  }
  uVar3 = DAT_00309204 & 0xf;
  if (uVar3 == 9) {
    if ((DAT_00309204 & 0x100000) != 0) {
      return CONCAT44(~(DAT_00309204 << 0xf) << 1,8);
    }
    return (ulonglong)param_2 << 0x20;
  }
  if (uVar3 == 10) {
    uVar3 = DAT_00302140;
    if ((DAT_00309204 & 0x40) != 0) {
      uVar3 = 0x80000000;
    }
    return CONCAT44(param_2,uVar3);
  }
  if (uVar3 != 8) {
    return CONCAT44(param_2,DAT_00302140);
  }
  if ((DAT_00309204 & 0x40) != 0) {
    return 0;
  }
  if ((DAT_00309204 & 0x10) != 0) {
    return CONCAT44(DAT_00302140 & 0xff000000 | (DAT_00302140 & 0xfffffff) >> 3,
                    (DAT_00302140 & 0xfffffff) << 0x1d);
  }
  return CONCAT44(param_2,param_2 & 0xff000000 | DAT_00302140 >> 0x1d | (param_2 & 0xffffff) << 3);
}

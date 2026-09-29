// OoT3D decomp @ 002dbc64  name=FUN_002dbc64  size=88

uint FUN_002dbc64(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  uVar2 = param_2 & 0x80000000;
  if ((int)uVar2 < 0) {
    bVar5 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar5);
  }
  if (param_2 != 0) {
    iVar3 = 0x20;
    uVar1 = param_2;
  }
  else {
    iVar3 = 0;
    uVar1 = param_1;
  }
  if (param_2 != 0 || param_1 != 0) {
    uVar4 = iVar3 - LZCOUNT(uVar1);
    uVar1 = uVar1 << LZCOUNT(uVar1) | param_1 >> (uVar4 & 0xff);
    bVar5 = (bool)((byte)(uVar1 >> 7) & 1);
    uVar2 = (uVar2 | 0x3f800000) + 0xf000000 + uVar4 * 0x800000 + (uVar1 >> 8) + (uint)bVar5;
    if (param_1 << (0x20 - uVar4 & 0xff) != 0 || (uVar1 & 0x7f) != 0) {
      bVar5 = false;
    }
    if (bVar5) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    return uVar2;
  }
  return param_1;
}

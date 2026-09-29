// OoT3D decomp @ 002dbc5c  name=FUN_002dbc5c  size=8

uint FUN_002dbc5c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

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
    uVar2 = uVar1 << LZCOUNT(uVar1) | param_1 >> (uVar4 & 0xff);
    bVar5 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar1 = uVar4 * 0x800000 + 0x4e800000 + (uVar2 >> 8) + (uint)bVar5;
    if (param_1 << (0x20 - uVar4 & 0xff) != 0 || (uVar2 & 0x7f) != 0) {
      bVar5 = false;
    }
    if (bVar5) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  return param_1;
}

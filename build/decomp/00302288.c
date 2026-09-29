// OoT3D decomp @ 00302288  name=FUN_00302288  size=132

uint FUN_00302288(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_24 [20];
  undefined1 auStack_10 [4];

  uVar2 = FUN_0030e7b8();
  if ((int)uVar2 < 0) {
    uVar1 = (uVar2 & 0x3fc00) >> 10;
    bVar3 = uVar1 == 0x11;
    if (bVar3) {
      uVar1 = uVar2 & 0x3ff;
    }
    if (bVar3 && uVar1 == 0x6f) {
      uVar2 = FUN_0030e990(param_1 + 0x28,auStack_10,auStack_24,param_4);
      if (-1 < (int)uVar2) {
        return DAT_00302310;
      }
      uVar1 = (uVar2 & 0x3fc00) >> 10;
      bVar3 = uVar1 == 0x11;
      if (bVar3) {
        uVar1 = uVar2 & 0x3ff;
      }
      if (bVar3 && uVar1 == 0x6f) {
        uVar2 = DAT_0030230c;
      }
    }
  }
  return uVar2;
}

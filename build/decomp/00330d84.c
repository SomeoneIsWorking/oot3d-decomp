// OoT3D decomp @ 00330d84  name=FUN_00330d84  size=144

void FUN_00330d84(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  iVar1 = DAT_00330e14;
  if ((~param_1 & 0xf000) != 0) {
    uVar3 = *DAT_00330e18;
    if ((param_1 & 0x7000) != 0x1000 && (param_1 & 0x7000) != 0x2000) {
      uVar3 = 0;
    }
    *(undefined4 *)(DAT_00330e14 + 0x1c) = uVar3;
    if ((param_1 & 0x8000) == 0) {
      FUN_00338cd8(uVar3);
    }
    else {
      FUN_002cf674();
    }
  }
  if ((~param_1 & 0xf00) != 0) {
    uVar2 = (param_1 & 0xf00) >> 8;
    if (uVar2 == 0) {
      uVar2 = 0x32;
    }
    if (*(uint *)(iVar1 + 0x18) != uVar2) {
      *(uint *)(iVar1 + 0x18) = uVar2;
      FUN_0034be04(uVar2);
      return;
    }
  }
  return;
}

// OoT3D decomp @ 003136e4  name=FUN_003136e4  size=380

undefined4 FUN_003136e4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = DAT_00313860 + 1;
  uVar1 = DAT_00313860 | (int)DAT_00313860 >> 0xb;
  uVar2 = DAT_00313860 + 5;
  if (param_1 == 1) {
    if (param_2 != 0x1400) {
      if (param_2 == DAT_00313860) {
        return 1;
      }
      if (param_2 == uVar1 || param_2 == uVar3) {
        return 2;
      }
      if (param_2 == uVar2) {
        return 3;
      }
    }
  }
  else if (param_1 == 2) {
    if (param_2 == 0x1400) {
      return 4;
    }
    if (param_2 == DAT_00313860) {
      return 5;
    }
    if (param_2 == uVar1 || param_2 == uVar3) {
      return 6;
    }
    if (param_2 == uVar2) {
      return 7;
    }
  }
  else if (param_1 == 3) {
    if (param_2 == 0x1400) {
      return 8;
    }
    if (param_2 == DAT_00313860) {
      return 9;
    }
    if (param_2 == uVar1 || param_2 == uVar3) {
      return 10;
    }
    if (param_2 == uVar2) {
      return 0xb;
    }
  }
  else {
    if (param_2 == 0x1400) {
      return 0xc;
    }
    if (param_2 == DAT_00313860) {
      return 0xd;
    }
    if (param_2 == uVar1 || param_2 == uVar3) {
      return 0xe;
    }
    if (param_2 == uVar2) {
      return 0xf;
    }
  }
  return 0;
}

// OoT3D decomp @ 0030807c  name=FUN_0030807c  size=376

longlong FUN_0030807c(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;

  iVar1 = 0;
  if (param_1 != 0x1908) {
    iVar1 = param_1 + -0x6700;
  }
  if (param_1 == 0x1908 || iVar1 == 0x52) {
    if (param_2 == DAT_003081f4) goto LAB_003081ec;
    if (param_2 == 0x8034) {
      return 0x803400000002;
    }
    if (param_2 == 0x8033) {
      return 0x803300000004;
    }
  }
  iVar1 = 0;
  if (param_1 != 0x1907) {
    iVar1 = param_1 + -0x6400;
  }
  if (param_1 == 0x1907 || iVar1 == 0x354) {
    if (param_2 == DAT_003081f4) {
      return CONCAT44(param_2,1);
    }
    if (param_2 == 0x8363) {
      return 0x836300000003;
    }
  }
  bVar2 = param_1 == 0x190a;
  iVar1 = 0;
  if (!bVar2) {
    iVar1 = param_1 + -0x6758;
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    if (param_2 == DAT_003081f4) {
      return CONCAT44(param_2,5);
    }
    iVar1 = param_2 - 0x6760;
    if (iVar1 == 0) {
      return CONCAT44(param_2,9);
    }
  }
  if (param_1 != 0x6700) {
    iVar1 = param_1 + -0x6700;
  }
  if ((param_1 == 0x6700 || iVar1 == 0x59) && (param_2 == DAT_003081f4)) {
    return CONCAT44(param_2,6);
  }
  iVar1 = 0;
  if (param_1 != 0x1909) {
    iVar1 = param_1 + -0x6700;
  }
  if (param_1 == 0x1909 || iVar1 == 0x57) {
    if (param_2 == DAT_003081f4) {
      return CONCAT44(param_2,7);
    }
    if (param_2 == DAT_003081f8) {
      return CONCAT44(param_2,10);
    }
  }
  iVar1 = 0;
  if (param_1 != 0x1906) {
    iVar1 = param_1 + -0x6700;
  }
  if (param_1 == 0x1906 || iVar1 == 0x56) {
    if (param_2 == DAT_003081f4) {
      return CONCAT44(param_2,8);
    }
    if (param_2 == DAT_003081f8) {
      return CONCAT44(param_2,0xb);
    }
  }
  if (param_1 == 0x675a) {
    return 0xc;
  }
  param_2 = DAT_003081fc;
  if (param_1 == 0x675b) {
    return 0xd;
  }
LAB_003081ec:
  return (ulonglong)param_2 << 0x20;
}

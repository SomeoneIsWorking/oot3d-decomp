// OoT3D decomp @ 00351878  name=FUN_00351878  size=64

uint FUN_00351878(int param_1,uint param_2)

{
  if ((*(uint *)(DAT_003518b8 + *(short *)(param_1 + 0x18a) * 8) &
      1 << (param_2 & 0xff) & 0x3fffffffU) != 0) {
    if ((int)*(short *)(param_1 + 0x18c) == param_2) {
      param_2 = 0xffffffff;
    }
    else {
      param_2 = param_2 | 0x80000000;
    }
    return param_2;
  }
  return 0;
}


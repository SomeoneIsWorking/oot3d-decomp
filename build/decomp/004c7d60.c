// OoT3D decomp @ 004c7d60  name=FUN_004c7d60  size=124

undefined4 FUN_004c7d60(int param_1)

{
  if (param_1 != 0x3f800000) {
    if (param_1 == 0x40000000) {
      return 1;
    }
    if (param_1 == 0x40800000) {
      return 2;
    }
    if (param_1 == 0x41000000) {
      return 3;
    }
    if (param_1 == 0x3e800000) {
      return 6;
    }
    if (param_1 == 0x3f000000) {
      return 7;
    }
  }
  return 0;
}

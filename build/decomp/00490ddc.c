// OoT3D decomp @ 00490ddc  name=FUN_00490ddc  size=32

uint FUN_00490ddc(uint param_1,uint param_2)

{
  if (param_1 < 0x3a) {
    param_1 = param_1 - 0x30;
  }
  if (0x40 < (param_1 & 0xffffffdf)) {
    param_1 = (param_1 & 0xffffffdf) - 0x37;
  }
  if (param_2 <= param_1) {
    param_1 = 0xffffffff;
  }
  return param_1;
}

// OoT3D decomp @ 0036405c  name=FUN_0036405c  size=40

uint FUN_0036405c(int param_1,uint param_2)

{
  uint uVar1;

  if ((int)param_2 < 0x20) {
    uVar1 = *(uint *)(param_1 + 0x2244) & 1 << (param_2 & 0xff);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2248) & 1 << (param_2 - 0x20 & 0xff);
  }
  return uVar1;
}

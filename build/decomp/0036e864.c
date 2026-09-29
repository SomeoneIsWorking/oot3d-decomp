// OoT3D decomp @ 0036e864  name=FUN_0036e864  size=40

uint FUN_0036e864(int param_1,uint param_2)

{
  uint uVar1;

  if ((int)param_2 < 0x20) {
    uVar1 = *(uint *)(param_1 + 0x2228) & 1 << (param_2 & 0xff);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x222c) & 1 << (param_2 - 0x20 & 0xff);
  }
  return uVar1;
}

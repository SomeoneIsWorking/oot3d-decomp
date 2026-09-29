// OoT3D decomp @ 001f3338  name=FUN_001f3338  size=100

void FUN_001f3338(int param_1)

{
  byte bVar1;

  bVar1 = *(byte *)(param_1 + 0x668);
  if (7 < bVar1) {
    bVar1 = 7;
  }
  *(byte *)(param_1 + 0x668) = bVar1;
  FUN_0035e3a4(param_1 + 0x498,0,*(undefined1 *)(param_1 + 0x668));
  FUN_0035e330(param_1 + 0x498);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001f339c,0,param_1,0);
  return;
}

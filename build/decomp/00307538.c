// OoT3D decomp @ 00307538  name=FUN_00307538  size=140

void FUN_00307538(int param_1)

{
  uint extraout_r1;
  uint uVar1;
  bool bVar2;

  FUN_002e6998(param_1 + 8);
  bVar2 = *(int *)(param_1 + 0x20) != 0;
  uVar1 = extraout_r1;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x28);
  }
  if (bVar2 && uVar1 != 0) {
    FUN_0034fc68();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_00343280(param_1 + 0x34,0x1000);
  FUN_00343280(param_1 + 0x1038,DAT_003075c4);
  *(undefined1 *)(param_1 + 0x1034) = 0;
  *(undefined1 *)(param_1 + 0x16ec) = 0;
  *(undefined4 *)(param_1 + 0x1708) = 0;
  *(undefined4 *)(param_1 + 0x170c) = 0;
  *(undefined4 *)(param_1 + 0x16f0) = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  *(undefined4 *)(param_1 + 0x16f8) = 0;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x1700) = 0;
  *(undefined4 *)(param_1 + 0x1704) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

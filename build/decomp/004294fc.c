// OoT3D decomp @ 004294fc  name=FUN_004294fc  size=68

int FUN_004294fc(int param_1)

{
  uint extraout_r1;
  uint uVar1;
  bool bVar2;

  FUN_00441108();
  *(undefined4 *)(param_1 + 0x728) = DAT_00429540;
  bVar2 = *(int *)(param_1 + 0x72c) != 0;
  uVar1 = extraout_r1;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x734);
  }
  if (bVar2 && uVar1 != 0) {
    FUN_0034fc68();
  }
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined1 *)(param_1 + 0x734) = 0;
  return param_1;
}

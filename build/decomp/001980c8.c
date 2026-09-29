// OoT3D decomp @ 001980c8  name=FUN_001980c8  size=56

void FUN_001980c8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + -1;
  uVar2 = FUN_0036ae04();
  uVar4 = (uint)*(byte *)(param_1 + 2);
  uVar3 = uVar2 - uVar4;
  bVar5 = uVar2 == uVar4;
  uVar1 = uVar2;
  if (!bVar5) {
    uVar3 = (uint)*(short *)(param_1 + 0x1c0);
    uVar1 = uVar3;
  }
  if ((bVar5 || uVar1 == 0) || (int)uVar3 < 0 != (bVar5 && SBORROW4(uVar2,uVar4))) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00198100;
  }
  return;
}

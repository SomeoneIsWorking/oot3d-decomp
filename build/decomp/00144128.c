// OoT3D decomp @ 00144128  name=FUN_00144128  size=132

void FUN_00144128(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  if ((((uint)*(ushort *)(param_1 + 0x1c) << 0x19) >> 0x1d == 1) &&
     (*(char *)(param_1 + 0x1c6) != '\0')) {
    uVar2 = FUN_0036ae04();
    uVar4 = (uint)*(byte *)(param_1 + 2);
    uVar3 = uVar2 - uVar4;
    bVar5 = uVar2 == uVar4;
    uVar1 = uVar2;
    if (!bVar5) {
      uVar3 = (uint)*(short *)(param_1 + 0x1c4);
      uVar1 = uVar3;
    }
    if ((!bVar5 && uVar1 != 0) && (int)uVar3 < 0 == (bVar5 && SBORROW4(uVar2,uVar4))) {
      return;
    }
  }
  if ((*(uint *)(param_2 + 0xf8) & 1) != 0) {
    *(short *)(param_1 + 0x1c8) = *(short *)(param_1 + 0x1c8) + -1;
  }
  if (0 < *(short *)(param_1 + 0x1c8)) {
    return;
  }
  FUN_001cf100(param_1);
  FUN_00375bcc(param_1,DAT_001441ac);
  return;
}

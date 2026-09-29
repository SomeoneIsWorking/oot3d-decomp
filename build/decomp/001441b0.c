// OoT3D decomp @ 001441b0  name=FUN_001441b0  size=108

void FUN_001441b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;

  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 4) {
    uVar2 = FUN_0036ae04();
    uVar4 = (uint)*(byte *)(param_1 + 2);
    uVar3 = uVar2 - uVar4;
    bVar5 = uVar2 == uVar4;
    uVar1 = uVar2;
    if (!bVar5) {
      uVar3 = (uint)*(short *)(DAT_0014421c + param_1);
      uVar1 = uVar3;
    }
    if ((!bVar5 && uVar1 != 0) && (int)uVar3 < 0 == (bVar5 && SBORROW4(uVar2,uVar4))) {
      return;
    }
  }
  fVar6 = *(float *)(param_1 + 0x230) + DAT_00144220;
  *(float *)(param_1 + 0x230) = fVar6;
  if ((int)fVar6 < 0x40000000) {
    return;
  }
  FUN_001a23d8(param_1);
  FUN_00375bcc(param_1,DAT_00144224);
  return;
}

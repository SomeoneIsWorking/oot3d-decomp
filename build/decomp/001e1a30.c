// OoT3D decomp @ 001e1a30  name=FUN_001e1a30  size=132

void FUN_001e1a30(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  *(ushort *)(param_1 + 0x1a8) = *(ushort *)(param_1 + 0x1c) >> 0xc;
  *(ushort *)(param_1 + 0x1aa) = (ushort)(((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1d);
  *(ushort *)(param_1 + 0x1ac) = (ushort)(((uint)*(ushort *)(param_1 + 0x1c) << 0x19) >> 0x1e);
  uVar3 = *(ushort *)(param_1 + 0x1c) & 0x1f;
  *(short *)(param_1 + 0x1ae) = (short)uVar3;
  iVar2 = (int)*(short *)(param_1 + 0x1aa);
  bVar4 = SBORROW4(iVar2,4);
  iVar1 = iVar2 + -4;
  if (iVar2 < 4) {
    bVar4 = SBORROW4(uVar3,5);
    iVar1 = uVar3 - 5;
  }
  if ((iVar1 < 0 != bVar4) && ((uVar3 == 2 || uVar3 == 3) || uVar3 == 4)) {
    FUN_003510b0(param_1,DAT_001e1ab4);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001e1ab8;
    return;
  }
  FUN_00374428();
  return;
}

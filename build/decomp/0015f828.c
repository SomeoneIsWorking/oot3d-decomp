// OoT3D decomp @ 0015f828  name=FUN_0015f828  size=240

void FUN_0015f828(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint in_fpscr;

  uVar1 = DAT_0015f91c;
  if ((*(short *)(param_1 + 0xc28) == 0) && ((*(ushort *)(param_1 + 0xc3c) & 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0xbac) = DAT_0015f918;
    *(undefined4 *)(param_1 + 0xbb0) = uVar1;
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffef;
    uVar1 = FUN_0036ae14(param_1 + 0x1a4,7);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0015f924,DAT_0015f924,uVar1,DAT_0015f920,param_1 + 0x1a4,7,2);
    *(undefined2 *)(param_1 + 0xc28) = 0x4b;
    FUN_0035239c(0x1e);
    FUN_00352318(DAT_0015f928);
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 0x200;
    FUN_003725e0(param_2);
    FUN_0036e980(param_2,param_1,1);
  }
  uVar2 = FUN_003769d8(param_2 + 0x28a0);
  bVar4 = uVar2 == 5;
  if (bVar4) {
    uVar2 = (uint)*(ushort *)(param_1 + 0xc3c);
  }
  if ((bVar4 && (uVar2 & 0x20) == 0) && (iVar3 = FUN_00346964(param_2), iVar3 != 0)) {
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 0x20;
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  return;
}

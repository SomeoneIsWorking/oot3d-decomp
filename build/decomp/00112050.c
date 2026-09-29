// OoT3D decomp @ 00112050  name=FUN_00112050  size=148

void FUN_00112050(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_0036be34(param_2,DAT_001120e4);
    uVar2 = FUN_0036ae14(param_1 + 0x1fc,2);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001120f0,DAT_001120ec,uVar2,DAT_001120e8,param_1 + 0x1fc,2);
    *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) & 0xfffd;
    *(undefined4 *)(param_1 + 0x83c) = DAT_001120f4;
  }
  *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) | 1;
  return;
}

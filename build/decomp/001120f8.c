// OoT3D decomp @ 001120f8  name=FUN_001120f8  size=180

void FUN_001120f8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;

  iVar3 = *(int *)(DAT_001121ac + param_2);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    *(undefined4 *)(param_1 + 0x83c) = DAT_001121b0;
    FUN_00370778(param_2);
    *(undefined1 *)(DAT_001121b4 + iVar3) = 0;
    *(undefined2 *)(param_1 + 0x83a) = 0x10;
    uVar2 = FUN_0036ae14(param_1 + 0x1fc,3);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001121c0,DAT_001121bc,uVar2,DAT_001121b8,param_1 + 0x1fc,3,0);
    *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) & 0xfffd;
  }
  *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) | 1;
  return;
}

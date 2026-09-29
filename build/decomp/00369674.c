// OoT3D decomp @ 00369674  name=FUN_00369674  size=100

void FUN_00369674(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = DAT_003696dc;
  *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(DAT_003696d8 + param_2 * 4);
  uVar2 = FUN_0036ae14(param_1 + 0x1fc,*(undefined4 *)(iVar1 + param_2 * 4));
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003696e8,DAT_003696e4,uVar2,DAT_003696e0,param_1 + 0x1fc,
               *(undefined4 *)(iVar1 + param_2 * 4),*(undefined1 *)(iVar1 + 0x24 + param_2));
  *(ushort *)(param_1 + 0x978) = *(ushort *)(param_1 + 0x978) & 0xfffd;
  return;
}

// OoT3D decomp @ 003af608  name=FUN_003af608  size=116

void FUN_003af608(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  *(ushort *)(param_1 + 0x8a8) = *(ushort *)(param_1 + 0x8a8) | 1;
  iVar1 = FUN_00369a48(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x8b0) = DAT_003af67c;
    uVar2 = FUN_0036ae14(param_1 + 0x1fc,2);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003af688,uVar2,DAT_003af684,DAT_003af680,param_1 + 0x1fc,2);
    *(undefined4 *)(param_1 + 0x8ac) = 2;
    *(undefined4 *)(param_1 + 0x8b4) = DAT_003af68c;
  }
  return;
}

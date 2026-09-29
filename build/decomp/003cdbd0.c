// OoT3D decomp @ 003cdbd0  name=FUN_003cdbd0  size=96

void FUN_003cdbd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  *(ushort *)(param_1 + 0x8a8) = *(ushort *)(param_1 + 0x8a8) | 1;
  iVar1 = FUN_00369a48(param_1);
  if (iVar1 != 0) {
    uVar2 = DAT_003cdc34;
    if ((*(short *)(DAT_003cdc30 + param_1) == 0x6001) ||
       (uVar2 = DAT_003cdc3c, *(short *)(DAT_003cdc30 + param_1) == 0x6018)) {
      *(undefined4 *)(param_1 + 0x8b0) = uVar2;
      return;
    }
    *(undefined4 *)(param_1 + 0x8b0) = DAT_003cdc38;
  }
  return;
}

// OoT3D decomp @ 0028a848  name=FUN_0028a848  size=152

void FUN_0028a848(int param_1,undefined4 param_2)

{
  ushort uVar1;

  FUN_0037572c(DAT_0028a8e0);
  *(undefined4 *)(param_1 + 0xfc) = DAT_0028a8e4;
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    FUN_00372f38(param_1,param_2,param_1 + 0x1a4,0xd,0);
    return;
  }
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      FUN_00372f38(param_1,param_2,param_1 + 0x1a4,0xc,0);
    }
    return;
  }
  FUN_00372f38(param_1,param_2,param_1 + 0x1a4,0xb,0);
  return;
}

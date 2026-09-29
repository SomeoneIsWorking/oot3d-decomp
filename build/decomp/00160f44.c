// OoT3D decomp @ 00160f44  name=FUN_00160f44  size=112

void FUN_00160f44(int param_1)

{
  if ((*(ushort *)(param_1 + 0x135c) & 1) != 0) {
    *(undefined2 *)(param_1 + 0x135e) = 3;
    FUN_0035ff0c(DAT_00160fb4,param_1,DAT_00160fbc,DAT_00160fb8,param_1 + 0x1fc,param_1 + 0xaa0,2);
    *(undefined4 *)(param_1 + 0x1358) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 100) = DAT_00160fc0;
  }
  *(ushort *)(param_1 + 0x135c) = *(ushort *)(param_1 + 0x135c) | 8;
  return;
}

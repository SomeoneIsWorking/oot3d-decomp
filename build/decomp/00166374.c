// OoT3D decomp @ 00166374  name=FUN_00166374  size=244

void FUN_00166374(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = DAT_00166468;
  *(undefined4 *)(param_1 + 0x70) = DAT_0016646c;
  FUN_00372d4c(DAT_00166478,DAT_00166470,param_1 + 0xbc,DAT_00166474);
  FUN_00372f38(param_1,param_2,param_1 + 0x840,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1fc,0,3,param_1 + 0x280,param_1 + 0x558,0xe);
  FUN_0036e734(param_1 + 0x1fc,3);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0016647c);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(DAT_00166480,param_1);
  *(undefined4 *)(param_1 + 0x83c) = DAT_00166484;
  *(undefined2 *)(param_1 + 0x836) = 0;
  *(undefined2 *)(param_1 + 0x838) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  if ((*(ushort *)(DAT_00166488 + 10) & 1) != 0) {
    *(undefined2 *)(param_1 + 0x836) = 4;
  }
  return;
}

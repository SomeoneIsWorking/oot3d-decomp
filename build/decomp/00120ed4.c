// OoT3D decomp @ 00120ed4  name=FUN_00120ed4  size=84

void FUN_00120ed4(int param_1)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 != 0) {
    FUN_00374a58(DAT_00120f28,param_1 + 0x1a4,4);
    *(undefined2 *)(param_1 + 0x8b0) = 0;
    *(undefined4 *)(param_1 + 0x8ac) = DAT_00120f2c;
  }
  FUN_00373500(*(undefined4 *)(param_1 + 0xc),DAT_00120f34,DAT_00120f30,param_1 + 0x2c);
  return;
}

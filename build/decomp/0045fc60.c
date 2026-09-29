// OoT3D decomp @ 0045fc60  name=FUN_0045fc60  size=116

void FUN_0045fc60(int param_1)

{
  int iVar1;

  FUN_002d6e20(1,param_1 + 0x1bc);
  FUN_003445d4(param_1);
  if (((*DAT_0045fcd4 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0045fcd4), iVar1 != 0)) {
    FUN_0036788c(DAT_0045fcd8);
  }
  FUN_00348904(*(undefined4 *)(DAT_0045fce4 + 0x47c),*(undefined4 *)(param_1 + 0x1b8));
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  return;
}

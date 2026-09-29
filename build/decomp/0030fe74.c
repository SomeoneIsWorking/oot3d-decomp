// OoT3D decomp @ 0030fe74  name=FUN_0030fe74  size=92

void FUN_0030fe74(int param_1)

{
  FUN_00310040(1);
  FUN_0031012c(0);
  FUN_0031002c(0);
  FUN_00310118(0);
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  FUN_0030ff04(2,param_1 + 0x60);
  FUN_0030266c(param_1 + 0x50);
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_003101dc(DAT_0030ff00);
    FUN_002ea87c();
    FUN_00449dbc();
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}

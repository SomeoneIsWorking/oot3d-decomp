// OoT3D decomp @ 0019677c  name=FUN_0019677c  size=108

void FUN_0019677c(int param_1)

{
  int iVar1;

  FUN_0036e168(DAT_001967f4,DAT_001967f0,DAT_001967ec,DAT_001967e8,param_1 + 0x2c);
  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x231) == '\0')) {
    FUN_00374a58(DAT_001967fc,param_1 + 0x1a4,
                 *(undefined4 *)(DAT_001967f8 + *(short *)(param_1 + 0x1c) * 4));
    *(undefined1 *)(param_1 + 0x231) = 1;
  }
  FUN_00373264(param_1,DAT_00196800);
  return;
}

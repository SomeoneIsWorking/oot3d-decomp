// OoT3D decomp @ 0023872c  name=FUN_0023872c  size=72

void FUN_0023872c(int param_1)

{
  FUN_003731e0(param_1 + 0x1a4);
  if (*(char *)(param_1 + 0x231) != '\0') {
    FUN_00374a58(DAT_00238774,param_1 + 0x1a4,0x13);
    *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) & 0xfe;
    *(undefined4 *)(param_1 + 0x22c) = DAT_00238778;
  }
  return;
}

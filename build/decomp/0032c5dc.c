// OoT3D decomp @ 0032c5dc  name=FUN_0032c5dc  size=128

void FUN_0032c5dc(uint param_1)

{
  char *pcVar1;

  pcVar1 = DAT_0032c65c;
  if ((int)param_1 < 0) {
    FUN_00485560(1,0);
    *pcVar1 = '\0';
  }
  else if ((int)param_1 < 0x12) {
    FUN_002d3b5c(DAT_0032c660 + -0x58,DAT_0032c660 + param_1 * 0x10);
    if (*pcVar1 == '\0') {
      FUN_00485a14(1,DAT_0032c664);
      FUN_00309d64(1,DAT_0032c668,0);
      *pcVar1 = '\x01';
    }
    FUN_00477c70(param_1 & 0xff);
    *(uint *)(pcVar1 + 4) = param_1;
    return;
  }
  return;
}

// OoT3D decomp @ 0047e2d0  name=FUN_0047e2d0  size=68

void FUN_0047e2d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x81) == '\0') {
    FUN_00485d68(param_1,param_2);
    *(undefined4 *)(param_1 + 0x60) = param_2;
    *(undefined4 *)(param_1 + 0x5c) = param_3;
    *(undefined1 *)(param_1 + 0x81) = 1;
    *(undefined1 *)(param_1 + 0x82) = 0;
  }
  return;
}

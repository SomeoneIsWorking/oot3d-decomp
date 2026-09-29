// OoT3D decomp @ 00485f60  name=FUN_00485f60  size=124

undefined4 * FUN_00485f60(undefined4 *param_1)

{
  *param_1 = DAT_00485fd8;
  if (*(char *)(param_1 + 0x5a) != '\0') {
    if ((param_1[0x55] & 0xfffffffe) != 0) {
      FUN_0030d614(param_1[0x55] & 0xfffffffe);
      param_1[0x55] = 0;
    }
    FUN_0030c488(param_1 + 0x43);
    *(undefined1 *)(param_1 + 0x5a) = 0;
  }
  FUN_0030c470(param_1);
  if ((param_1[0x55] & 0xfffffffe) != 0) {
    FUN_0030d614(param_1[0x55] & 0xfffffffe);
    param_1[0x55] = 0;
  }
  return param_1;
}

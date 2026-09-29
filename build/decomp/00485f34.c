// OoT3D decomp @ 00485f34  name=FUN_00485f34  size=44

int FUN_00485f34(int param_1)

{
  int iVar1;

  FUN_00313bdc(param_1 + 0x430);
  iVar1 = FUN_002d4878(param_1 + 0x388);
  iVar1 = FUN_002d4864(iVar1 + -0x21c);
  *(undefined4 *)(iVar1 + -0x16c) = DAT_00485fd8;
  if (*(char *)(iVar1 + -4) != '\0') {
    if ((*(uint *)(iVar1 + -0x18) & 0xfffffffe) != 0) {
      FUN_0030d614(*(uint *)(iVar1 + -0x18) & 0xfffffffe);
      *(undefined4 *)(iVar1 + -0x18) = 0;
    }
    FUN_0030c488(iVar1 + -0x60);
    *(undefined1 *)(iVar1 + -4) = 0;
  }
  FUN_0030c470((undefined4 *)(iVar1 + -0x16c));
  if ((*(uint *)(iVar1 + -0x18) & 0xfffffffe) != 0) {
    FUN_0030d614(*(uint *)(iVar1 + -0x18) & 0xfffffffe);
    *(undefined4 *)(iVar1 + -0x18) = 0;
  }
  return iVar1 + -0x16c;
}

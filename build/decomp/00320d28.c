// OoT3D decomp @ 00320d28  name=FUN_00320d28  size=44

void FUN_00320d28(int param_1)

{
  undefined1 uVar1;

  if (*(byte *)(param_1 + 0x70) < 2) {
    uVar1 = 4;
  }
  else {
    if (3 < *(byte *)(param_1 + 0x70)) {
      *(undefined1 *)(param_1 + 0x71) = 5;
      return;
    }
    uVar1 = 6;
  }
  *(undefined1 *)(param_1 + 0x71) = uVar1;
  return;
}

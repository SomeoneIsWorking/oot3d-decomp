// OoT3D decomp @ 0035eff0  name=FUN_0035eff0  size=140

void FUN_0035eff0(int param_1)

{
  undefined4 uVar1;

  FUN_00373d40(param_1 + 0x1e0,0xb);
  FUN_003ff758(param_1 + 0x28,DAT_0035f07c);
  *(undefined4 *)(param_1 + 100) = DAT_0035f080;
  uVar1 = DAT_0035f084;
  *(undefined4 *)(param_1 + 0x1c6c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined1 *)(param_1 + 0x1c4c) = 0x17;
  *(undefined1 *)(param_1 + 0x1dca) = 0;
  FUN_00375bcc(param_1,DAT_0035f088);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(byte *)(param_1 + 0x1cf8) = *(byte *)(param_1 + 0x1cf8) & 0xfb;
  *(undefined4 *)(param_1 + 0x1c50) = DAT_0035f08c;
  *(undefined1 *)(param_1 + 0x1d05) = 0x20;
  if (*(char *)(param_1 + 0x1c62) != '\0') {
    *(undefined1 *)(param_1 + 0x1c62) = 3;
  }
  return;
}

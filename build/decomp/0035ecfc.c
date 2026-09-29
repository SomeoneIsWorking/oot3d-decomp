// OoT3D decomp @ 0035ecfc  name=FUN_0035ecfc  size=96

void FUN_0035ecfc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_00373d40(param_1 + 0x1e0,0xd);
  FUN_003ff758(param_1 + 0x28,DAT_0035ed5c);
  uVar1 = DAT_0035ed60;
  *(byte *)(param_1 + 0x1cf8) = *(byte *)(param_1 + 0x1cf8) & 0xfb;
  uVar2 = DAT_0035ed64;
  *(undefined1 *)(param_1 + 0x1c4c) = 0x10;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x1c50) = uVar2;
  *(undefined1 *)(param_1 + 0x1d05) = 0x10;
  if (*(char *)(param_1 + 0x1c62) != '\0') {
    *(undefined1 *)(param_1 + 0x1c62) = 3;
  }
  return;
}

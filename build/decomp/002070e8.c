// OoT3D decomp @ 002070e8  name=FUN_002070e8  size=64

void FUN_002070e8(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c0));
  if ((iVar1 != 0) && (iVar1 = FUN_00372aa8(param_1 + 0x1c6,DAT_00207128,0x14), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0020712c;
  }
  return;
}

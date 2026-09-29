// OoT3D decomp @ 003532e8  name=FUN_003532e8  size=36

void FUN_003532e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_0035330c;
  *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  *(undefined4 *)(param_1 + 0x1b4) = param_2;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  return;
}

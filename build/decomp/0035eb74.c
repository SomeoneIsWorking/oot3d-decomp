// OoT3D decomp @ 0035eb74  name=FUN_0035eb74  size=56

void FUN_0035eb74(int param_1,uint param_2)

{
  int iVar1;

  iVar1 = 0;
  if (param_1 != 0) {
    param_2 = (uint)*(byte *)(param_1 + 0x25e);
    iVar1 = param_2 - 0x10;
  }
  if (iVar1 < 0 != (param_1 != 0 && SBORROW4(param_2,0x10))) {
    *(undefined1 *)(param_1 + param_2 * 0x24) = 0;
    *(undefined4 *)(param_1 + param_2 * 0x24 + 4) = 1;
    *(char *)(param_1 + 0x25e) = *(char *)(param_1 + 0x25e) + '\x01';
  }
  return;
}

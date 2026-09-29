// OoT3D decomp @ 0035f090  name=FUN_0035f090  size=108

void FUN_0035f090(int param_1)

{
  undefined4 uVar1;

  FUN_00373d40(param_1 + 0x1e0,5);
  FUN_00375bcc(param_1,DAT_0035f0fc);
  *(undefined1 *)(param_1 + 0x1c4c) = 0x14;
  *(undefined4 *)(param_1 + 0x1c6c) = 8;
  *(undefined1 *)(param_1 + 0x1dca) = 0;
  *(undefined4 *)(param_1 + 0x1c50) = DAT_0035f100;
  if (*(char *)(param_1 + 0x1c62) != '\0') {
    *(undefined1 *)(param_1 + 0x1c62) = 3;
  }
  uVar1 = DAT_0035f104;
  if (*(short *)(param_1 + 0x1c) != 3) {
    uVar1 = DAT_0035f108;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  return;
}

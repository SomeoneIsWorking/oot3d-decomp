// OoT3D decomp @ 0045fda0  name=FUN_0045fda0  size=104

void FUN_0045fda0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (0 < *(short *)(param_2 + iVar1 * 0x80 + 4)) {
      if (*(int *)(param_2 + iVar1 * 0x80 + 0xc) != 0) {
        FUN_002f70c4(param_2 + iVar1 * 0x80 + 0x14);
        *(undefined4 *)(param_2 + iVar1 * 0x80 + 0xc) = 0;
      }
      FUN_0034fc6c(*(undefined4 *)(param_2 + iVar1 * 0x80 + 8));
      *(undefined4 *)(param_2 + iVar1 * 0x80 + 8) = 0;
      *(undefined2 *)(param_2 + iVar1 * 0x80 + 4) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x13);
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}

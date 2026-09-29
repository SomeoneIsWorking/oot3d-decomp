// OoT3D decomp @ 002aa244  name=FUN_002aa244  size=72

void FUN_002aa244(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((*(short *)(param_1 + iVar1 * 2 + 0x1be) == 0) &&
       (*(int *)(param_1 + iVar1 * 4 + 0x21c) != 0)) {
      FUN_00374428();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_002aa28c;
  return;
}

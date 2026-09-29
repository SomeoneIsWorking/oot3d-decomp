// OoT3D decomp @ 002b6b9c  name=FUN_002b6b9c  size=100

void FUN_002b6b9c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 1;
  do {
    if (*(int *)(param_1 + iVar2 * 4 + 0xa54) != 0) {
      iVar1 = iVar2;
      if (iVar2 == -1) {
        iVar1 = (int)*(short *)(param_1 + 0xa64);
      }
      iVar3 = param_1 + iVar1 * 4;
      iVar1 = *(int *)(iVar3 + 0xa54);
      if (iVar1 != 0) {
        FUN_00320da0(iVar1,0x100);
        *(undefined4 *)(iVar3 + 0xa54) = 0;
      }
    }
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 4);
  *(undefined2 *)(param_1 + 0xa64) = 0;
  return;
}

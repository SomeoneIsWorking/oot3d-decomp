// OoT3D decomp @ 0036e9b8  name=FUN_0036e9b8  size=224

void FUN_0036e9b8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (param_2 == -1) {
    param_2 = (int)*(short *)(param_1 + 0xa64);
  }
  if (param_2 == -1) {
    param_2 = (int)*(short *)(param_1 + 0xa64);
  }
  iVar2 = param_1 + param_2 * 4;
  iVar1 = *(int *)(iVar2 + 0xa54);
  if (iVar1 != 0) {
    FUN_00320da0(iVar1,0x100,param_3,param_4,param_4);
    *(undefined4 *)(iVar2 + 0xa54) = 0;
  }
  iVar1 = 1;
  do {
    if (*(int *)(param_1 + iVar1 * 4 + 0xa54) != 0) {
      iVar2 = iVar1;
      if (iVar1 == -1) {
        iVar2 = (int)*(short *)(param_1 + 0xa64);
      }
      iVar3 = param_1 + iVar2 * 4;
      iVar2 = *(int *)(iVar3 + 0xa54);
      if (iVar2 != 0) {
        FUN_00320da0(iVar2,0x100);
        *(undefined4 *)(iVar3 + 0xa54) = 0;
      }
    }
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 4);
  if (param_3 < 1) {
    *(undefined2 *)(param_1 + 0xa64) = 0;
    FUN_00320da0(*(undefined4 *)(param_1 + 0xa54),7);
    *(undefined2 *)(*(int *)(param_1 + 0xa54) + 0x1aa) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xa54) + 0x196) = 0;
    return;
  }
  FUN_00371808(param_1,0x3fc,param_3,0,0);
  return;
}

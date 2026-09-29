// OoT3D decomp @ 002f8b80  name=FUN_002f8b80  size=352

void FUN_002f8b80(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  if (0 < param_4) {
    do {
      iVar1 = param_5 * 0x10 + iVar2 * 0x10;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 4) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 8) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0xc) = param_1;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x10) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x14) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x18) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x1c) = param_1;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x20) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x24) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x28) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x2c) = param_1;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x30) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x34) = param_2;
      *(undefined4 *)(*(int *)(param_3 + 0x18) + iVar1 * 4 + 0x38) = param_2;
      *(undefined4 *)(iVar1 * 4 + 0x3c + *(int *)(param_3 + 0x18)) = param_1;
    } while (iVar2 < param_4);
  }
  return;
}

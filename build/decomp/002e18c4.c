// OoT3D decomp @ 002e18c4  name=FUN_002e18c4  size=404

void FUN_002e18c4(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_002e1a58;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = param_4 * 0x10 + iVar3 * 0x10;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4) = *param_2;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 4) = param_2[1];
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 8) = param_2[2];
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0xc) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x10) = *param_2;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x14) = param_2[1];
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x18) = param_2[2];
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x1c) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x20) = *param_2;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x24) = param_2[1];
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x28) = param_2[2];
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x2c) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x30) = *param_2;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x34) = param_2[1];
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x38) = param_2[2];
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 * 4 + 0x3c + *(int *)(param_1 + 0x18)) = uVar1;
    } while (iVar3 < param_3);
  }
  return;
}

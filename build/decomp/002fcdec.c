// OoT3D decomp @ 002fcdec  name=FUN_002fcdec  size=400

void FUN_002fcdec(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_002fcf7c;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < param_3) {
    do {
      iVar2 = param_4 * 0x10 + iVar5 * 0x10;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 4) = uVar1;
      puVar3 = (undefined4 *)(param_2 + iVar4 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 8) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0xc) = *puVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x10) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x14) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x18) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x1c) = *puVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x20) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x24) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x28) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x2c) = *puVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x30) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x34) = uVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x38) = uVar1;
      *(undefined4 *)(iVar2 * 4 + 0x3c + *(int *)(param_1 + 0x18)) = *puVar3;
    } while (iVar5 < param_3);
  }
  return;
}


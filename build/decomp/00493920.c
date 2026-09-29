// OoT3D decomp @ 00493920  name=FUN_00493920  size=108

void FUN_00493920(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x34) = *param_2;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(param_1 + 0x44) = param_2[4];
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x54) = param_2[8];
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0x48) = *param_2;
  *(undefined4 *)(iVar1 + 0x4c) = uVar2;
  *(undefined4 *)(iVar1 + 0x50) = uVar3;
  *(undefined4 *)(iVar1 + 0x54) = uVar4;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(iVar1 + 0x58) = param_2[4];
  *(undefined4 *)(iVar1 + 0x5c) = uVar2;
  *(undefined4 *)(iVar1 + 0x60) = uVar3;
  *(undefined4 *)(iVar1 + 100) = uVar4;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x68) = param_2[8];
  *(undefined4 *)(iVar1 + 0x6c) = uVar2;
  *(undefined4 *)(iVar1 + 0x70) = uVar3;
  *(undefined4 *)(iVar1 + 0x74) = uVar4;
  *(ushort *)(iVar1 + 0x7c) = *(ushort *)(iVar1 + 0x7c) | 1;
  return;
}

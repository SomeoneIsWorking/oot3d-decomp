// OoT3D decomp @ 004267b4  name=FUN_004267b4  size=188

void FUN_004267b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_38 [12];

  if (-1 < *(int *)(param_1 + 0x10)) {
    FUN_002f5330(param_1 + *(int *)(param_1 + 0x10) * 0x1c + 0x1120,local_38);
    iVar2 = 0;
    do {
      iVar3 = *(int *)(param_1 + (iVar2 + 0x3c) * 4 + 0xaf8);
      iVar1 = iVar2 + 1;
      uVar4 = local_38[iVar2 * 3 + 1];
      uVar5 = local_38[iVar2 * 3 + 2];
      *(undefined4 *)(iVar3 + 0x80) = local_38[iVar2 * 3];
      *(undefined4 *)(iVar3 + 0x84) = uVar4;
      *(undefined4 *)(iVar3 + 0x88) = uVar5;
      iVar2 = iVar1;
    } while (iVar1 < 4);
    iVar2 = 0;
    do {
      iVar3 = *(int *)(param_1 + (iVar2 + 0x41) * 4 + 0xaf8);
      iVar1 = iVar2 + 1;
      uVar4 = local_38[iVar2 * 3 + 1];
      uVar5 = local_38[iVar2 * 3 + 2];
      *(undefined4 *)(iVar3 + 0x80) = local_38[iVar2 * 3];
      *(undefined4 *)(iVar3 + 0x84) = uVar4;
      *(undefined4 *)(iVar3 + 0x88) = uVar5;
      iVar2 = iVar1;
    } while (iVar1 < 4);
  }
  return;
}

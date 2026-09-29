// OoT3D decomp @ 00429544  name=FUN_00429544  size=188

void FUN_00429544(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_38 [12];

  if (-1 < *(int *)(param_1 + 0x3e4)) {
    FUN_002f2fdc(param_1 + *(int *)(param_1 + 0x3e4) * 0x1c + 0x1758,local_38);
    iVar1 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x918 + (iVar1 + 0x55) * 4 + 0x818);
      uVar3 = local_38[iVar1 * 3 + 1];
      uVar4 = local_38[iVar1 * 3 + 2];
      *(undefined4 *)(iVar2 + 0x80) = local_38[iVar1 * 3];
      iVar1 = iVar1 + 1;
      *(undefined4 *)(iVar2 + 0x84) = uVar3;
      *(undefined4 *)(iVar2 + 0x88) = uVar4;
    } while (iVar1 < 4);
    iVar1 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x918 + (iVar1 + 0x5a) * 4 + 0x818);
      uVar3 = local_38[iVar1 * 3 + 1];
      uVar4 = local_38[iVar1 * 3 + 2];
      *(undefined4 *)(iVar2 + 0x80) = local_38[iVar1 * 3];
      iVar1 = iVar1 + 1;
      *(undefined4 *)(iVar2 + 0x84) = uVar3;
      *(undefined4 *)(iVar2 + 0x88) = uVar4;
    } while (iVar1 < 4);
  }
  return;
}

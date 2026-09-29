// OoT3D decomp @ 0030b728  name=FUN_0030b728  size=76

void FUN_0030b728(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  iVar1 = (**(code **)(*(int *)param_2[2] + 8))((int *)param_2[2],param_2[4]);
  if (iVar1 != 0) {
    FUN_0034338c(iVar1,param_2[3],param_2[4]);
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    *(undefined4 *)(param_1 + 0x1c) = *param_2;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(int *)(param_1 + 0x28) = iVar1;
  }
  return;
}

// OoT3D decomp @ 004083bc  name=FUN_004083bc  size=152

undefined4 FUN_004083bc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;

  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    return 0;
  }
  FUN_0030a5fc(param_1 + 0x1d4,*param_2);
  *(int *)(param_1 + 0x1b0) = param_1 + 0x1d4;
  uVar1 = DAT_00408454;
  *(int *)(param_1 + 0x1b4) = iVar4;
  *(undefined4 *)(param_1 + 0x1b8) = uVar1;
  *(int *)(param_1 + 0x1bc) = param_1;
  *(undefined4 *)(param_1 + 0x1c0) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c4) = *param_2;
  uVar1 = ((undefined4 *)param_2[2])[1];
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)param_2[2];
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  *(undefined4 *)(param_1 + 0x1d0) = *param_3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar5 = param_3[4];
  *(undefined4 *)(param_1 + 0x434) = *param_3;
  *(undefined4 *)(param_1 + 0x438) = uVar1;
  *(undefined4 *)(param_1 + 0x43c) = uVar2;
  *(undefined4 *)(param_1 + 0x440) = uVar3;
  *(undefined4 *)(param_1 + 0x444) = uVar5;
  uVar1 = FUN_0030c8bc();
  FUN_0030ab9c(uVar1,param_1 + 0x198,1);
  return 1;
}

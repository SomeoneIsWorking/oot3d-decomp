// OoT3D decomp @ 004a1630  name=FUN_004a1630  size=200

undefined4 FUN_004a1630(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int local_18;
  undefined4 local_14;
  undefined1 auStack_10 [4];

  if (param_2 == (int *)0x0) {
    return 0x40;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_18 = *(int *)(param_1 + 0x44);
    local_14 = *(undefined4 *)(local_18 + 8);
    FUN_00304a60(auStack_10,param_1 + 0x30,&local_14,&local_18);
    FUN_003049b0(param_1 + 0x50);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x40;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  *(int **)(param_1 + 0x1c) = param_2;
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2);
  if (iVar2 == 0) {
    return 0x41;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  *(undefined1 *)(param_1 + 0x2f) = uVar1;
  FUN_002bf00c(param_1);
  return 0;
}

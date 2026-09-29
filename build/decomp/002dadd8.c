// OoT3D decomp @ 002dadd8  name=FUN_002dadd8  size=152

undefined4 FUN_002dadd8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;

  FUN_002f1328();
  FUN_00371738(param_1 + 4,param_2,0xcc);
  *(undefined4 *)(param_1 + 0xe4) = param_3;
  *(int **)(param_1 + 0xd0) = param_4;
  iVar1 = (**(code **)(*param_4 + 8))(param_4,0x800);
  *(int *)(param_1 + 0xd4) = iVar1;
  if (iVar1 != 0) {
    FUN_00343280(iVar1,0x800);
    iVar1 = (**(code **)(**(int **)(param_1 + 0xd0) + 8))(*(int **)(param_1 + 0xd0),0x4000);
    *(int *)(param_1 + 0xdc) = iVar1;
    if (iVar1 != 0) {
      FUN_0032b184(iVar1,0x4000);
      return 1;
    }
  }
  FUN_002f1328(param_1);
  return 0;
}

// OoT3D decomp @ 004c7ab0  name=FUN_004c7ab0  size=212

void FUN_004c7ab0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;

  if ((param_7 == 0) || (*(int *)(param_1 + 4) != 0)) {
    if (**(int **)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) {
      func_0x0031487c(param_1,*(int *)(param_1 + 0x1c) + **(int **)(param_1 + 0x18) * 8,
                      *(undefined4 *)(param_2 + 0x28));
      **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
    }
  }
  else if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    func_0x0031487c(param_1,*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0xc) * 8,
                    *(undefined4 *)(param_2 + 0x28));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  *(undefined1 *)(*(int *)(param_2 + 0x28) + 0xac) = 1;
  func_0x003721e0(*(undefined4 *)(param_2 + 0x28),param_3);
  *(undefined4 *)(*(int *)(param_2 + 0x20) + 4) = param_6;
  iVar1 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
                    /* WARNING: Could not recover jumptable at 0x004c7b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_2 + 0x28) + 8))();
  return;
}

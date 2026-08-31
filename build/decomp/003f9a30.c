// OoT3D decomp @ 003f9a30  name=FUN_003f9a30  size=244

void FUN_003f9a30(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  if ((param_7 == 0) || (*(int *)(param_1 + 4) != 0)) {
    if (**(int **)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) {
      FUN_0031487c(param_1,*(int *)(param_1 + 0x1c) + **(int **)(param_1 + 0x18) * 8,
                   *(undefined4 *)(param_2 + 0xc));
      **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
    }
  }
  else if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    FUN_0031487c(param_1,*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0xc) * 8,
                 *(undefined4 *)(param_2 + 0xc));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  *(undefined1 *)(*(int *)(param_2 + 0xc) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_2 + 0xc),param_3);
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_3 + 0x1c);
  uVar3 = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  *(undefined4 *)(iVar1 + 0x2c) = uVar3;
  *(undefined4 *)(*(int *)(param_2 + 0x14) + 4) = param_6;
  iVar1 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
                    /* WARNING: Could not recover jumptable at 0x003f9b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_2 + 0xc) + 8))();
  return;
}

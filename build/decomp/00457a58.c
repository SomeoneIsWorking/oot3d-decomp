// OoT3D decomp @ 00457a58  name=FUN_00457a58  size=148

void FUN_00457a58(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;

  FUN_0031b99c(*(undefined4 *)(param_2 + 0x7bc));
  *(undefined4 *)(param_2 + 0x7bc) = 0;
  iVar1 = *(int *)(param_2 + 0x3cc);
  if (iVar1 != 0) {
    FUN_003254f4(iVar1,param_1,iVar1);
    FUN_003254d8(param_1,param_2);
    FUN_00325430(param_1,param_2);
    *(undefined4 *)(param_2 + 0x3cc) = 0;
    *param_2 = 0xff;
  }
  iVar1 = *(int *)(param_2 + 0x7a8);
  if (iVar1 != 0) {
    FUN_003254f4(iVar1,param_1,iVar1);
    FUN_003254d8(param_1,param_2 + 0x3dc);
    FUN_00325430(param_1,param_2 + 0x3dc);
    *(undefined4 *)(param_2 + 0x7a8) = 0;
    param_2[0x3dc] = 0xff;
  }
  return;
}

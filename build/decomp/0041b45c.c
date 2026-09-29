// OoT3D decomp @ 0041b45c  name=FUN_0041b45c  size=120

undefined4
FUN_0041b45c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int *local_c;

  iVar1 = FUN_00422ad4(&local_c,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 < 0) {
    FUN_003351b4();
  }
  iVar1 = FUN_002fe7f4(&DAT_0041b4d4,local_c);
  if (iVar1 < 0) {
    (**(code **)(*local_c + 0x28))();
    if (iVar1 < 0) {
      FUN_003351b4(iVar1);
    }
  }
  return 0;
}

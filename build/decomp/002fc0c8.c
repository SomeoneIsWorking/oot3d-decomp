// OoT3D decomp @ 002fc0c8  name=FUN_002fc0c8  size=76

int FUN_002fc0c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *local_10;

  local_10 = param_4;
  iVar1 = FUN_00435cfc(&local_10,4);
  if (-1 < iVar1) {
    iVar2 = FUN_002fe7f4(param_1,local_10);
    iVar1 = 0;
    if (iVar2 < 0) {
      (**(code **)(*local_10 + 0x28))();
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

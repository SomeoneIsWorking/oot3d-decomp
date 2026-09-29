// OoT3D decomp @ 0030b634  name=FUN_0030b634  size=168

void FUN_0030b634(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_1c;
  int local_18;
  int local_14;

  local_1c = 0xffffffff;
  local_18 = -1;
  local_14 = 0;
  iVar1 = FUN_002c29ac(param_1[1],param_2,&local_1c,0);
  if (iVar1 != 0) {
    if (local_14 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1,param_3,param_4,local_18 + param_1[0x42],local_1c);
      return;
    }
    FUN_00498cdc(param_1,param_3,param_4,local_14,0,0);
  }
  return;
}

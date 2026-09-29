// OoT3D decomp @ 00402d28  name=FUN_00402d28  size=124

undefined4 FUN_00402d28(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_34 = DAT_00402da4;
  local_30 = DAT_00402da4;
  local_2c = DAT_00402da8;
  local_28 = DAT_00402da8;
  local_24 = DAT_00402da8;
  local_20 = DAT_00402da8;
  local_1c = DAT_00402da8;
  uVar1 = 0x1000000;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if ((*(uint *)(param_3 + 0x18) & 2) != 0) {
    uVar1 = 0x1000002;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,uVar1,&local_34);
  return local_14;
}

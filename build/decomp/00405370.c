// OoT3D decomp @ 00405370  name=FUN_00405370  size=156

undefined4 FUN_00405370(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 auStack_18 [8];

  if (param_2 != 0) {
    FUN_0030a82c(auStack_18);
    local_28 = 0;
    local_27 = 0;
    local_26 = 0;
    local_25 = 0;
    local_24 = 0;
    iVar3 = FUN_0030a784(auStack_18,&local_30,param_3,0);
    uVar2 = local_2c;
    uVar1 = local_30;
    if (iVar3 != 0) {
      local_30 = 8;
      local_2c = 0;
      iVar3 = FUN_0030a6bc(param_1,uVar1,uVar2,param_4);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// OoT3D decomp @ 0030b804  name=FUN_0030b804  size=196

undefined4 FUN_0030b804(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_4c [12];
  undefined4 local_40 [2];
  char local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 auStack_1c [8];

  FUN_0030a82c(auStack_1c,param_1);
  local_2c = 0;
  local_2b = 0;
  local_2a = 0;
  local_29 = 0;
  local_28 = 0;
  FUN_0030a784(auStack_1c,&local_34,param_2,0);
  iVar1 = FUN_0030abf4(param_4,local_34);
  if (iVar1 == 0) {
    return 0;
  }
  local_40[0] = 0xffffffff;
  local_38 = '\0';
  FUN_00495920(param_3,local_34,local_40);
  if (local_38 != '\0') {
    FUN_0030c3b4(auStack_4c,iVar1,1);
    iVar1 = FUN_0030a560(auStack_4c,local_30);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// OoT3D decomp @ 00304638  name=FUN_00304638  size=128

int FUN_00304638(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_24 [12];
  undefined4 local_18 [2];
  char local_10;

  local_18[0] = 0xffffffff;
  local_10 = '\0';
  iVar1 = FUN_00495920(param_3,param_1,local_18);
  if ((iVar1 != 0) && (iVar1 = FUN_0040d60c(param_4,local_18[0]), iVar1 != 0)) {
    FUN_0030c3b4(auStack_24,iVar1,(int)local_10);
    iVar1 = FUN_0030a560(auStack_24,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return 0;
}

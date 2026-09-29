// OoT3D decomp @ 0030a6bc  name=FUN_0030a6bc  size=200

undefined4
FUN_0030a6bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28 [2];
  char local_20;

  local_28[0] = 0xffffffff;
  local_20 = '\0';
  iVar1 = FUN_00495920(*(undefined4 *)(param_1 + 4),param_2,local_28);
  if (iVar1 != 0) {
    if (local_20 == '\0') {
      if ((param_5 & 8) == 0) {
        return 1;
      }
      uVar2 = FUN_0048be78(*(undefined4 *)(param_1 + 4),param_2);
      iVar1 = FUN_0030a884(param_1,uVar2,param_4,param_6,1);
    }
    else {
      iVar1 = FUN_0030a9a4(param_1,param_2,param_3,param_4,param_6);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

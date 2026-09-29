// OoT3D decomp @ 0040d51c  name=FUN_0040d51c  size=240

undefined4
FUN_0040d51c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];

  if ((*(int *)(*(int *)(param_1 + 4) + 4) != 0) && (iVar1 = FUN_0030b780(), iVar1 != 0)) {
    FUN_0030a82c(auStack_20,*param_5);
    iVar1 = FUN_0040de34(auStack_20,param_2,param_5[1]);
    if ((iVar1 != 0) && (iVar1 = FUN_0030a784(auStack_20,param_3,param_5[1],param_5[2]), iVar1 != 0)
       ) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
      iVar1 = FUN_00304638(*param_3,param_3[1],uVar2);
      if ((iVar1 != 0) ||
         ((param_5[4] != 0 && (iVar1 = FUN_003045b8(*param_3,param_3[1],uVar2), iVar1 != 0)))) {
        FUN_00304538(auStack_20,iVar1);
        iVar1 = FUN_00304438(auStack_20,param_4,0);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

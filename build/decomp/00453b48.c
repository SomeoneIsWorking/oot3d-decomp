// OoT3D decomp @ 00453b48  name=FUN_00453b48  size=144

int FUN_00453b48(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;

  iVar1 = FUN_00465fec(param_1,param_6,param_7,*param_2,param_2[1],param_2[2],param_8);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(undefined4 *)(param_1 + 0x24) = param_4;
    if ((param_5 == (undefined4 *)0x0) ||
       (iVar1 = FUN_00466170(param_1,*param_5,param_5[1],param_5[2]), -1 < iVar1)) {
      return 0;
    }
    FUN_0030e0c4(param_1);
  }
  return iVar1;
}

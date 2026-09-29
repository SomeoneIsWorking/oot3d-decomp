// OoT3D decomp @ 00342af8  name=FUN_00342af8  size=220

undefined4
FUN_00342af8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  undefined4 uVar1;

  uVar1 = DAT_00342bd4;
  if ((param_4 & 0x18) == 0) {
    if (param_5 == 0) {
      FUN_003757a8(param_1,param_2,8);
      FUN_0037547c(uVar1,param_3,4,DAT_00342bdc,DAT_00342bdc,DAT_00342bd8);
    }
    else if (param_5 == 1) {
      FUN_0034e568(param_1,param_2,8);
      FUN_0037547c(uVar1,param_3,4,DAT_00342bdc,DAT_00342bdc,DAT_00342bd8);
    }
    else if (param_5 == 2) {
      FUN_003661a8(param_1,param_2,8);
      FUN_0037547c(uVar1,param_3,4,DAT_00342bdc,DAT_00342bdc,DAT_00342bd8);
    }
    return 1;
  }
  return 0;
}

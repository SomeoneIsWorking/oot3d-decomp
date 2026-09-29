// OoT3D decomp @ 004025f0  name=FUN_004025f0  size=84

undefined4
FUN_004025f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,char *param_6)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 0x54) == '\0') {
    return 0x10;
  }
  uVar1 = FUN_0030cbe4(*(undefined4 *)(param_1 + 4),param_2,param_3,param_5,param_1,(int)*param_6,
                       param_4);
  return uVar1;
}

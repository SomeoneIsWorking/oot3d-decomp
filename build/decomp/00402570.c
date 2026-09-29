// OoT3D decomp @ 00402570  name=FUN_00402570  size=80

undefined4
FUN_00402570(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 0x54) == '\0') {
    return 0x10;
  }
  uVar1 = FUN_0030cbe4(*(undefined4 *)(param_1 + 4),param_2,param_3,0,param_1,(int)*param_5,param_4)
  ;
  return uVar1;
}

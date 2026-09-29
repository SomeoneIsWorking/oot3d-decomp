// OoT3D decomp @ 003aa43c  name=FUN_003aa43c  size=80

void FUN_003aa43c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;

  iVar1 = FUN_0036b4ec(param_2 + 0x254,param_1);
  if ((iVar1 != 0) && (FUN_00334c44(param_2), param_3 != (undefined4 *)0x0)) {
    FUN_003404a8(DAT_003aa48c,param_2 + 0x254,param_1,*param_3);
    return;
  }
  return;
}

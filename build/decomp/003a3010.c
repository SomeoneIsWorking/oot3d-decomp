// OoT3D decomp @ 003a3010  name=FUN_003a3010  size=96

void FUN_003a3010(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;

  iVar1 = FUN_0036b4ec(param_2 + 0x254,param_1);
  if (iVar1 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      FUN_003404a8(DAT_003a3070,param_2 + 0x254,param_1,*param_3);
      FUN_003603f8(param_1,param_2,0x1c);
    }
    *(undefined2 *)(DAT_003a3074 + param_2) = 1;
  }
  return;
}

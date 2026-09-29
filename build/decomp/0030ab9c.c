// OoT3D decomp @ 0030ab9c  name=FUN_0030ab9c  size=88

void FUN_0030ab9c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;

  uStack_18 = param_4;
  FUN_0030af40(&uStack_18,param_1 + 0x2c);
  FUN_0031007c(param_2 + 0xc);
  *(undefined1 *)(param_2 + 0x10) = 1;
  iVar1 = param_1 + param_3 * 0xc;
  FUN_0030cab0(iVar1,iVar1 + 4,param_2 + 4);
  FUN_00495a7c(param_1 + 0x38,0);
  FUN_0030aedc(&uStack_18);
  return;
}

// OoT3D decomp @ 002acc5c  name=FUN_002acc5c  size=104

void FUN_002acc5c(int param_1,int param_2)

{
  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  FUN_00350f34(param_1,param_1 + 0x1d0,param_1 + 0x1d4,param_1 + 0x1d8,param_1 + 0x1dc,0);
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_0034fc7c();
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x1cc));
  }
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  return;
}

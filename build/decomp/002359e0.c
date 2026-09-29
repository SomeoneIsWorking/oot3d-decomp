// OoT3D decomp @ 002359e0  name=FUN_002359e0  size=96

void FUN_002359e0(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0036b4ec(param_2 + 0x254,param_1);
  if (iVar1 == 0) {
    if (*(short *)(param_2 + 0x2238) == 0) {
      FUN_00360a1c(param_2,DAT_00235a48);
      return;
    }
  }
  else {
    FUN_003404a8(DAT_00235a40,param_2 + 0x254,param_1,DAT_00235a44);
    *(undefined2 *)(param_2 + 0x2238) = 1;
  }
  return;
}

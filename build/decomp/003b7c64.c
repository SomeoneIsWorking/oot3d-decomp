// OoT3D decomp @ 003b7c64  name=FUN_003b7c64  size=80

void FUN_003b7c64(int param_1,undefined4 param_2)

{
  short sVar1;

  if ((*(short *)(param_1 + 0x516) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x516) + -1, *(short *)(param_1 + 0x516) = sVar1, sVar1 != 0)) {
    return;
  }
  FUN_00374444(param_2,0,param_1 + 0x28,0x40);
  FUN_00374428(param_1);
  return;
}

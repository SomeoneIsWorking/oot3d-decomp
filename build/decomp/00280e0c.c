// OoT3D decomp @ 00280e0c  name=FUN_00280e0c  size=40

void FUN_00280e0c(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_00372f38(param_1,param_2,param_1 + 0x1a8,0x11,0);
  return;
}

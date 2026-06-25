// OoT3D decomp @ 002c0948  name=FUN_002c0948  size=72

void FUN_002c0948(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0036055c(param_2,param_1,DAT_002c0990,1);
  uVar1 = FUN_0034d628(param_1);
  FUN_003604f0(param_1 + 0x254,param_2,uVar1);
  *(undefined2 *)(DAT_002c0994 + param_1) = *(undefined2 *)(param_1 + 0xbe);
  return;
}


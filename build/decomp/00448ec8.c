// OoT3D decomp @ 00448ec8  name=FUN_00448ec8  size=68

undefined4 FUN_00448ec8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004522c4(param_1,param_1 + 0x208c);
  if (iVar1 != 0) {
    return 2;
  }
  FUN_002e4ea0(param_1 + 0x3a58);
  software_interrupt(10);
  return 1;
}


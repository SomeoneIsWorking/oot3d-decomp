// OoT3D decomp @ 0022a450  name=FUN_0022a450  size=116

void FUN_0022a450(int param_1,int param_2)

{
  short sVar1;

  sVar1 = *(short *)(param_1 + 0x1c);
  if (((sVar1 == 0x23 || sVar1 == 0x24) || sVar1 == 0x32) && (*(short *)(param_1 + 0x1c) == 0x32)) {
    FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 500));
  }
  FUN_00350f34(param_1,param_1 + 0x274,param_1 + 0x278,param_1 + 0x27c,param_1 + 0x280,0);
  return;
}

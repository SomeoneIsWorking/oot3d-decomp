// OoT3D decomp @ 002ad1e4  name=FUN_002ad1e4  size=140

void FUN_002ad1e4(int param_1,int param_2)

{
  short sVar1;

  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      FUN_00350b88(param_2,param_1 + 0x1c8);
      FUN_00350f34(param_1,param_1 + 0x238,0);
      return;
    }
    if (sVar1 == 2) {
      FUN_00350f34(param_1,param_1 + 0x23c,param_1 + 0x240,0);
      return;
    }
    if (sVar1 != 3) {
      return;
    }
  }
  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  FUN_00350f34(param_1,param_1 + 0x238,0);
  return;
}

// OoT3D decomp @ 00240848  name=FUN_00240848  size=148

void FUN_00240848(int param_1,int param_2)

{
  if (*(short *)(param_1 + 0x1c) != 4) {
    if ((*(short *)(param_1 + 0x1c) != 0) &&
       (FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4)),
       *(short *)(param_1 + 0x1c) == 2 || *(short *)(param_1 + 0x1c) == 3)) {
      FUN_0034f6e8(param_2,param_1 + 0x228);
    }
    param_2 = param_1 + 0x1d0;
  }
  FUN_0049fa58(param_1 + 0x1c4,param_2);
  FUN_00350f34(param_1,param_1 + 0x300,param_1 + 0x304,param_1 + 0x308,param_1 + 0x30c,
               param_1 + 0x310,0);
  return;
}

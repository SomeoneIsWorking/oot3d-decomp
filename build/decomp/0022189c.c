// OoT3D decomp @ 0022189c  name=FUN_0022189c  size=136

void FUN_0022189c(int param_1,int param_2)

{
  if (*(byte *)(param_1 + 0x1c0) < 2) {
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
    if ((*(char *)(param_1 + 0x1c0) == '\x01') && (0 < *(short *)(DAT_00221924 + 0x60))) {
      *(undefined2 *)(DAT_00221924 + 0x5e) = 10;
    }
  }
  else {
    FUN_0034f6e8(param_2,param_1 + 0x1c8);
  }
  FUN_00350f34(param_1,param_1 + 0x2a0,param_1 + 0x2a4,param_1 + 0x2a8,param_1 + 0x2ac,
               param_1 + 0x2b0,0);
  return;
}

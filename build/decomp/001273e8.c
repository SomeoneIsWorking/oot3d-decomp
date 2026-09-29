// OoT3D decomp @ 001273e8  name=FUN_001273e8  size=92

void FUN_001273e8(int param_1,int param_2)

{
  if (*(char *)(*(int *)(param_2 + 0x20ac) + 0x1a7) == '\x01') {
    FUN_0036b940();
  }
  else {
    FUN_0036d15c(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  }
  FUN_00375bcc(param_1,DAT_00127444);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 299;
  return;
}

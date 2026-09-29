// OoT3D decomp @ 002b1898  name=FUN_002b1898  size=80

void FUN_002b1898(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003705a0(DAT_002b18ec,DAT_002b18e8,param_1 + 0x1fc);
  if (iVar1 == 0) {
    FUN_0037632c(param_1,param_1 + 0x1a4);
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}

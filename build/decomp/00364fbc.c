// OoT3D decomp @ 00364fbc  name=FUN_00364fbc  size=96

void FUN_00364fbc(int param_1)

{
  int iVar1;

  FUN_00374a58(DAT_0036501c,param_1 + 0x1e0,2);
  iVar1 = DAT_00365020;
  *(undefined4 *)(param_1 + 0xbfc) = 0;
  *(undefined2 *)(iVar1 + param_1) = 1;
  *(undefined4 *)(param_1 + 0x6c) = DAT_00365024;
  *(undefined4 *)(param_1 + 0xbe8) = 4;
  FUN_00375bcc(param_1,DAT_00365028);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0xbf0) = DAT_0036502c;
  return;
}

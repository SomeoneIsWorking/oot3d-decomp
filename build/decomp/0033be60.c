// OoT3D decomp @ 0033be60  name=FUN_0033be60  size=80

void FUN_0033be60(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = DAT_0033beb4;
  iVar1 = DAT_0033beb0;
  *(undefined4 *)(DAT_0033beb0 + *(short *)(param_1 + 0x1c) * 4) = 1;
  FUN_00374a58(uVar2,param_1 + 0x1a4,*(undefined4 *)(iVar1 + 0x20 + *(short *)(param_1 + 0x1c) * 4))
  ;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0x234) = 8;
  *(undefined4 *)(param_1 + 0x22c) = DAT_0033beb8;
  return;
}

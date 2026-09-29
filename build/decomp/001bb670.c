// OoT3D decomp @ 001bb670  name=FUN_001bb670  size=84

void FUN_001bb670(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1a4,
               *(undefined4 *)(DAT_001bb6c4 + *(short *)(param_1 + 0x1c) * 4),0);
  FUN_0037572c(DAT_001bb6c8,param_1);
  iVar1 = DAT_001bb6cc;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(iVar1 + *(short *)(param_1 + 0x1c) * 4);
  return;
}

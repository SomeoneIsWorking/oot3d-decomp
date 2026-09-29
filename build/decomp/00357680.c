// OoT3D decomp @ 00357680  name=FUN_00357680  size=176

void FUN_00357680(int param_1,int param_2)

{
  int iVar1;

  if ((*(ushort *)(param_2 + 0x90) & 0x20) == 0) {
    iVar1 = FUN_00341df0(param_1 + 0xa98,*(undefined4 *)(param_2 + 0x7c),
                         *(undefined1 *)(param_2 + 0x81));
  }
  else if (*(int *)(param_2 + 0x88) < DAT_00357730) {
    iVar1 = 4;
  }
  else {
    iVar1 = 5;
  }
  if (*(short *)(param_2 + 0x19c) < 1) {
    FUN_0037547c(DAT_0035773c,param_2 + 0x28,4,DAT_00357738,DAT_00357738,DAT_00357734);
    FUN_0037547c(iVar1 + 0x1000001,param_2 + 0x28,4,DAT_00357738,DAT_00357738,DAT_00357734);
    *(undefined2 *)(param_2 + 0x19c) = 0x14;
  }
  return;
}

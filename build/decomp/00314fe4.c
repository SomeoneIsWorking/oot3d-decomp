// OoT3D decomp @ 00314fe4  name=FUN_00314fe4  size=176

void FUN_00314fe4(int param_1,int param_2)

{
  int iVar1;

  if ((*(ushort *)(param_2 + 0x90) & 0x20) == 0) {
    iVar1 = FUN_00341df0(param_1 + 0xa98,*(undefined4 *)(param_2 + 0x7c),
                         *(undefined1 *)(param_2 + 0x81));
  }
  else if (*(int *)(param_2 + 0x88) < DAT_00315094) {
    iVar1 = 4;
  }
  else {
    iVar1 = 5;
  }
  if (*(short *)(param_2 + 0x19c) < 1) {
    FUN_0037547c(DAT_003150a0,param_2 + 0x28,4,DAT_0031509c,DAT_0031509c,DAT_00315098);
    FUN_0037547c(iVar1 + 0x1000001,param_2 + 0x28,4,DAT_0031509c,DAT_0031509c,DAT_00315098);
    *(undefined2 *)(param_2 + 0x19c) = 6;
  }
  return;
}

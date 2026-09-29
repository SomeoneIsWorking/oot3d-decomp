// OoT3D decomp @ 001cf750  name=FUN_001cf750  size=68

void FUN_001cf750(int param_1)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 != 0) {
    FUN_00373d40(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xc40));
    FUN_00375bcc(param_1,DAT_001cf794);
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 0xc;
  return;
}

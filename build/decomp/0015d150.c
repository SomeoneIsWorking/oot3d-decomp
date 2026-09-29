// OoT3D decomp @ 0015d150  name=FUN_0015d150  size=148

void FUN_0015d150(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0035a3c4(param_2,1);
  if (iVar1 == 0) {
    *(ushort *)(param_1 + 0x290) = *(ushort *)(param_1 + 0x290) | 1;
  }
  else {
    if ((*(ushort *)(param_1 + 0x290) & 2) == 0) {
      FUN_003674e4(0);
      *(ushort *)(param_1 + 0x290) = *(ushort *)(param_1 + 0x290) | 2;
    }
    *(ushort *)(param_1 + 0x290) = *(ushort *)(param_1 + 0x290) & 0xfffe;
    iVar1 = FUN_0036c950(param_1 + 0x1a4,param_2);
    if (iVar1 != 0) {
      FUN_0030f9f4(DAT_0015d1e4,DAT_0015d1e8,DAT_0015d1e8,DAT_0015d1ec,param_1 + 0x1a4,0);
      return;
    }
  }
  return;
}

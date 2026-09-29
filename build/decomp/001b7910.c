// OoT3D decomp @ 001b7910  name=FUN_001b7910  size=172

void FUN_001b7910(int param_1,int param_2)

{
  int iVar1;

  FUN_0035e3a4(param_1 + 0x8e0,1,*(undefined4 *)(param_1 + 0x8a0));
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001b79c0,DAT_001b79bc,param_1,0);
  FUN_0035e330(param_1 + 0x8e0);
  if (((*(ushort *)(DAT_001b79c4 + 0xe) & 0x800) != 0) &&
     (iVar1 = FUN_00363c10(param_2 + 0x3a58,0x15), -1 < iVar1)) {
    *(undefined1 *)(*(int *)(param_1 + 0xaac) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0xaac),param_1 + 0xab0);
    FUN_00372170(*(undefined4 *)(param_1 + 0xaac),0);
    return;
  }
  return;
}

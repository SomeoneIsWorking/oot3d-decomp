// OoT3D decomp @ 001af0ec  name=FUN_001af0ec  size=136

void FUN_001af0ec(int param_1)

{
  FUN_0035e3a4(param_1 + 0x31c,0,*(undefined4 *)(param_1 + 0x204));
  FUN_0035e330(param_1 + 0x31c);
  FUN_0035e240(param_1 + 0x294,param_1 + 0x148,DAT_001af178,DAT_001af174,param_1,0);
  if ((*(ushort *)(DAT_001af17c + 0xe) & 0x400) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x318) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x318),param_1 + 0x238);
    FUN_00372170(*(undefined4 *)(param_1 + 0x318),0);
    return;
  }
  return;
}

// OoT3D decomp @ 0022b6c0  name=FUN_0022b6c0  size=92

void FUN_0022b6c0(int param_1)

{
  if ((*(ushort *)(param_1 + 0x1b0) & *(ushort *)(param_1 + 0x1ae)) == 0) {
    if ((*(int *)(param_1 + 0x210) != 0) && (*(char *)(param_1 + 0x214) == '\0')) {
      FUN_003721e0(*(int *)(param_1 + 0x210),param_1 + 0x148);
      *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xac) = 1;
      FUN_00372170(*(undefined4 *)(param_1 + 0x210),0);
      return;
    }
  }
  return;
}

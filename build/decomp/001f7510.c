// OoT3D decomp @ 001f7510  name=FUN_001f7510  size=180

void FUN_001f7510(int param_1)

{
  int local_18 [3];

  local_18[0] = *(int *)(param_1 + 0x20c);
  local_18[1] = *(undefined4 *)(param_1 + 0x204);
  local_18[2] = *(undefined4 *)(param_1 + 0x204);
  if ((*(uint *)(param_1 + 4) & 0x800) == 0) {
    if (local_18[*(ushort *)(param_1 + 0x1c) & 3] != 0) {
      *(undefined1 *)(local_18[*(ushort *)(param_1 + 0x1c) & 3] + 0xac) = 1;
      FUN_003721e0(local_18[*(ushort *)(param_1 + 0x1c) & 3],param_1 + 0x148);
      FUN_00372170(local_18[*(ushort *)(param_1 + 0x1c) & 3],0);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x208) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x208) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x208),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x208),0);
    return;
  }
  return;
}

// OoT3D decomp @ 0029c820  name=FUN_0029c820  size=224

void FUN_0029c820(int param_1,int param_2)

{
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;

  FUN_00372224(&local_40,param_1 + 0x148);
  local_40 = local_40 * DAT_0029c900;
  local_30 = local_30 * DAT_0029c900;
  local_20 = local_20 * DAT_0029c900;
  local_3c = local_3c * DAT_0029c900;
  local_2c = local_2c * DAT_0029c900;
  local_1c = local_1c * DAT_0029c900;
  local_38 = local_38 * DAT_0029c900;
  local_28 = local_28 * DAT_0029c900;
  local_18 = local_18 * DAT_0029c900;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    FUN_00357fd0(*(undefined4 *)(DAT_0029c904 + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
    *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),&local_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
  }
  return;
}

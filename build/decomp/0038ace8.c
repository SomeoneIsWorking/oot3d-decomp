// OoT3D decomp @ 0038ace8  name=FUN_0038ace8  size=188

void FUN_0038ace8(int param_1)

{
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;

  FUN_00372224(&local_38,param_1 + 0x148);
  local_38 = local_38 * DAT_0038ada4;
  local_28 = local_28 * DAT_0038ada4;
  local_18 = local_18 * DAT_0038ada4;
  local_34 = local_34 * DAT_0038ada4;
  local_24 = local_24 * DAT_0038ada4;
  local_14 = local_14 * DAT_0038ada4;
  local_30 = local_30 * DAT_0038ada4;
  local_20 = local_20 * DAT_0038ada4;
  local_10 = local_10 * DAT_0038ada4;
  *(undefined1 *)(*(int *)(param_1 + 0x1e0) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1e0),&local_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1e0),0);
  return;
}

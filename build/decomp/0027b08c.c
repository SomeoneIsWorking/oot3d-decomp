// OoT3D decomp @ 0027b08c  name=FUN_0027b08c  size=208

void FUN_0027b08c(int param_1)

{
  uint in_fpscr;
  float fVar1;
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
  fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c0),(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * DAT_0027b160;
  local_38 = local_38 * DAT_0027b15c;
  local_28 = local_28 * DAT_0027b15c;
  local_18 = local_18 * DAT_0027b15c;
  local_34 = local_34 * fVar1;
  local_24 = local_24 * fVar1;
  local_14 = local_14 * fVar1;
  local_30 = local_30 * DAT_0027b15c;
  local_20 = local_20 * DAT_0027b15c;
  local_10 = local_10 * DAT_0027b15c;
  *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1c4),&local_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1c4),0);
  return;
}

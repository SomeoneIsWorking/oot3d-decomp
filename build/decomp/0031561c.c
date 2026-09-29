// OoT3D decomp @ 0031561c  name=FUN_0031561c  size=260

undefined4 FUN_0031561c(int param_1,float *param_2)

{
  undefined1 auStack_50 [48];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;

  local_14 = *param_2 - *(float *)(param_1 + 0x564);
  local_10 = param_2[1] - *(float *)(param_1 + 0x568);
  local_c = param_2[2] - *(float *)(param_1 + 0x56c);
  FUN_00369014(-*(float *)(param_1 + 0x594),auStack_50,0);
  FUN_003735e8(-*(float *)(param_1 + 0x598),auStack_50,1);
  FUN_003735ac(&local_20,auStack_50,&local_14);
  if (((((int)ABS(local_20) < DAT_00315720) && ((int)ABS(local_1c) < DAT_00315720)) &&
      (DAT_00315724 < (int)local_18)) && (local_18 <= *(float *)(param_1 + 0x5a0))) {
    *(float *)(param_1 + 0x5a0) =
         SQRT(local_14 * local_14 + local_10 * local_10 + local_c * local_c) * DAT_00315728;
    return 1;
  }
  return 0;
}

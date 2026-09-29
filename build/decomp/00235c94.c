// OoT3D decomp @ 00235c94  name=FUN_00235c94  size=204

void FUN_00235c94(int param_1,undefined4 param_2)

{
  float local_18;
  float local_14;
  float local_10;

  FUN_0036df4c(&local_18,param_1 + 0x28);
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
    if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
      local_18 = local_18 - *(float *)(param_1 + 0x60) * DAT_00235d60;
      local_14 = local_14 + *(float *)(param_1 + 100) * DAT_00235d60;
      local_10 = local_10 - *(float *)(param_1 + 0x68) * DAT_00235d60;
    }
  }
  else {
    local_18 = local_18 + *(float *)(param_1 + 0x60) * DAT_00235d60;
    local_14 = local_14 - *(float *)(param_1 + 100) * DAT_00235d60;
    local_10 = local_10 + *(float *)(param_1 + 0x68) * DAT_00235d60;
  }
  FUN_0037378c(DAT_00235d64,param_2,&local_18,3,0x50,0x3c,1);
  return;
}

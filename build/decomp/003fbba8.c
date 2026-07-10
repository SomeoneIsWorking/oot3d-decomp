// OoT3D decomp @ 003fbba8  name=FUN_003fbba8  size=204

void FUN_003fbba8(int param_1)

{
  float fVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x354) + 0x174) < 3) {
    return;
  }
  FUN_0032471c(param_1 + 0x18);
  FUN_003130a4(*(undefined4 *)(param_1 + 0x358),1,param_1 + 0x18);
  if ((*(uint *)(**(int **)(param_1 + 0x350) + 0x1c) & 1) == 0) {
    FUN_0034e988(*(undefined4 *)(param_1 + 0x358));
  }
  else {
    FUN_0036879c();
  }
  FUN_0047d68c(*(undefined4 *)(param_1 + 0x358),1,param_1 + 0x18);
  fVar1 = DAT_003fbc74;
  FUN_00314028(param_1 + 0x18,*(float *)(*(int *)(param_1 + 0x354) + 0x1e0) != DAT_003fbc74);
  FUN_00314034(param_1 + 0x18,DAT_003fbc78);
  FUN_00313f50(fVar1,param_1 + 0x18);
  FUN_003fb5ec(param_1);
  FUN_002f9c74(param_1 + 0x18);
  return;
}


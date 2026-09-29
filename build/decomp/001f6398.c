// OoT3D decomp @ 001f6398  name=FUN_001f6398  size=192

void FUN_001f6398(int param_1)

{
  float fVar1;
  float fVar2;
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
  fVar1 = *(float *)(param_1 + 0x318);
  fVar2 = fVar1 + DAT_001f6458;
  local_38 = local_38 * fVar1;
  local_28 = local_28 * fVar1;
  local_18 = local_18 * fVar1;
  local_34 = local_34 * fVar2;
  local_24 = local_24 * fVar2;
  local_14 = local_14 * fVar2;
  local_30 = local_30 * fVar1;
  local_20 = local_20 * fVar1;
  local_10 = local_10 * fVar1;
  FUN_0035e240(param_1 + 0x1bc,&local_38,DAT_001f645c,0,param_1,0);
  return;
}

// OoT3D decomp @ 00225580  name=FUN_00225580  size=256

void FUN_00225580(int param_1,int param_2)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;

  uVar1 = *(uint *)(DAT_00225680 + param_2);
  FUN_00372224(&local_3c,param_1 + 0x148);
  fVar2 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(DAT_00225684 + (uVar1 & 3) * 4),
                            (byte)(in_fpscr >> 0x15) & 3);
  fVar4 = DAT_0022568c + fVar2 * DAT_00225688;
  fVar2 = *(float *)(param_1 + 0x54) * fVar4;
  fVar3 = *(float *)(param_1 + 0x58) * fVar4;
  fVar4 = *(float *)(param_1 + 0x5c) * fVar4;
  local_3c = local_3c * fVar2;
  local_2c = local_2c * fVar2;
  local_1c = local_1c * fVar2;
  local_38 = local_38 * fVar3;
  local_28 = local_28 * fVar3;
  local_18 = local_18 * fVar3;
  local_34 = local_34 * fVar4;
  local_24 = local_24 * fVar4;
  local_14 = local_14 * fVar4;
  if (*(int *)(param_1 + 0x368) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x368) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x368),&local_3c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x368),0);
  }
  return;
}

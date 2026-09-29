// OoT3D decomp @ 001d1a2c  name=FUN_001d1a2c  size=360

void FUN_001d1a2c(int param_1,int param_2)

{
  float fVar1;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;

  fVar1 = *(float *)(param_1 + 0x1c4) * *(float *)(param_1 + 0x1c8);
  FUN_00372224(&local_48,param_1 + 0x148);
  FUN_00369014(DAT_001d1b94,&local_48,1);
  if (*(int *)(param_1 + 0x314) != 0) {
    FUN_003695cc(DAT_001d1b98,DAT_001d1b98,DAT_001d1b98,*(undefined4 *)(param_1 + 0x1cc),
                 *(int *)(param_1 + 0x314),0,4,2);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x314) + 0xc) + 0xc) =
         *(undefined4 *)(param_2 + 0x7f44);
    *(undefined1 *)(*(int *)(param_1 + 0x314) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x314),&local_48);
    FUN_00372170(*(undefined4 *)(param_1 + 0x314),0);
  }
  local_48 = local_48 * fVar1;
  local_38 = local_38 * fVar1;
  local_28 = local_28 * fVar1;
  local_44 = local_44 * fVar1;
  local_34 = local_34 * fVar1;
  local_24 = local_24 * fVar1;
  local_40 = local_40 * fVar1;
  local_30 = local_30 * fVar1;
  local_20 = local_20 * fVar1;
  if (*(int *)(param_1 + 0x310) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x310) + 0xc) + 0xc) =
         *(undefined4 *)(param_2 + 0x7f44);
    *(undefined1 *)(*(int *)(param_1 + 0x310) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x310),&local_48);
    FUN_00372170(*(undefined4 *)(param_1 + 0x310),0);
  }
  return;
}

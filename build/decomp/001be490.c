// OoT3D decomp @ 001be490  name=FUN_001be490  size=412

void FUN_001be490(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;

  FUN_00372224(&local_44,param_1 + 0x148);
  uVar1 = DAT_001be62c;
  if (*(short *)(param_1 + 0x1c) < 1) {
    if (*(short *)(param_1 + 0x1c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x284) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x284),&local_44);
      FUN_00372170(*(undefined4 *)(param_1 + 0x284),0);
      *(undefined1 *)(*(int *)(param_1 + 0x288) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x288),&local_44);
      FUN_00372170(*(undefined4 *)(param_1 + 0x288),0);
      local_50 = uVar1;
      local_4c = DAT_001be630;
      local_48 = uVar1;
      FUN_00372070(&local_44,&local_44,&local_50);
      fVar2 = *(float *)(param_1 + 0x280);
      local_44 = local_44 * fVar2;
      local_34 = local_34 * fVar2;
      local_24 = local_24 * fVar2;
      local_40 = local_40 * fVar2;
      local_30 = local_30 * fVar2;
      local_20 = local_20 * fVar2;
      local_3c = local_3c * fVar2;
      local_2c = local_2c * fVar2;
      local_1c = local_1c * fVar2;
    }
    FUN_003695cc(*(float *)(param_1 + 0x27c) * DAT_001be634,uVar1,uVar1,DAT_001be638,
                 *(undefined4 *)(param_1 + 0x28c),0,4);
    *(undefined1 *)(*(int *)(param_1 + 0x28c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x28c),&local_44);
    FUN_00372170(*(undefined4 *)(param_1 + 0x28c),0);
    return;
  }
  FUN_00357750(0,param_1 + 0x1fc,&local_44);
  return;
}

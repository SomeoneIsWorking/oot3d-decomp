// OoT3D decomp @ 0029e324  name=FUN_0029e324  size=892

void FUN_0029e324(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;

  fVar1 = DAT_0029e64c;
  fVar6 = DAT_0029e648;
  if (*(short *)(param_1 + 0x1c) != 0) {
    if (*(short *)(param_1 + 0x1c) == 1) {
      FUN_00372224(&local_58,param_1 + 0x148);
      uVar4 = DAT_0029e660;
      fVar6 = DAT_0029e658;
      uVar3 = DAT_0029e654;
      uVar2 = DAT_0029e650;
      local_4c = fVar1;
      local_3c = DAT_0029e650;
      local_2c = DAT_0029e654;
      local_30 = *(float *)(param_1 + 0x1a4) * DAT_0029e65c;
      local_58 = DAT_0029e658 * 1.0;
      local_48 = DAT_0029e658 * 0.0;
      local_38 = DAT_0029e658 * 0.0;
      local_54 = DAT_0029e658 * 0.0;
      local_44 = DAT_0029e658 * 1.0;
      local_34 = DAT_0029e658 * 0.0;
      local_50 = local_30 * 0.0;
      local_40 = local_30 * 0.0;
      local_30 = local_30 * 1.0;
      FUN_00371234(DAT_0029e660,&local_58,1);
      *(undefined1 *)(*(int *)(param_1 + 0x1b8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1b8),&local_58);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1b8),0);
      local_4c = fVar1;
      local_3c = uVar2;
      local_2c = uVar3;
      local_58 = fVar6 * 1.0;
      local_48 = fVar6 * 0.0;
      local_38 = fVar6 * 0.0;
      local_54 = fVar6 * 0.0;
      local_44 = fVar6 * 1.0;
      local_34 = fVar6 * 0.0;
      local_50 = fVar1 * 0.0;
      local_40 = fVar1 * 0.0;
      local_30 = fVar1 * 1.0;
      FUN_00371234(uVar4,&local_58,1);
      fVar6 = *(float *)(param_1 + 0x1a4) * DAT_0029e664 * DAT_0029e66c;
      FUN_003695cc(fVar6,fVar6,fVar6,*(float *)(param_1 + 0x1a4) * DAT_0029e668 * DAT_0029e66c,
                   *(undefined4 *)(param_1 + 0x1bc),0,4);
      *(undefined1 *)(*(int *)(param_1 + 0x1bc) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1bc),&local_58);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1bc),0);
    }
    return;
  }
  FUN_00372224(&local_58,param_1 + 0x148);
  iVar5 = FUN_003695f8();
  if (iVar5 != 0) {
    fVar6 = fVar1;
  }
  *(undefined4 *)(param_2 + 0x7f7c) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b4) + 0xc) + 8)
  ;
  if (*(int *)(DAT_0029e670 + 4) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1ac),&local_58);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1ac),0);
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1b0) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1b0),&local_58);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1b0),0);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1b4) + 0xc) + 0xc) = fVar6;
  *(undefined1 *)(*(int *)(param_1 + 0x1b4) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1b4),&local_58);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1b4),0);
  return;
}

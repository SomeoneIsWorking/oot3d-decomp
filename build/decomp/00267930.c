// OoT3D decomp @ 00267930  name=FUN_00267930  size=312

void FUN_00267930(int param_1)

{
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined1 auStack_38 [48];

  FUN_0035e3a4(param_1 + 0x2b0,0,*(undefined1 *)(DAT_00267a68 + *(short *)(param_1 + 0x1c4)));
  FUN_0035e330(param_1 + 0x2b0);
  FUN_0035e240(param_1 + 0x22c,param_1 + 0x148,DAT_00267a70,DAT_00267a6c,param_1,0);
  local_5c = *(undefined4 *)(param_1 + 0x1a8);
  local_4c = *(undefined4 *)(param_1 + 0x1ac);
  local_3c = *(undefined4 *)(param_1 + 0x1b0);
  local_68 = 0x3f800000;
  local_64 = 0;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3f800000;
  local_48 = 0;
  local_44 = 0;
  uStack_40 = 0x3f800000;
  local_98 = DAT_00267a74;
  local_94 = 0;
  local_80 = 0;
  local_84 = DAT_00267a74;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_70 = DAT_00267a74;
  FUN_0036c174(auStack_38,&local_68,&local_98);
  *(undefined1 *)(*(int *)(param_1 + 0x8f4) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x8f4),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x8f4),0);
  return;
}

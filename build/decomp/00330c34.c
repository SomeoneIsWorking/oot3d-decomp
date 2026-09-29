// OoT3D decomp @ 00330c34  name=FUN_00330c34  size=248

void FUN_00330c34(int param_1,int param_2)

{
  float fVar1;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  fVar1 = DAT_00330d30;
  local_50 = DAT_00330d2c;
  local_4c = (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c)) * DAT_00330d30;
  local_48 = DAT_00330d2c;
  FUN_00372070(auStack_44,param_2 + 0x148,&local_50);
  local_5c = DAT_00330d34;
  local_78 = ((*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c)) + fVar1) * DAT_00330d38;
  local_54 = DAT_00330d34;
  local_80 = 0;
  local_7c = 0;
  local_8c = DAT_00330d34;
  local_68 = 0;
  local_88 = 0;
  local_84 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_60 = 0;
  local_64 = DAT_00330d34;
  local_58 = local_78;
  FUN_0036c174(auStack_44,auStack_44,&local_8c);
  FUN_003721e0(*(undefined4 *)(param_2 + 0x1c0),auStack_44);
  *(undefined1 *)(*(int *)(param_2 + 0x1c0) + 0xac) = 1;
  FUN_00372170(*(undefined4 *)(param_2 + 0x1c0),0);
  return;
}

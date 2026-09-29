// OoT3D decomp @ 00493d40  name=FUN_00493d40  size=120

void FUN_00493d40(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_44;
  undefined3 uStack_43;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  puVar2 = (undefined4 *)*DAT_00493db8;
  uStack_2c = puVar2[6];
  uStack_28 = puVar2[7];
  local_38 = param_2 | param_3 << 0x10;
  local_34 = param_5 | param_6 << 0x10;
  _local_44 = CONCAT31((int3)((uint)*puVar2 >> 8),3);
  local_30 = param_7;
  local_40 = param_1;
  local_3c = param_4;
  iVar1 = FUN_0030dd7c();
  FUN_002c188c(iVar1 + 0x58,&local_44);
  return;
}

// OoT3D decomp @ 00493b94  name=FUN_00493b94  size=120

void FUN_00493b94(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 uint param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 local_44;
  undefined3 uStack_43;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 uStack_28;

  uStack_28 = ((undefined4 *)*DAT_00493c0c)[7];
  local_34 = param_4 | param_5 << 0x10;
  local_30 = param_6 | param_7 << 0x10;
  _local_44 = CONCAT31((int3)((uint)*(undefined4 *)*DAT_00493c0c >> 8),4);
  local_2c = param_8;
  local_40 = param_1;
  local_3c = param_2;
  local_38 = param_3;
  iVar1 = FUN_0030dd7c();
  FUN_002c188c(iVar1 + 0x58,&local_44);
  return;
}

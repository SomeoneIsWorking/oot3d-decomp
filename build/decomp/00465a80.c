// OoT3D decomp @ 00465a80  name=FUN_00465a80  size=156

int FUN_00465a80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;

  uVar2 = DAT_00465b20;
  uVar1 = DAT_00465b1c;
  local_1c = DAT_00465b1c;
  local_18 = DAT_00465b20;
  local_20 = 0x140;
  local_14 = 1;
  FUN_002d3b5c(DAT_00465b24,&local_20);
  local_40 = 0x3c;
  local_3c = 4000;
  local_38 = 100;
  local_34 = uVar2;
  local_30 = uVar1;
  local_2c = DAT_00465b28;
  local_28 = DAT_00465b2c;
  local_24 = uVar1;
  FUN_002d3a3c(DAT_00465b30,&local_40);
  iVar3 = FUN_0047dd28(DAT_00465b24);
  iVar4 = FUN_002d399c(DAT_00465b30);
  return iVar4 + iVar3;
}

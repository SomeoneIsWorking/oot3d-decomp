// OoT3D decomp @ 00300328  name=FUN_00300328  size=604

void FUN_00300328(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,int param_10)

{
  int iVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int local_30;

  FUN_00300084(0x3fff);
  FUN_002fff7c(param_3);
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  local_34 = 0;
  local_40 = param_1;
  local_3c = param_2;
  FUN_002fc300(param_3,param_5);
  FUN_00422784();
  FUN_002fc258(param_3,param_8,&local_70);
  local_30 = param_3 + 0x25f0;
  FUN_002fea28();
  FUN_002fc300(param_3,param_6);
  iVar1 = param_3 + 0x7358;
  if (param_10 == 0) {
    FUN_00423f54();
    FUN_00422488(param_3 + 0x180);
    FUN_004224b8(param_3 + 0x180);
    FUN_00423e48(iVar1);
    FUN_002fc1dc(iVar1);
  }
  else {
    FUN_002fc1dc(iVar1);
  }
  FUN_002fc258(param_3,param_8,&local_70);
  FUN_004228a0(local_30);
  FUN_002fc300(param_3,param_6);
  FUN_002fae00(param_3 + 0x180);
  FUN_002fad1c(param_3 + 0x180);
  FUN_002fc258(param_3,param_8,&local_70);
  FUN_0042276c(param_3 + 0x23c8);
  FUN_004228a8(local_30);
  FUN_002fc300(param_3,param_6);
  FUN_00422554(param_3 + 0x22f0);
  FUN_002fc258(param_3,param_8,&local_70);
  FUN_004221ac(DAT_00300584);
  FUN_004228b8(local_30);
  FUN_0042b9d0(param_4);
  FUN_002fc300(param_3,param_7);
  FUN_004224e8(param_3 + 0x180);
  FUN_002fc258(param_3,param_8,&local_70);
  if (*(code **)(param_3 + 0x7440) != (code *)0x0) {
    (**(code **)(param_3 + 0x7440))(param_4);
  }
  FUN_004228c0(local_30);
  FUN_0042cb30(param_3 + 0x4290);
  FUN_0042a254(param_3 + 0x59a0);
  FUN_00427a18(*(undefined4 *)(param_3 + 0x72d4),param_4);
  FUN_0042cba8(param_3 + 0x32c0);
  FUN_004228b0(local_30);
  FUN_002ffe40(0x3fff);
  FUN_00300084(0x3fff,1);
  return;
}

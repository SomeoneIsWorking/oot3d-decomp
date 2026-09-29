// OoT3D decomp @ 00402a50  name=FUN_00402a50  size=324

undefined4
FUN_00402a50(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_6c;
  undefined4 local_68;
  char local_64;
  undefined1 local_63;
  undefined4 local_60;
  int iStack_5c;
  int local_58;
  undefined4 *local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char local_24;
  undefined1 local_23;

  if (*(char *)(param_1 + 0x81) != '\0') {
    FUN_00402cfc(&local_4c);
    local_4c = *(undefined4 *)(param_1 + 0x68);
    uStack_48 = *(undefined4 *)(param_1 + 0x6c);
    uStack_44 = *(undefined4 *)(param_1 + 0x70);
    local_40 = *(undefined4 *)(param_1 + 0x74);
    uStack_3c = *(undefined4 *)(param_1 + 0x78);
    uStack_38 = *(undefined4 *)(param_1 + 0x7c);
    local_30 = *(undefined4 *)(param_1 + 100);
    if (*(int *)(param_1 + 0x60) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 4);
      iVar2 = FUN_0040e13c(uVar1,param_3,&local_6c);
      if (iVar2 != 0) {
        local_34 = local_6c;
        local_28 = local_68;
        local_23 = local_63;
        if ((local_64 == '\x01') || (local_64 != '\x02')) {
          local_24 = '\x01';
        }
        else {
          local_24 = local_64;
        }
      }
      local_2c = FUN_00481a68(uVar1,param_3);
    }
    uStack_50 = *(undefined4 *)(DAT_00402b94 + 0x10);
    iStack_5c = param_1 + 0x58;
    local_60 = *(undefined4 *)(param_1 + 0x5c);
    local_58 = *(int *)(param_1 + 0x5c);
    if (local_58 != 0) {
      local_58 = local_58 + 4;
    }
    local_6c = param_5;
    local_54 = &local_4c;
    uVar1 = FUN_004025f0(param_1,param_2,param_3,param_4,&local_60);
    if (*param_2 != 0) {
      FUN_0030c49c(*param_2,3);
    }
    return uVar1;
  }
  return 0xb;
}

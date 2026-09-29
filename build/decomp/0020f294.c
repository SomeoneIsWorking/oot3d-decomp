// OoT3D decomp @ 0020f294  name=FUN_0020f294  size=572

void FUN_0020f294(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_290 [4];
  undefined1 auStack_28c [576];
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_2c;

  FUN_00350820(auStack_28c,DAT_0020f4f4,0x24,0x10);
  *(undefined1 *)(param_1 + 0x1f) = 3;
  FUN_003510b0(param_1,DAT_0020f4f8);
  *(undefined1 *)(param_1 + 0xa3c) = 0xff;
  *(undefined1 *)(param_1 + 0xa39) = 0xff;
  *(undefined1 *)(param_1 + 0xa38) = 0xff;
  *(undefined1 *)(param_1 + 0xa3f) = 200;
  *(undefined1 *)(param_1 + 0xa3b) = 200;
  *(undefined1 *)(param_1 + 0xa3d) = 10;
  uVar2 = DAT_0020f508;
  uVar1 = DAT_0020f4fc;
  *(undefined4 *)(param_1 + 0x9c0) = DAT_0020f4fc;
  *(undefined4 *)(param_1 + 0x9c4) = uVar1;
  *(undefined4 *)(param_1 + 0x9c8) = uVar1;
  FUN_00372d4c(uVar2,DAT_0020f500,param_1 + 0xbc,DAT_0020f504);
  FUN_0037572c(DAT_0020f50c,param_1);
  FUN_00372f38(param_1,param_2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x5d0,0x12);
  *(undefined1 *)(param_1 + 0xb7) = 4;
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined4 *)(param_1 + 0xa0) = DAT_0020f510;
  FUN_00350a98(param_2);
  FUN_0034f910(param_2);
  FUN_00350eb8(param_2);
  FUN_00350914(param_2,param_1 + 0xa48,param_1,DAT_0020f514);
  FUN_0034f760(param_2,param_1 + 0xac8,param_1,DAT_0020f518,param_1 + 0xae8);
  FUN_00350d48(param_2,param_1 + 0xbfc,param_1,DAT_0020f51c,param_1 + 0xc1c);
  local_46 = 0xff;
  local_47 = 0xff;
  local_48 = 0xff;
  local_49 = 0xff;
  local_3e = 0xff;
  local_42 = 0xff;
  local_4a = 0xff;
  local_45 = 0x40;
  local_3f = 0xff;
  local_43 = 0xff;
  local_4b = 0xff;
  local_40 = 0xff;
  local_44 = 0xff;
  local_4c = 0xff;
  local_3d = 0;
  local_41 = 0;
  local_38 = 0;
  local_34 = 2;
  local_3c = 8;
  local_2c = 0x11;
  FUN_00350660(param_2,param_1 + 0xa44,1,0,0,auStack_290);
  FUN_00376340(DAT_0020f528,DAT_0020f524,DAT_0020f520,param_2,param_1,0x1d);
  FUN_00370350(DAT_0020f52c,param_1 + 0x1a4,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x1e,0x32);
}

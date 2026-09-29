// OoT3D decomp @ 001d7bd8  name=FUN_001d7bd8  size=672

void FUN_001d7bd8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_288 [4];
  undefined1 auStack_284 [576];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_24;

  FUN_00350820(auStack_284,DAT_001d7e78,0x24,0x10);
  FUN_00372f38(param_1,param_2,0);
  FUN_003510b0(param_1,DAT_001d7e7c);
  uVar2 = DAT_001d7e88;
  uVar1 = DAT_001d7e84;
  *(undefined4 *)(param_1 + 0xa0) = DAT_001d7e80;
  FUN_00372d4c(uVar1,uVar1,param_1 + 0xbc,uVar2);
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined1 *)(param_1 + 0xb7) = 0x14;
  *(undefined2 *)(param_1 + 0xb0) = 0x32;
  *(undefined2 *)(param_1 + 0xb2) = 100;
  uVar2 = DAT_001d7e8c;
  *(undefined1 *)(param_1 + 0x123) = 0x54;
  *(undefined4 *)(param_1 + 0xc08) = uVar2;
  *(ushort *)(param_1 + 0xc10) = *(ushort *)(param_1 + 0x1c) & 0xff00;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(undefined1 *)(param_1 + 0xc16) = 0;
  FUN_00353c9c(param_1,param_2,param_1 + 0x1e0,0,10,param_1 + 0x264,param_1 + 0x640,0x13);
  FUN_0035c358(param_1 + 0xa1c,param_1 + 0x1e0,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xc1c,param_1,DAT_001d7e90);
  FUN_0034f910(param_2);
  FUN_0034f760(param_2,param_1 + 0xcf4,param_1,DAT_001d7e94,param_1 + 0xd14);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0xc74,param_1,DAT_001d7e98);
  local_41 = 0xff;
  local_36 = 0xff;
  local_3a = 0xff;
  local_42 = 0xff;
  local_37 = 0xff;
  local_3b = 0xff;
  local_3e = 0xff;
  local_43 = 0xff;
  local_38 = 0xff;
  local_3c = 0xff;
  local_3f = 0xff;
  local_44 = 0xff;
  local_40 = 0xff;
  local_3d = 0x40;
  local_34 = 8;
  local_2c = 2;
  local_39 = 0;
  local_35 = 0;
  local_24 = 0x12;
  local_30 = 0;
  FUN_00350660(param_2,param_1 + 0xc18,1,0,0,auStack_288);
  FUN_0037572c(DAT_001d7e9c,param_1);
  FUN_0037422c(uVar1,param_1 + 0x1e0,8);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_001d7ea0;
  *(undefined4 *)(param_1 + 0x70) = DAT_001d7ea4;
  *(undefined4 *)(param_1 + 0xbfc) = 0xf;
  *(undefined2 *)(param_1 + 0xc14) = 1;
  *(undefined4 *)(param_1 + 0xbe8) = 0;
  *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffc;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xbf0) = DAT_001d7ea8;
  if ((*(short *)(param_1 + 0xc10) != 0) &&
     (iVar3 = FUN_0036405c(param_2,(int)*(short *)(param_1 + 0xc10) >> 8), iVar3 != 0)) {
    FUN_00374428(param_1);
  }
  return;
}

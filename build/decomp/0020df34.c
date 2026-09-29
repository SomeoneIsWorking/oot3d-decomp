// OoT3D decomp @ 0020df34  name=FUN_0020df34  size=248

void FUN_0020df34(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = DAT_0020e034;
  FUN_00372d4c(DAT_0020e034,DAT_0020e02c,param_1 + 0xbc,DAT_0020e030);
  FUN_00372f38(param_1,param_2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,6,param_1 + 0x228,param_1 + 0x430,10);
  *(undefined1 *)(param_1 + 0x123) = 0x3a;
  FUN_00353dd0(param_2,param_1 + 0x6b0);
  FUN_00353d24(param_2,param_1 + 0x6b0,param_1,DAT_0020e038);
  FUN_0037572c(DAT_0020e03c,param_1);
  uVar2 = DAT_0020e044;
  *(undefined4 *)(param_1 + 0xa0) = DAT_0020e040;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 0x664) = uVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x1f) = 3;
  *(undefined4 *)(param_1 + 0x638) = DAT_0020e048;
  *(undefined1 *)(param_1 + 0x19b) = 4;
  return;
}

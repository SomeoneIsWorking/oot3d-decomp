// OoT3D decomp @ 001f51e8  name=FUN_001f51e8  size=204

void FUN_001f51e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372d4c(DAT_001f52b8,DAT_001f52b4,param_1 + 0xbc,0);
  FUN_00372f38(param_1,param_2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x360,6);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x49c,param_1,DAT_001f52bc);
  uVar1 = FUN_0035011c(4);
  FUN_00350318(param_1 + 0xa0,uVar1,DAT_001f52c0);
  *(undefined1 *)(param_1 + 0x123) = 0xe;
  uVar1 = DAT_001f52c4;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_0037572c(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x498) = DAT_001f52c8;
  return;
}

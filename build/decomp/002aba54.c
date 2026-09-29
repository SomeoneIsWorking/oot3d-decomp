// OoT3D decomp @ 002aba54  name=FUN_002aba54  size=200

void FUN_002aba54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = DAT_002abb1c;
  *(undefined4 *)(param_1 + 0x5c) = DAT_002abb1c;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = DAT_002abb20;
  *(undefined2 *)(param_1 + 0x1a8) = 0;
  FUN_00353dd0(param_2,param_1 + 0x1ac,param_3,param_4,param_4);
  FUN_00353d24(param_2,param_1 + 0x1ac,param_1,DAT_002abb24);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x204,5,0);
  uVar2 = FUN_00372f0c(uVar2,2);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x204) + 0xc),uVar2);
  uVar1 = DAT_002abb2c;
  uVar2 = DAT_002abb28;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x204) + 0xc) + 0x10) = 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x204) + 0xc) + 0xc) = uVar2;
  FUN_00350d20(param_1 + 0xa0,0,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_002abb30;
  return;
}

// OoT3D decomp @ 002b3c24  name=FUN_002b3c24  size=112

void FUN_002b3c24(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = FUN_0036bc98();
  uVar1 = DAT_002b3c98;
  *DAT_002b3c94 = uVar3;
  *(short *)(param_1 + 0xa0a) = *(short *)(param_1 + 0xa0a) + 1;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = DAT_002b3c9c;
  *(undefined4 *)(param_1 + 0x44) = DAT_002b3ca0;
  (**(code **)(param_1 + 0x9ac))(param_1,param_2);
  uVar1 = DAT_002b3ca8;
  iVar2 = DAT_002b3ca4;
  *(char *)(param_1 + 0xd0) = (char)*(undefined4 *)(param_1 + 0xa20);
  *(undefined2 *)(iVar2 + param_1) = *(undefined2 *)(param_1 + 0xa08);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  return;
}

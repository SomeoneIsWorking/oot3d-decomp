// OoT3D decomp @ 00359dd0  name=FUN_00359dd0  size=88

void FUN_00359dd0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar1 = DAT_00359e28;
  iVar3 = *(int *)(param_2 + 0x20ac);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | 0x20;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined2 *)(param_1 + 0x7e0) = 0xc3;
  uVar2 = DAT_00359e30;
  uVar1 = DAT_00359e2c;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar3 + 0xbe);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar3 + 0x84);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  *(undefined4 *)(param_1 + 0x7dc) = uVar2;
  return;
}

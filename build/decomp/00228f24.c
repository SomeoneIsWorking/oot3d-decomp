// OoT3D decomp @ 00228f24  name=FUN_00228f24  size=160

void FUN_00228f24(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar3 = DAT_00228fcc;
  uVar2 = DAT_00228fc8;
  uVar1 = DAT_00228fc4;
  *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + 1;
  FUN_0036e168(DAT_00228fd0,uVar3,uVar2,uVar1,param_1 + 0x288);
  FUN_0036e168(DAT_00228fd4,uVar3,uVar2,uVar1,param_1 + 0x28c);
  FUN_0036b96c(param_1);
  FUN_00376340(DAT_00228fd8,DAT_00228fd8,uVar1,param_2,param_1,7);
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_0037322c(*(undefined4 *)(param_1 + 0xc4),param_1);
  return;
}

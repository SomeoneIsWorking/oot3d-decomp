// OoT3D decomp @ 001bf12c  name=FUN_001bf12c  size=76

void FUN_001bf12c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_00372f38(param_1,param_2,param_1 + 0x1a4);
  FUN_0037572c(DAT_001bf178,param_1);
  uVar2 = DAT_001bf180;
  uVar1 = DAT_001bf17c;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  FUN_00372d4c(DAT_001bf184,uVar1,param_1 + 0xbc,uVar2,*(undefined4 *)(param_1 + 0x28),0);
  return;
}

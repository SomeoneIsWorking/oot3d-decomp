// OoT3D decomp @ 00333544  name=FUN_00333544  size=200

void FUN_00333544(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;

  *(undefined4 *)(param_2 + 0x2a0) = DAT_0033360c;
  uVar2 = DAT_00333614;
  if (*(int *)(DAT_00333610 + 4) != 0) {
    uVar2 = DAT_00333618;
  }
  *(undefined4 *)(param_2 + 0x29c) = uVar2;
  if (*(short *)(param_1 + 0x104) == 0x43) {
    FUN_0037572c(DAT_0033361c,param_2);
  }
  else {
    FUN_0037572c(DAT_00333620,param_2);
  }
  *(undefined2 *)(param_2 + 0x292) = 1;
  *(undefined2 *)(param_2 + 0xbc) = 0x4000;
  FUN_00359c08(param_2);
  iVar1 = DAT_00333624;
  *(undefined1 *)(param_2 + 0x28b) = 0;
  *(undefined2 *)(param_2 + 0x298) = 0;
  *(undefined2 *)(param_2 + 0x296) = 0;
  *(undefined2 *)(param_2 + 0x294) = 0;
  *(undefined2 *)(iVar1 + param_1) = 0;
  uVar2 = ObjectBankArchive_00358ef8(param_4,*(byte *)(param_2 + 0x289) - 0x13);
  uVar2 = (**(code **)(*param_3 + 8))(param_3,uVar2,1);
  *(undefined4 *)(param_2 + 0x2a8) = uVar2;
  return;
}

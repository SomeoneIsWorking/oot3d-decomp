// OoT3D decomp @ 00333628  name=FUN_00333628  size=200

void FUN_00333628(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 auStack_58 [11];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;

  *(undefined1 *)(param_1 + 0x289) = 0;
  *(undefined1 *)(param_1 + 0x28a) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = DAT_003336f0;
  uVar1 = DAT_003336f8;
  *(undefined4 *)(param_1 + 0x29c) = DAT_003336f4;
  FUN_0037572c(uVar1,param_1);
  *(undefined2 *)(param_1 + 0x292) = 6;
  local_2c = *DAT_003336fc;
  uStack_28 = DAT_003336fc[1];
  uStack_24 = DAT_003336fc[2];
  uStack_20 = DAT_003336fc[3];
  uStack_1c = DAT_003336fc[4];
  uStack_18 = DAT_003336fc[5];
  if (*(byte *)(param_1 + 0x28b) != 0x61) {
    uVar1 = ObjectBankArchive_00358ef8(param_3,auStack_58[*(byte *)(param_1 + 0x28b)]);
    uVar1 = (**(code **)(*param_2 + 8))(param_2,uVar1,1);
    *(undefined4 *)(param_1 + 0x2a8) = uVar1;
    return;
  }
  uVar1 = ObjectBankArchive_00358ef8(param_3,2);
  uVar1 = (**(code **)(*param_2 + 8))(param_2,uVar1,1);
  *(undefined4 *)(param_1 + 0x2a8) = uVar1;
  return;
}

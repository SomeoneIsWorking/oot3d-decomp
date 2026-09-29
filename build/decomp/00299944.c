// OoT3D decomp @ 00299944  name=FUN_00299944  size=144

void FUN_00299944(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;

  uVar1 = ObjectBankArchive_00358ef8(param_3,param_4);
  FUN_00353e78(param_3,param_2,param_1 + 0x1b4,uVar1,*(undefined4 *)(param_1 + 0x178),0xffffffff,0,0
               ,0);
  FUN_0035c358(param_1 + 0x28c,param_1 + 0x1b4,0,0xffffffff,0xffffffff);
  FUN_003660fc(*(undefined4 *)(DAT_002999d4 + 8),param_1 + 0x1b4,param_5);
  return;
}

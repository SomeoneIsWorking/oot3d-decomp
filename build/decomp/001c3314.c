// OoT3D decomp @ 001c3314  name=FUN_001c3314  size=152

void FUN_001c3314(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = ObjectBankArchive_00358ef8(*(undefined4 *)(param_1 + 0x380),0);
  *(undefined4 *)(param_1 + 900) = uVar1;
  FUN_00353e78(*(undefined4 *)(param_1 + 0x380),param_2,param_1 + 0x1a4,uVar1,
               *(undefined4 *)(param_1 + 0x178),*DAT_001c33ac,0,0,0);
  FUN_0035c358(param_1 + 0x3b8,param_1 + 0x1a4,1,0xffffffff,0xffffffff);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
  *(undefined4 *)(param_1 + 0x140) = DAT_001c33b0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  return;
}

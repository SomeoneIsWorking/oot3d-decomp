// OoT3D decomp @ 0016d4d0  name=FUN_0016d4d0  size=140

void FUN_0016d4d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = ObjectBankArchive_00358ef8(*(undefined4 *)(param_1 + 0x380),0);
  *(undefined4 *)(param_1 + 0x39c) = uVar1;
  FUN_00353e78(*(undefined4 *)(param_1 + 0x380),param_2,param_1 + 0x1a4,uVar1,
               *(undefined4 *)(param_1 + 0x178),*(undefined4 *)(DAT_0016d55c + 0x18),0,0,0);
  FUN_0035c358(param_1 + 0x3b8,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  *(undefined4 *)(param_1 + 0x140) = DAT_0016d560;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  return;
}

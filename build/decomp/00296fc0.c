// OoT3D decomp @ 00296fc0  name=FUN_00296fc0  size=264

void FUN_00296fc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = ObjectBankArchive_00358ef8(*(undefined4 *)(param_1 + 0x380),0);
  *(undefined4 *)(param_1 + 0x388) = uVar2;
  FUN_00353e78(*(undefined4 *)(param_1 + 0x380),param_2,param_1 + 0x1a4,uVar2,
               *(undefined4 *)(param_1 + 0x178),0,0,0,0);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
  iVar1 = DAT_002970c8;
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_002970c8 + 4));
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0035c358(param_1 + 0x3b8,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_00375c08(DAT_002970d0,DAT_002970cc,uVar2,DAT_002970cc,param_1 + 0x1a4,
               *(undefined4 *)(iVar1 + 4),0);
  *(undefined4 *)(param_1 + 0x140) = DAT_002970d4;
  *(undefined4 *)(param_1 + 0x22c) = DAT_002970d8;
  FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x18,0,0,0,3);
  return;
}

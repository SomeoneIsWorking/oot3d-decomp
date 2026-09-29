// OoT3D decomp @ 00285e5c  name=FUN_00285e5c  size=196

void FUN_00285e5c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = ObjectBankArchive_00358ef8(*(undefined4 *)(param_1 + 0x380),0);
  *(undefined4 *)(param_1 + 0x390) = uVar2;
  FUN_00353e78(*(undefined4 *)(param_1 + 0x380),param_2,param_1 + 0x1a4,uVar2,
               *(undefined4 *)(param_1 + 0x178),0,0,0,0);
  iVar1 = DAT_00285f20;
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00285f20 + 0xc));
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0035c358(param_1 + 0x3b8,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_00375c08(DAT_00285f28,DAT_00285f24,uVar2,DAT_00285f24,param_1 + 0x1a4,
               *(undefined4 *)(iVar1 + 0xc),0);
  *(undefined4 *)(param_1 + 0x140) = DAT_00285f2c;
  *(undefined4 *)(param_1 + 0x22c) = DAT_00285f30;
  return;
}

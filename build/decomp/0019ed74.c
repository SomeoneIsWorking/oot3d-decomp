// OoT3D decomp @ 0019ed74  name=FUN_0019ed74  size=152

void FUN_0019ed74(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x22c,7);
  uVar1 = DAT_0019ee0c;
  *(short *)(param_1 + 0x1c0) = (short)uVar2;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0019ee14,DAT_0019ee10,uVar2,uVar1,param_1 + 0x22c,7,2);
  FUN_0036f9d0(DAT_0019ee18,param_2,param_1 + 0x28,0,0xf,5,0x14,0xffffffff,10,0);
  FUN_00375bcc(param_1,DAT_0019ee1c);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0019ee20;
  return;
}

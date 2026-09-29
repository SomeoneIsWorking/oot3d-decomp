// OoT3D decomp @ 001754f0  name=FUN_001754f0  size=164

void FUN_001754f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x22c,1);
  uVar1 = DAT_00175594;
  *(short *)(param_1 + 0x1c0) = (short)uVar2;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0017559c,DAT_00175598,uVar2,uVar1,param_1 + 0x22c,1,2);
  FUN_0036f9d0(DAT_001755a0,param_2,param_1 + 0x28,0,0xf,5,0x14,0xffffffff,10,0);
  FUN_00375bcc(param_1,DAT_001755a4);
  FUN_00375bcc(param_1,DAT_001755a8);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_001755ac;
  return;
}

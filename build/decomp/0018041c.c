// OoT3D decomp @ 0018041c  name=FUN_0018041c  size=92

void FUN_0018041c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x1a4,6);
  uVar1 = DAT_0018047c;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00180480,DAT_0018047c,uVar2,DAT_00180478,param_1 + 0x1a4,6,0);
  uVar2 = DAT_00180484;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 0x638) = uVar2;
  return;
}

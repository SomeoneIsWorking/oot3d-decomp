// OoT3D decomp @ 00239714  name=FUN_00239714  size=76

void FUN_00239714(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00239768,DAT_00239764,uVar1,DAT_00239760,param_1 + 0x1a4,0);
  *(undefined1 *)(param_1 + 0xd19) = 1;
  *(undefined4 *)(param_1 + 0xc7c) = DAT_0023976c;
  return;
}

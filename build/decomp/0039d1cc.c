// OoT3D decomp @ 0039d1cc  name=FUN_0039d1cc  size=100

void FUN_0039d1cc(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0039d230,DAT_0039d234,uVar1,DAT_0039d230,param_1 + 0x1a4,0,2);
  *(undefined2 *)(param_1 + 0x684) = 600;
  *(undefined4 *)(param_1 + 0x660) = 0;
  *(undefined2 *)(param_1 + 0x686) = 0;
  *(undefined4 *)(param_1 + 0x63c) = 4;
  *(undefined4 *)(param_1 + 0x644) = DAT_0039d238;
  return;
}

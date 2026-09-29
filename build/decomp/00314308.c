// OoT3D decomp @ 00314308  name=FUN_00314308  size=16

void FUN_00314308(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  undefined4 uVar1;

  uVar1 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}

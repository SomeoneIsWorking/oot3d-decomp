// OoT3D decomp @ 0031459c  name=FUN_0031459c  size=52

void FUN_0031459c(int param_1,undefined4 *param_2)

{
  uint in_fpscr;
  undefined4 uVar1;

  uVar1 = VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = VectorSignedToFloat(param_2[2],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}

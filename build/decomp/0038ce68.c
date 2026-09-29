// OoT3D decomp @ 0038ce68  name=FUN_0038ce68  size=52

void FUN_0038ce68(int param_1,short *param_2)

{
  uint in_fpscr;
  undefined4 uVar1;

  uVar1 = VectorSignedToFloat((int)*param_2,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = VectorSignedToFloat((int)param_2[1],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = VectorSignedToFloat((int)param_2[2],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  return;
}

// OoT3D decomp @ 00368a34  name=FUN_00368a34  size=80

void FUN_00368a34(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,2);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00368a8c,DAT_00368a88,uVar1,DAT_00368a84,param_1 + 0x1a4,2);
  *(undefined2 *)(DAT_00368a90 + param_1) = 1;
  *(undefined4 *)(param_1 + 0x228) = DAT_00368a94;
  return;
}

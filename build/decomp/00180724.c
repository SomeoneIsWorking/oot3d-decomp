// OoT3D decomp @ 00180724  name=FUN_00180724  size=116

void FUN_00180724(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x1bc,1);
  uVar1 = DAT_00180798;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00180798,uVar2,uVar2,DAT_00180798,param_1 + 0x1bc,1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x448) = 3;
  *(ushort *)(param_1 + 0x452) = (ushort)(*(char *)(param_1 + 0x464) != -1);
  *(undefined4 *)(param_1 + 0x44c) = DAT_0018079c;
  return;
}

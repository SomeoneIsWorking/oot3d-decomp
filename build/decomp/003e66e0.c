// OoT3D decomp @ 003e66e0  name=FUN_003e66e0  size=124

void FUN_003e66e0(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  if ((*(int *)(param_1 + 0x98) < DAT_003e675c) &&
     ((int)ABS(*(float *)(param_1 + 0x9c)) < DAT_003e6760)) {
    uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003e676c,DAT_003e6768,uVar1,DAT_003e6764,param_1 + 0x1a4,0);
    FUN_00375bcc(param_1,DAT_003e6770);
    *(undefined4 *)(param_1 + 0x228) = DAT_003e6774;
  }
  return;
}

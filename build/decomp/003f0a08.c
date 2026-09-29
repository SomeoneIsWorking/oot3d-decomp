// OoT3D decomp @ 003f0a08  name=FUN_003f0a08  size=184

void FUN_003f0a08(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_0036bc98();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x70c) = DAT_003f0ac0;
    uVar2 = FUN_0036ae14(param_1 + 0x1fc,0);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003f0acc,DAT_003f0ac8,uVar2,DAT_003f0ac4,param_1 + 0x1fc,0,2);
    return;
  }
  *(short *)(DAT_003f0ad4 + param_1) = (short)DAT_003f0ad0;
  uVar2 = DAT_003f0adc;
  if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x1800U < 0x3001) &&
     (*(int *)(param_1 + 0x98) < DAT_003f0ad8)) {
    *(ushort *)(param_1 + 0x704) = *(ushort *)(param_1 + 0x704) | 1;
    FUN_0036bb28(uVar2,param_1,param_2);
    return;
  }
  return;
}

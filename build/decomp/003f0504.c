// OoT3D decomp @ 003f0504  name=FUN_003f0504  size=264

void FUN_003f0504(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  uint uVar3;
  float fVar4;

  if (*(short *)(param_1 + 0x7b0) == 0) {
    fVar2 = (float)FUN_00371e50(DAT_003f060c);
    uVar3 = VectorFloatToUnsigned(fVar2 + DAT_003f0610,3);
    fVar2 = (float)VectorUnsignedToFloat(uVar3 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003f0618 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x7b0) = (short)(int)((fVar2 * DAT_003f0614) / fVar4 + DAT_003f061c);
    uVar1 = FUN_0036ae14(param_1 + 0x314,2);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003f0620,*(undefined4 *)(param_1 + 0x350),uVar1,DAT_003f0620,param_1 + 0x314,2)
    ;
  }
  else {
    *(short *)(param_1 + 0x7b0) = *(short *)(param_1 + 0x7b0) + -1;
  }
  if ((((*(int *)(param_1 + 0x98) < DAT_003f0624) &&
       ((uint)(DAT_003f0628 * 2) <
        (uint)(DAT_003f0628 + (short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe))))) &&
      ((*(ushort *)(param_1 + 0x7ae) & 2) == 0)) &&
     (*(ushort *)(param_1 + 0x7ae) = *(ushort *)(param_1 + 0x7ae) | 2,
     *(int *)(param_1 + 0x344) == 2)) {
    *(undefined2 *)(param_1 + 0x7b0) = 0;
  }
  return;
}

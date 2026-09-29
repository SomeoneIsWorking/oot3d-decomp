// OoT3D decomp @ 00268d30  name=FUN_00268d30  size=176

uint FUN_00268d30(int param_1,uint param_2)

{
  uint in_fpscr;
  float fVar1;

  FUN_00357fd0(*(undefined4 *)(DAT_00268de0 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  if (*(char *)(param_1 + 0x7f8) == '\f') {
    fVar1 = (float)VectorSignedToFloat((int)*(short *)(DAT_00268de4 + param_1),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_00342be0(DAT_00268df4,fVar1 * DAT_00268de8 * DAT_00268dec,DAT_00268df4,DAT_00268df0,param_1,
                 5,0);
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_00268df8,0,param_1,0);
  if (*(byte *)(param_1 + 0x7f8) == 0xc) {
    return param_2;
  }
  return (uint)*(byte *)(param_1 + 0x7f8);
}

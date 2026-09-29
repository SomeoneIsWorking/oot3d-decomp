// OoT3D decomp @ 002b1690  name=FUN_002b1690  size=180

uint FUN_002b1690(int param_1,uint param_2)

{
  uint in_fpscr;
  float fVar1;

  FUN_00357fd0(*(undefined4 *)(DAT_002b1740 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  if (*(char *)(param_1 + 0x7f8) == '\f') {
    fVar1 = (float)VectorSignedToFloat((int)*(short *)(DAT_002b1744 + param_1),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_00342be0(DAT_002b1754,fVar1 * DAT_002b1748 * DAT_002b174c,DAT_002b1754,DAT_002b1750,param_1,
                 5,0);
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_002b1758,0,param_1,0);
  if (*(byte *)(param_1 + 0x7f8) == 0xc) {
    return param_2;
  }
  return (uint)*(byte *)(param_1 + 0x7f8);
}

// OoT3D decomp @ 0025355c  name=FUN_0025355c  size=136

undefined4 FUN_0025355c(int param_1,undefined4 param_2)

{
  if ((int)*(short *)(param_1 + 0x1c) - 0x1eU < 8) {
    if ((ushort)*(byte *)((uint)*(byte *)(DAT_002535e4 + 0x21) + DAT_002535e8) ==
        *(ushort *)(DAT_002535ec + (*(short *)(param_1 + 0x1c) + -0x1e) * 2)) {
      *(undefined2 *)(param_1 + 0x1bc) = 1;
      *(undefined4 *)(param_1 + 0x140) = 0;
      if ((int)*(short *)(param_1 + 0x1c) - 0x1eU < 8) {
        *(undefined2 *)(param_1 + 0x116) = 0xbd;
      }
    }
    else {
      FUN_00357298(param_2,param_1);
    }
    return 1;
  }
  return 0;
}
